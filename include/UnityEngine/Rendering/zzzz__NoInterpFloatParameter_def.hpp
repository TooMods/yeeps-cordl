#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoInterpFloatParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpFloatParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpFloatParameter);
// Type: UnityEngine.Rendering::NoInterpFloatParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::NoInterpFloatParameter*
class CORDL_TYPE NoInterpFloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<float_t> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::NoInterpFloatParameter* New_ctor(float_t value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d6544, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(float_t value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpFloatParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpFloatParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpFloatParameter(NoInterpFloatParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpFloatParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpFloatParameter(NoInterpFloatParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpFloatParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpFloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpFloatParameter*, "UnityEngine.Rendering", "NoInterpFloatParameter");
