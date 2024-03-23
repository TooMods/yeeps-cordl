#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(RefreshEventArgs)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RefreshEventArgs);
// Type: System.ComponentModel::RefreshEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::RefreshEventArgs*
class CORDL_TYPE RefreshEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_ComponentChanged))::System::Object* ComponentChanged;

  __declspec(property(get = get_TypeChanged))::System::Type* TypeChanged;

  /// @brief Field <ComponentChanged>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ComponentChanged_k__BackingField, put = __cordl_internal_set__ComponentChanged_k__BackingField))::System::Object* _ComponentChanged_k__BackingField;

  /// @brief Field <TypeChanged>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__TypeChanged_k__BackingField, put = __cordl_internal_set__TypeChanged_k__BackingField))::System::Type* _TypeChanged_k__BackingField;

  static inline ::System::ComponentModel::RefreshEventArgs* New_ctor(::System::Object* componentChanged);

  static inline ::System::ComponentModel::RefreshEventArgs* New_ctor(::System::Type* typeChanged);

  constexpr ::System::Object*& __cordl_internal_get__ComponentChanged_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__ComponentChanged_k__BackingField() const;

  constexpr ::System::Type*& __cordl_internal_get__TypeChanged_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__TypeChanged_k__BackingField() const;

  constexpr void __cordl_internal_set__ComponentChanged_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__TypeChanged_k__BackingField(::System::Type* value);

  /// @brief Method .ctor, addr 0x1b0c510, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* componentChanged);

  /// @brief Method .ctor, addr 0x1b0c594, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* typeChanged);

  /// @brief Method get_ComponentChanged, addr 0x1b0c600, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_ComponentChanged();

  /// @brief Method get_TypeChanged, addr 0x1b0c608, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_TypeChanged();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RefreshEventArgs(RefreshEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RefreshEventArgs(RefreshEventArgs const&) = delete;

  /// @brief Field <ComponentChanged>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____ComponentChanged_k__BackingField;

  /// @brief Field <TypeChanged>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____TypeChanged_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RefreshEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::RefreshEventArgs, ____ComponentChanged_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::RefreshEventArgs, ____TypeChanged_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RefreshEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventArgs*, "System.ComponentModel", "RefreshEventArgs");
