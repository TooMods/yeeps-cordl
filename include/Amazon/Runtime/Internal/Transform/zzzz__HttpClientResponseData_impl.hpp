#pragma once
#include "System/Net/zzzz__HttpStatusCode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__HttpClientResponseData_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__HttpResponseMessageBody_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IHttpResponseBody_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "System/Net/Http/zzzz__HttpClient_def.hpp"
#include "System/Net/Http/zzzz__HttpResponseMessage_def.hpp"
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(::System::Net::Http::HttpResponseMessage*)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x244f5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(
    ::System::Net::Http::HttpResponseMessage*, ::System::Net::Http::HttpClient*, bool)>(&::Amazon::Runtime::Internal::Transform::HttpClientResponseData::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x244f5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpClient*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.get_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::HttpStatusCode (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)()>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ff68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_StatusCode",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.set_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(::System::Net::HttpStatusCode)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ff70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_StatusCode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.get_IsSuccessStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)()>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_IsSuccessStatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ff78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(),
                                                 "get_IsSuccessStatusCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.set_IsSuccessStatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(bool)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_IsSuccessStatusCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x244ff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_IsSuccessStatusCode",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.get_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)()>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ff8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_ContentType",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.set_ContentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_ContentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ff94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_ContentType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)()>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_ContentLength",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.set_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(int64_t)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244ffa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_ContentLength",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.GetHeaderValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::GetHeaderValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x244ffac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "GetHeaderValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.IsHeaderPresent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(::StringW)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::IsHeaderPresent)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2450040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "IsHeaderPresent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.GetHeaderNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)()>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::GetHeaderNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2450098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "GetHeaderNames",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.CopyHeaderValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(::System::Net::Http::HttpResponseMessage*)>(
    &::Amazon::Runtime::Internal::Transform::HttpClientResponseData::CopyHeaderValues)> {
  constexpr static std::size_t size = 0x83c;
  constexpr static std::size_t addrs = 0x244f72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "CopyHeaderValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.GetFirstHeaderValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)(
    ::System::Net::Http::Headers::HttpHeaders*, ::StringW)>(&::Amazon::Runtime::Internal::Transform::HttpClientResponseData::GetFirstHeaderValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x24500a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "GetFirstHeaderValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::HttpClientResponseData.get_ResponseBody
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Transform::IHttpResponseBody* (
    ::Amazon::Runtime::Internal::Transform::HttpClientResponseData::*)()>(&::Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_ResponseBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2450140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_ResponseBody",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Transform::IWebResponseData"
constexpr Amazon::Runtime::Internal::Transform::HttpClientResponseData::operator ::Amazon::Runtime::Internal::Transform::IWebResponseData*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IWebResponseData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Transform::IWebResponseData"
constexpr ::Amazon::Runtime::Internal::Transform::IWebResponseData*
Amazon::Runtime::Internal::Transform::HttpClientResponseData::i___Amazon__Runtime__Internal__Transform__IWebResponseData() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Transform::IWebResponseData*>(static_cast<void*>(this));
}
constexpr ::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____response;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody*> const&
Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____response;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__response(::Amazon::Runtime::Internal::Transform::HttpResponseMessageBody* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____response)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__headerNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__headerNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerNames;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__headerNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headerNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headers;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__headers(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__headerNamesSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerNamesSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__headerNamesSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headerNamesSet;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__headerNamesSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headerNamesSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::HttpStatusCode& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__StatusCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr ::System::Net::HttpStatusCode const& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__StatusCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StatusCode_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__StatusCode_k__BackingField(::System::Net::HttpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StatusCode_k__BackingField = value;
}
constexpr bool& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__IsSuccessStatusCode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSuccessStatusCode_k__BackingField;
}
constexpr bool const& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__IsSuccessStatusCode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsSuccessStatusCode_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__IsSuccessStatusCode_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsSuccessStatusCode_k__BackingField = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__ContentType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentType_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__ContentType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentType_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__ContentType_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ContentType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__ContentLength_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr int64_t const& Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_get__ContentLength_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentLength_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::Transform::HttpClientResponseData::__cordl_internal_set__ContentLength_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ContentLength_k__BackingField = value;
}
inline ::Amazon::Runtime::Internal::Transform::HttpClientResponseData* Amazon::Runtime::Internal::Transform::HttpClientResponseData::New_ctor(::System::Net::Http::HttpResponseMessage* response) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>(response));
}
inline void Amazon::Runtime::Internal::Transform::HttpClientResponseData::_ctor(::System::Net::Http::HttpResponseMessage* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
inline ::Amazon::Runtime::Internal::Transform::HttpClientResponseData*
Amazon::Runtime::Internal::Transform::HttpClientResponseData::New_ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient, bool disposeClient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>(response, httpClient, disposeClient));
}
inline void Amazon::Runtime::Internal::Transform::HttpClientResponseData::_ctor(::System::Net::Http::HttpResponseMessage* response, ::System::Net::Http::HttpClient* httpClient, bool disposeClient) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpClient*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response, httpClient, disposeClient);
}
inline ::System::Net::HttpStatusCode Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_StatusCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_StatusCode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::HttpStatusCode, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_StatusCode(::System::Net::HttpStatusCode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_StatusCode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::HttpStatusCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_IsSuccessStatusCode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(),
                                               "get_IsSuccessStatusCode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_IsSuccessStatusCode(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_IsSuccessStatusCode",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_ContentType() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_ContentType",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_ContentType(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_ContentType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_ContentLength() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_ContentLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::HttpClientResponseData::set_ContentLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "set_ContentLength",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::Transform::HttpClientResponseData::GetHeaderValue(::StringW headerName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "GetHeaderValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, headerName);
}
inline bool Amazon::Runtime::Internal::Transform::HttpClientResponseData::IsHeaderPresent(::StringW headerName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "IsHeaderPresent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, headerName);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Amazon::Runtime::Internal::Transform::HttpClientResponseData::GetHeaderNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "GetHeaderNames",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::HttpClientResponseData::CopyHeaderValues(::System::Net::Http::HttpResponseMessage* response) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "CopyHeaderValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::HttpResponseMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, response);
}
inline ::StringW Amazon::Runtime::Internal::Transform::HttpClientResponseData::GetFirstHeaderValue(::System::Net::Http::Headers::HttpHeaders* headers, ::StringW key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "GetFirstHeaderValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::Http::Headers::HttpHeaders*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, headers, key);
}
inline ::Amazon::Runtime::Internal::Transform::IHttpResponseBody* Amazon::Runtime::Internal::Transform::HttpClientResponseData::get_ResponseBody() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::HttpClientResponseData*>::get(), "get_ResponseBody",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Transform::IHttpResponseBody*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::HttpClientResponseData::HttpClientResponseData() {}
