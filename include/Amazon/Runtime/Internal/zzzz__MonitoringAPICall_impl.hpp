#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICall_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__MonitoringAPICall_def.hpp"
#include "Amazon/Runtime/zzzz__IRequestContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType::__MonitoringAPICall__CSMType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType::__MonitoringAPICall__CSMType() {}
constexpr ::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType Amazon::Runtime::Internal::__MonitoringAPICall__CSMType::ApiCall{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::Internal::__MonitoringAPICall__CSMType Amazon::Runtime::Internal::__MonitoringAPICall__CSMType::ApiCallAttempt{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(::Amazon::Runtime::IRequestContext*)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x23d5068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(&::Amazon::Runtime::Internal::MonitoringAPICall::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x23d52cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_Api
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_Api)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d53f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_Api", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_Api
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(::StringW)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_Api)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d53fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Api", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_Service
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_Service", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_Service
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(::StringW)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d540c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Service",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_ClientId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_ClientId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_ClientId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_ClientId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(::StringW)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_ClientId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d541c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_ClientId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_Timestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_Timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_Timestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_Timestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(int64_t)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_Timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d542c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Timestamp",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(::StringW)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Type",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(int32_t)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Version",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_Region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_Region", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_Region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(::StringW)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d545c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Region",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.get_UserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::MonitoringAPICall::*)()>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::get_UserAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d5464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                               "get_UserAgent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::MonitoringAPICall.set_UserAgent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::MonitoringAPICall::*)(::StringW)>(
    &::Amazon::Runtime::Internal::MonitoringAPICall::set_UserAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d546c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_UserAgent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Api_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Api_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Api_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Api_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__Api_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Api_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Service_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Service_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Service_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Service_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__Service_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Service_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__ClientId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientId_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__ClientId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ClientId_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__ClientId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ClientId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Timestamp_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Timestamp_k__BackingField;
}
constexpr int64_t const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Timestamp_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Timestamp_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__Timestamp_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Timestamp_k__BackingField = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__Type_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Type_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Version_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr int32_t const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Version_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Version_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__Version_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Version_k__BackingField = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Region_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Region_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__Region_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Region_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__Region_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Region_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__UserAgent_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserAgent_k__BackingField;
}
constexpr ::StringW const& Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_get__UserAgent_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UserAgent_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::MonitoringAPICall::__cordl_internal_set__UserAgent_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UserAgent_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::MonitoringAPICall* Amazon::Runtime::Internal::MonitoringAPICall::New_ctor(::Amazon::Runtime::IRequestContext* requestContext) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::MonitoringAPICall*>(requestContext));
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::_ctor(::Amazon::Runtime::IRequestContext* requestContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IRequestContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, requestContext);
}
inline ::Amazon::Runtime::Internal::MonitoringAPICall* Amazon::Runtime::Internal::MonitoringAPICall::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::MonitoringAPICall*>());
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::MonitoringAPICall::get_Api() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "get_Api",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_Api(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Api", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::MonitoringAPICall::get_Service() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                             "get_Service", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_Service(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Service",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::MonitoringAPICall::get_ClientId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                             "get_ClientId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_ClientId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_ClientId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t Amazon::Runtime::Internal::MonitoringAPICall::get_Timestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                             "get_Timestamp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_Timestamp(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Timestamp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::MonitoringAPICall::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "get_Type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_Type(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t Amazon::Runtime::Internal::MonitoringAPICall::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                             "get_Version", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_Version(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Version",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::MonitoringAPICall::get_Region() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                             "get_Region", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_Region(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_Region",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Runtime::Internal::MonitoringAPICall::get_UserAgent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(),
                                                                             "get_UserAgent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::MonitoringAPICall::set_UserAgent(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::MonitoringAPICall*>::get(), "set_UserAgent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::MonitoringAPICall::MonitoringAPICall() {}
