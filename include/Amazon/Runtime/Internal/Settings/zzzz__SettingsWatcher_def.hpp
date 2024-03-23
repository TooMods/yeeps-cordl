#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SettingsWatcher)
namespace Amazon::Runtime::Internal::Settings {
class SettingsCollection;
}
namespace System {
class EventHandler;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Settings {
class SettingsWatcher;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Settings::SettingsWatcher);
// Type: Amazon.Runtime.Internal.Settings::SettingsWatcher
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Settings {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Settings::SettingsWatcher*
class CORDL_TYPE SettingsWatcher : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Enable, put = set_Enable)) bool Enable;

  /// @brief Field SettingsChanged, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SettingsChanged, put = __cordl_internal_set_SettingsChanged))::System::EventHandler* SettingsChanged;

  /// @brief Field <Enable>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__Enable_k__BackingField, put = __cordl_internal_set__Enable_k__BackingField)) bool _Enable_k__BackingField;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::StringW type;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x2452c98, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2452d04, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetSettings, addr 0x2452a48, size 0x104, virtual false, abstract: false, final false
  inline ::Amazon::Runtime::Internal::Settings::SettingsCollection* GetSettings();

  static inline ::Amazon::Runtime::Internal::Settings::SettingsWatcher* New_ctor();

  static inline ::Amazon::Runtime::Internal::Settings::SettingsWatcher* New_ctor(::StringW filePath, ::StringW type);

  constexpr ::System::EventHandler*& __cordl_internal_get_SettingsChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::EventHandler*> const& __cordl_internal_get_SettingsChanged() const;

  constexpr bool const& __cordl_internal_get__Enable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Enable_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_SettingsChanged(::System::EventHandler* value);

  constexpr void __cordl_internal_set__Enable_k__BackingField(bool value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x2452a00, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2451b5c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW filePath, ::StringW type);

  /// @brief Method add_SettingsChanged, addr 0x2452b60, size 0x9c, virtual false, abstract: false, final false
  inline void add_SettingsChanged(::System::EventHandler* value);

  /// @brief Method get_Enable, addr 0x2452b4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_Enable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method remove_SettingsChanged, addr 0x2452bfc, size 0x9c, virtual false, abstract: false, final false
  inline void remove_SettingsChanged(::System::EventHandler* value);

  /// @brief Method set_Enable, addr 0x2452b54, size 0xc, virtual false, abstract: false, final false
  inline void set_Enable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SettingsWatcher();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SettingsWatcher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SettingsWatcher(SettingsWatcher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SettingsWatcher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SettingsWatcher(SettingsWatcher const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field <Enable>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____Enable_k__BackingField;

  /// @brief Field SettingsChanged, offset: 0x20, size: 0x8, def value: None
  ::System::EventHandler* ___SettingsChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Settings::SettingsWatcher, 0x28>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::SettingsWatcher, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::SettingsWatcher, ____Enable_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Settings::SettingsWatcher, ___SettingsChanged) == 0x20, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Settings
NEED_NO_BOX(::Amazon::Runtime::Internal::Settings::SettingsWatcher);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Settings::SettingsWatcher*, "Amazon.Runtime.Internal.Settings", "SettingsWatcher");
