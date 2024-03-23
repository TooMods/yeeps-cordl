#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoInterpMinFloatParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpMinFloatParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpMinFloatParameter);
// Type: UnityEngine.Rendering::NoInterpMinFloatParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::NoInterpMinFloatParameter*
class CORDL_TYPE NoInterpMinFloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<float_t> {
public:
  // Declarations
  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  static inline ::UnityEngine::Rendering::NoInterpMinFloatParameter* New_ctor(float_t value, float_t min, bool overrideState);

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x17d660c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(float_t value, float_t min, bool overrideState);

  /// @brief Method get_value, addr 0x17d65f0, size 0x8, virtual true, abstract: false, final false
  inline float_t get_value();

  /// @brief Method set_value, addr 0x17d65f8, size 0x14, virtual true, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpMinFloatParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpMinFloatParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpMinFloatParameter(NoInterpMinFloatParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpMinFloatParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpMinFloatParameter(NoInterpMinFloatParameter const&) = delete;

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  float_t ___min;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpMinFloatParameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::NoInterpMinFloatParameter, ___min) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpMinFloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpMinFloatParameter*, "UnityEngine.Rendering", "NoInterpMinFloatParameter");
