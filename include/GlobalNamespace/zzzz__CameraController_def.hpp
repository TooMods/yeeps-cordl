#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(CameraController)
namespace GlobalNamespace {
class Theme;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class CameraController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CameraController);
// Type: ::CameraController
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CameraController*
class CORDL_TYPE CameraController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field cam, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cam, put = __cordl_internal_set_cam))::UnityW<::UnityEngine::Camera> cam;

  static inline ::GlobalNamespace::CameraController* New_ctor();

  /// @brief Method OnCurrentThemeUpdated, addr 0x1444d78, size 0x28, virtual false, abstract: false, final false
  inline void OnCurrentThemeUpdated(::GlobalNamespace::Theme* newTheme);

  /// @brief Method OnDisable, addr 0x1444ecc, size 0xe0, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1444bb8, size 0x1c0, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_cam() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_cam();

  constexpr void __cordl_internal_set_cam(::UnityW<::UnityEngine::Camera> value);

  /// @brief Method .ctor, addr 0x1444fac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraController(CameraController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraController(CameraController const&) = delete;

  /// @brief Field cam, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___cam;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CameraController, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CameraController, ___cam) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CameraController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CameraController*, "", "CameraController");
