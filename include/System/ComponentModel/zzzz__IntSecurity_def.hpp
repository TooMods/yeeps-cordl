#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IntSecurity)
// Forward declare root types
namespace System::ComponentModel {
class IntSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::IntSecurity);
// Type: System.ComponentModel::IntSecurity
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::IntSecurity*
class CORDL_TYPE IntSecurity : public ::System::Object {
public:
  // Declarations
  /// @brief Method UnsafeGetFullPath, addr 0x1b16060, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW UnsafeGetFullPath(::StringW fileName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntSecurity(IntSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntSecurity(IntSecurity const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::IntSecurity, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::IntSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::IntSecurity*, "System.ComponentModel", "IntSecurity");
