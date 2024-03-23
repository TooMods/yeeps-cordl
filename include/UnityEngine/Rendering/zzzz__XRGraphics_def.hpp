#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGraphics)
namespace UnityEngine::Rendering {
struct __XRGraphics__StereoRenderingMode;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct __XRGraphics__StereoRenderingMode;
}
namespace UnityEngine::Rendering {
class XRGraphics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode);
MARK_REF_PTR_T(::UnityEngine::Rendering::XRGraphics);
// Type: ::StereoRenderingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::XRGraphics::StereoRenderingMode
struct CORDL_TYPE __XRGraphics__StereoRenderingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRGraphics__StereoRenderingMode_Unwrapped
  enum struct ____XRGraphics__StereoRenderingMode_Unwrapped : int32_t {
    __E_MultiPass = static_cast<int32_t>(0x0),
    __E_SinglePass = static_cast<int32_t>(0x1),
    __E_SinglePassInstanced = static_cast<int32_t>(0x2),
    __E_SinglePassMultiView = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRGraphics__StereoRenderingMode_Unwrapped() const noexcept {
    return static_cast<____XRGraphics__StereoRenderingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRGraphics__StereoRenderingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRGraphics__StereoRenderingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field MultiPass value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode const MultiPass;

  /// @brief Field SinglePass value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode const SinglePass;

  /// @brief Field SinglePassInstanced value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode const SinglePassInstanced;

  /// @brief Field SinglePassMultiView value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode const SinglePassMultiView;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::XRGraphics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::XRGraphics*
class CORDL_TYPE XRGraphics : public ::System::Object {
public:
  // Declarations
  using StereoRenderingMode = ::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode;

  static inline ::UnityEngine::Rendering::XRGraphics* New_ctor();

  /// @brief Method .ctor, addr 0x1bd28d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enabled, addr 0x1bd26e4, size 0x8, virtual false, abstract: false, final false
  static inline bool get_enabled();

  /// @brief Method get_eyeTextureDesc, addr 0x1bd2810, size 0x78, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor get_eyeTextureDesc();

  /// @brief Method get_eyeTextureHeight, addr 0x1bd28b0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureHeight();

  /// @brief Method get_eyeTextureResolutionScale, addr 0x1bd26bc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_eyeTextureResolutionScale();

  /// @brief Method get_eyeTextureWidth, addr 0x1bd2888, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_eyeTextureWidth();

  /// @brief Method get_isDeviceActive, addr 0x1bd271c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_isDeviceActive();

  /// @brief Method get_loadedDeviceName, addr 0x1bd2744, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW get_loadedDeviceName();

  /// @brief Method get_renderViewportScale, addr 0x1bd26f4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_renderViewportScale();

  /// @brief Method get_stereoRenderingMode, addr 0x1bd27e8, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode get_stereoRenderingMode();

  /// @brief Method get_supportedDevices, addr 0x1bd2794, size 0x54, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> get_supportedDevices();

  /// @brief Method set_eyeTextureResolutionScale, addr 0x1bd26ec, size 0x8, virtual false, abstract: false, final false
  static inline void set_eyeTextureResolutionScale(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGraphics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGraphics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGraphics(XRGraphics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGraphics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGraphics(XRGraphics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::XRGraphics, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__XRGraphics__StereoRenderingMode, "UnityEngine.Rendering", "XRGraphics/StereoRenderingMode");
NEED_NO_BOX(::UnityEngine::Rendering::XRGraphics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::XRGraphics*, "UnityEngine.Rendering", "XRGraphics");
