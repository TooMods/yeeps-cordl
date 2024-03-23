#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SAMLRoleSessionManager)
namespace Amazon::Runtime {
class SAMLImmutableCredentials;
}
namespace Amazon::Util::Internal {
class SettingsManager;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement::Internal {
class SAMLRoleSessionManager;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager);
// Type: Amazon.Runtime.CredentialManagement.Internal::SAMLRoleSessionManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement.Internal::SAMLRoleSessionManager*
class CORDL_TYPE SAMLRoleSessionManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field settingsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_settingsManager, put = __cordl_internal_set_settingsManager))::Amazon::Util::Internal::SettingsManager* settingsManager;

  /// @brief Method Clear, addr 0x203388c, size 0x15c, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager* New_ctor();

  /// @brief Method RegisterRoleSession, addr 0x2033c00, size 0xe8, virtual false, abstract: false, final false
  inline void RegisterRoleSession(::StringW roleSessionName, ::Amazon::Runtime::SAMLImmutableCredentials* credentials);

  /// @brief Method TryGetRoleSession, addr 0x20339e8, size 0x218, virtual false, abstract: false, final false
  inline bool TryGetRoleSession(::StringW roleSessionName, ByRef<::Amazon::Runtime::SAMLImmutableCredentials*> credentials);

  /// @brief Method UnregisterRoleSession, addr 0x2033ce8, size 0x1c, virtual false, abstract: false, final false
  inline void UnregisterRoleSession(::StringW roleSessionName);

  constexpr ::Amazon::Util::Internal::SettingsManager*& __cordl_internal_get_settingsManager();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::SettingsManager*> const& __cordl_internal_get_settingsManager() const;

  constexpr void __cordl_internal_set_settingsManager(::Amazon::Util::Internal::SettingsManager* value);

  /// @brief Method .ctor, addr 0x2033808, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsAvailable, addr 0x2033800, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvailable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SAMLRoleSessionManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SAMLRoleSessionManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SAMLRoleSessionManager(SAMLRoleSessionManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SAMLRoleSessionManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SAMLRoleSessionManager(SAMLRoleSessionManager const&) = delete;

  /// @brief Field settingsManager, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::SettingsManager* ___settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager, ___settingsManager) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement::Internal
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::Internal::SAMLRoleSessionManager*, "Amazon.Runtime.CredentialManagement.Internal", "SAMLRoleSessionManager");
