// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Block.proto

#include "Block.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace voxblox {
class BlockProtoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<BlockProto> _instance;
} _BlockProto_default_instance_;
}  // namespace voxblox
static void InitDefaultsscc_info_BlockProto_Block_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::voxblox::_BlockProto_default_instance_;
    new (ptr) ::voxblox::BlockProto();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::voxblox::BlockProto::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_BlockProto_Block_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_BlockProto_Block_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Block_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Block_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Block_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Block_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, voxels_per_side_),
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, voxel_size_),
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, origin_x_),
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, origin_y_),
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, origin_z_),
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, has_data_),
  PROTOBUF_FIELD_OFFSET(::voxblox::BlockProto, voxel_data_),
  2,
  0,
  1,
  4,
  5,
  3,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::voxblox::BlockProto)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::voxblox::_BlockProto_default_instance_),
};

const char descriptor_table_protodef_Block_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Block.proto\022\007voxblox\"\225\001\n\nBlockProto\022\027\n"
  "\017voxels_per_side\030\001 \001(\005\022\022\n\nvoxel_size\030\002 \001"
  "(\001\022\020\n\010origin_x\030\003 \001(\001\022\020\n\010origin_y\030\004 \001(\001\022\020"
  "\n\010origin_z\030\005 \001(\001\022\020\n\010has_data\030\006 \001(\010\022\022\n\nvo"
  "xel_data\030\007 \003(\r"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Block_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Block_2eproto_sccs[1] = {
  &scc_info_BlockProto_Block_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Block_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Block_2eproto = {
  false, false, descriptor_table_protodef_Block_2eproto, "Block.proto", 174,
  &descriptor_table_Block_2eproto_once, descriptor_table_Block_2eproto_sccs, descriptor_table_Block_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_Block_2eproto::offsets,
  file_level_metadata_Block_2eproto, 1, file_level_enum_descriptors_Block_2eproto, file_level_service_descriptors_Block_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Block_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Block_2eproto)), true);
namespace voxblox {

// ===================================================================

void BlockProto::InitAsDefaultInstance() {
}
class BlockProto::_Internal {
 public:
  using HasBits = decltype(std::declval<BlockProto>()._has_bits_);
  static void set_has_voxels_per_side(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_voxel_size(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_origin_x(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_origin_y(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_origin_z(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

BlockProto::BlockProto(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  voxel_data_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:voxblox.BlockProto)
}
BlockProto::BlockProto(const BlockProto& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      voxel_data_(from.voxel_data_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&voxel_size_, &from.voxel_size_,
    static_cast<size_t>(reinterpret_cast<char*>(&origin_z_) -
    reinterpret_cast<char*>(&voxel_size_)) + sizeof(origin_z_));
  // @@protoc_insertion_point(copy_constructor:voxblox.BlockProto)
}

void BlockProto::SharedCtor() {
  ::memset(&voxel_size_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&origin_z_) -
      reinterpret_cast<char*>(&voxel_size_)) + sizeof(origin_z_));
}

BlockProto::~BlockProto() {
  // @@protoc_insertion_point(destructor:voxblox.BlockProto)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void BlockProto::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void BlockProto::ArenaDtor(void* object) {
  BlockProto* _this = reinterpret_cast< BlockProto* >(object);
  (void)_this;
}
void BlockProto::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void BlockProto::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const BlockProto& BlockProto::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_BlockProto_Block_2eproto.base);
  return *internal_default_instance();
}


void BlockProto::Clear() {
// @@protoc_insertion_point(message_clear_start:voxblox.BlockProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  voxel_data_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&voxel_size_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&origin_z_) -
        reinterpret_cast<char*>(&voxel_size_)) + sizeof(origin_z_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BlockProto::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional int32 voxels_per_side = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_voxels_per_side(&has_bits);
          voxels_per_side_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double voxel_size = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_voxel_size(&has_bits);
          voxel_size_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double origin_x = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_origin_x(&has_bits);
          origin_x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double origin_y = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_origin_y(&has_bits);
          origin_y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double origin_z = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_origin_z(&has_bits);
          origin_z_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional bool has_data = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_has_data(&has_bits);
          has_data_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated uint32 voxel_data = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          ptr -= 1;
          do {
            ptr += 1;
            _internal_add_voxel_data(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<56>(ptr));
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_voxel_data(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* BlockProto::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:voxblox.BlockProto)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 voxels_per_side = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_voxels_per_side(), target);
  }

  // optional double voxel_size = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_voxel_size(), target);
  }

  // optional double origin_x = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_origin_x(), target);
  }

  // optional double origin_y = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_origin_y(), target);
  }

  // optional double origin_z = 5;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_origin_z(), target);
  }

  // optional bool has_data = 6;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->_internal_has_data(), target);
  }

  // repeated uint32 voxel_data = 7;
  for (int i = 0, n = this->_internal_voxel_data_size(); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(7, this->_internal_voxel_data(i), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:voxblox.BlockProto)
  return target;
}

size_t BlockProto::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:voxblox.BlockProto)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint32 voxel_data = 7;
  {
    size_t data_size = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      UInt32Size(this->voxel_data_);
    total_size += 1 *
                  ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_voxel_data_size());
    total_size += data_size;
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional double voxel_size = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double origin_x = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional int32 voxels_per_side = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_voxels_per_side());
    }

    // optional bool has_data = 6;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional double origin_y = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double origin_z = 5;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void BlockProto::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:voxblox.BlockProto)
  GOOGLE_DCHECK_NE(&from, this);
  const BlockProto* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<BlockProto>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:voxblox.BlockProto)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:voxblox.BlockProto)
    MergeFrom(*source);
  }
}

void BlockProto::MergeFrom(const BlockProto& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:voxblox.BlockProto)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  voxel_data_.MergeFrom(from.voxel_data_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      voxel_size_ = from.voxel_size_;
    }
    if (cached_has_bits & 0x00000002u) {
      origin_x_ = from.origin_x_;
    }
    if (cached_has_bits & 0x00000004u) {
      voxels_per_side_ = from.voxels_per_side_;
    }
    if (cached_has_bits & 0x00000008u) {
      has_data_ = from.has_data_;
    }
    if (cached_has_bits & 0x00000010u) {
      origin_y_ = from.origin_y_;
    }
    if (cached_has_bits & 0x00000020u) {
      origin_z_ = from.origin_z_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void BlockProto::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:voxblox.BlockProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BlockProto::CopyFrom(const BlockProto& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:voxblox.BlockProto)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BlockProto::IsInitialized() const {
  return true;
}

void BlockProto::InternalSwap(BlockProto* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  voxel_data_.InternalSwap(&other->voxel_data_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(BlockProto, origin_z_)
      + sizeof(BlockProto::origin_z_)
      - PROTOBUF_FIELD_OFFSET(BlockProto, voxel_size_)>(
          reinterpret_cast<char*>(&voxel_size_),
          reinterpret_cast<char*>(&other->voxel_size_));
}

::PROTOBUF_NAMESPACE_ID::Metadata BlockProto::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace voxblox
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::voxblox::BlockProto* Arena::CreateMaybeMessage< ::voxblox::BlockProto >(Arena* arena) {
  return Arena::CreateMessageInternal< ::voxblox::BlockProto >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
