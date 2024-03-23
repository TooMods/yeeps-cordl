#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__FloatParameter_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClampedFloatParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class ClampedFloatParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ClampedFloatParameter);
// Type: UnityEngine.Rendering::ClampedFloatParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::ClampedFloatParameter*
class CORDL_TYPE ClampedFloatParameter : public ::UnityEngine::Rendering::FloatParameter {
public:
  // Declarations
  /// @brief Field max, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) float_t max;

  /// @brief Field min, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_min, put = __cordl_internal_set_min)) float_t min;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  static inline ::UnityEngine::Rendering::ClampedFloatParameter* New_ctor(float_t value, float_t min, float_t max, bool overrideState);

  constexpr float_t const& __cordl_internal_get_max() const;

  constexpr float_t& __cordl_internal_get_max();

  constexpr float_t const& __cordl_internal_get_min() const;

  constexpr float_t& __cordl_internal_get_min();

  constexpr void __cordl_internal_set_max(float_t value);

  constexpr void __cordl_internal_set_min(float_t value);

  /// @brief Method .ctor, addr 0x17d6778, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(float_t value, float_t min, float_t max, bool overrideState);

  /// @brief Method get_value, addr 0x17d6754, size 0x8, virtual true, abstract: false, final false
  inline float_t get_value();

  /// @brief Method set_value, addr 0x17d675c, size 0x1c, virtual true, abstract: false, final false
  inline void set_value(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClampedFloatParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClampedFloatParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClampedFloatParameter(ClampedFloatParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClampedFloatParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClampedFloatParameter(ClampedFloatParameter const&) = delete;

  /// @brief Field min, offset: 0x18, size: 0x4, def value: None
  float_t ___min;

  /// @brief Field max, offset: 0x1c, size: 0x4, def value: None
  float_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ClampedFloatParameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ClampedFloatParameter, ___min) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ClampedFloatParameter, ___max) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ClampedFloatParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ClampedFloatParameter*, "UnityEngine.Rendering", "ClampedFloatParameter");
