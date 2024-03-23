#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__ResponseContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_def.hpp"
#include "Amazon/Runtime/zzzz__IResponseContext_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::ResponseContext.get_Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::AmazonWebServiceResponse* (::Amazon::Runtime::Internal::ResponseContext::*)()>(
    &::Amazon::Runtime::Internal::ResponseContext::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(),
                                                                               "get_Response", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ResponseContext.set_Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ResponseContext::*)(::Amazon::Runtime::AmazonWebServiceResponse*)>(
    &::Amazon::Runtime::Internal::ResponseContext::set_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(), "set_Response", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceResponse*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ResponseContext.get_HttpResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::IWebResponseData* (::Amazon::Runtime::Internal::ResponseContext::*)()>(
    &::Amazon::Runtime::Internal::ResponseContext::get_HttpResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(),
                                                                               "get_HttpResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ResponseContext.set_HttpResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ResponseContext::*)(::Amazon::Runtime::Internal::Transform::IWebResponseData*)>(
    &::Amazon::Runtime::Internal::ResponseContext::set_HttpResponse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(), "set_HttpResponse", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::ResponseContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::ResponseContext::*)()>(&::Amazon::Runtime::Internal::ResponseContext::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23dcd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::IResponseContext"
constexpr Amazon::Runtime::Internal::ResponseContext::operator ::Amazon::Runtime::IResponseContext*() noexcept {
  return static_cast<::Amazon::Runtime::IResponseContext*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IResponseContext"
constexpr ::Amazon::Runtime::IResponseContext* Amazon::Runtime::Internal::ResponseContext::i___Amazon__Runtime__IResponseContext() noexcept {
  return static_cast<::Amazon::Runtime::IResponseContext*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::AmazonWebServiceResponse*& Amazon::Runtime::Internal::ResponseContext::__cordl_internal_get__Response_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Response_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::AmazonWebServiceResponse*> const& Amazon::Runtime::Internal::ResponseContext::__cordl_internal_get__Response_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Response_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ResponseContext::__cordl_internal_set__Response_k__BackingField(::Amazon::Runtime::AmazonWebServiceResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Response_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Transform::IWebResponseData*& Amazon::Runtime::Internal::ResponseContext::__cordl_internal_get__HttpResponse_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HttpResponse_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IWebResponseData*> const&
Amazon::Runtime::Internal::ResponseContext::__cordl_internal_get__HttpResponse_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HttpResponse_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::ResponseContext::__cordl_internal_set__HttpResponse_k__BackingField(::Amazon::Runtime::Internal::Transform::IWebResponseData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HttpResponse_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::AmazonWebServiceResponse* Amazon::Runtime::Internal::ResponseContext::get_Response() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(),
                                                                             "get_Response", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::AmazonWebServiceResponse*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::ResponseContext::set_Response(::Amazon::Runtime::AmazonWebServiceResponse* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(), "set_Response", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceResponse*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* Amazon::Runtime::Internal::ResponseContext::get_HttpResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(),
                                                                             "get_HttpResponse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::IWebResponseData*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::ResponseContext::set_HttpResponse(::Amazon::Runtime::Internal::Transform::IWebResponseData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(), "set_HttpResponse", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::ResponseContext* Amazon::Runtime::Internal::ResponseContext::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::ResponseContext*>());
}
inline void Amazon::Runtime::Internal::ResponseContext::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::ResponseContext*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::ResponseContext::ResponseContext() {}
