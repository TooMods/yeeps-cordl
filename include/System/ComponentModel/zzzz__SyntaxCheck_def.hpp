#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SyntaxCheck)
// Forward declare root types
namespace System::ComponentModel {
class SyntaxCheck;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::SyntaxCheck);
// Type: System.ComponentModel::SyntaxCheck
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::SyntaxCheck*
class CORDL_TYPE SyntaxCheck : public ::System::Object {
public:
  // Declarations
  /// @brief Method CheckMachineName, addr 0x1b0d0d0, size 0x94, virtual false, abstract: false, final false
  static inline bool CheckMachineName(::StringW value);

  /// @brief Method CheckPath, addr 0x1b0d164, size 0xa4, virtual false, abstract: false, final false
  static inline bool CheckPath(::StringW value);

  /// @brief Method CheckRootedPath, addr 0x1b0d208, size 0xb0, virtual false, abstract: false, final false
  static inline bool CheckRootedPath(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyntaxCheck();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SyntaxCheck", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyntaxCheck(SyntaxCheck&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyntaxCheck", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyntaxCheck(SyntaxCheck const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::SyntaxCheck, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::SyntaxCheck);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SyntaxCheck*, "System.ComponentModel", "SyntaxCheck");
