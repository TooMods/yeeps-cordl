#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Internal/zzzz__RegionEndpointV3_def.hpp"
#include "Amazon/Internal/zzzz__IRegionEndpoint_def.hpp"
#include "Amazon/Internal/zzzz__RegionEndpointV3_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonData_def.hpp"
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointV3__ServiceMap.GetMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* (
    ::Amazon::Internal::__RegionEndpointV3__ServiceMap::*)(bool)>(&::Amazon::Internal::__RegionEndpointV3__ServiceMap::GetMap)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21fa358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "GetMap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointV3__ServiceMap.ContainsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Internal::__RegionEndpointV3__ServiceMap::*)(::StringW)>(
    &::Amazon::Internal::__RegionEndpointV3__ServiceMap::ContainsKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21fa300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "ContainsKey",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointV3__ServiceMap.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::__RegionEndpointV3__ServiceMap::*)(::StringW, bool, ::Amazon::__RegionEndpoint__Endpoint*)>(
    &::Amazon::Internal::__RegionEndpointV3__ServiceMap::Add)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21fa284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::__RegionEndpoint__Endpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointV3__ServiceMap.TryGetEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Internal::__RegionEndpointV3__ServiceMap::*)(
    ::StringW, bool, ByRef<::Amazon::__RegionEndpoint__Endpoint*>)>(&::Amazon::Internal::__RegionEndpointV3__ServiceMap::TryGetEndpoint)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21f90cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "TryGetEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::__RegionEndpoint__Endpoint*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointV3__ServiceMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::__RegionEndpointV3__ServiceMap::*)()>(
    &::Amazon::Internal::__RegionEndpointV3__ServiceMap::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21f8b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*& Amazon::Internal::__RegionEndpointV3__ServiceMap::__cordl_internal_get__serviceMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*> const&
