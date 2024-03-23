#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
CORDL_MODULE_EXPORT(BoolParameter)
// Forward declare root types
namespace UnityEngine::Rendering {
class BoolParameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BoolParameter);
// Type: UnityEngine.Rendering::BoolParameter
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::BoolParameter*
class CORDL_TYPE BoolParameter : public ::UnityEngine::Rendering::VolumeParameter_1<bool> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::BoolParameter* New_ctor(bool value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d6080, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(bool value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoolParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoolParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoolParameter(BoolParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoolParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoolParameter(BoolParameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BoolParameter, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BoolParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BoolParameter*, "UnityEngine.Rendering", "BoolParameter");
