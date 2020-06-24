cmake_minimum_required(VERSION 2.8.12)
project(voxblox)

set(CMAKE_MACOSX_RPATH 0)
add_definitions(-std=c++11 -Wall -Wextra)


################
# DEPENDENCIES #
################

include(ExternalProject)
ExternalProject_Add(protobuf
        PREFIX protobuf
        SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/3rd/protobuf-3.12.3/cmake"
        CMAKE_CACHE_ARGS
        -Dprotobuf_BUILD_TESTS:BOOL=OFF
        -Dprotobuf_WITH_ZLIB:BOOL=OFF
        -Dprotobuf_MSVC_STATIC_RUNTIME:BOOL=OFF
        -DCMAKE_INSTALL_PREFIX:PATH=${CMAKE_CURRENT_BINARY_DIR}/protobuf
        )
set(Protobuf_INCLUDE_DIR ${CMAKE_CURRENT_BINARY_DIR}/protobuf/include)
set(Protobuf_LIBRARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/protobuf/lib/)
set(Protobuf_LIBRARY libprotobuf.a)

# Eigen
find_package(Eigen3 3.3 REQUIRED)

# GLOG
add_subdirectory(3rd/glog)

############
# PROTOBUF #
############
# General idea: first check if we have protobuf catkin, then use that.
# Otherwise use system protobuf.
set(PROTO_DEFNS proto/voxblox/Block.proto
                proto/voxblox/Layer.proto)
set(PROTOBUF_COMPILE_PYTHON true)
#protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_DEFNS})



####################
# SET SOURCE FILES #
####################

set("${PROJECT_NAME}_SRCS"
  src/alignment/icp.cc
  src/core/block.cc
  src/core/esdf_map.cc
  src/core/tsdf_map.cc
  src/integrator/esdf_integrator.cc
  src/integrator/esdf_occ_integrator.cc
  src/integrator/integrator_utils.cc
  src/integrator/intensity_integrator.cc
  src/integrator/tsdf_integrator.cc
  src/io/mesh_ply.cc
  src/io/sdf_ply.cc
  src/mesh/marching_cubes.cc
  src/simulation/objects.cc
  src/simulation/simulation_world.cc
  src/utils/camera_model.cc
  src/utils/evaluation_utils.cc
  src/utils/layer_utils.cc
  src/utils/neighbor_tools.cc
  src/utils/protobuf_utils.cc
  src/utils/timing.cc
  src/utils/voxel_utils.cc
)

#############
# LIBRARIES #
#############

# Build Protos
add_library(${PROJECT_NAME}_proto
        proto/3.12.3/Block.pb.cc
        proto/3.12.3/Block.pb.h
        proto/3.12.3/Layer.pb.cc
        proto/3.12.3/Layer.pb.h
)
target_link_libraries(${PROJECT_NAME}_proto
        ${Protobuf_LIBRARY})


target_include_directories(${PROJECT_NAME}_proto
        PUBLIC
        ${Protobuf_INCLUDE_DIR}
        ${CMAKE_CURRENT_SOURCE_DIR}/proto/3.12.3/
)
add_dependencies(${PROJECT_NAME}_proto protobuf)

# Build libraries
add_library(${PROJECT_NAME}
  ${${PROJECT_NAME}_SRCS}
)
link_directories(${Protobuf_LIBRARY_DIR})
target_link_libraries(${PROJECT_NAME} 
        ${PROJECT_NAME}_proto
        Eigen3::Eigen
        ${Protobuf_LIBRARY}
        glog::glog
)
target_include_directories(${PROJECT_NAME}
        PUBLIC
        include
        3rd/minkindr/minkindr/include
        ${Protobuf_INCLUDE_DIR}
)


############
# BINARIES #
############

add_executable(tsdf_to_esdf
  test/tsdf_to_esdf.cc
)
target_link_libraries(tsdf_to_esdf ${PROJECT_NAME})

add_executable(test_load_esdf
  test/test_load_esdf.cc
)
target_link_libraries(test_load_esdf ${PROJECT_NAME})

# #########
# # TESTS #
# #########
# add_custom_target(test_data)
# add_custom_command(TARGET test_data
#                   COMMAND rm -rf test_data
#                   COMMAND mkdir -p test_data
#                   COMMAND cp -r ${CMAKE_SOURCE_DIR}/test/test_data/*
#                                 test_data/ || :)

# #add_definitions(-DVISUALIZE_UNIT_TEST_RESULTS)

# catkin_add_gtest(test_approx_hash_array
#   test/test_approx_hash_array.cc
# )
# target_link_libraries(test_approx_hash_array ${PROJECT_NAME})

# catkin_add_gtest(test_tsdf_map
#   test/test_tsdf_map.cc
# )
# target_link_libraries(test_tsdf_map ${PROJECT_NAME})

# catkin_add_gtest(test_protobuf
#   test/test_protobuf.cc
# )
# target_link_libraries(test_protobuf ${PROJECT_NAME})

# catkin_add_gtest(test_tsdf_interpolator
#   test/test_tsdf_interpolator.cc
# )
# target_link_libraries(test_tsdf_interpolator ${PROJECT_NAME})

# catkin_add_gtest(test_layer
#   test/test_layer.cc
# )
# target_link_libraries(test_layer ${PROJECT_NAME})

# catkin_add_gtest(test_merge_integration
#   test/test_merge_integration.cc
# )
# target_link_libraries(test_merge_integration ${PROJECT_NAME})

# catkin_add_gtest(test_layer_utils
#   test/test_layer_utils.cc
# )
# target_link_libraries(test_layer_utils ${PROJECT_NAME})

# catkin_add_gtest(test_sdf_integrators
#   test/test_sdf_integrators.cc
# )
# target_link_libraries(test_sdf_integrators ${PROJECT_NAME})

# catkin_add_gtest(test_bucket_queue
#   test/test_bucket_queue.cc
# )
# target_link_libraries(test_bucket_queue ${PROJECT_NAME})

# catkin_add_gtest(test_clear_spheres
#   test/test_clear_spheres.cc
# )
# target_link_libraries(test_clear_spheres ${PROJECT_NAME})

# ##########
# # EXPORT #
# ##########
# cs_install()
# cs_export(INCLUDE_DIRS ${CATKIN_DEVEL_PREFIX}/include)
