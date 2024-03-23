#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__AsyncCompletedEventArgs_def.hpp"
CORDL_MODULE_EXPORT(RunWorkerCompletedEventArgs)
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class RunWorkerCompletedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RunWorkerCompletedEventArgs);
// Type: System.ComponentModel::RunWorkerCompletedEventArgs
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::RunWorkerCompletedEventArgs*
class CORDL_TYPE RunWorkerCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs {
public:
  // Declarations
  __declspec(property(get = get_Result))::System::Object* Result;

  __declspec(property(get = get_UserState))::System::Object* UserState;

  /// @brief Field result, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result))::System::Object* result;

  static inline ::System::ComponentModel::RunWorkerCompletedEventArgs* New_ctor(::System::Object* result, ::System::Exception* error, bool cancelled);

  constexpr ::System::Object*& __cordl_internal_get_result();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_result() const;

  constexpr void __cordl_internal_set_result(::System::Object* value);

  /// @brief Method .ctor, addr 0x18d3e14, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* result, ::System::Exception* error, bool cancelled);

  /// @brief Method get_Result, addr 0x18d3e4c, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Object* get_Result();

  /// @brief Method get_UserState, addr 0x18d3e68, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_UserState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RunWorkerCompletedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RunWorkerCompletedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RunWorkerCompletedEventArgs(RunWorkerCompletedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RunWorkerCompletedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RunWorkerCompletedEventArgs(RunWorkerCompletedEventArgs const&) = delete;

  /// @brief Field result, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___result;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RunWorkerCompletedEventArgs, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::RunWorkerCompletedEventArgs, ___result) == 0x28, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RunWorkerCompletedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RunWorkerCompletedEventArgs*, "System.ComponentModel", "RunWorkerCompletedEventArgs");
