#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpOptions_impl.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpOptions_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Networking::Internal::HttpRequest::*)()>(
    &::Unity::Services::Core::Networking::Internal::HttpRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2668f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Networking::Internal::HttpRequest::*)(
    ::StringW, ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Unity::Services::Core::Networking::Internal::HttpRequest::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2668f2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(::StringW)>(&::Unity::Services::Core::Networking::Internal::HttpRequest::SetMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2668f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetMethod",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetUrl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(::StringW)>(&::Unity::Services::Core::Networking::Internal::HttpRequest::SetUrl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2668f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetUrl",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(::StringW, ::StringW)>(&::Unity::Services::Core::Networking::Internal::HttpRequest::SetHeader)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2668f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetHeader", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetHeaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::Unity::Services::Core::Networking::Internal::HttpRequest::SetHeaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetHeaders", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Unity::Services::Core::Networking::Internal::HttpRequest::SetBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetBody", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetOptions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(::Unity::Services::Core::Networking::Internal::HttpOptions)>(
    &::Unity::Services::Core::Networking::Internal::HttpRequest::SetOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetOptions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Networking::Internal::HttpOptions>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetRedirectLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(int32_t)>(&::Unity::Services::Core::Networking::Internal::HttpRequest::SetRedirectLimit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetRedirectLimit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Networking::Internal::HttpRequest.SetTimeOutInSeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Networking::Internal::HttpRequest* (
    ::Unity::Services::Core::Networking::Internal::HttpRequest::*)(int32_t)>(&::Unity::Services::Core::Networking::Internal::HttpRequest::SetTimeOutInSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetTimeOutInSeconds",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Method;
}
constexpr ::StringW const& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Method;
}
constexpr void Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_set_Method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Url() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Url;
}
constexpr ::StringW const& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Url() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Url;
}
constexpr void Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_set_Url(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Url)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Headers;
}
constexpr void Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_set_Headers(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Body() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Body;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Body() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Body;
}
constexpr void Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_set_Body(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Body)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Core::Networking::Internal::HttpOptions& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Options() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Options;
}
constexpr ::Unity::Services::Core::Networking::Internal::HttpOptions const& Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_get_Options() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Options;
}
constexpr void Unity::Services::Core::Networking::Internal::HttpRequest::__cordl_internal_set_Options(::Unity::Services::Core::Networking::Internal::HttpOptions value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Options = value;
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::HttpRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Networking::Internal::HttpRequest*>());
}
inline void Unity::Services::Core::Networking::Internal::HttpRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest*
Unity::Services::Core::Networking::Internal::HttpRequest::New_ctor(::StringW method, ::StringW url, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers,
                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Networking::Internal::HttpRequest*>(method, url, headers, body));
}
inline void Unity::Services::Core::Networking::Internal::HttpRequest::_ctor(::StringW method, ::StringW url, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers,
                                                                            ::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, method, url, headers, body);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::HttpRequest::SetMethod(::StringW method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetMethod",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, method);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::HttpRequest::SetUrl(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetUrl",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, url);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::HttpRequest::SetHeader(::StringW key, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetHeader", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, key, value);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest*
Unity::Services::Core::Networking::Internal::HttpRequest::SetHeaders(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* headers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetHeaders", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, headers);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::HttpRequest::SetBody(::ArrayW<uint8_t, ::Array<uint8_t>*> body) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetBody", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, body);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest*
Unity::Services::Core::Networking::Internal::HttpRequest::SetOptions(::Unity::Services::Core::Networking::Internal::HttpOptions options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetOptions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Networking::Internal::HttpOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, options);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::HttpRequest::SetRedirectLimit(int32_t redirectLimit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetRedirectLimit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, redirectLimit);
}
inline ::Unity::Services::Core::Networking::Internal::HttpRequest* Unity::Services::Core::Networking::Internal::HttpRequest::SetTimeOutInSeconds(int32_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Networking::Internal::HttpRequest*>::get(), "SetTimeOutInSeconds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Networking::Internal::HttpRequest*, false>(this, ___internal_method, timeout);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Networking::Internal::HttpRequest::HttpRequest() {}
