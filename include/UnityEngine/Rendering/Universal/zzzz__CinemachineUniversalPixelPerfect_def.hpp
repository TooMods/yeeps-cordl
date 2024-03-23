#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CinemachineUniversalPixelPerfect)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CinemachineUniversalPixelPerfect;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CinemachineUniversalPixelPerfect);
// Type: UnityEngine.Rendering.Universal::CinemachineUniversalPixelPerfect
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::CinemachineUniversalPixelPerfect*
class CORDL_TYPE CinemachineUniversalPixelPerfect : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::CinemachineUniversalPixelPerfect* New_ctor();

  /// @brief Method OnEnable, addr 0x1e215b8, size 0x68, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method .ctor, addr 0x1e21620, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CinemachineUniversalPixelPerfect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CinemachineUniversalPixelPerfect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CinemachineUniversalPixelPerfect(CinemachineUniversalPixelPerfect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CinemachineUniversalPixelPerfect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CinemachineUniversalPixelPerfect(CinemachineUniversalPixelPerfect const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CinemachineUniversalPixelPerfect, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CinemachineUniversalPixelPerfect);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CinemachineUniversalPixelPerfect*, "UnityEngine.Rendering.Universal", "CinemachineUniversalPixelPerfect");
