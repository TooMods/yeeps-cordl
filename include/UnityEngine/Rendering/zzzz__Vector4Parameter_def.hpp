#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VolumeParameter_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector4Parameter)
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class Vector4Parameter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Vector4Parameter);
// Type: UnityEngine.Rendering::Vector4Parameter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::Vector4Parameter*
class CORDL_TYPE Vector4Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector4> {
public:
  // Declarations
  /// @brief Method Interp, addr 0x17d6f58, size 0x30, virtual true, abstract: false, final false
  inline void Interp(::UnityEngine::Vector4 from, ::UnityEngine::Vector4 to, float_t t);

  static inline ::UnityEngine::Rendering::Vector4Parameter* New_ctor(::UnityEngine::Vector4 value, bool overrideState);

  /// @brief Method .ctor, addr 0x17d6ed0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector4 value, bool overrideState);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4Parameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4Parameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4Parameter(Vector4Parameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4Parameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4Parameter(Vector4Parameter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Vector4Parameter, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::Vector4Parameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Vector4Parameter*, "UnityEngine.Rendering", "Vector4Parameter");
