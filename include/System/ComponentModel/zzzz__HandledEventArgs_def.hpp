#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(HandledEventArgs)
// Forward declare root types
namespace System::ComponentModel {
class HandledEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::HandledEventArgs);
// Type: System.ComponentModel::HandledEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::HandledEventArgs*
class CORDL_TYPE HandledEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Handled, put = set_Handled)) bool Handled;

  /// @brief Field <Handled>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Handled_k__BackingField, put = __cordl_internal_set__Handled_k__BackingField)) bool _Handled_k__BackingField;

  static inline ::System::ComponentModel::HandledEventArgs* New_ctor();

  static inline ::System::ComponentModel::HandledEventArgs* New_ctor(bool defaultHandledValue);

  constexpr bool const& __cordl_internal_get__Handled_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Handled_k__BackingField();

  constexpr void __cordl_internal_set__Handled_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1af928c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1af9294, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool defaultHandledValue);

  /// @brief Method get_Handled, addr 0x1af9304, size 0x8, virtual false, abstract: false, final false
  inline bool get_Handled();

  /// @brief Method set_Handled, addr 0x1af930c, size 0xc, virtual false, abstract: false, final false
  inline void set_Handled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandledEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandledEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandledEventArgs(HandledEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandledEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandledEventArgs(HandledEventArgs const&) = delete;

  /// @brief Field <Handled>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Handled_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::HandledEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::HandledEventArgs, ____Handled_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::HandledEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::HandledEventArgs*, "System.ComponentModel", "HandledEventArgs");
