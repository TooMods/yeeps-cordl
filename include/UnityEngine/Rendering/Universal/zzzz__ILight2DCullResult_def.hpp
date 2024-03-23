#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ILight2DCullResult)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
class Light2D;
}
namespace UnityEngine::Rendering::Universal {
struct LightStats;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ILight2DCullResult;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ILight2DCullResult);
// Type: UnityEngine.Rendering.Universal::ILight2DCullResult
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ILight2DCullResult*
class CORDL_TYPE ILight2DCullResult {
public:
  // Declarations
  __declspec(property(get = get_visibleLights))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* visibleLights;

  /// @brief Method GetLightStatsByLayer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::Universal::LightStats GetLightStatsByLayer(int32_t layer);

  /// @brief Method IsSceneLit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool IsSceneLit();

  /// @brief Method get_visibleLights, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::Light2D>>* get_visibleLights();

  // Ctor Parameters [CppParam { name: "", ty: "ILight2DCullResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILight2DCullResult(ILight2DCullResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILight2DCullResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILight2DCullResult(ILight2DCullResult const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ILight2DCullResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ILight2DCullResult*, "UnityEngine.Rendering.Universal", "ILight2DCullResult");