Amazon::Internal::__RegionEndpointV3__ServiceMap::__cordl_internal_get__serviceMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceMap;
}
constexpr void
Amazon::Internal::__RegionEndpointV3__ServiceMap::__cordl_internal_set__serviceMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serviceMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*& Amazon::Internal::__RegionEndpointV3__ServiceMap::__cordl_internal_get__dualServiceMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dualServiceMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*> const&
Amazon::Internal::__RegionEndpointV3__ServiceMap::__cordl_internal_get__dualServiceMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dualServiceMap;
}
constexpr void
Amazon::Internal::__RegionEndpointV3__ServiceMap::__cordl_internal_set__dualServiceMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dualServiceMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>* Amazon::Internal::__RegionEndpointV3__ServiceMap::GetMap(bool dualStack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "GetMap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::__RegionEndpoint__Endpoint*>*, false>(this, ___internal_method, dualStack);
}
inline bool Amazon::Internal::__RegionEndpointV3__ServiceMap::ContainsKey(::StringW servicName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "ContainsKey",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, servicName);
}
inline void Amazon::Internal::__RegionEndpointV3__ServiceMap::Add(::StringW serviceName, bool dualStack, ::Amazon::__RegionEndpoint__Endpoint* endpoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::__RegionEndpoint__Endpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serviceName, dualStack, endpoint);
}
inline bool Amazon::Internal::__RegionEndpointV3__ServiceMap::TryGetEndpoint(::StringW serviceName, bool dualStack, ByRef<::Amazon::__RegionEndpoint__Endpoint*> endpoint) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(), "TryGetEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::__RegionEndpoint__Endpoint*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, serviceName, dualStack, endpoint);
}
inline ::Amazon::Internal::__RegionEndpointV3__ServiceMap* Amazon::Internal::__RegionEndpointV3__ServiceMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>());
}
inline void Amazon::Internal::__RegionEndpointV3__ServiceMap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointV3__ServiceMap*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Internal::__RegionEndpointV3__ServiceMap::__RegionEndpointV3__ServiceMap() {}
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::RegionEndpointV3::*)()>(&::Amazon::Internal::RegionEndpointV3::get_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "get_RegionName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.set_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointV3::*)(::StringW)>(&::Amazon::Internal::RegionEndpointV3::set_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "set_RegionName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::RegionEndpointV3::*)()>(&::Amazon::Internal::RegionEndpointV3::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "get_DisplayName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.set_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointV3::*)(::StringW)>(&::Amazon::Internal::RegionEndpointV3::set_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "set_DisplayName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.get_PartitionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::RegionEndpointV3::*)()>(&::Amazon::Internal::RegionEndpointV3::get_PartitionName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21f5cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(),
                                                                               "get_PartitionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.get_PartitionDnsSuffix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::RegionEndpointV3::*)()>(
    &::Amazon::Internal::RegionEndpointV3::get_PartitionDnsSuffix)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x21f5db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(),
                                                                               "get_PartitionDnsSuffix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointV3::*)(
    ::StringW, ::StringW, ::ThirdParty::Json::LitJson::JsonData*, ::ThirdParty::Json::LitJson::JsonData*)>(&::Amazon::Internal::RegionEndpointV3::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x21f8b00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.GetEndpointForService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::__RegionEndpoint__Endpoint* (::Amazon::Internal::RegionEndpointV3::*)(::StringW, bool)>(
    &::Amazon::Internal::RegionEndpointV3::GetEndpointForService)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x21f8c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "GetEndpointForService", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.CreateUnknownEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::__RegionEndpoint__Endpoint* (::Amazon::Internal::RegionEndpointV3::*)(::StringW, bool)>(
    &::Amazon::Internal::RegionEndpointV3::CreateUnknownEndpoint)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x21f9148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "CreateUnknownEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.ParseAllServices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointV3::*)()>(&::Amazon::Internal::RegionEndpointV3::ParseAllServices)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x21f8d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "ParseAllServices",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.AddServiceToMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointV3::*)(::ThirdParty::Json::LitJson::JsonData*, ::StringW)>(
    &::Amazon::Internal::RegionEndpointV3::AddServiceToMap)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x21f92fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "AddServiceToMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.MergeJsonData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ThirdParty::Json::LitJson::JsonData*, ::ThirdParty::Json::LitJson::JsonData*)>(
    &::Amazon::Internal::RegionEndpointV3::MergeJsonData)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x21f9538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "MergeJsonData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.CreateEndpointAndAddToServiceMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointV3::*)(::ThirdParty::Json::LitJson::JsonData*, ::StringW, ::StringW)>(
    &::Amazon::Internal::RegionEndpointV3::CreateEndpointAndAddToServiceMap)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21f9860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "CreateEndpointAndAddToServiceMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.CreateEndpointAndAddToServiceMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointV3::*)(::ThirdParty::Json::LitJson::JsonData*, ::StringW, ::StringW, bool)>(
    &::Amazon::Internal::RegionEndpointV3::CreateEndpointAndAddToServiceMap)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x21f98a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "CreateEndpointAndAddToServiceMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.DetermineSignatureOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ThirdParty::Json::LitJson::JsonData*, ::StringW)>(
    &::Amazon::Internal::RegionEndpointV3::DetermineSignatureOverride)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x21f9e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "DetermineSignatureOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointV3.DetermineAuthRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ThirdParty::Json::LitJson::JsonData*)>(&::Amazon::Internal::RegionEndpointV3::DetermineAuthRegion)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21f9e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "DetermineAuthRegion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Internal::IRegionEndpoint"
