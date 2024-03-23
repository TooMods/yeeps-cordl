#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DocumentationInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Documentation)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Documentation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Documentation);
// Type: UnityEngine.Rendering.Universal::Documentation
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Documentation*
class CORDL_TYPE Documentation : public ::UnityEngine::Rendering::DocumentationInfo {
public:
  // Declarations
  /// @brief Method GetPageLink, addr 0x2e270d4, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetPageLink(::StringW pageName);

  static inline ::UnityEngine::Rendering::Universal::Documentation* New_ctor();

  /// @brief Method .ctor, addr 0x2e27120, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Documentation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Documentation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Documentation(Documentation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Documentation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Documentation(Documentation const&) = delete;

  /// @brief Field packageName offset 0xffffffff size 0x8
  static constexpr ::ConstString packageName{ u"com.unity.render-pipelines.universal" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Documentation, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Documentation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Documentation*, "UnityEngine.Rendering.Universal", "Documentation");
