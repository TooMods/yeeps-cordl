#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(CancelEventArgs)
// Forward declare root types
namespace System::ComponentModel {
class CancelEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::CancelEventArgs);
// Type: System.ComponentModel::CancelEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 17, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::CancelEventArgs*
class CORDL_TYPE CancelEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Cancel, put = set_Cancel)) bool Cancel;

  /// @brief Field <Cancel>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Cancel_k__BackingField, put = __cordl_internal_set__Cancel_k__BackingField)) bool _Cancel_k__BackingField;

  static inline ::System::ComponentModel::CancelEventArgs* New_ctor();

  static inline ::System::ComponentModel::CancelEventArgs* New_ctor(bool cancel);

  constexpr bool const& __cordl_internal_get__Cancel_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Cancel_k__BackingField();

  constexpr void __cordl_internal_set__Cancel_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x1b0f6f0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1b0f748, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(bool cancel);

  /// @brief Method get_Cancel, addr 0x1b0f6dc, size 0x8, virtual false, abstract: false, final false
  inline bool get_Cancel();

  /// @brief Method set_Cancel, addr 0x1b0f6e4, size 0xc, virtual false, abstract: false, final false
  inline void set_Cancel(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CancelEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CancelEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CancelEventArgs(CancelEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CancelEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CancelEventArgs(CancelEventArgs const&) = delete;

  /// @brief Field <Cancel>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Cancel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::CancelEventArgs, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::CancelEventArgs, ____Cancel_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::CancelEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::CancelEventArgs*, "System.ComponentModel", "CancelEventArgs");
