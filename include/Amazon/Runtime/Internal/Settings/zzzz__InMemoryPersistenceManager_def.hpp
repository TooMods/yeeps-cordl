#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InMemoryPersistenceManager)
namespace Amazon::Runtime::Internal::Settings {
class IPersistenceManager;
}
namespace Amazon::Runtime::Internal::Settings {
class SettingsCollection;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Settings {
class InMemoryPersistenceManager;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager);
// Type: Amazon.Runtime.Internal.Settings::InMemoryPersistenceManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Settings::InMemoryPersistenceManager*
class CORDL_TYPE InMemoryPersistenceManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _settingsDictionary, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get__settingsDictionary,
               put = __cordl_internal_set__settingsDictionary))::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>* _settingsDictionary;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
  constexpr operator ::Amazon::Runtime::Internal::Settings::IPersistenceManager*() noexcept;

  /// @brief Method GetSettings, addr 0x2450330, size 0xbc, virtual true, abstract: false, final true
  inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* GetSettings(::StringW type);

  static inline ::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager* New_ctor();

  /// @brief Method SaveSettings, addr 0x2450474, size 0x68, virtual true, abstract: false, final true
  inline void SaveSettings(::StringW type, ::Amazon::Runtime::Internal::Settings::SettingsCollection* settings);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>*& __cordl_internal_get__settingsDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>*> const&
  __cordl_internal_get__settingsDictionary() const;

  constexpr void __cordl_internal_set__settingsDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>* value);

  /// @brief Method .ctor, addr 0x24504dc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Amazon::Runtime::Internal::Settings::IPersistenceManager"
  constexpr ::Amazon::Runtime::Internal::Settings::IPersistenceManager* i___Amazon__Runtime__Internal__Settings__IPersistenceManager() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InMemoryPersistenceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InMemoryPersistenceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InMemoryPersistenceManager(InMemoryPersistenceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InMemoryPersistenceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InMemoryPersistenceManager(InMemoryPersistenceManager const&) = delete;

  /// @brief Field _settingsDictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::Settings::SettingsCollection*>* ____settingsDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager, ____settingsDictionary) == 0x10, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::InMemoryPersistenceManager*, "Amazon.Runtime.Internal.Settings", "InMemoryPersistenceManager");
