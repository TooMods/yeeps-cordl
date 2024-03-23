#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Internal/zzzz__RegionEndpointProviderV2_def.hpp"
#include "Amazon/Internal/zzzz__IRegionEndpointProvider_def.hpp"
#include "Amazon/Internal/zzzz__IRegionEndpoint_def.hpp"
#include "Amazon/Internal/zzzz__RegionEndpointProviderV2_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "ThirdParty/Json/LitJson/zzzz__JsonData_def.hpp"
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.GetEndpointForService
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::__RegionEndpoint__Endpoint* (
    ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)(::StringW, bool)>(&::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetEndpointForService)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x21f6628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetEndpointForService",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.GetEndpointRule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::Json::LitJson::JsonData* (
    ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)(::StringW)>(&::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetEndpointRule)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x21f6a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetEndpointRule",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.GetEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* (*)(::StringW, ::StringW)>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetEndpoint)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x21f6de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetEndpoint", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.get_EnumerableAllRegions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>* (*)()>(
        &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_EnumerableAllRegions)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x21f60ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                                 "get_EnumerableAllRegions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.GetBySystemName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* (*)(::StringW)>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetBySystemName)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x21f6298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetBySystemName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.LoadEndpointDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitions)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x21f69f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                                 "LoadEndpointDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.LoadEndpointDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitions)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x21f702c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "LoadEndpointDefinitions",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.ReadEndpointFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*)>(&::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::ReadEndpointFile)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x21f8094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "ReadEndpointFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.LoadEndpointDefinitionsFromEmbeddedResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitionsFromEmbeddedResource)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x21f7560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                                 "LoadEndpointDefinitionsFromEmbeddedResource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.TryLoadEndpointDefinitionsFromAssemblyDir
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::TryLoadEndpointDefinitionsFromAssemblyDir)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x21f72a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                                 "TryLoadEndpointDefinitionsFromAssemblyDir", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.LoadEndpointDefinitionFromFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitionFromFilePath)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x21f7e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "LoadEndpointDefinitionFromFilePath",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.LoadEndpointDefinitionFromWeb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitionFromWeb)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x21f7a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "LoadEndpointDefinitionFromWeb",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.UnloadEndpointDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::UnloadEndpointDefinitions)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21f87c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                                 "UnloadEndpointDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)(::StringW, ::StringW)>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x21f7000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.get_SystemName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)()>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_SystemName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "get_SystemName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.set_SystemName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)(::StringW)>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::set_SystemName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f890c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "set_SystemName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)()>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "get_DisplayName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.set_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)(::StringW)>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::set_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f891c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "set_DisplayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)()>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "get_RegionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::*)()>(
    &::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::ToString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21f892c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Internal::IRegionEndpoint"
constexpr Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::operator ::Amazon::Internal::IRegionEndpoint*() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpoint*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Internal::IRegionEndpoint"
constexpr ::Amazon::Internal::IRegionEndpoint* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::i___Amazon__Internal__IRegionEndpoint() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpoint*>(static_cast<void*>(this));
}
constexpr ::StringW& Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::__cordl_internal_get__SystemName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemName_k__BackingField;
}
constexpr ::StringW const& Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::__cordl_internal_get__SystemName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SystemName_k__BackingField;
}
constexpr void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::__cordl_internal_set__SystemName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SystemName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::__cordl_internal_get__DisplayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisplayName_k__BackingField;
}
constexpr ::StringW const& Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::__cordl_internal_get__DisplayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DisplayName_k__BackingField;
}
constexpr void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::__cordl_internal_set__DisplayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____DisplayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::setStaticF__documentEndpoints(::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>*, "_documentEndpoints",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::getStaticF__documentEndpoints() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::ThirdParty::Json::LitJson::JsonData*>*, "_documentEndpoints",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>();
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::setStaticF_loaded(bool value) {
  ::cordl_internals::setStaticField<bool, "loaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>(
      std::forward<bool>(value));
}
inline bool Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::getStaticF_loaded() {
  return ::cordl_internals::getStaticField<bool, "loaded", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>();
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::setStaticF_LOCK_OBJECT(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "LOCK_OBJECT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::getStaticF_LOCK_OBJECT() {
  return ::cordl_internals::getStaticField<::System::Object*, "LOCK_OBJECT",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>();
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::setStaticF_hashBySystemName(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>*, "hashBySystemName",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>*
Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::getStaticF_hashBySystemName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>*, "hashBySystemName",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get>();
}
inline ::Amazon::__RegionEndpoint__Endpoint* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetEndpointForService(::StringW serviceName, bool dualStack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetEndpointForService", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::__RegionEndpoint__Endpoint*, false>(this, ___internal_method, serviceName, dualStack);
}
inline ::ThirdParty::Json::LitJson::JsonData* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetEndpointRule(::StringW serviceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetEndpointRule",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::Json::LitJson::JsonData*, false>(this, ___internal_method, serviceName);
}
inline ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetEndpoint(::StringW systemName, ::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetEndpoint", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*, false>(nullptr, ___internal_method, systemName, displayName);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>*
Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_EnumerableAllRegions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                               "get_EnumerableAllRegions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::GetBySystemName(::StringW systemName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "GetBySystemName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*, false>(nullptr, ___internal_method, systemName);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                               "LoadEndpointDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitions(::StringW endpointsPath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "LoadEndpointDefinitions",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, endpointsPath);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::ReadEndpointFile(::System::IO::Stream* stream) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "ReadEndpointFile",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stream);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitionsFromEmbeddedResource() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                               "LoadEndpointDefinitionsFromEmbeddedResource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::TryLoadEndpointDefinitionsFromAssemblyDir() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                               "TryLoadEndpointDefinitionsFromAssemblyDir", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitionFromFilePath(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "LoadEndpointDefinitionFromFilePath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::LoadEndpointDefinitionFromWeb(::StringW url) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "LoadEndpointDefinitionFromWeb",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, url);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::UnloadEndpointDefinitions() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(),
                                               "UnloadEndpointDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint* Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::New_ctor(::StringW systemName, ::StringW displayName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>(systemName, displayName));
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::_ctor(::StringW systemName, ::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, systemName, displayName);
}
inline ::StringW Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_SystemName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "get_SystemName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::set_SystemName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "set_SystemName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_DisplayName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "get_DisplayName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::set_DisplayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "set_DisplayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::get_RegionName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), "get_RegionName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::ToString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Internal::__RegionEndpointProviderV2__RegionEndpoint::__RegionEndpointProviderV2__RegionEndpoint() {}
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV2.get_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&::Amazon::Internal::RegionEndpointProviderV2::get_Proxy)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21f5fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(),
                                                                               "get_Proxy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV2.set_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::IWebProxy*)>(&::Amazon::Internal::RegionEndpointProviderV2::set_Proxy)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21f6014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(), "set_Proxy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV2.get_AllRegionEndpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* (
    ::Amazon::Internal::RegionEndpointProviderV2::*)()>(&::Amazon::Internal::RegionEndpointProviderV2::get_AllRegionEndpoints)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21f6060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(),
                                                                               "get_AllRegionEndpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV2.GetRegionEndpoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Internal::IRegionEndpoint* (::Amazon::Internal::RegionEndpointProviderV2::*)(::StringW)>(
    &::Amazon::Internal::RegionEndpointProviderV2::GetRegionEndpoint)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x21f6244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(), "GetRegionEndpoint",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Internal::RegionEndpointProviderV2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Internal::RegionEndpointProviderV2::*)()>(&::Amazon::Internal::RegionEndpointProviderV2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f5778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Internal::IRegionEndpointProvider"
constexpr Amazon::Internal::RegionEndpointProviderV2::operator ::Amazon::Internal::IRegionEndpointProvider*() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpointProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Internal::IRegionEndpointProvider"
constexpr ::Amazon::Internal::IRegionEndpointProvider* Amazon::Internal::RegionEndpointProviderV2::i___Amazon__Internal__IRegionEndpointProvider() noexcept {
  return static_cast<::Amazon::Internal::IRegionEndpointProvider*>(static_cast<void*>(this));
}
inline void Amazon::Internal::RegionEndpointProviderV2::setStaticF__Proxy_k__BackingField(::System::Net::IWebProxy* value) {
  ::cordl_internals::setStaticField<::System::Net::IWebProxy*, "<Proxy>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get>(
      std::forward<::System::Net::IWebProxy*>(value));
}
inline ::System::Net::IWebProxy* Amazon::Internal::RegionEndpointProviderV2::getStaticF__Proxy_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Net::IWebProxy*, "<Proxy>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get>();
}
inline ::System::Net::IWebProxy* Amazon::Internal::RegionEndpointProviderV2::get_Proxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(), "get_Proxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(nullptr, ___internal_method);
}
inline void Amazon::Internal::RegionEndpointProviderV2::set_Proxy(::System::Net::IWebProxy* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(), "set_Proxy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* Amazon::Internal::RegionEndpointProviderV2::get_AllRegionEndpoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(),
                                                                             "get_AllRegionEndpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>*, false>(this, ___internal_method);
}
inline ::Amazon::Internal::IRegionEndpoint* Amazon::Internal::RegionEndpointProviderV2::GetRegionEndpoint(::StringW regionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(), "GetRegionEndpoint",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Internal::IRegionEndpoint*, false>(this, ___internal_method, regionName);
}
inline ::Amazon::Internal::RegionEndpointProviderV2* Amazon::Internal::RegionEndpointProviderV2::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Internal::RegionEndpointProviderV2*>());
}
inline void Amazon::Internal::RegionEndpointProviderV2::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Internal::RegionEndpointProviderV2*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Internal::RegionEndpointProviderV2::RegionEndpointProviderV2() {}
