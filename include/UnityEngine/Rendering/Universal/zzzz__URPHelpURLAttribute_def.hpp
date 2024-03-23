#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CoreRPHelpURLAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(URPHelpURLAttribute)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class URPHelpURLAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::URPHelpURLAttribute);
// Type: UnityEngine.Rendering.Universal::URPHelpURLAttribute
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::URPHelpURLAttribute*
class CORDL_TYPE URPHelpURLAttribute : public ::UnityEngine::Rendering::CoreRPHelpURLAttribute {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::URPHelpURLAttribute* New_ctor(::StringW pageName);

  /// @brief Method .ctor, addr 0x2e27078, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::StringW pageName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPHelpURLAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPHelpURLAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPHelpURLAttribute(URPHelpURLAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPHelpURLAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPHelpURLAttribute(URPHelpURLAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPHelpURLAttribute, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::URPHelpURLAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPHelpURLAttribute*, "UnityEngine.Rendering.Universal", "URPHelpURLAttribute");
