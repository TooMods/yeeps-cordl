#pragma once
#include "System/zzzz__InvalidOperationException_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Util/zzzz__EC2InstanceMetadata_def.hpp"
#include "Amazon/Util/zzzz__EC2InstanceMetadata_def.hpp"
#include "Amazon/Util/zzzz__IAMInstanceProfileMetadata_def.hpp"
#include "Amazon/Util/zzzz__IAMSecurityCredentialMetadata_def.hpp"
#include "Amazon/Util/zzzz__NetworkInterfaceMetadata_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
//  Writing Method size for method: ::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException::*)()>(
    &::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2209658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException* Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException*>());
}
inline void Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException::__EC2InstanceMetadata__IMDSDisabledException() {}
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_IsIMDSEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_IsIMDSEnabled)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2205dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_IsIMDSEnabled",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_Proxy)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2205eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_Proxy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.set_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Net::IWebProxy*)>(&::Amazon::Util::EC2InstanceMetadata::set_Proxy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2205f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "set_Proxy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_AmiId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_AmiId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2205fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_AmiId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_AmiLaunchIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_AmiLaunchIndex)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x220605c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_AmiLaunchIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_AmiManifestPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_AmiManifestPath)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22060c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_AmiManifestPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_AncestorAmiIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(
    &::Amazon::Util::EC2InstanceMetadata::get_AncestorAmiIds)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_AncestorAmiIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_Hostname
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_Hostname)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22061ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_Hostname",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_InstanceAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_InstanceAction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206250;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_InstanceAction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_InstanceId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_InstanceId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22062b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_InstanceId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_InstanceType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_InstanceType)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_InstanceType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_KernelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_KernelId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x220637c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_KernelId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_LocalHostname
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_LocalHostname)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_LocalHostname",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_MacAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_MacAddress)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22064a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_MacAddress",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_PrivateIpAddress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_PrivateIpAddress)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_PrivateIpAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_AvailabilityZone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_AvailabilityZone)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x220656c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_AvailabilityZone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_ProductCodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(
    &::Amazon::Util::EC2InstanceMetadata::get_ProductCodes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22065d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_ProductCodes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_PublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_PublicKey)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_PublicKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_RamdiskId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_RamdiskId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_RamdiskId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_Region
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::RegionEndpoint* (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_Region)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x22066fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_Region",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_ReservationId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_ReservationId)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22069f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_ReservationId",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_SecurityGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(
    &::Amazon::Util::EC2InstanceMetadata::get_SecurityGroups)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_SecurityGroups", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_IAMInstanceProfileInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::IAMInstanceProfileMetadata* (*)()>(
    &::Amazon::Util::EC2InstanceMetadata::get_IAMInstanceProfileInfo)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2206abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_IAMInstanceProfileInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_IAMSecurityCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Util::IAMSecurityCredentialMetadata*>* (*)()>(
    &::Amazon::Util::EC2InstanceMetadata::get_IAMSecurityCredentials)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x2206c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_IAMSecurityCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_BlockDeviceMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (*)()>(
    &::Amazon::Util::EC2InstanceMetadata::get_BlockDeviceMapping)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x220715c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_BlockDeviceMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_NetworkInterfaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Amazon::Util::NetworkInterfaceMetadata*>* (*)()>(
    &::Amazon::Util::EC2InstanceMetadata::get_NetworkInterfaces)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0x2207530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_NetworkInterfaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_UserData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_UserData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2207a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_UserData",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_InstanceMonitoring
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_InstanceMonitoring)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2207ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_InstanceMonitoring", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_IdentityDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_IdentityDocument)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x220697c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_IdentityDocument", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_IdentitySignature
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_IdentitySignature)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2207b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                               "get_IdentitySignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.get_IdentityPkcs7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::get_IdentityPkcs7)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2207bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_IdentityPkcs7",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.GetItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW)>(
    &::Amazon::Util::EC2InstanceMetadata::GetItems)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2206188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Util::EC2InstanceMetadata::GetData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22063e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.GetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t)>(&::Amazon::Util::EC2InstanceMetadata::GetData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2207cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.GetItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, int32_t)>(
    &::Amazon::Util::EC2InstanceMetadata::GetItems)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2207d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.FetchData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Util::EC2InstanceMetadata::FetchData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2206004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.FetchData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, bool)>(&::Amazon::Util::EC2InstanceMetadata::FetchData)> {
  constexpr static std::size_t size = 0x858;
  constexpr static std::size_t addrs = 0x2207dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.FetchApiToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::Amazon::Util::EC2InstanceMetadata::FetchApiToken)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2208630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchApiToken",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.FetchApiToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int32_t)>(&::Amazon::Util::EC2InstanceMetadata::FetchApiToken)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x2208688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchApiToken", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.ClearTokenFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Util::EC2InstanceMetadata::ClearTokenFlag)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2208d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "ClearTokenFlag",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.GetItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::StringW, int32_t, bool)>(
    &::Amazon::Util::EC2InstanceMetadata::GetItems)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2207c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.GetItems
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::StringW, int32_t, bool, ::StringW)>(
    &::Amazon::Util::EC2InstanceMetadata::GetItems)> {
  constexpr static std::size_t size = 0x8e8;
  constexpr static std::size_t addrs = 0x2208d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::EC2InstanceMetadata.PauseExponentially
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::Amazon::Util::EC2InstanceMetadata::PauseExponentially)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2208c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "PauseExponentially", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_EC2_METADATA_SVC(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EC2_METADATA_SVC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::getStaticF_EC2_METADATA_SVC() {
  return ::cordl_internals::getStaticField<::StringW, "EC2_METADATA_SVC", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_LATEST(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "LATEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::getStaticF_LATEST() {
  return ::cordl_internals::getStaticField<::StringW, "LATEST", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_EC2_METADATA_ROOT(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EC2_METADATA_ROOT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::getStaticF_EC2_METADATA_ROOT() {
  return ::cordl_internals::getStaticField<::StringW, "EC2_METADATA_ROOT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_EC2_USERDATA_ROOT(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EC2_USERDATA_ROOT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::getStaticF_EC2_USERDATA_ROOT() {
  return ::cordl_internals::getStaticField<::StringW, "EC2_USERDATA_ROOT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_EC2_DYNAMICDATA_ROOT(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EC2_DYNAMICDATA_ROOT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::getStaticF_EC2_DYNAMICDATA_ROOT() {
  return ::cordl_internals::getStaticField<::StringW, "EC2_DYNAMICDATA_ROOT", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_AWS_EC2_METADATA_DISABLED(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "AWS_EC2_METADATA_DISABLED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::getStaticF_AWS_EC2_METADATA_DISABLED() {
  return ::cordl_internals::getStaticField<::StringW, "AWS_EC2_METADATA_DISABLED", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_EC2_APITOKEN_URL(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "EC2_APITOKEN_URL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<::StringW>(value));
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::getStaticF_EC2_APITOKEN_URL() {
  return ::cordl_internals::getStaticField<::StringW, "EC2_APITOKEN_URL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_DEFAULT_RETRIES(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DEFAULT_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<int32_t>(value));
}
inline int32_t Amazon::Util::EC2InstanceMetadata::getStaticF_DEFAULT_RETRIES() {
  return ::cordl_internals::getStaticField<int32_t, "DEFAULT_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_MIN_PAUSE_MS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MIN_PAUSE_MS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<int32_t>(value));
}
inline int32_t Amazon::Util::EC2InstanceMetadata::getStaticF_MIN_PAUSE_MS() {
  return ::cordl_internals::getStaticField<int32_t, "MIN_PAUSE_MS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_MAX_RETRIES(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAX_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<int32_t>(value));
}
inline int32_t Amazon::Util::EC2InstanceMetadata::getStaticF_MAX_RETRIES() {
  return ::cordl_internals::getStaticField<int32_t, "MAX_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_DEFAULT_APITOKEN_TTL(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DEFAULT_APITOKEN_TTL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<int32_t>(value));
}
inline int32_t Amazon::Util::EC2InstanceMetadata::getStaticF_DEFAULT_APITOKEN_TTL() {
  return ::cordl_internals::getStaticField<int32_t, "DEFAULT_APITOKEN_TTL", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF__cache(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "_cache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Amazon::Util::EC2InstanceMetadata::getStaticF__cache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, "_cache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_useNullToken(bool value) {
  ::cordl_internals::setStaticField<bool, "useNullToken", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(std::forward<bool>(value));
}
inline bool Amazon::Util::EC2InstanceMetadata::getStaticF_useNullToken() {
  return ::cordl_internals::getStaticField<bool, "useNullToken", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_metadataLock(::System::Threading::ReaderWriterLockSlim* value) {
  ::cordl_internals::setStaticField<::System::Threading::ReaderWriterLockSlim*, "metadataLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(
      std::forward<::System::Threading::ReaderWriterLockSlim*>(value));
}
inline ::System::Threading::ReaderWriterLockSlim* Amazon::Util::EC2InstanceMetadata::getStaticF_metadataLock() {
  return ::cordl_internals::getStaticField<::System::Threading::ReaderWriterLockSlim*, "metadataLock",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF_metadataLockTimeout(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "metadataLockTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Util::EC2InstanceMetadata::getStaticF_metadataLockTimeout() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "metadataLockTimeout", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline void Amazon::Util::EC2InstanceMetadata::setStaticF__Proxy_k__BackingField(::System::Net::IWebProxy* value) {
  ::cordl_internals::setStaticField<::System::Net::IWebProxy*, "<Proxy>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>(
      std::forward<::System::Net::IWebProxy*>(value));
}
inline ::System::Net::IWebProxy* Amazon::Util::EC2InstanceMetadata::getStaticF__Proxy_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Net::IWebProxy*, "<Proxy>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get>();
}
inline bool Amazon::Util::EC2InstanceMetadata::get_IsIMDSEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_IsIMDSEnabled",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::Net::IWebProxy* Amazon::Util::EC2InstanceMetadata::get_Proxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_Proxy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(nullptr, ___internal_method);
}
inline void Amazon::Util::EC2InstanceMetadata::set_Proxy(::System::Net::IWebProxy* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "set_Proxy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_AmiId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_AmiId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_AmiLaunchIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_AmiLaunchIndex",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_AmiManifestPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_AmiManifestPath",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Util::EC2InstanceMetadata::get_AncestorAmiIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_AncestorAmiIds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_Hostname() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_Hostname",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_InstanceAction() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_InstanceAction",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_InstanceId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_InstanceId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_InstanceType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_InstanceType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_KernelId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_KernelId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_LocalHostname() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_LocalHostname",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_MacAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_MacAddress",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_PrivateIpAddress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_PrivateIpAddress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_AvailabilityZone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_AvailabilityZone", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Util::EC2InstanceMetadata::get_ProductCodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_ProductCodes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_PublicKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_PublicKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_RamdiskId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_RamdiskId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::Amazon::RegionEndpoint* Amazon::Util::EC2InstanceMetadata::get_Region() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_Region",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::RegionEndpoint*, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_ReservationId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_ReservationId",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Util::EC2InstanceMetadata::get_SecurityGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_SecurityGroups",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Util::IAMInstanceProfileMetadata* Amazon::Util::EC2InstanceMetadata::get_IAMInstanceProfileInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_IAMInstanceProfileInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::IAMInstanceProfileMetadata*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Util::IAMSecurityCredentialMetadata*>* Amazon::Util::EC2InstanceMetadata::get_IAMSecurityCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_IAMSecurityCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Util::IAMSecurityCredentialMetadata*>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* Amazon::Util::EC2InstanceMetadata::get_BlockDeviceMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_BlockDeviceMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::NetworkInterfaceMetadata*>* Amazon::Util::EC2InstanceMetadata::get_NetworkInterfaces() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_NetworkInterfaces", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Amazon::Util::NetworkInterfaceMetadata*>*, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_UserData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_UserData",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_InstanceMonitoring() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_InstanceMonitoring", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_IdentityDocument() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_IdentityDocument", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_IdentitySignature() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(),
                                                                             "get_IdentitySignature", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::get_IdentityPkcs7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "get_IdentityPkcs7",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Util::EC2InstanceMetadata::GetItems(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, path);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::GetData(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::GetData(::StringW path, int32_t tries) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path, tries);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Amazon::Util::EC2InstanceMetadata::GetItems(::StringW path, int32_t tries) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, path, tries);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::FetchData(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::FetchData(::StringW path, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path, force);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::FetchApiToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchApiToken",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::StringW Amazon::Util::EC2InstanceMetadata::FetchApiToken(int32_t tries) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "FetchApiToken",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, tries);
}
inline void Amazon::Util::EC2InstanceMetadata::ClearTokenFlag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "ClearTokenFlag",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Util::EC2InstanceMetadata::GetItems(::StringW relativeOrAbsolutePath, int32_t tries, bool slurp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, relativeOrAbsolutePath, tries, slurp);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::Util::EC2InstanceMetadata::GetItems(::StringW relativeOrAbsolutePath, int32_t tries, bool slurp, ::StringW token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "GetItems", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, relativeOrAbsolutePath, tries, slurp, token);
}
inline void Amazon::Util::EC2InstanceMetadata::PauseExponentially(int32_t retry) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::EC2InstanceMetadata*>::get(), "PauseExponentially",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, retry);
}
// Ctor Parameters []
constexpr ::Amazon::Util::EC2InstanceMetadata::EC2InstanceMetadata() {}
