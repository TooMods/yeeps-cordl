#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderPassEvent)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderPassEvent);
// Type: UnityEngine.Rendering.Universal::RenderPassEvent
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal::RenderPassEvent
struct CORDL_TYPE RenderPassEvent {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderPassEvent_Unwrapped
  enum struct __RenderPassEvent_Unwrapped : int32_t {
    __E_BeforeRendering = static_cast<int32_t>(0x0),
    __E_BeforeRenderingShadows = static_cast<int32_t>(0x32),
    __E_AfterRenderingShadows = static_cast<int32_t>(0x64),
    __E_BeforeRenderingPrePasses = static_cast<int32_t>(0x96),
    __E_BeforeRenderingPrepasses = static_cast<int32_t>(0x97),
    __E_AfterRenderingPrePasses = static_cast<int32_t>(0xc8),
    __E_BeforeRenderingGbuffer = static_cast<int32_t>(0xd2),
    __E_AfterRenderingGbuffer = static_cast<int32_t>(0xdc),
    __E_BeforeRenderingDeferredLights = static_cast<int32_t>(0xe6),
    __E_AfterRenderingDeferredLights = static_cast<int32_t>(0xf0),
    __E_BeforeRenderingOpaques = static_cast<int32_t>(0xfa),
    __E_AfterRenderingOpaques = static_cast<int32_t>(0x12c),
    __E_BeforeRenderingSkybox = static_cast<int32_t>(0x15e),
    __E_AfterRenderingSkybox = static_cast<int32_t>(0x190),
    __E_BeforeRenderingTransparents = static_cast<int32_t>(0x1c2),
    __E_AfterRenderingTransparents = static_cast<int32_t>(0x1f4),
    __E_BeforeRenderingPostProcessing = static_cast<int32_t>(0x226),
    __E_AfterRenderingPostProcessing = static_cast<int32_t>(0x258),
    __E_AfterRendering = static_cast<int32_t>(0x3e8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderPassEvent_Unwrapped() const noexcept {
    return static_cast<__RenderPassEvent_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPassEvent();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderPassEvent(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AfterRendering value: static_cast<int32_t>(0x3e8)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRendering;

  /// @brief Field AfterRenderingDeferredLights value: static_cast<int32_t>(0xf0)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingDeferredLights;

  /// @brief Field AfterRenderingGbuffer value: static_cast<int32_t>(0xdc)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingGbuffer;

  /// @brief Field AfterRenderingOpaques value: static_cast<int32_t>(0x12c)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingOpaques;

  /// @brief Field AfterRenderingPostProcessing value: static_cast<int32_t>(0x258)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingPostProcessing;

  /// @brief Field AfterRenderingPrePasses value: static_cast<int32_t>(0xc8)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingPrePasses;

  /// @brief Field AfterRenderingShadows value: static_cast<int32_t>(0x64)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingShadows;

  /// @brief Field AfterRenderingSkybox value: static_cast<int32_t>(0x190)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingSkybox;

  /// @brief Field AfterRenderingTransparents value: static_cast<int32_t>(0x1f4)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const AfterRenderingTransparents;

  /// @brief Field BeforeRendering value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRendering;

  /// @brief Field BeforeRenderingDeferredLights value: static_cast<int32_t>(0xe6)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingDeferredLights;

  /// @brief Field BeforeRenderingGbuffer value: static_cast<int32_t>(0xd2)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingGbuffer;

  /// @brief Field BeforeRenderingOpaques value: static_cast<int32_t>(0xfa)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingOpaques;

  /// @brief Field BeforeRenderingPostProcessing value: static_cast<int32_t>(0x226)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingPostProcessing;

  /// @brief Field BeforeRenderingPrePasses value: static_cast<int32_t>(0x96)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingPrePasses;

  /// @brief Field BeforeRenderingPrepasses value: static_cast<int32_t>(0x97)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingPrepasses;

  /// @brief Field BeforeRenderingShadows value: static_cast<int32_t>(0x32)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingShadows;

  /// @brief Field BeforeRenderingSkybox value: static_cast<int32_t>(0x15e)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingSkybox;

  /// @brief Field BeforeRenderingTransparents value: static_cast<int32_t>(0x1c2)
  static ::UnityEngine::Rendering::Universal::RenderPassEvent const BeforeRenderingTransparents;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderPassEvent, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderPassEvent, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderPassEvent, "UnityEngine.Rendering.Universal", "RenderPassEvent");
