#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(RequireImplementorsAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class RequireImplementorsAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::RequireImplementorsAttribute);
// Type: UnityEngine.Scripting::RequireImplementorsAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Scripting {
// Is value type: false
// CS Name: ::UnityEngine.Scripting::RequireImplementorsAttribute*
class CORDL_TYPE RequireImplementorsAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::UnityEngine::Scripting::RequireImplementorsAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x2a8b338, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RequireImplementorsAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RequireImplementorsAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RequireImplementorsAttribute(RequireImplementorsAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RequireImplementorsAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RequireImplementorsAttribute(RequireImplementorsAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::RequireImplementorsAttribute, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::RequireImplementorsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::RequireImplementorsAttribute*, "UnityEngine.Scripting", "RequireImplementorsAttribute");
