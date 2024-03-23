#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__HttpErrorResponseException_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseException.get_Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::IWebResponseData* (
    ::Amazon::Runtime::Internal::HttpErrorResponseException::*)()>(&::Amazon::Runtime::Internal::HttpErrorResponseException::get_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(),
                                                                               "get_Response", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseException.set_Response
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::HttpErrorResponseException::*)(
    ::Amazon::Runtime::Internal::Transform::IWebResponseData*)>(&::Amazon::Runtime::Internal::HttpErrorResponseException::set_Response)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23e9df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), "set_Response", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::HttpErrorResponseException::*)(
    ::Amazon::Runtime::Internal::Transform::IWebResponseData*)>(&::Amazon::Runtime::Internal::HttpErrorResponseException::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23e6874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::HttpErrorResponseException::*)(
    ::StringW, ::Amazon::Runtime::Internal::Transform::IWebResponseData*)>(&::Amazon::Runtime::Internal::HttpErrorResponseException::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23e9df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::HttpErrorResponseException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::HttpErrorResponseException::*)(
    ::StringW, ::System::Exception*, ::Amazon::Runtime::Internal::Transform::IWebResponseData*)>(&::Amazon::Runtime::Internal::HttpErrorResponseException::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x23e9e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Runtime::Internal::Transform::IWebResponseData*& Amazon::Runtime::Internal::HttpErrorResponseException::__cordl_internal_get__Response_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Response_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::IWebResponseData*> const&
Amazon::Runtime::Internal::HttpErrorResponseException::__cordl_internal_get__Response_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Response_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::HttpErrorResponseException::__cordl_internal_set__Response_k__BackingField(::Amazon::Runtime::Internal::Transform::IWebResponseData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Response_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Transform::IWebResponseData* Amazon::Runtime::Internal::HttpErrorResponseException::get_Response() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(),
                                                                             "get_Response", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::IWebResponseData*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::HttpErrorResponseException::set_Response(::Amazon::Runtime::Internal::Transform::IWebResponseData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), "set_Response", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::HttpErrorResponseException* Amazon::Runtime::Internal::HttpErrorResponseException::New_ctor(::Amazon::Runtime::Internal::Transform::IWebResponseData* response) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::HttpErrorResponseException*>(response));
}
inline void Amazon::Runtime::Internal::HttpErrorResponseException::_ctor(::Amazon::Runtime::Internal::Transform::IWebResponseData* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
inline ::Amazon::Runtime::Internal::HttpErrorResponseException* Amazon::Runtime::Internal::HttpErrorResponseException::New_ctor(::StringW message,
                                                                                                                                ::Amazon::Runtime::Internal::Transform::IWebResponseData* response) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::HttpErrorResponseException*>(message, response));
}
inline void Amazon::Runtime::Internal::HttpErrorResponseException::_ctor(::StringW message, ::Amazon::Runtime::Internal::Transform::IWebResponseData* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, response);
}
inline ::Amazon::Runtime::Internal::HttpErrorResponseException* Amazon::Runtime::Internal::HttpErrorResponseException::New_ctor(::StringW message, ::System::Exception* innerException,
                                                                                                                                ::Amazon::Runtime::Internal::Transform::IWebResponseData* response) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::HttpErrorResponseException*>(message, innerException, response));
}
inline void Amazon::Runtime::Internal::HttpErrorResponseException::_ctor(::StringW message, ::System::Exception* innerException, ::Amazon::Runtime::Internal::Transform::IWebResponseData* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::HttpErrorResponseException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, innerException, response);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::HttpErrorResponseException::HttpErrorResponseException() {}
