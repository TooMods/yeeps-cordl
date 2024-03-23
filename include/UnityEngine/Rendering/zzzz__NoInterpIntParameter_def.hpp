#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NoInterpIntParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class NoInterpIntParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::NoInterpIntParameter);
// Type: UnityEngine.Rendering::NoInterpIntParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::NoInterpIntParameter*
class CORDL_TYPE NoInterpIntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<int32_t> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::NoInterpIntParameter* New_ctor(int32_t value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d61d4, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(int32_t value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoInterpIntParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoInterpIntParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoInterpIntParameter(NoInterpIntParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoInterpIntParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoInterpIntParameter(NoInterpIntParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::NoInterpIntParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpIntParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpIntParameter*, "UnityEngine.Rendering", "NoInterpIntParameter");
