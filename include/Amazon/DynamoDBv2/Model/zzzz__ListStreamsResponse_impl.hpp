#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ListStreamsResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__StreamSummary_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListStreamsResponse.get_LastEvaluatedStreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ListStreamsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::ListStreamsResponse::get_LastEvaluatedStreamArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104b20c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                               "get_LastEvaluatedStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListStreamsResponse.set_LastEvaluatedStreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListStreamsResponse::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ListStreamsResponse::set_LastEvaluatedStreamArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104b214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(), "set_LastEvaluatedStreamArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListStreamsResponse.IsSetLastEvaluatedStreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListStreamsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::ListStreamsResponse::IsSetLastEvaluatedStreamArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104b21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                               "IsSetLastEvaluatedStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListStreamsResponse.get_Streams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* (
    ::Amazon::DynamoDBv2::Model::ListStreamsResponse::*)()>(&::Amazon::DynamoDBv2::Model::ListStreamsResponse::get_Streams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104b22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                               "get_Streams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListStreamsResponse.set_Streams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListStreamsResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*)>(&::Amazon::DynamoDBv2::Model::ListStreamsResponse::set_Streams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104b234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(), "set_Streams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListStreamsResponse.IsSetStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListStreamsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::ListStreamsResponse::IsSetStreams)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104b23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                               "IsSetStreams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListStreamsResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListStreamsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::ListStreamsResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x104b290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::ListStreamsResponse::__cordl_internal_get__lastEvaluatedStreamArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEvaluatedStreamArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ListStreamsResponse::__cordl_internal_get__lastEvaluatedStreamArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEvaluatedStreamArn;
}
constexpr void Amazon::DynamoDBv2::Model::ListStreamsResponse::__cordl_internal_set__lastEvaluatedStreamArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastEvaluatedStreamArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*& Amazon::DynamoDBv2::Model::ListStreamsResponse::__cordl_internal_get__streams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streams;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*> const&
Amazon::DynamoDBv2::Model::ListStreamsResponse::__cordl_internal_get__streams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streams;
}
constexpr void Amazon::DynamoDBv2::Model::ListStreamsResponse::__cordl_internal_set__streams(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::ListStreamsResponse::get_LastEvaluatedStreamArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                             "get_LastEvaluatedStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListStreamsResponse::set_LastEvaluatedStreamArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(), "set_LastEvaluatedStreamArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListStreamsResponse::IsSetLastEvaluatedStreamArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                             "IsSetLastEvaluatedStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* Amazon::DynamoDBv2::Model::ListStreamsResponse::get_Streams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                             "get_Streams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListStreamsResponse::set_Streams(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(), "set_Streams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::StreamSummary*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListStreamsResponse::IsSetStreams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(),
                                                                             "IsSetStreams", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ListStreamsResponse* Amazon::DynamoDBv2::Model::ListStreamsResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>());
}
inline void Amazon::DynamoDBv2::Model::ListStreamsResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ListStreamsResponse::ListStreamsResponse() {}
