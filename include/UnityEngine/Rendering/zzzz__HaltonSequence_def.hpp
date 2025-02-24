#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HaltonSequence)
// Forward declare root types
namespace UnityEngine::Rendering {
class HaltonSequence;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::HaltonSequence);
// Type: UnityEngine.Rendering::HaltonSequence
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::HaltonSequence*
class CORDL_TYPE HaltonSequence : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get, addr 0x17d0118, size 0x44, virtual false, abstract: false, final false
  static inline float_t Get(int32_t index, int32_t radix);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HaltonSequence();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HaltonSequence", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HaltonSequence(HaltonSequence&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HaltonSequence", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HaltonSequence(HaltonSequence const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::HaltonSequence, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::HaltonSequence);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::HaltonSequence*, "UnityEngine.Rendering", "HaltonSequence");
