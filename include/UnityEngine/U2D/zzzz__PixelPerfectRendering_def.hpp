#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PixelPerfectRendering)
// Forward declare root types
namespace UnityEngine::U2D {
class PixelPerfectRendering;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::PixelPerfectRendering);
// Type: UnityEngine.U2D::PixelPerfectRendering
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: ::UnityEngine.U2D::PixelPerfectRendering*
class CORDL_TYPE PixelPerfectRendering : public ::System::Object {
public:
  // Declarations
  /// @brief Method set_pixelSnapSpacing, addr 0x2a86fac, size 0x38, virtual false, abstract: false, final false
  static inline void set_pixelSnapSpacing(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PixelPerfectRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PixelPerfectRendering(PixelPerfectRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PixelPerfectRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PixelPerfectRendering(PixelPerfectRendering const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::PixelPerfectRendering, 0x10>, "Size mismatch!");

} // namespace UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::PixelPerfectRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::PixelPerfectRendering*, "UnityEngine.U2D", "PixelPerfectRendering");
