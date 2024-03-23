#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class FloatParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::FloatParameter);
// Type: UnityEngine.Rendering::FloatParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::FloatParameter*
class CORDL_TYPE FloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<float_t> {
public:
  // Declarations
  /// @brief Method Interp, addr 0x17d6530, size 0x14, virtual true, abstract: false, final true
  inline void Interp(float_t from, float_t to, float_t t);

  static inline ::UnityEngine::Rendering::FloatParameter* New_ctor(float_t value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d64c8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(float_t value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatParameter(FloatParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatParameter(FloatParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FloatParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::FloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FloatParameter*, "UnityEngine.Rendering", "FloatParameter");
