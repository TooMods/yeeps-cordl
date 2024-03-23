#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CspKeyContainerInfo)
namespace System::Security::AccessControl {
class CryptoKeySecurity;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
struct KeyNumber;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CspKeyContainerInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CspKeyContainerInfo);
// Type: System.Security.Cryptography::CspKeyContainerInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::CspKeyContainerInfo*
class CORDL_TYPE CspKeyContainerInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Accessible)) bool Accessible;

  __declspec(property(get = get_CryptoKeySecurity))::System::Security::AccessControl::CryptoKeySecurity* CryptoKeySecurity;

  __declspec(property(get = get_Exportable)) bool Exportable;

  __declspec(property(get = get_HardwareDevice)) bool HardwareDevice;

  __declspec(property(get = get_KeyContainerName))::StringW KeyContainerName;

  __declspec(property(get = get_KeyNumber))::System::Security::Cryptography::KeyNumber KeyNumber;

  __declspec(property(get = get_MachineKeyStore)) bool MachineKeyStore;

  __declspec(property(get = get_Protected)) bool Protected;

  __declspec(property(get = get_ProviderName))::StringW ProviderName;

  __declspec(property(get = get_ProviderType)) int32_t ProviderType;

  __declspec(property(get = get_RandomlyGenerated)) bool RandomlyGenerated;

  __declspec(property(get = get_Removable)) bool Removable;

  __declspec(property(get = get_UniqueKeyContainerName))::StringW UniqueKeyContainerName;

  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params))::System::Security::Cryptography::CspParameters* _params;

  /// @brief Field _random, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random)) bool _random;

  static inline ::System::Security::Cryptography::CspKeyContainerInfo* New_ctor(::System::Security::Cryptography::CspParameters* parameters);

  constexpr ::System::Security::Cryptography::CspParameters*& __cordl_internal_get__params();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::CspParameters*> const& __cordl_internal_get__params() const;

  constexpr bool const& __cordl_internal_get__random() const;

  constexpr bool& __cordl_internal_get__random();

  constexpr void __cordl_internal_set__params(::System::Security::Cryptography::CspParameters* value);

  constexpr void __cordl_internal_set__random(bool value);

  /// @brief Method .ctor, addr 0x1c85a60, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::CspParameters* parameters);

  /// @brief Method get_Accessible, addr 0x1c91124, size 0x8, virtual false, abstract: false, final false
  inline bool get_Accessible();

  /// @brief Method get_CryptoKeySecurity, addr 0x1c9112c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::CryptoKeySecurity* get_CryptoKeySecurity();

  /// @brief Method get_Exportable, addr 0x1c91134, size 0x8, virtual false, abstract: false, final false
  inline bool get_Exportable();

  /// @brief Method get_HardwareDevice, addr 0x1c9113c, size 0x8, virtual false, abstract: false, final false
  inline bool get_HardwareDevice();

  /// @brief Method get_KeyContainerName, addr 0x1c91144, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_KeyContainerName();

  /// @brief Method get_KeyNumber, addr 0x1c91160, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::KeyNumber get_KeyNumber();

  /// @brief Method get_MachineKeyStore, addr 0x1c9117c, size 0x8, virtual false, abstract: false, final false
  inline bool get_MachineKeyStore();

  /// @brief Method get_Protected, addr 0x1c91184, size 0x8, virtual false, abstract: false, final false
  inline bool get_Protected();

  /// @brief Method get_ProviderName, addr 0x1c9118c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_ProviderName();

  /// @brief Method get_ProviderType, addr 0x1c911a8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_ProviderType();

  /// @brief Method get_RandomlyGenerated, addr 0x1c911c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_RandomlyGenerated();

  /// @brief Method get_Removable, addr 0x1c911cc, size 0x8, virtual false, abstract: false, final false
  inline bool get_Removable();

  /// @brief Method get_UniqueKeyContainerName, addr 0x1c911d4, size 0x58, virtual false, abstract: false, final false
  inline ::StringW get_UniqueKeyContainerName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CspKeyContainerInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CspKeyContainerInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CspKeyContainerInfo(CspKeyContainerInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CspKeyContainerInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CspKeyContainerInfo(CspKeyContainerInfo const&) = delete;

  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::CspParameters* ____params;

  /// @brief Field _random, offset: 0x18, size: 0x1, def value: None
  bool ____random;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CspKeyContainerInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspKeyContainerInfo, ____params) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::CspKeyContainerInfo, ____random) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CspKeyContainerInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CspKeyContainerInfo*, "System.Security.Cryptography", "CspKeyContainerInfo");
