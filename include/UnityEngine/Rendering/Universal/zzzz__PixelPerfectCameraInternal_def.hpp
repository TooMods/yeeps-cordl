#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PixelPerfectCameraInternal)
namespace UnityEngine::Experimental::Rendering::Universal {
class PixelPerfectCamera;
}
namespace UnityEngine::Rendering::Universal {
class IPixelPerfectCamera;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PixelPerfectCameraInternal;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal);
// Type: UnityEngine.Rendering.Universal::PixelPerfectCameraInternal
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::PixelPerfectCameraInternal*
class CORDL_TYPE PixelPerfectCameraInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field cinemachineVCamZoom, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_cinemachineVCamZoom, put = __cordl_internal_set_cinemachineVCamZoom)) int32_t cinemachineVCamZoom;

  /// @brief Field cropFrameXAndY, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get_cropFrameXAndY, put = __cordl_internal_set_cropFrameXAndY)) bool cropFrameXAndY;

  /// @brief Field cropFrameXOrY, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get_cropFrameXOrY, put = __cordl_internal_set_cropFrameXOrY)) bool cropFrameXOrY;

  /// @brief Field hasPostProcessLayer, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPostProcessLayer, put = __cordl_internal_set_hasPostProcessLayer)) bool hasPostProcessLayer;

  /// @brief Field m_Component, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Component, put = __cordl_internal_set_m_Component))::UnityEngine::Rendering::Universal::IPixelPerfectCamera* m_Component;

  /// @brief Field m_SerializableComponent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SerializableComponent,
                      put = __cordl_internal_set_m_SerializableComponent))::UnityW<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera> m_SerializableComponent;

  /// @brief Field offscreenRTHeight, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_offscreenRTHeight, put = __cordl_internal_set_offscreenRTHeight)) int32_t offscreenRTHeight;

  /// @brief Field offscreenRTWidth, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_offscreenRTWidth, put = __cordl_internal_set_offscreenRTWidth)) int32_t offscreenRTWidth;

  /// @brief Field originalOrthoSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_originalOrthoSize, put = __cordl_internal_set_originalOrthoSize)) float_t originalOrthoSize;

  /// @brief Field orthoSize, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_orthoSize, put = __cordl_internal_set_orthoSize)) float_t orthoSize;

  /// @brief Field pixelRect, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_pixelRect, put = __cordl_internal_set_pixelRect))::UnityEngine::Rect pixelRect;

  /// @brief Field unitsPerPixel, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_unitsPerPixel, put = __cordl_internal_set_unitsPerPixel)) float_t unitsPerPixel;

  /// @brief Field useOffscreenRT, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_useOffscreenRT, put = __cordl_internal_set_useOffscreenRT)) bool useOffscreenRT;

  /// @brief Field useStretchFill, offset 0x27, size 0x1
  __declspec(property(get = __cordl_internal_get_useStretchFill, put = __cordl_internal_set_useStretchFill)) bool useStretchFill;

  /// @brief Field zoom, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_zoom, put = __cordl_internal_set_zoom)) int32_t zoom;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method CalculateCameraProperties, addr 0x2f3fc60, size 0x6b4, virtual false, abstract: false, final false
  inline void CalculateCameraProperties(int32_t screenWidth, int32_t screenHeight);

  /// @brief Method CalculateFinalBlitPixelRect, addr 0x2f40314, size 0x374, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect CalculateFinalBlitPixelRect(int32_t screenWidth, int32_t screenHeight);

  /// @brief Method CorrectCinemachineOrthoSize, addr 0x2f40688, size 0x424, virtual false, abstract: false, final false
  inline float_t CorrectCinemachineOrthoSize(float_t targetOrthoSize);

  static inline ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal* New_ctor(::UnityEngine::Rendering::Universal::IPixelPerfectCamera* component);

  /// @brief Method OnAfterDeserialize, addr 0x2f3fbf0, size 0x70, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x2f3fb68, size 0x88, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  constexpr int32_t const& __cordl_internal_get_cinemachineVCamZoom() const;

  constexpr int32_t& __cordl_internal_get_cinemachineVCamZoom();

  constexpr bool const& __cordl_internal_get_cropFrameXAndY() const;

  constexpr bool& __cordl_internal_get_cropFrameXAndY();

  constexpr bool const& __cordl_internal_get_cropFrameXOrY() const;

  constexpr bool& __cordl_internal_get_cropFrameXOrY();

  constexpr bool const& __cordl_internal_get_hasPostProcessLayer() const;

  constexpr bool& __cordl_internal_get_hasPostProcessLayer();

  constexpr ::UnityEngine::Rendering::Universal::IPixelPerfectCamera*& __cordl_internal_get_m_Component();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::IPixelPerfectCamera*> const& __cordl_internal_get_m_Component() const;

  constexpr ::UnityW<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera> const& __cordl_internal_get_m_SerializableComponent() const;

  constexpr ::UnityW<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera>& __cordl_internal_get_m_SerializableComponent();

  constexpr int32_t const& __cordl_internal_get_offscreenRTHeight() const;

  constexpr int32_t& __cordl_internal_get_offscreenRTHeight();

  constexpr int32_t const& __cordl_internal_get_offscreenRTWidth() const;

  constexpr int32_t& __cordl_internal_get_offscreenRTWidth();

  constexpr float_t const& __cordl_internal_get_originalOrthoSize() const;

  constexpr float_t& __cordl_internal_get_originalOrthoSize();

  constexpr float_t const& __cordl_internal_get_orthoSize() const;

  constexpr float_t& __cordl_internal_get_orthoSize();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_pixelRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_pixelRect();

  constexpr float_t const& __cordl_internal_get_unitsPerPixel() const;

  constexpr float_t& __cordl_internal_get_unitsPerPixel();

  constexpr bool const& __cordl_internal_get_useOffscreenRT() const;

  constexpr bool& __cordl_internal_get_useOffscreenRT();

  constexpr bool const& __cordl_internal_get_useStretchFill() const;

  constexpr bool& __cordl_internal_get_useStretchFill();

  constexpr int32_t const& __cordl_internal_get_zoom() const;

  constexpr int32_t& __cordl_internal_get_zoom();

  constexpr void __cordl_internal_set_cinemachineVCamZoom(int32_t value);

  constexpr void __cordl_internal_set_cropFrameXAndY(bool value);

  constexpr void __cordl_internal_set_cropFrameXOrY(bool value);

  constexpr void __cordl_internal_set_hasPostProcessLayer(bool value);

  constexpr void __cordl_internal_set_m_Component(::UnityEngine::Rendering::Universal::IPixelPerfectCamera* value);

  constexpr void __cordl_internal_set_m_SerializableComponent(::UnityW<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera> value);

  constexpr void __cordl_internal_set_offscreenRTHeight(int32_t value);

  constexpr void __cordl_internal_set_offscreenRTWidth(int32_t value);

  constexpr void __cordl_internal_set_originalOrthoSize(float_t value);

  constexpr void __cordl_internal_set_orthoSize(float_t value);

  constexpr void __cordl_internal_set_pixelRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_unitsPerPixel(float_t value);

  constexpr void __cordl_internal_set_useOffscreenRT(bool value);

  constexpr void __cordl_internal_set_useStretchFill(bool value);

  constexpr void __cordl_internal_set_zoom(int32_t value);

  /// @brief Method .ctor, addr 0x2f3fb18, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::IPixelPerfectCamera* component);

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PixelPerfectCameraInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectCameraInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PixelPerfectCameraInternal(PixelPerfectCameraInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectCameraInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PixelPerfectCameraInternal(PixelPerfectCameraInternal const&) = delete;

  /// @brief Field m_Component, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::IPixelPerfectCamera* ___m_Component;

  /// @brief Field m_SerializableComponent, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera> ___m_SerializableComponent;

  /// @brief Field originalOrthoSize, offset: 0x20, size: 0x4, def value: None
  float_t ___originalOrthoSize;

  /// @brief Field hasPostProcessLayer, offset: 0x24, size: 0x1, def value: None
  bool ___hasPostProcessLayer;

  /// @brief Field cropFrameXAndY, offset: 0x25, size: 0x1, def value: None
  bool ___cropFrameXAndY;

  /// @brief Field cropFrameXOrY, offset: 0x26, size: 0x1, def value: None
  bool ___cropFrameXOrY;

  /// @brief Field useStretchFill, offset: 0x27, size: 0x1, def value: None
  bool ___useStretchFill;

  /// @brief Field zoom, offset: 0x28, size: 0x4, def value: None
  int32_t ___zoom;

  /// @brief Field useOffscreenRT, offset: 0x2c, size: 0x1, def value: None
  bool ___useOffscreenRT;

  /// @brief Field offscreenRTWidth, offset: 0x30, size: 0x4, def value: None
  int32_t ___offscreenRTWidth;

  /// @brief Field offscreenRTHeight, offset: 0x34, size: 0x4, def value: None
  int32_t ___offscreenRTHeight;

  /// @brief Field pixelRect, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rect ___pixelRect;

  /// @brief Field orthoSize, offset: 0x48, size: 0x4, def value: None
  float_t ___orthoSize;

  /// @brief Field unitsPerPixel, offset: 0x4c, size: 0x4, def value: None
  float_t ___unitsPerPixel;

  /// @brief Field cinemachineVCamZoom, offset: 0x50, size: 0x4, def value: None
  int32_t ___cinemachineVCamZoom;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___m_Component) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___m_SerializableComponent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___originalOrthoSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___hasPostProcessLayer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___cropFrameXAndY) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___cropFrameXOrY) == 0x26, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___useStretchFill) == 0x27, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___zoom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___useOffscreenRT) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___offscreenRTWidth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___offscreenRTHeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___pixelRect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___orthoSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___unitsPerPixel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal, ___cinemachineVCamZoom) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*, "UnityEngine.Rendering.Universal", "PixelPerfectCameraInternal");
