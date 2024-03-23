#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IPixelPerfectCamera)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IPixelPerfectCamera;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IPixelPerfectCamera);
// Type: UnityEngine.Rendering.Universal::IPixelPerfectCamera
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IPixelPerfectCamera*
class CORDL_TYPE IPixelPerfectCamera {
public:
  // Declarations
  __declspec(property(get = get_assetsPPU, put = set_assetsPPU)) int32_t assetsPPU;

  __declspec(property(get = get_cropFrameX, put = set_cropFrameX)) bool cropFrameX;

  __declspec(property(get = get_cropFrameY, put = set_cropFrameY)) bool cropFrameY;

  __declspec(property(get = get_pixelSnapping, put = set_pixelSnapping)) bool pixelSnapping;

  __declspec(property(get = get_refResolutionX, put = set_refResolutionX)) int32_t refResolutionX;

  __declspec(property(get = get_refResolutionY, put = set_refResolutionY)) int32_t refResolutionY;

  __declspec(property(get = get_stretchFill, put = set_stretchFill)) bool stretchFill;

  __declspec(property(get = get_upscaleRT, put = set_upscaleRT)) bool upscaleRT;

  /// @brief Method get_assetsPPU, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_assetsPPU();

  /// @brief Method get_cropFrameX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_cropFrameX();

  /// @brief Method get_cropFrameY, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_cropFrameY();

  /// @brief Method get_pixelSnapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_pixelSnapping();

  /// @brief Method get_refResolutionX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_refResolutionX();

  /// @brief Method get_refResolutionY, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_refResolutionY();

  /// @brief Method get_stretchFill, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_stretchFill();

  /// @brief Method get_upscaleRT, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_upscaleRT();

  /// @brief Method set_assetsPPU, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_assetsPPU(int32_t value);

  /// @brief Method set_cropFrameX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_cropFrameX(bool value);

  /// @brief Method set_cropFrameY, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_cropFrameY(bool value);

  /// @brief Method set_pixelSnapping, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_pixelSnapping(bool value);

  /// @brief Method set_refResolutionX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_refResolutionX(int32_t value);

  /// @brief Method set_refResolutionY, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_refResolutionY(int32_t value);

  /// @brief Method set_stretchFill, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_stretchFill(bool value);

  /// @brief Method set_upscaleRT, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_upscaleRT(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "IPixelPerfectCamera", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPixelPerfectCamera(IPixelPerfectCamera&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPixelPerfectCamera", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPixelPerfectCamera(IPixelPerfectCamera const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IPixelPerfectCamera);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IPixelPerfectCamera*, "UnityEngine.Rendering.Universal", "IPixelPerfectCamera");
