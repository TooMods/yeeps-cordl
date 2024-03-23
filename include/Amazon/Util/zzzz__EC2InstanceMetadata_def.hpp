#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EC2InstanceMetadata)
namespace Amazon::Util {
class IAMInstanceProfileMetadata;
}
namespace Amazon::Util {
class IAMSecurityCredentialMetadata;
}
namespace Amazon::Util {
class NetworkInterfaceMetadata;
}
namespace Amazon::Util {
class __EC2InstanceMetadata__IMDSDisabledException;
}
namespace Amazon {
class RegionEndpoint;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Threading {
class ReaderWriterLockSlim;
}
// Forward declare root types
namespace Amazon::Util {
class EC2InstanceMetadata;
}
namespace Amazon::Util {
class __EC2InstanceMetadata__IMDSDisabledException;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::EC2InstanceMetadata);
MARK_REF_PTR_T(::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException);
// Type: ::IMDSDisabledException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::EC2InstanceMetadata::IMDSDisabledException*
class CORDL_TYPE __EC2InstanceMetadata__IMDSDisabledException : public ::System::InvalidOperationException {
public:
  // Declarations
  static inline ::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException* New_ctor();

  /// @brief Method .ctor, addr 0x2209658, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EC2InstanceMetadata__IMDSDisabledException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EC2InstanceMetadata__IMDSDisabledException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EC2InstanceMetadata__IMDSDisabledException(__EC2InstanceMetadata__IMDSDisabledException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EC2InstanceMetadata__IMDSDisabledException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EC2InstanceMetadata__IMDSDisabledException(__EC2InstanceMetadata__IMDSDisabledException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException, 0x90>, "Size mismatch!");

} // namespace Amazon::Util
// Type: Amazon.Util::EC2InstanceMetadata
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::EC2InstanceMetadata*
class CORDL_TYPE EC2InstanceMetadata : public ::System::Object {
public:
  // Declarations
  using IMDSDisabledException = ::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException;

  /// @brief Field AWS_EC2_METADATA_DISABLED, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AWS_EC2_METADATA_DISABLED, put = setStaticF_AWS_EC2_METADATA_DISABLED))::StringW AWS_EC2_METADATA_DISABLED;

  /// @brief Field DEFAULT_APITOKEN_TTL, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DEFAULT_APITOKEN_TTL, put = setStaticF_DEFAULT_APITOKEN_TTL)) int32_t DEFAULT_APITOKEN_TTL;

  /// @brief Field DEFAULT_RETRIES, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_DEFAULT_RETRIES, put = setStaticF_DEFAULT_RETRIES)) int32_t DEFAULT_RETRIES;

  /// @brief Field EC2_APITOKEN_URL, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EC2_APITOKEN_URL, put = setStaticF_EC2_APITOKEN_URL))::StringW EC2_APITOKEN_URL;

  /// @brief Field EC2_DYNAMICDATA_ROOT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EC2_DYNAMICDATA_ROOT, put = setStaticF_EC2_DYNAMICDATA_ROOT))::StringW EC2_DYNAMICDATA_ROOT;

  /// @brief Field EC2_METADATA_ROOT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EC2_METADATA_ROOT, put = setStaticF_EC2_METADATA_ROOT))::StringW EC2_METADATA_ROOT;

  /// @brief Field EC2_METADATA_SVC, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EC2_METADATA_SVC, put = setStaticF_EC2_METADATA_SVC))::StringW EC2_METADATA_SVC;

  /// @brief Field EC2_USERDATA_ROOT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_EC2_USERDATA_ROOT, put = setStaticF_EC2_USERDATA_ROOT))::StringW EC2_USERDATA_ROOT;

  /// @brief Field LATEST, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_LATEST, put = setStaticF_LATEST))::StringW LATEST;

  /// @brief Field MAX_RETRIES, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MAX_RETRIES, put = setStaticF_MAX_RETRIES)) int32_t MAX_RETRIES;

  /// @brief Field MIN_PAUSE_MS, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MIN_PAUSE_MS, put = setStaticF_MIN_PAUSE_MS)) int32_t MIN_PAUSE_MS;

  /// @brief Field <Proxy>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Proxy_k__BackingField, put = setStaticF__Proxy_k__BackingField))::System::Net::IWebProxy* _Proxy_k__BackingField;

