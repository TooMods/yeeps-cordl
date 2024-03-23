#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__ObjectSecurity_def.hpp"
CORDL_MODULE_EXPORT(CommonObjectSecurity)
// Forward declare root types
namespace System::Security::AccessControl {
class CommonObjectSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::CommonObjectSecurity);
// Type: System.Security.AccessControl::CommonObjectSecurity
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::CommonObjectSecurity*
class CORDL_TYPE CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonObjectSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonObjectSecurity(CommonObjectSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonObjectSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonObjectSecurity(CommonObjectSecurity const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::CommonObjectSecurity, 0x10>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::CommonObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::CommonObjectSecurity*, "System.Security.AccessControl", "CommonObjectSecurity");
