#pragma once
#include "Amazon/Util/zzzz__AWSPublicIpAddressRange_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__AWSPublicIpAddressRange_def.hpp"
#include "Amazon/Util/zzzz__AWSPublicIpAddressRange_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat::__AWSPublicIpAddressRange__AddressFormat(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat::__AWSPublicIpAddressRange__AddressFormat() {}
constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat Amazon::Util::__AWSPublicIpAddressRange__AddressFormat::Ipv4{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat Amazon::Util::__AWSPublicIpAddressRange__AddressFormat::Ipv6{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.get_IpPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::AWSPublicIpAddressRange::*)()>(&::Amazon::Util::AWSPublicIpAddressRange::get_IpPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "get_IpPrefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.set_IpPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSPublicIpAddressRange::*)(::StringW)>(
    &::Amazon::Util::AWSPublicIpAddressRange::set_IpPrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_IpPrefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.get_IpAddressFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat (::Amazon::Util::AWSPublicIpAddressRange::*)()>(
    &::Amazon::Util::AWSPublicIpAddressRange::get_IpAddressFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(),
                                                                               "get_IpAddressFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.set_IpAddressFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSPublicIpAddressRange::*)(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat)>(
    &::Amazon::Util::AWSPublicIpAddressRange::set_IpAddressFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_IpAddressFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.get_Region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::AWSPublicIpAddressRange::*)()>(&::Amazon::Util::AWSPublicIpAddressRange::get_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "get_Region",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.set_Region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSPublicIpAddressRange::*)(::StringW)>(&::Amazon::Util::AWSPublicIpAddressRange::set_Region)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_Region", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.get_Service
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::AWSPublicIpAddressRange::*)()>(&::Amazon::Util::AWSPublicIpAddressRange::get_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "get_Service",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.set_Service
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSPublicIpAddressRange::*)(::StringW)>(
    &::Amazon::Util::AWSPublicIpAddressRange::set_Service)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_Service", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.get_NetworkBorderGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::AWSPublicIpAddressRange::*)()>(
    &::Amazon::Util::AWSPublicIpAddressRange::get_NetworkBorderGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(),
                                                                               "get_NetworkBorderGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange.set_NetworkBorderGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSPublicIpAddressRange::*)(::StringW)>(
    &::Amazon::Util::AWSPublicIpAddressRange::set_NetworkBorderGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_NetworkBorderGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::AWSPublicIpAddressRange._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::AWSPublicIpAddressRange::*)()>(&::Amazon::Util::AWSPublicIpAddressRange::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fe39c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__IpPrefix_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IpPrefix_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__IpPrefix_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IpPrefix_k__BackingField;
}
constexpr void Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_set__IpPrefix_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IpPrefix_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__IpAddressFormat_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IpAddressFormat_k__BackingField;
}
constexpr ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat const& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__IpAddressFormat_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IpAddressFormat_k__BackingField;
}
constexpr void Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_set__IpAddressFormat_k__BackingField(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IpAddressFormat_k__BackingField = value;
}
constexpr ::StringW& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__Region_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Region_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__Region_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Region_k__BackingField;
}
constexpr void Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_set__Region_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Region_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__Service_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Service_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__Service_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Service_k__BackingField;
}
constexpr void Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_set__Service_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Service_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__NetworkBorderGroup_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NetworkBorderGroup_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_get__NetworkBorderGroup_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NetworkBorderGroup_k__BackingField;
}
constexpr void Amazon::Util::AWSPublicIpAddressRange::__cordl_internal_set__NetworkBorderGroup_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NetworkBorderGroup_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Util::AWSPublicIpAddressRange::get_IpPrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "get_IpPrefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Util::AWSPublicIpAddressRange::set_IpPrefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_IpPrefix", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat Amazon::Util::AWSPublicIpAddressRange::get_IpAddressFormat() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(),
                                                                             "get_IpAddressFormat", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat, false>(this, ___internal_method);
}
inline void Amazon::Util::AWSPublicIpAddressRange::set_IpAddressFormat(::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_IpAddressFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::__AWSPublicIpAddressRange__AddressFormat>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Util::AWSPublicIpAddressRange::get_Region() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "get_Region",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Util::AWSPublicIpAddressRange::set_Region(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_Region", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Util::AWSPublicIpAddressRange::get_Service() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "get_Service",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Util::AWSPublicIpAddressRange::set_Service(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_Service", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Util::AWSPublicIpAddressRange::get_NetworkBorderGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(),
                                                                             "get_NetworkBorderGroup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Util::AWSPublicIpAddressRange::set_NetworkBorderGroup(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), "set_NetworkBorderGroup",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Util::AWSPublicIpAddressRange* Amazon::Util::AWSPublicIpAddressRange::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::AWSPublicIpAddressRange*>());
}
inline void Amazon::Util::AWSPublicIpAddressRange::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::AWSPublicIpAddressRange*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::AWSPublicIpAddressRange::AWSPublicIpAddressRange() {}
