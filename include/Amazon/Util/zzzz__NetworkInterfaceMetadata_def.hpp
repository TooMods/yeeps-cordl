#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NetworkInterfaceMetadata)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Amazon::Util {
class NetworkInterfaceMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::NetworkInterfaceMetadata);
// Type: Amazon.Util::NetworkInterfaceMetadata
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util {
// Is value type: false
// CS Name: ::Amazon.Util::NetworkInterfaceMetadata*
class CORDL_TYPE NetworkInterfaceMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LocalHostname))::StringW LocalHostname;

  __declspec(property(get = get_LocalIPv4s))::System::Collections::Generic::IEnumerable_1<::StringW>* LocalIPv4s;

  __declspec(property(get = get_MacAddress))::StringW MacAddress;

  __declspec(property(get = get_OwnerId))::StringW OwnerId;

  __declspec(property(get = get_Profile))::StringW Profile;

  __declspec(property(get = get_PublicHostname))::StringW PublicHostname;

  __declspec(property(get = get_PublicIPv4s))::System::Collections::Generic::IEnumerable_1<::StringW>* PublicIPv4s;

  __declspec(property(get = get_SecurityGroupIds))::System::Collections::Generic::IEnumerable_1<::StringW>* SecurityGroupIds;

  __declspec(property(get = get_SecurityGroups))::System::Collections::Generic::IEnumerable_1<::StringW>* SecurityGroups;

  __declspec(property(get = get_SubnetIPv4CidrBlock))::StringW SubnetIPv4CidrBlock;

  __declspec(property(get = get_SubnetId))::StringW SubnetId;

  __declspec(property(get = get_VpcId))::StringW VpcId;

  /// @brief Field _availableKeys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__availableKeys, put = __cordl_internal_set__availableKeys))::System::Collections::Generic::IEnumerable_1<::StringW>* _availableKeys;

  /// @brief Field _data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _data;

  /// @brief Field _mac, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__mac, put = __cordl_internal_set__mac))::StringW _mac;

  /// @brief Field _path, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__path, put = __cordl_internal_set__path))::StringW _path;

  /// @brief Method GetData, addr 0x2209a50, size 0x160, virtual false, abstract: false, final false
  inline ::StringW GetData(::StringW key);

  /// @brief Method GetIpV4Association, addr 0x2209f9c, size 0xbc, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetIpV4Association(::StringW publicIp);

  /// @brief Method GetItems, addr 0x2209c88, size 0x11c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GetItems(::StringW key);

  static inline ::Amazon::Util::NetworkInterfaceMetadata* New_ctor();

  static inline ::Amazon::Util::NetworkInterfaceMetadata* New_ctor(::StringW macAddress);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get__availableKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get__availableKeys() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__data() const;

  constexpr ::StringW const& __cordl_internal_get__mac() const;

  constexpr ::StringW& __cordl_internal_get__mac();

  constexpr ::StringW const& __cordl_internal_get__path() const;

  constexpr ::StringW& __cordl_internal_get__path();

  constexpr void __cordl_internal_set__availableKeys(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  constexpr void __cordl_internal_set__data(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__mac(::StringW value);

  constexpr void __cordl_internal_set__path(::StringW value);

  /// @brief Method .ctor, addr 0x2209984, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x22079a4, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW macAddress);

  /// @brief Method get_LocalHostname, addr 0x2209bf8, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_LocalHostname();

  /// @brief Method get_LocalIPv4s, addr 0x2209c40, size 0x48, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_LocalIPv4s();

  /// @brief Method get_MacAddress, addr 0x2209a00, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_MacAddress();

  /// @brief Method get_OwnerId, addr 0x2209a08, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_OwnerId();

  /// @brief Method get_Profile, addr 0x2209bb0, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_Profile();

  /// @brief Method get_PublicHostname, addr 0x2209da4, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_PublicHostname();

  /// @brief Method get_PublicIPv4s, addr 0x2209dec, size 0x48, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_PublicIPv4s();

  /// @brief Method get_SecurityGroupIds, addr 0x2209e7c, size 0x48, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_SecurityGroupIds();

  /// @brief Method get_SecurityGroups, addr 0x2209e34, size 0x48, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* get_SecurityGroups();

  /// @brief Method get_SubnetIPv4CidrBlock, addr 0x2209f0c, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_SubnetIPv4CidrBlock();

  /// @brief Method get_SubnetId, addr 0x2209ec4, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_SubnetId();

  /// @brief Method get_VpcId, addr 0x2209f54, size 0x48, virtual false, abstract: false, final false
  inline ::StringW get_VpcId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkInterfaceMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkInterfaceMetadata(NetworkInterfaceMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkInterfaceMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkInterfaceMetadata(NetworkInterfaceMetadata const&) = delete;

  /// @brief Field _path, offset: 0x10, size: 0x8, def value: None
  ::StringW ____path;

  /// @brief Field _mac, offset: 0x18, size: 0x8, def value: None
  ::StringW ____mac;

  /// @brief Field _availableKeys, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ____availableKeys;

  /// @brief Field _data, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::NetworkInterfaceMetadata, 0x30>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::NetworkInterfaceMetadata, ____path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::NetworkInterfaceMetadata, ____mac) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::NetworkInterfaceMetadata, ____availableKeys) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Amazon::Util::NetworkInterfaceMetadata, ____data) == 0x28, "Offset mismatch!");

} // namespace Amazon::Util
NEED_NO_BOX(::Amazon::Util::NetworkInterfaceMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::NetworkInterfaceMetadata*, "Amazon.Util", "NetworkInterfaceMetadata");
