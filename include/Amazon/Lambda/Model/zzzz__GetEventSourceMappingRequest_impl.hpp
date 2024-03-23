#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__GetEventSourceMappingRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::GetEventSourceMappingRequest.get_UUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetEventSourceMappingRequest::*)()>(
    &::Amazon::Lambda::Model::GetEventSourceMappingRequest::get_UUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(),
                                                                               "get_UUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetEventSourceMappingRequest.set_UUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetEventSourceMappingRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetEventSourceMappingRequest::set_UUID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(), "set_UUID",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetEventSourceMappingRequest.IsSetUUID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetEventSourceMappingRequest::*)()>(
    &::Amazon::Lambda::Model::GetEventSourceMappingRequest::IsSetUUID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc9c20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(),
                                                                               "IsSetUUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetEventSourceMappingRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetEventSourceMappingRequest::*)()>(
    &::Amazon::Lambda::Model::GetEventSourceMappingRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::GetEventSourceMappingRequest::__cordl_internal_get__uuid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuid;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetEventSourceMappingRequest::__cordl_internal_get__uuid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uuid;
}
constexpr void Amazon::Lambda::Model::GetEventSourceMappingRequest::__cordl_internal_set__uuid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____uuid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::GetEventSourceMappingRequest::get_UUID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(),
                                                                             "get_UUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetEventSourceMappingRequest::set_UUID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(), "set_UUID",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetEventSourceMappingRequest::IsSetUUID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(),
                                                                             "IsSetUUID", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::GetEventSourceMappingRequest* Amazon::Lambda::Model::GetEventSourceMappingRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>());
}
inline void Amazon::Lambda::Model::GetEventSourceMappingRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetEventSourceMappingRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::GetEventSourceMappingRequest::GetEventSourceMappingRequest() {}
