#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CaptureCamera)
namespace GlobalNamespace {
struct __CaptureCamera__CaptureData;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class CaptureCamera;
}
namespace GlobalNamespace {
struct __CaptureCamera__CaptureData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CaptureCamera);
MARK_VAL_T(::GlobalNamespace::__CaptureCamera__CaptureData);
// Type: ::CaptureData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CaptureCamera::CaptureData
struct CORDL_TYPE __CaptureCamera__CaptureData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CaptureCamera__CaptureData();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "dimensions", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }]
  constexpr __CaptureCamera__CaptureData(::StringW name, ::UnityEngine::Vector2Int dimensions) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field dimensions, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Vector2Int dimensions;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CaptureCamera__CaptureData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CaptureCamera__CaptureData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CaptureCamera__CaptureData, dimensions) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CaptureCamera
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CaptureCamera*
class CORDL_TYPE CaptureCamera : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CaptureData = ::GlobalNamespace::__CaptureCamera__CaptureData;

  /// @brief Field captureDatas, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_captureDatas,
                      put = __cordl_internal_set_captureDatas))::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*> captureDatas;

  /// @brief Field includeCameraBackground, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_includeCameraBackground, put = __cordl_internal_set_includeCameraBackground)) bool includeCameraBackground;

  /// @brief Field renderCamera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_renderCamera, put = __cordl_internal_set_renderCamera))::UnityW<::UnityEngine::Camera> renderCamera;

  /// @brief Field renderTexture, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_renderTexture, put = __cordl_internal_set_renderTexture))::UnityW<::UnityEngine::RenderTexture> renderTexture;

  /// @brief Field sizeMultiplier, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sizeMultiplier, put = __cordl_internal_set_sizeMultiplier)) int32_t sizeMultiplier;

  /// @brief Method Capture, addr 0x2756870, size 0x478, virtual false, abstract: false, final false
  inline void Capture(::GlobalNamespace::__CaptureCamera__CaptureData captureData);

  static inline ::GlobalNamespace::CaptureCamera* New_ctor();

  /// @brief Method SaveTextureAsPNG, addr 0x2756ce8, size 0x128, virtual false, abstract: false, final false
  static inline void SaveTextureAsPNG(::UnityEngine::Texture2D* texture, ::StringW fileName);

  /// @brief Method Start, addr 0x2756800, size 0x70, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*> const& __cordl_internal_get_captureDatas() const;

  constexpr ::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*>& __cordl_internal_get_captureDatas();

  constexpr bool const& __cordl_internal_get_includeCameraBackground() const;

  constexpr bool& __cordl_internal_get_includeCameraBackground();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_renderCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_renderCamera();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_renderTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_renderTexture();

  constexpr int32_t const& __cordl_internal_get_sizeMultiplier() const;

  constexpr int32_t& __cordl_internal_get_sizeMultiplier();

  constexpr void __cordl_internal_set_captureDatas(::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*> value);

  constexpr void __cordl_internal_set_includeCameraBackground(bool value);

  constexpr void __cordl_internal_set_renderCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_renderTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_sizeMultiplier(int32_t value);

  /// @brief Method .ctor, addr 0x2756e10, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaptureCamera();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaptureCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaptureCamera(CaptureCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaptureCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaptureCamera(CaptureCamera const&) = delete;

  /// @brief Field captureDatas, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__CaptureCamera__CaptureData, ::Array<::GlobalNamespace::__CaptureCamera__CaptureData>*> ___captureDatas;

  /// @brief Field sizeMultiplier, offset: 0x20, size: 0x4, def value: None
  int32_t ___sizeMultiplier;

  /// @brief Field includeCameraBackground, offset: 0x24, size: 0x1, def value: None
  bool ___includeCameraBackground;

  /// @brief Field renderCamera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___renderCamera;

  /// @brief Field renderTexture, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___renderTexture;

  /// @brief Field savePath offset 0xffffffff size 0x8
  static constexpr ::ConstString savePath{ u"/Resources/Captures/" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CaptureCamera, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CaptureCamera, ___captureDatas) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CaptureCamera, ___sizeMultiplier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CaptureCamera, ___includeCameraBackground) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CaptureCamera, ___renderCamera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CaptureCamera, ___renderTexture) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CaptureCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CaptureCamera*, "", "CaptureCamera");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CaptureCamera__CaptureData, "", "CaptureCamera/CaptureData");
