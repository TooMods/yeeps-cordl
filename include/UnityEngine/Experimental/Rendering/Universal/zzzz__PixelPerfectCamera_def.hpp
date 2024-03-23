#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__PixelPerfectCamera_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PixelPerfectCamera)
namespace UnityEngine::Experimental::Rendering::Universal {
struct __PixelPerfectCamera__ComponentVersions;
}
namespace UnityEngine::Experimental::Rendering::Universal {
struct __PixelPerfectCamera__CropFrame;
}
namespace UnityEngine::Experimental::Rendering::Universal {
struct __PixelPerfectCamera__GridSnapping;
}
namespace UnityEngine::Rendering::Universal {
class IPixelPerfectCamera;
}
namespace UnityEngine::Rendering::Universal {
class PixelPerfectCameraInternal;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::Universal {
struct __PixelPerfectCamera__ComponentVersions;
}
namespace UnityEngine::Experimental::Rendering::Universal {
struct __PixelPerfectCamera__CropFrame;
}
namespace UnityEngine::Experimental::Rendering::Universal {
struct __PixelPerfectCamera__GridSnapping;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class PixelPerfectCamera;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera);
// Type: ::CropFrame
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: true
// CS Name: ::PixelPerfectCamera::CropFrame
struct CORDL_TYPE __PixelPerfectCamera__CropFrame {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PixelPerfectCamera__CropFrame_Unwrapped
  enum struct ____PixelPerfectCamera__CropFrame_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Pillarbox = static_cast<int32_t>(0x1),
    __E_Letterbox = static_cast<int32_t>(0x2),
    __E_Windowbox = static_cast<int32_t>(0x3),
    __E_StretchFill = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PixelPerfectCamera__CropFrame_Unwrapped() const noexcept {
    return static_cast<____PixelPerfectCamera__CropFrame_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PixelPerfectCamera__CropFrame();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PixelPerfectCamera__CropFrame(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Letterbox value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame const Letterbox;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame const None;

  /// @brief Field Pillarbox value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame const Pillarbox;

  /// @brief Field StretchFill value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame const StretchFill;

  /// @brief Field Windowbox value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame const Windowbox;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
// Type: ::GridSnapping
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: true
// CS Name: ::PixelPerfectCamera::GridSnapping
struct CORDL_TYPE __PixelPerfectCamera__GridSnapping {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PixelPerfectCamera__GridSnapping_Unwrapped
  enum struct ____PixelPerfectCamera__GridSnapping_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PixelSnapping = static_cast<int32_t>(0x1),
    __E_UpscaleRenderTexture = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PixelPerfectCamera__GridSnapping_Unwrapped() const noexcept {
    return static_cast<____PixelPerfectCamera__GridSnapping_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PixelPerfectCamera__GridSnapping();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PixelPerfectCamera__GridSnapping(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping const None;

  /// @brief Field PixelSnapping value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping const PixelSnapping;

  /// @brief Field UpscaleRenderTexture value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping const UpscaleRenderTexture;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
// Type: ::ComponentVersions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: true
// CS Name: ::PixelPerfectCamera::ComponentVersions
struct CORDL_TYPE __PixelPerfectCamera__ComponentVersions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PixelPerfectCamera__ComponentVersions_Unwrapped
  enum struct ____PixelPerfectCamera__ComponentVersions_Unwrapped : int32_t {
    __E_Version_Unserialized = static_cast<int32_t>(0x0),
    __E_Version_1 = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PixelPerfectCamera__ComponentVersions_Unwrapped() const noexcept {
    return static_cast<____PixelPerfectCamera__ComponentVersions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PixelPerfectCamera__ComponentVersions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PixelPerfectCamera__ComponentVersions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Version_1 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions const Version_1;

  /// @brief Field Version_Unserialized value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions const Version_Unserialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
// Type: UnityEngine.Experimental.Rendering.Universal::PixelPerfectCamera
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.Universal::PixelPerfectCamera*
class CORDL_TYPE PixelPerfectCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using ComponentVersions = ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions;

  using CropFrame = ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame;

  using GridSnapping = ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping;

  __declspec(property(get = get_assetsPPU, put = set_assetsPPU)) int32_t assetsPPU;

  __declspec(property(get = get_cameraRTSize))::UnityEngine::Vector2Int cameraRTSize;

  __declspec(property(get = get_cropFrame, put = set_cropFrame))::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame cropFrame;

  __declspec(property(get = get_cropFrameX, put = set_cropFrameX)) bool cropFrameX;

  __declspec(property(get = get_cropFrameY, put = set_cropFrameY)) bool cropFrameY;

  __declspec(property(get = get_finalBlitFilterMode))::UnityEngine::FilterMode finalBlitFilterMode;

  __declspec(property(get = get_gridSnapping, put = set_gridSnapping))::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping gridSnapping;

  /// @brief Field m_AssetsPPU, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AssetsPPU, put = __cordl_internal_set_m_AssetsPPU)) int32_t m_AssetsPPU;

  /// @brief Field m_Camera, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Camera, put = __cordl_internal_set_m_Camera))::UnityW<::UnityEngine::Camera> m_Camera;

  /// @brief Field m_CinemachineCompatibilityMode, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CinemachineCompatibilityMode, put = __cordl_internal_set_m_CinemachineCompatibilityMode)) bool m_CinemachineCompatibilityMode;

  /// @brief Field m_CropFrame, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CropFrame, put = __cordl_internal_set_m_CropFrame))::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame m_CropFrame;

  /// @brief Field m_GridSnapping, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GridSnapping,
                      put = __cordl_internal_set_m_GridSnapping))::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping m_GridSnapping;

  /// @brief Field m_Internal, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Internal, put = __cordl_internal_set_m_Internal))::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal* m_Internal;

  /// @brief Field m_RefResolutionX, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RefResolutionX, put = __cordl_internal_set_m_RefResolutionX)) int32_t m_RefResolutionX;

  /// @brief Field m_RefResolutionY, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RefResolutionY, put = __cordl_internal_set_m_RefResolutionY)) int32_t m_RefResolutionY;

  __declspec(property(get = get_offscreenRTSize))::UnityEngine::Vector2Int offscreenRTSize;

  __declspec(property(get = get_orthographicSize)) float_t orthographicSize;

  __declspec(property(get = get_pixelRatio)) int32_t pixelRatio;

  __declspec(property(get = get_pixelSnapping, put = set_pixelSnapping)) bool pixelSnapping;

  __declspec(property(get = get_refResolutionX, put = set_refResolutionX)) int32_t refResolutionX;

  __declspec(property(get = get_refResolutionY, put = set_refResolutionY)) int32_t refResolutionY;

  __declspec(property(get = get_stretchFill, put = set_stretchFill)) bool stretchFill;

  __declspec(property(get = get_upscaleRT, put = set_upscaleRT)) bool upscaleRT;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
  constexpr operator ::UnityEngine::Rendering::Universal::IPixelPerfectCamera*() noexcept;

  /// @brief Method Awake, addr 0x1e1fecc, size 0x94, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CorrectCinemachineOrthoSize, addr 0x1e1fc28, size 0x20, virtual false, abstract: false, final false
  inline float_t CorrectCinemachineOrthoSize(float_t targetOrthoSize);

  static inline ::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x1e203b4, size 0x4, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x1e203b0, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnBeginCameraRendering, addr 0x1e20024, size 0xcc, virtual false, abstract: false, final false
  inline void OnBeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method OnDisable, addr 0x1e2026c, size 0x144, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1e2017c, size 0xf0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEndCameraRendering, addr 0x1e200f0, size 0x8c, virtual false, abstract: false, final false
  inline void OnEndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);

  /// @brief Method PixelSnap, addr 0x1e1fd4c, size 0x180, virtual false, abstract: false, final false
  inline void PixelSnap();

  /// @brief Method RoundToPixel, addr 0x1e1fa30, size 0x1f8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 RoundToPixel(::UnityEngine::Vector3 position);

  /// @brief Method UpdateCameraProperties, addr 0x1e1ff60, size 0xc4, virtual false, abstract: false, final false
  inline void UpdateCameraProperties();

  constexpr int32_t const& __cordl_internal_get_m_AssetsPPU() const;

  constexpr int32_t& __cordl_internal_get_m_AssetsPPU();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera();

  constexpr bool const& __cordl_internal_get_m_CinemachineCompatibilityMode() const;

  constexpr bool& __cordl_internal_get_m_CinemachineCompatibilityMode();

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame const& __cordl_internal_get_m_CropFrame() const;

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame& __cordl_internal_get_m_CropFrame();

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping const& __cordl_internal_get_m_GridSnapping() const;

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping& __cordl_internal_get_m_GridSnapping();

  constexpr ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*& __cordl_internal_get_m_Internal();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal*> const& __cordl_internal_get_m_Internal() const;

  constexpr int32_t const& __cordl_internal_get_m_RefResolutionX() const;

  constexpr int32_t& __cordl_internal_get_m_RefResolutionX();

  constexpr int32_t const& __cordl_internal_get_m_RefResolutionY() const;

  constexpr int32_t& __cordl_internal_get_m_RefResolutionY();

  constexpr void __cordl_internal_set_m_AssetsPPU(int32_t value);

  constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_CinemachineCompatibilityMode(bool value);

  constexpr void __cordl_internal_set_m_CropFrame(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame value);

  constexpr void __cordl_internal_set_m_GridSnapping(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping value);

  constexpr void __cordl_internal_set_m_Internal(::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal* value);

  constexpr void __cordl_internal_set_m_RefResolutionX(int32_t value);

  constexpr void __cordl_internal_set_m_RefResolutionY(int32_t value);

  /// @brief Method .ctor, addr 0x1e203b8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_assetsPPU, addr 0x1e1f808, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_assetsPPU();

  /// @brief Method get_cameraRTSize, addr 0x1e1fc80, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_cameraRTSize();

  /// @brief Method get_cropFrame, addr 0x1e1f7cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame get_cropFrame();

  /// @brief Method get_cropFrameX, addr 0x1e1f8e0, size 0x24, virtual true, abstract: false, final true
  inline bool get_cropFrameX();

  /// @brief Method get_cropFrameY, addr 0x1e1f950, size 0x24, virtual true, abstract: false, final true
  inline bool get_cropFrameY();

  /// @brief Method get_finalBlitFilterMode, addr 0x1e1fc48, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::FilterMode get_finalBlitFilterMode();

  /// @brief Method get_gridSnapping, addr 0x1e1f7dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping get_gridSnapping();

  /// @brief Method get_offscreenRTSize, addr 0x1e1fc64, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int get_offscreenRTSize();

  /// @brief Method get_orthographicSize, addr 0x1e1f7ec, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_orthographicSize();

  /// @brief Method get_pixelRatio, addr 0x1e1f9e4, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_pixelRatio();

  /// @brief Method get_pixelSnapping, addr 0x1e1f8b4, size 0x10, virtual true, abstract: false, final true
  inline bool get_pixelSnapping();

  /// @brief Method get_refResolutionX, addr 0x1e1f830, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_refResolutionX();

  /// @brief Method get_refResolutionY, addr 0x1e1f858, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_refResolutionY();

  /// @brief Method get_stretchFill, addr 0x1e1f9c0, size 0x10, virtual true, abstract: false, final true
  inline bool get_stretchFill();

  /// @brief Method get_upscaleRT, addr 0x1e1f880, size 0x10, virtual true, abstract: false, final true
  inline bool get_upscaleRT();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::Universal::IPixelPerfectCamera"
  constexpr ::UnityEngine::Rendering::Universal::IPixelPerfectCamera* i___UnityEngine__Rendering__Universal__IPixelPerfectCamera() noexcept;

  /// @brief Method set_assetsPPU, addr 0x1e1f810, size 0x20, virtual true, abstract: false, final true
  inline void set_assetsPPU(int32_t value);

  /// @brief Method set_cropFrame, addr 0x1e1f7d4, size 0x8, virtual false, abstract: false, final false
  inline void set_cropFrame(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame value);

  /// @brief Method set_cropFrameX, addr 0x1e1f904, size 0x4c, virtual true, abstract: false, final true
  inline void set_cropFrameX(bool value);

  /// @brief Method set_cropFrameY, addr 0x1e1f974, size 0x4c, virtual true, abstract: false, final true
  inline void set_cropFrameY(bool value);

  /// @brief Method set_gridSnapping, addr 0x1e1f7e4, size 0x8, virtual false, abstract: false, final false
  inline void set_gridSnapping(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping value);

  /// @brief Method set_pixelSnapping, addr 0x1e1f8c4, size 0x1c, virtual true, abstract: false, final true
  inline void set_pixelSnapping(bool value);

  /// @brief Method set_refResolutionX, addr 0x1e1f838, size 0x20, virtual true, abstract: false, final true
  inline void set_refResolutionX(int32_t value);

  /// @brief Method set_refResolutionY, addr 0x1e1f860, size 0x20, virtual true, abstract: false, final true
  inline void set_refResolutionY(int32_t value);

  /// @brief Method set_stretchFill, addr 0x1e1f9d0, size 0x14, virtual true, abstract: false, final true
  inline void set_stretchFill(bool value);

  /// @brief Method set_upscaleRT, addr 0x1e1f890, size 0x24, virtual true, abstract: false, final true
  inline void set_upscaleRT(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PixelPerfectCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PixelPerfectCamera(PixelPerfectCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PixelPerfectCamera(PixelPerfectCamera const&) = delete;

  /// @brief Field m_AssetsPPU, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_AssetsPPU;

  /// @brief Field m_RefResolutionX, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_RefResolutionX;

  /// @brief Field m_RefResolutionY, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_RefResolutionY;

  /// @brief Field m_CropFrame, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame ___m_CropFrame;

  /// @brief Field m_GridSnapping, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping ___m_GridSnapping;

  /// @brief Field m_Camera, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_Camera;

  /// @brief Field m_Internal, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PixelPerfectCameraInternal* ___m_Internal;

  /// @brief Field m_CinemachineCompatibilityMode, offset: 0x40, size: 0x1, def value: None
  bool ___m_CinemachineCompatibilityMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_AssetsPPU) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_RefResolutionX) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_RefResolutionY) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_CropFrame) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_GridSnapping) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_Camera) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_Internal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera, ___m_CinemachineCompatibilityMode) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__ComponentVersions, "UnityEngine.Experimental.Rendering.Universal",
                       "PixelPerfectCamera/ComponentVersions");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__CropFrame, "UnityEngine.Experimental.Rendering.Universal", "PixelPerfectCamera/CropFrame");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::__PixelPerfectCamera__GridSnapping, "UnityEngine.Experimental.Rendering.Universal", "PixelPerfectCamera/GridSnapping");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::PixelPerfectCamera*, "UnityEngine.Experimental.Rendering.Universal", "PixelPerfectCamera");
