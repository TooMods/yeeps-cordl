#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ILineRenderable)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ILineRenderable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::ILineRenderable);
// Type: UnityEngine.XR.Interaction.Toolkit::ILineRenderable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::ILineRenderable*
class CORDL_TYPE ILineRenderable {
public:
  // Declarations
  /// @brief Method GetLinePoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetLinePoints(ByRef<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>> linePoints, ByRef<int32_t> numPoints);

  /// @brief Method TryGetHitInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryGetHitInfo(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Vector3> normal, ByRef<int32_t> positionInLine, ByRef<bool> isValidTarget);

  // Ctor Parameters [CppParam { name: "", ty: "ILineRenderable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILineRenderable(ILineRenderable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILineRenderable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILineRenderable(ILineRenderable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::ILineRenderable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*, "UnityEngine.XR.Interaction.Toolkit", "ILineRenderable");
