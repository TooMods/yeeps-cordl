#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoundsExtensions)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
class BoundsExtensions;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::BoundsExtensions);
// Type: Unity.XR.CoreUtils::BoundsExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::BoundsExtensions*
class CORDL_TYPE BoundsExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ContainsCompletely, addr 0x28735ac, size 0xcc, virtual false, abstract: false, final false
  static inline bool ContainsCompletely(::UnityEngine::Bounds outerBounds, ::UnityEngine::Bounds innerBounds);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsExtensions(BoundsExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsExtensions(BoundsExtensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::BoundsExtensions, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::BoundsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::BoundsExtensions*, "Unity.XR.CoreUtils", "BoundsExtensions");
