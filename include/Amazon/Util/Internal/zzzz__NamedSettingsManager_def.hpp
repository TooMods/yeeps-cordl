#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NamedSettingsManager)
namespace Amazon::Util::Internal {
class SettingsManager;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace Amazon::Util::Internal {
class NamedSettingsManager;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::NamedSettingsManager);
// Type: Amazon.Util.Internal::NamedSettingsManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Util::Internal {
// Is value type: false
// CS Name: ::Amazon.Util.Internal::NamedSettingsManager*
class CORDL_TYPE NamedSettingsManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field settingsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_settingsManager, put = __cordl_internal_set_settingsManager))::Amazon::Util::Internal::SettingsManager* settingsManager;

  /// @brief Method CopyObject, addr 0x2213168, size 0x160, virtual false, abstract: false, final false
  inline void CopyObject(::StringW fromDisplayName, ::StringW toDisplayName, bool force);

  /// @brief Method ListObjectNames, addr 0x22132c8, size 0x1054, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* ListObjectNames();

  static inline ::Amazon::Util::Internal::NamedSettingsManager* New_ctor(::StringW settingsType);

  /// @brief Method RegisterObject, addr 0x2212d00, size 0x188, virtual false, abstract: false, final false
  inline ::StringW RegisterObject(::StringW displayName, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties);

  /// @brief Method RenameObject, addr 0x2212fa8, size 0x1c0, virtual false, abstract: false, final false
  inline void RenameObject(::StringW oldDisplayName, ::StringW newDisplayName, bool force);

  /// @brief Method TryGetObject, addr 0x2212e88, size 0x20, virtual false, abstract: false, final false
  inline bool TryGetObject(::StringW displayName, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  /// @brief Method TryGetObject, addr 0x2212ea8, size 0x74, virtual false, abstract: false, final false
  inline bool TryGetObject(::StringW displayName, ByRef<::StringW> uniqueKey, ByRef<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> properties);

  /// @brief Method UnregisterObject, addr 0x2212f1c, size 0x8c, virtual false, abstract: false, final false
  inline void UnregisterObject(::StringW displayName);

  constexpr ::Amazon::Util::Internal::SettingsManager*& __cordl_internal_get_settingsManager();

  constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::SettingsManager*> const& __cordl_internal_get_settingsManager() const;

  constexpr void __cordl_internal_set_settingsManager(::Amazon::Util::Internal::SettingsManager* value);

  /// @brief Method .ctor, addr 0x2212c84, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW settingsType);

  /// @brief Method get_IsAvailable, addr 0x2212c7c, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsAvailable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedSettingsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedSettingsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedSettingsManager(NamedSettingsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedSettingsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedSettingsManager(NamedSettingsManager const&) = delete;

  /// @brief Field settingsManager, offset: 0x10, size: 0x8, def value: None
  ::Amazon::Util::Internal::SettingsManager* ___settingsManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::NamedSettingsManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::Amazon::Util::Internal::NamedSettingsManager, ___settingsManager) == 0x10, "Offset mismatch!");

} // namespace Amazon::Util::Internal
NEED_NO_BOX(::Amazon::Util::Internal::NamedSettingsManager);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::NamedSettingsManager*, "Amazon.Util.Internal", "NamedSettingsManager");
