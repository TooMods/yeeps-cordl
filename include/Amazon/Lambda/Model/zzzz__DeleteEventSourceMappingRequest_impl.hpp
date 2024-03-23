#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__DeleteEventSourceMappingRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteEventSourceMappingRequest.get_UUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::*)()>(
    &::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::get_UUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(),
                                                                               "get_UUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteEventSourceMappingRequest.set_UUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::set_UUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(), "set_UUID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteEventSourceMappingRequest.IsSetUUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::*)()>(
    &::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::IsSetUUID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc6cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(),
                                                                               "IsSetUUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteEventSourceMappingRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::*)()>(
    &::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::DeleteEventSourceMappingRequest::__cordl_internal_get__uuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuid;
}
constexpr ::StringW const& Amazon::Lambda::Model::DeleteEventSourceMappingRequest::__cordl_internal_get__uuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuid;
}
constexpr void Amazon::Lambda::Model::DeleteEventSourceMappingRequest::__cordl_internal_set__uuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uuid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::DeleteEventSourceMappingRequest::get_UUID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(),
                                                                             "get_UUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::DeleteEventSourceMappingRequest::set_UUID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(), "set_UUID",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::DeleteEventSourceMappingRequest::IsSetUUID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(),
                                                                             "IsSetUUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::DeleteEventSourceMappingRequest* Amazon::Lambda::Model::DeleteEventSourceMappingRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>());
}
inline void Amazon::Lambda::Model::DeleteEventSourceMappingRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteEventSourceMappingRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::DeleteEventSourceMappingRequest::DeleteEventSourceMappingRequest() {}
