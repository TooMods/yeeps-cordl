#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NoInterpFloatRangeParameter)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpFloatRangeParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpFloatRangeParameter);
// Type: UnityEngine.Rendering::NoInterpFloatRangeParameter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::NoInterpFloatRangeParameter*
class CORDL_TYPE NoInterpFloatRangeParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field max, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  __declspec(property(get = get_value, put = set_value))::UnityEngine::Vector2 value;

  static inline ::UnityEngine::Rendering::NoInterpFloatRangeParameter* New_ctor(::UnityEngine::Vector2 value, float_t min, float_t max, bool overrideState);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x17d6938, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector2 value, float_t min, float_t max, bool overrideState);

  /// @brief Method get_value, addr 0x17d6914, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_value();

  /// @brief Method set_value, addr 0x17d691c, size 0x1c, virtual true, abstract: false, final false
  inline void set_value(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpFloatRangeParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpFloatRangeParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpFloatRangeParameter(NoInterpFloatRangeParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpFloatRangeParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpFloatRangeParameter(NoInterpFloatRangeParameter const&) = delete;

  /// @brief Field min, offset: 0x1c, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x20, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpFloatRangeParameter, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::NoInterpFloatRangeParameter, ___min) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::NoInterpFloatRangeParameter, ___max) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpFloatRangeParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpFloatRangeParameter*, "UnityEngine.Rendering", "NoInterpFloatRangeParameter");
