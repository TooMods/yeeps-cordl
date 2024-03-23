#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPersistenceManager)
namespace Amazon::Runtime::Internal::Settings {
class SettingsCollection;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Settings {
class IPersistenceManager;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::IPersistenceManager);
// Type: Amazon.Runtime.Internal.Settings::IPersistenceManager
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Settings::IPersistenceManager*
class CORDL_TYPE IPersistenceManager {
public:
  // Declarations
  /// @brief Method GetSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* GetSettings(::StringW type);

  /// @brief Method SaveSettings, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SaveSettings(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings);

  // Ctor Parameters [CppParam { name: "", ty: "IPersistenceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPersistenceManager(IPersistenceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPersistenceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPersistenceManager(IPersistenceManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Settings
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::IPersistenceManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::IPersistenceManager*, "Amazon.Runtime.Internal.Settings", "IPersistenceManager");