constexpr Amazon::Internal::RegionEndpointV3::operator ::Amazon::Internal::IRegionEndpoint*() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpoint*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Internal::IRegionEndpoint"
constexpr ::Amazon::Internal::IRegionEndpoint* Amazon::Internal::RegionEndpointV3::i___Amazon__Internal__IRegionEndpoint() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpoint*>(static_cast<void*>(this));
}
constexpr ::Amazon::Internal::__RegionEndpointV3__ServiceMap*& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__serviceMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceMap;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Internal::__RegionEndpointV3__ServiceMap*> const& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__serviceMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____serviceMap;
}
constexpr void Amazon::Internal::RegionEndpointV3::__cordl_internal_set__serviceMap(::Amazon::Internal::__RegionEndpointV3__ServiceMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serviceMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__RegionName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RegionName_k__BackingField;
}
constexpr ::StringW const& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__RegionName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RegionName_k__BackingField;
}
constexpr void Amazon::Internal::RegionEndpointV3::__cordl_internal_set__RegionName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RegionName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__DisplayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisplayName_k__BackingField;
}
constexpr ::StringW const& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__DisplayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisplayName_k__BackingField;
}
constexpr void Amazon::Internal::RegionEndpointV3::__cordl_internal_set__DisplayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DisplayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ThirdParty::Json::LitJson::JsonData*& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__partitionJsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partitionJsonData;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonData*> const& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__partitionJsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partitionJsonData;
}
constexpr void Amazon::Internal::RegionEndpointV3::__cordl_internal_set__partitionJsonData(::ThirdParty::Json::LitJson::JsonData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partitionJsonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ThirdParty::Json::LitJson::JsonData*& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__servicesJsonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____servicesJsonData;
}
constexpr ::cordl_internals::to_const_pointer<::ThirdParty::Json::LitJson::JsonData*> const& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__servicesJsonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____servicesJsonData;
}
constexpr void Amazon::Internal::RegionEndpointV3::__cordl_internal_set__servicesJsonData(::ThirdParty::Json::LitJson::JsonData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____servicesJsonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__servicesLoaded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____servicesLoaded;
}
constexpr bool const& Amazon::Internal::RegionEndpointV3::__cordl_internal_get__servicesLoaded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____servicesLoaded;
}
constexpr void Amazon::Internal::RegionEndpointV3::__cordl_internal_set__servicesLoaded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____servicesLoaded = value;
}
inline ::StringW Amazon::Internal::RegionEndpointV3::get_RegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "get_RegionName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Internal::RegionEndpointV3::set_RegionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "set_RegionName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Internal::RegionEndpointV3::get_DisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "get_DisplayName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Internal::RegionEndpointV3::set_DisplayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "set_DisplayName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Internal::RegionEndpointV3::get_PartitionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "get_PartitionName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Internal::RegionEndpointV3::get_PartitionDnsSuffix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(),
                                                                             "get_PartitionDnsSuffix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::Internal::RegionEndpointV3* Amazon::Internal::RegionEndpointV3::New_ctor(::StringW regionName, ::StringW displayName, ::ThirdParty::Json::LitJson::JsonData* partition,
                                                                                          ::ThirdParty::Json::LitJson::JsonData* services) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Internal::RegionEndpointV3*>(regionName, displayName, partition, services));
}
inline void Amazon::Internal::RegionEndpointV3::_ctor(::StringW regionName, ::StringW displayName, ::ThirdParty::Json::LitJson::JsonData* partition, ::ThirdParty::Json::LitJson::JsonData* services) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, regionName, displayName, partition, services);
}
inline ::Amazon::__RegionEndpoint__Endpoint* Amazon::Internal::RegionEndpointV3::GetEndpointForService(::StringW serviceName, bool dualStack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "GetEndpointForService", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::__RegionEndpoint__Endpoint*, false>(this, ___internal_method, serviceName, dualStack);
}
inline ::Amazon::__RegionEndpoint__Endpoint* Amazon::Internal::RegionEndpointV3::CreateUnknownEndpoint(::StringW serviceName, bool dualStack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "CreateUnknownEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::__RegionEndpoint__Endpoint*, false>(this, ___internal_method, serviceName, dualStack);
}
inline void Amazon::Internal::RegionEndpointV3::ParseAllServices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "ParseAllServices",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Internal::RegionEndpointV3::AddServiceToMap(::ThirdParty::Json::LitJson::JsonData* service, ::StringW serviceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "AddServiceToMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, service, serviceName);
}
inline void Amazon::Internal::RegionEndpointV3::MergeJsonData(::ThirdParty::Json::LitJson::JsonData* target, ::ThirdParty::Json::LitJson::JsonData* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "MergeJsonData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, target, source);
}
inline void Amazon::Internal::RegionEndpointV3::CreateEndpointAndAddToServiceMap(::ThirdParty::Json::LitJson::JsonData* result, ::StringW regionName, ::StringW serviceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "CreateEndpointAndAddToServiceMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, regionName, serviceName);
}
inline void Amazon::Internal::RegionEndpointV3::CreateEndpointAndAddToServiceMap(::ThirdParty::Json::LitJson::JsonData* result, ::StringW regionName, ::StringW serviceName, bool dualStack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "CreateEndpointAndAddToServiceMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, regionName, serviceName, dualStack);
}
inline ::StringW Amazon::Internal::RegionEndpointV3::DetermineSignatureOverride(::ThirdParty::Json::LitJson::JsonData* defaults, ::StringW serviceName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "DetermineSignatureOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, defaults, serviceName);
}
inline ::StringW Amazon::Internal::RegionEndpointV3::DetermineAuthRegion(::ThirdParty::Json::LitJson::JsonData* credentialScope) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointV3*>::get(), "DetermineAuthRegion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ThirdParty::Json::LitJson::JsonData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, credentialScope);
}
// Ctor Parameters []
constexpr ::Amazon::Internal::RegionEndpointV3::RegionEndpointV3() {}
