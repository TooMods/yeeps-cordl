#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CancelEventArgs_def.hpp"
CORDL_MODULE_EXPORT(DoWorkEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DoWorkEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DoWorkEventArgs);
// Type: System.ComponentModel::DoWorkEventArgs
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::DoWorkEventArgs*
class CORDL_TYPE DoWorkEventArgs : public ::System::ComponentModel::CancelEventArgs {
public:
  // Declarations
  __declspec(property(get = get_Argument))::System::Object* Argument;

  __declspec(property(get = get_Result, put = set_Result))::System::Object* Result;

  /// @brief Field argument, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_argument, put = __cordl_internal_set_argument))::System::Object* argument;

  /// @brief Field result, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result))::System::Object* result;

  static inline ::System::ComponentModel::DoWorkEventArgs* New_ctor(::System::Object* argument);

  constexpr ::System::Object*& __cordl_internal_get_argument();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_argument() const;

  constexpr ::System::Object*& __cordl_internal_get_result();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_result() const;

  constexpr void __cordl_internal_set_argument(::System::Object* value);

  constexpr void __cordl_internal_set_result(::System::Object* value);

  /// @brief Method .ctor, addr 0x1b14414, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* argument);

  /// @brief Method get_Argument, addr 0x1b14438, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Argument();

  /// @brief Method get_Result, addr 0x1b14440, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_Result();

  /// @brief Method set_Result, addr 0x1b14448, size 0x8, virtual false, abstract: false, final false
  inline void set_Result(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoWorkEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoWorkEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoWorkEventArgs(DoWorkEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoWorkEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoWorkEventArgs(DoWorkEventArgs const&) = delete;

  /// @brief Field result, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___result;

  /// @brief Field argument, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___argument;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DoWorkEventArgs, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::DoWorkEventArgs, ___result) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::DoWorkEventArgs, ___argument) == 0x20, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DoWorkEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DoWorkEventArgs*, "System.ComponentModel", "DoWorkEventArgs");
