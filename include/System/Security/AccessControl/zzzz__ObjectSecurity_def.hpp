#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ObjectSecurity)
// Forward declare root types
namespace System::Security::AccessControl {
class ObjectSecurity;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::ObjectSecurity);
// Type: System.Security.AccessControl::ObjectSecurity
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::ObjectSecurity*
class CORDL_TYPE ObjectSecurity : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectSecurity();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectSecurity(ObjectSecurity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectSecurity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectSecurity(ObjectSecurity const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::ObjectSecurity, 0x10>, "Size mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::ObjectSecurity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::ObjectSecurity*, "System.Security.AccessControl", "ObjectSecurity");