  /// @brief Field _cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cache, put = setStaticF__cache))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _cache;

  /// @brief Field metadataLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_metadataLock, put = setStaticF_metadataLock))::System::Threading::ReaderWriterLockSlim* metadataLock;

  /// @brief Field metadataLockTimeout, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_metadataLockTimeout, put = setStaticF_metadataLockTimeout))::System::TimeSpan metadataLockTimeout;

  /// @brief Field useNullToken, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useNullToken, put = setStaticF_useNullToken)) bool useNullToken;

  /// @brief Method ClearTokenFlag, addr 0x2208d18, size 0x58, virtual false, abstract: false, final false
  static inline void ClearTokenFlag();

  /// @brief Method FetchApiToken, addr 0x2208630, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW FetchApiToken();

  /// @brief Method FetchApiToken, addr 0x2208688, size 0x5a8, virtual false, abstract: false, final false
  static inline ::StringW FetchApiToken(int32_t tries);

  /// @brief Method FetchData, addr 0x2206004, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW FetchData(::StringW path);

  /// @brief Method FetchData, addr 0x2207dd8, size 0x858, virtual false, abstract: false, final false
  static inline ::StringW FetchData(::StringW path, bool force);

  /// @brief Method GetData, addr 0x22063e0, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW GetData(::StringW path);

  /// @brief Method GetData, addr 0x2207cb8, size 0xb8, virtual false, abstract: false, final false
  static inline ::StringW GetData(::StringW path, int32_t tries);

  /// @brief Method GetItems, addr 0x2206188, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetItems(::StringW path);

  /// @brief Method GetItems, addr 0x2207d70, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetItems(::StringW path, int32_t tries);

  /// @brief Method GetItems, addr 0x2207c48, size 0x70, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetItems(::StringW relativeOrAbsolutePath, int32_t tries, bool slurp);

  /// @brief Method GetItems, addr 0x2208d70, size 0x8e8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetItems(::StringW relativeOrAbsolutePath, int32_t tries, bool slurp, ::StringW token);

  /// @brief Method PauseExponentially, addr 0x2208c30, size 0xe8, virtual false, abstract: false, final false
  static inline void PauseExponentially(int32_t retry);

  static inline ::StringW getStaticF_AWS_EC2_METADATA_DISABLED();

  static inline int32_t getStaticF_DEFAULT_APITOKEN_TTL();

  static inline int32_t getStaticF_DEFAULT_RETRIES();

  static inline ::StringW getStaticF_EC2_APITOKEN_URL();

  static inline ::StringW getStaticF_EC2_DYNAMICDATA_ROOT();

  static inline ::StringW getStaticF_EC2_METADATA_ROOT();

  static inline ::StringW getStaticF_EC2_METADATA_SVC();

  static inline ::StringW getStaticF_EC2_USERDATA_ROOT();

  static inline ::StringW getStaticF_LATEST();

  static inline int32_t getStaticF_MAX_RETRIES();

  static inline int32_t getStaticF_MIN_PAUSE_MS();

  static inline ::System::Net::IWebProxy* getStaticF__Proxy_k__BackingField();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF__cache();

  static inline ::System::Threading::ReaderWriterLockSlim* getStaticF_metadataLock();

  static inline ::System::TimeSpan getStaticF_metadataLockTimeout();

  static inline bool getStaticF_useNullToken();

  /// @brief Method get_AmiId, addr 0x2205fa0, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_AmiId();

  /// @brief Method get_AmiLaunchIndex, addr 0x220605c, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_AmiLaunchIndex();

  /// @brief Method get_AmiManifestPath, addr 0x22060c0, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_AmiManifestPath();

  /// @brief Method get_AncestorAmiIds, addr 0x2206124, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_AncestorAmiIds();

  /// @brief Method get_AvailabilityZone, addr 0x220656c, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_AvailabilityZone();

  /// @brief Method get_BlockDeviceMapping, addr 0x220715c, size 0x3d4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* get_BlockDeviceMapping();

  /// @brief Method get_Hostname, addr 0x22061ec, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_Hostname();

  /// @brief Method get_IAMInstanceProfileInfo, addr 0x2206abc, size 0x174, virtual false, abstract: false, final false
  static inline ::Amazon::Util::IAMInstanceProfileMetadata* get_IAMInstanceProfileInfo();

