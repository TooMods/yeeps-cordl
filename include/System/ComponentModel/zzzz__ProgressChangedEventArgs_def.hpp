#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressChangedEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class ProgressChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ProgressChangedEventArgs);
// Type: System.ComponentModel::ProgressChangedEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::ProgressChangedEventArgs*
class CORDL_TYPE ProgressChangedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_ProgressPercentage)) int32_t ProgressPercentage;

  __declspec(property(get = get_UserState))::System::Object* UserState;

  /// @brief Field progressPercentage, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_progressPercentage, put = __cordl_internal_set_progressPercentage)) int32_t progressPercentage;

  /// @brief Field userState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userState, put = __cordl_internal_set_userState))::System::Object* userState;

  static inline ::System::ComponentModel::ProgressChangedEventArgs* New_ctor(int32_t progressPercentage, ::System::Object* userState);

  constexpr int32_t const& __cordl_internal_get_progressPercentage() const;

  constexpr int32_t& __cordl_internal_get_progressPercentage();

  constexpr ::System::Object*& __cordl_internal_get_userState();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_userState() const;

  constexpr void __cordl_internal_set_progressPercentage(int32_t value);

  constexpr void __cordl_internal_set_userState(::System::Object* value);

  /// @brief Method .ctor, addr 0x1b17a18, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t progressPercentage, ::System::Object* userState);

  /// @brief Method get_ProgressPercentage, addr 0x1b17a8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ProgressPercentage();

  /// @brief Method get_UserState, addr 0x1b17a94, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_UserState();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProgressChangedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProgressChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProgressChangedEventArgs(ProgressChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProgressChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProgressChangedEventArgs(ProgressChangedEventArgs const&) = delete;

  /// @brief Field progressPercentage, offset: 0x10, size: 0x4, def value: None
  int32_t ___progressPercentage;

  /// @brief Field userState, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___userState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::ProgressChangedEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::ProgressChangedEventArgs, ___progressPercentage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::ProgressChangedEventArgs, ___userState) == 0x18, "Offset mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ProgressChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ProgressChangedEventArgs*, "System.ComponentModel", "ProgressChangedEventArgs");
