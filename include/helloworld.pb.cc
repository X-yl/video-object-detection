// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: helloworld.proto

#include "helloworld.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace helloworld {
template <typename>
PROTOBUF_CONSTEXPR ProcessRequest::ProcessRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.path_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ProcessRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ProcessRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~ProcessRequestDefaultTypeInternal() {}
  union {
    ProcessRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ProcessRequestDefaultTypeInternal _ProcessRequest_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR FrameStatus::FrameStatus(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.names_)*/{}
  , /*decltype(_impl_.probabilities_)*/ {}

  , /*decltype(_impl_.frame_count_)*/ 0

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FrameStatusDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FrameStatusDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~FrameStatusDefaultTypeInternal() {}
  union {
    FrameStatus _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FrameStatusDefaultTypeInternal _FrameStatus_default_instance_;
}  // namespace helloworld
static ::_pb::Metadata file_level_metadata_helloworld_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_helloworld_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_helloworld_2eproto = nullptr;
const ::uint32_t TableStruct_helloworld_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::helloworld::ProcessRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::helloworld::ProcessRequest, _impl_.path_),
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::helloworld::FrameStatus, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::helloworld::FrameStatus, _impl_.frame_count_),
    PROTOBUF_FIELD_OFFSET(::helloworld::FrameStatus, _impl_.names_),
    PROTOBUF_FIELD_OFFSET(::helloworld::FrameStatus, _impl_.probabilities_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::helloworld::ProcessRequest)},
        { 9, -1, -1, sizeof(::helloworld::FrameStatus)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::helloworld::_ProcessRequest_default_instance_._instance,
    &::helloworld::_FrameStatus_default_instance_._instance,
};
const char descriptor_table_protodef_helloworld_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\020helloworld.proto\022\nhelloworld\"\036\n\016Proces"
    "sRequest\022\014\n\004path\030\001 \001(\t\"H\n\013FrameStatus\022\023\n"
    "\013frame_count\030\001 \001(\005\022\r\n\005names\030\002 \003(\t\022\025\n\rpro"
    "babilities\030\003 \003(\0022R\n\007Greeter\022G\n\014ProcessVi"
    "deo\022\032.helloworld.ProcessRequest\032\027.hellow"
    "orld.FrameStatus\"\0000\001b\006proto3"
};
static ::absl::once_flag descriptor_table_helloworld_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_helloworld_2eproto = {
    false,
    false,
    228,
    descriptor_table_protodef_helloworld_2eproto,
    "helloworld.proto",
    &descriptor_table_helloworld_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_helloworld_2eproto::offsets,
    file_level_metadata_helloworld_2eproto,
    file_level_enum_descriptors_helloworld_2eproto,
    file_level_service_descriptors_helloworld_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_helloworld_2eproto_getter() {
  return &descriptor_table_helloworld_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_helloworld_2eproto(&descriptor_table_helloworld_2eproto);
namespace helloworld {
// ===================================================================

class ProcessRequest::_Internal {
 public:
};

ProcessRequest::ProcessRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:helloworld.ProcessRequest)
}
ProcessRequest::ProcessRequest(const ProcessRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ProcessRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.path_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.path_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.path_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_path().empty()) {
    _this->_impl_.path_.Set(from._internal_path(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:helloworld.ProcessRequest)
}

inline void ProcessRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.path_) {}

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.path_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.path_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ProcessRequest::~ProcessRequest() {
  // @@protoc_insertion_point(destructor:helloworld.ProcessRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ProcessRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.path_.Destroy();
}

void ProcessRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ProcessRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.ProcessRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.path_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProcessRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string path = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_path();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "helloworld.ProcessRequest.path"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* ProcessRequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.ProcessRequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string path = 1;
  if (!this->_internal_path().empty()) {
    const std::string& _s = this->_internal_path();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "helloworld.ProcessRequest.path");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:helloworld.ProcessRequest)
  return target;
}

::size_t ProcessRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.ProcessRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string path = 1;
  if (!this->_internal_path().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_path());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ProcessRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ProcessRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ProcessRequest::GetClassData() const { return &_class_data_; }


void ProcessRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ProcessRequest*>(&to_msg);
  auto& from = static_cast<const ProcessRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:helloworld.ProcessRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_path().empty()) {
    _this->_internal_set_path(from._internal_path());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ProcessRequest::CopyFrom(const ProcessRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.ProcessRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessRequest::IsInitialized() const {
  return true;
}

void ProcessRequest::InternalSwap(ProcessRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.path_, lhs_arena,
                                       &other->_impl_.path_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProcessRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_helloworld_2eproto_getter, &descriptor_table_helloworld_2eproto_once,
      file_level_metadata_helloworld_2eproto[0]);
}
// ===================================================================

class FrameStatus::_Internal {
 public:
};

FrameStatus::FrameStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:helloworld.FrameStatus)
}
FrameStatus::FrameStatus(const FrameStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FrameStatus* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.names_){from._impl_.names_}
    , decltype(_impl_.probabilities_) { from._impl_.probabilities_ }

    , decltype(_impl_.frame_count_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.frame_count_ = from._impl_.frame_count_;
  // @@protoc_insertion_point(copy_constructor:helloworld.FrameStatus)
}

inline void FrameStatus::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.names_){arena}
    , decltype(_impl_.probabilities_) { arena }

    , decltype(_impl_.frame_count_) { 0 }

    , /*decltype(_impl_._cached_size_)*/{}
  };
}

FrameStatus::~FrameStatus() {
  // @@protoc_insertion_point(destructor:helloworld.FrameStatus)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FrameStatus::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _internal_mutable_names()->~RepeatedPtrField();
  _impl_.probabilities_.~RepeatedField();
}

void FrameStatus::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FrameStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:helloworld.FrameStatus)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_mutable_names()->Clear();
  _internal_mutable_probabilities()->Clear();
  _impl_.frame_count_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FrameStatus::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 frame_count = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 8)) {
          _impl_.frame_count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated string names = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_names();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "helloworld.FrameStatus.names"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else {
          goto handle_unusual;
        }
        continue;
      // repeated float probabilities = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_probabilities(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::uint8_t>(tag) == 29) {
          _internal_add_probabilities(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* FrameStatus::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:helloworld.FrameStatus)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 frame_count = 1;
  if (this->_internal_frame_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(
        1, this->_internal_frame_count(), target);
  }

  // repeated string names = 2;
  for (int i = 0, n = this->_internal_names_size(); i < n; ++i) {
    const auto& s = this->_internal_names(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        s.data(), static_cast<int>(s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "helloworld.FrameStatus.names");
    target = stream->WriteString(2, s, target);
  }

  // repeated float probabilities = 3;
  if (this->_internal_probabilities_size() > 0) {
    target = stream->WriteFixedPacked(3, _internal_probabilities(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:helloworld.FrameStatus)
  return target;
}

::size_t FrameStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:helloworld.FrameStatus)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string names = 2;
  total_size += 1 * ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_internal_names().size());
  for (int i = 0, n = _internal_names().size(); i < n; ++i) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        _internal_names().Get(i));
  }

  // repeated float probabilities = 3;
  {
    std::size_t data_size = std::size_t{4} *
        ::_pbi::FromIntSize(this->_internal_probabilities_size())
    ;
    std::size_t tag_size = data_size == 0
        ? 0
        : 1 + ::_pbi::WireFormatLite::Int32Size(
                            static_cast<int32_t>(data_size))
    ;
    total_size += tag_size + data_size;
  }

  // int32 frame_count = 1;
  if (this->_internal_frame_count() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(
        this->_internal_frame_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FrameStatus::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FrameStatus::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FrameStatus::GetClassData() const { return &_class_data_; }


void FrameStatus::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FrameStatus*>(&to_msg);
  auto& from = static_cast<const FrameStatus&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:helloworld.FrameStatus)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_internal_mutable_names()->MergeFrom(from._internal_names());
  _this->_impl_.probabilities_.MergeFrom(from._impl_.probabilities_);
  if (from._internal_frame_count() != 0) {
    _this->_internal_set_frame_count(from._internal_frame_count());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FrameStatus::CopyFrom(const FrameStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:helloworld.FrameStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FrameStatus::IsInitialized() const {
  return true;
}

void FrameStatus::InternalSwap(FrameStatus* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _internal_mutable_names()->InternalSwap(
      other->_internal_mutable_names());
  _impl_.probabilities_.InternalSwap(&other->_impl_.probabilities_);

  swap(_impl_.frame_count_, other->_impl_.frame_count_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FrameStatus::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_helloworld_2eproto_getter, &descriptor_table_helloworld_2eproto_once,
      file_level_metadata_helloworld_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace helloworld
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::helloworld::ProcessRequest*
Arena::CreateMaybeMessage< ::helloworld::ProcessRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::helloworld::ProcessRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::helloworld::FrameStatus*
Arena::CreateMaybeMessage< ::helloworld::FrameStatus >(Arena* arena) {
  return Arena::CreateMessageInternal< ::helloworld::FrameStatus >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