  /// @brief Method get_IAMSecurityCredentials, addr 0x2206c38, size 0x51c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IDictionary_2<::StringW, ::Amazon::Util::IAMSecurityCredentialMetadata*>* get_IAMSecurityCredentials();

  /// @brief Method get_IdentityDocument, addr 0x220697c, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_IdentityDocument();

  /// @brief Method get_IdentityPkcs7, addr 0x2207bd0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_IdentityPkcs7();

  /// @brief Method get_IdentitySignature, addr 0x2207b58, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_IdentitySignature();

  /// @brief Method get_InstanceAction, addr 0x2206250, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceAction();

  /// @brief Method get_InstanceId, addr 0x22062b4, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceId();

  /// @brief Method get_InstanceMonitoring, addr 0x2207ae0, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceMonitoring();

  /// @brief Method get_InstanceType, addr 0x2206318, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_InstanceType();

  /// @brief Method get_IsIMDSEnabled, addr 0x2205dbc, size 0x130, virtual false, abstract: false, final false
  static inline bool get_IsIMDSEnabled();

  /// @brief Method get_KernelId, addr 0x220637c, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_KernelId();

  /// @brief Method get_LocalHostname, addr 0x2206440, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_LocalHostname();

  /// @brief Method get_MacAddress, addr 0x22064a4, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_MacAddress();

  /// @brief Method get_NetworkInterfaces, addr 0x2207530, size 0x474, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Util::NetworkInterfaceMetadata*>* get_NetworkInterfaces();

  /// @brief Method get_PrivateIpAddress, addr 0x2206508, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_PrivateIpAddress();

  /// @brief Method get_ProductCodes, addr 0x22065d0, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_ProductCodes();

  /// @brief Method get_Proxy, addr 0x2205eec, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Net::IWebProxy* get_Proxy();

  /// @brief Method get_PublicKey, addr 0x2206634, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_PublicKey();

  /// @brief Method get_RamdiskId, addr 0x2206698, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_RamdiskId();

  /// @brief Method get_Region, addr 0x22066fc, size 0x280, virtual false, abstract: false, final false
  static inline ::Amazon::RegionEndpoint* get_Region();

  /// @brief Method get_ReservationId, addr 0x22069f4, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW get_ReservationId();

  /// @brief Method get_SecurityGroups, addr 0x2206a58, size 0x64, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_SecurityGroups();

  /// @brief Method get_UserData, addr 0x2207a88, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW get_UserData();

  static inline void setStaticF_AWS_EC2_METADATA_DISABLED(::StringW value);

  static inline void setStaticF_DEFAULT_APITOKEN_TTL(int32_t value);

  static inline void setStaticF_DEFAULT_RETRIES(int32_t value);

  static inline void setStaticF_EC2_APITOKEN_URL(::StringW value);

  static inline void setStaticF_EC2_DYNAMICDATA_ROOT(::StringW value);

  static inline void setStaticF_EC2_METADATA_ROOT(::StringW value);

  static inline void setStaticF_EC2_METADATA_SVC(::StringW value);

  static inline void setStaticF_EC2_USERDATA_ROOT(::StringW value);

  static inline void setStaticF_LATEST(::StringW value);

  static inline void setStaticF_MAX_RETRIES(int32_t value);

  static inline void setStaticF_MIN_PAUSE_MS(int32_t value);

  static inline void setStaticF__Proxy_k__BackingField(::System::Net::IWebProxy* value);

  static inline void setStaticF__cache(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline void setStaticF_metadataLock(::System::Threading::ReaderWriterLockSlim* value);

  static inline void setStaticF_metadataLockTimeout(::System::TimeSpan value);

  static inline void setStaticF_useNullToken(bool value);

  /// @brief Method set_Proxy, addr 0x2205f44, size 0x5c, virtual false, abstract: false, final false
  static inline void set_Proxy(::System::Net::IWebProxy* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EC2InstanceMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EC2InstanceMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EC2InstanceMetadata(EC2InstanceMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EC2InstanceMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EC2InstanceMetadata(EC2InstanceMetadata const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::EC2InstanceMetadata, 0x10>, "Size mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::EC2InstanceMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::EC2InstanceMetadata*, "Amazon.Util", "EC2InstanceMetadata");
NEED_NO_BOX(::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::__EC2InstanceMetadata__IMDSDisabledException*, "Amazon.Util", "EC2InstanceMetadata/IMDSDisabledException");
