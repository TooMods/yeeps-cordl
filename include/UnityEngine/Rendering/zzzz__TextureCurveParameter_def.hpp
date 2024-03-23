#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__TextureCurve_def.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(TextureCurveParameter)
namespace UnityEngine::Rendering {
class TextureCurve;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TextureCurveParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::TextureCurveParameter);
// Type: UnityEngine.Rendering::TextureCurveParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::TextureCurveParameter*
class CORDL_TYPE TextureCurveParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Rendering::TextureCurve*> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::TextureCurveParameter* New_ctor(::UnityEngine::Rendering::TextureCurve* value, bool overrideState);

  /// @brief Method Release, addr 0x17d1a84, size 0x18, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method .ctor, addr 0x17d1a24, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::TextureCurve* value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureCurveParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureCurveParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureCurveParameter(TextureCurveParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureCurveParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureCurveParameter(TextureCurveParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureCurveParameter, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::TextureCurveParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureCurveParameter*, "UnityEngine.Rendering", "TextureCurveParameter");
