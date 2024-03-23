#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__IntParameter_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaxIntParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class MaxIntParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::MaxIntParameter);
// Type: UnityEngine.Rendering::MaxIntParameter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::MaxIntParameter*
class CORDL_TYPE MaxIntParameter : public ::UnityEngine::Rendering::IntParameter {
public:
  // Declarations
  /// @brief Field max, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_max, put = __cordl_internal_set_max)) int32_t max;

  __declspec(property(get = get_value, put = set_value)) int32_t value;

  static inline ::UnityEngine::Rendering::MaxIntParameter* New_ctor(int32_t value, int32_t max, bool overrideState);

  constexpr int32_t const& __cordl_internal_get_max() const;

  constexpr int32_t& __cordl_internal_get_max();

  constexpr void __cordl_internal_set_max(int32_t value);

  /// @brief Method .ctor, addr 0x17d6324, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, int32_t max, bool overrideState);

  /// @brief Method get_value, addr 0x17d6308, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_value();

  /// @brief Method set_value, addr 0x17d6310, size 0x14, virtual true, abstract: false, final false
  inline void set_value(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaxIntParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaxIntParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaxIntParameter(MaxIntParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaxIntParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaxIntParameter(MaxIntParameter const&) = delete;

  /// @brief Field max, offset: 0x18, size: 0x4, def value: None
  int32_t ___max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::MaxIntParameter, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::MaxIntParameter, ___max) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::MaxIntParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::MaxIntParameter*, "UnityEngine.Rendering", "MaxIntParameter");
