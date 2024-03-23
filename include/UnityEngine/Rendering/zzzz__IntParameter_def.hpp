#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class IntParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IntParameter);
// Type: UnityEngine.Rendering::IntParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::IntParameter*
class CORDL_TYPE IntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<int32_t> {
public:
  // Declarations
  /// @brief Method Interp, addr 0x17d61a0, size 0x34, virtual true, abstract: false, final true
  inline void Interp(int32_t from, int32_t to, float_t t);

  static inline ::UnityEngine::Rendering::IntParameter* New_ctor(int32_t value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d6140, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntParameter(IntParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntParameter(IntParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::IntParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IntParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IntParameter*, "UnityEngine.Rendering", "IntParameter");
