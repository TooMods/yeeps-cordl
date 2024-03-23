#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SAMLEndpointManager)
namespace Amazon::Runtime::CredentialManagement {
class SAMLEndpoint;
}
namespace Amazon::Util::Internal {
class NamedSettingsManager;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Runtime::CredentialManagement {
class SAMLEndpointManager;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::CredentialManagement::SAMLEndpointManager);
// Type: Amazon.Runtime.CredentialManagement::SAMLEndpointManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::CredentialManagement {
// Is value type: false
// CS Name: ::Amazon.Runtime.CredentialManagement::SAMLEndpointManager*
class CORDL_TYPE SAMLEndpointManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field settingsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_settingsManager, put = __cordl_internal_set_settingsManager))::Amazon::Util::Internal::NamedSettingsManager* settingsManager;

  /// @brief Method GetEndpoint, addr 0x2028efc, size 0x310, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::CredentialManagement::SAMLEndpoint* GetEndpoint(::StringW endpointName);

  /// @brief Method ListEndpointNames, addr 0x202f164, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* ListEndpointNames();

  /// @brief Method ListEndpoints, addr 0x202f180, size 0x210, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*>* ListEndpoints();

  static inline ::Amazon::Runtime::CredentialManagement::SAMLEndpointManager* New_ctor();

  /// @brief Method RegisterEndpoint, addr 0x202ee68, size 0x154, virtual false, abstract: false, final false
  inline void RegisterEndpoint(::Amazon::Runtime::CredentialManagement::SAMLEndpoint* samlEndpoint);

  /// @brief Method TryGetEndpoint, addr 0x202efbc, size 0x18c, virtual false, abstract: false, final false
  inline bool TryGetEndpoint(::StringW endpointName, ByRef<::Amazon::Runtime::CredentialManagement::SAMLEndpoint*> samlEndpoint);

  /// @brief Method UnregisterEndpoint, addr 0x202f148, size 0x1c, virtual false, abstract: false, final false
  inline void UnregisterEndpoint(::StringW endpointName);

  constexpr ::Amazon::Util::Internal::NamedSettingsManager*& __cordl_internal_get_settingsManager();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::NamedSettingsManager*> const& __cordl_internal_get_settingsManager() const;

  constexpr void __cordl_internal_set_settingsManager(::Amazon::Util::Internal::NamedSettingsManager* value);

  /// @brief Method .ctor, addr 0x2028e78, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsAvailable, addr 0x202ee60, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvailable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SAMLEndpointManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SAMLEndpointManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SAMLEndpointManager(SAMLEndpointManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SAMLEndpointManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SAMLEndpointManager(SAMLEndpointManager const&) = delete;

  /// @brief Field settingsManager, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::NamedSettingsManager* ___settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::CredentialManagement::SAMLEndpointManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::CredentialManagement::SAMLEndpointManager, ___settingsManager) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::CredentialManagement
NEED_NO_BOX(::Amazon::Runtime::CredentialManagement::SAMLEndpointManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::CredentialManagement::SAMLEndpointManager*, "Amazon.Runtime.CredentialManagement", "SAMLEndpointManager");
