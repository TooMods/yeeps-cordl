#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ItemTransformationData)
namespace GlobalNamespace {
struct __Item__AnchorState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ItemTransformationData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ItemTransformationData);
// Type: ::ItemTransformationData
// SizeInfo { instance_size: 72, native_size: 72, calculated_instance_size: 72, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ItemTransformationData
struct CORDL_TYPE ItemTransformationData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2a9e348, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__Item__AnchorState anchorState, ::StringW anchorID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 velocity,
                    ::UnityEngine::Vector3 angularVelocity);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ItemTransformationData();

  // Ctor Parameters [CppParam { name: "anchorState", ty: "::GlobalNamespace::__Item__AnchorState", modifiers: "", def_value: None }, CppParam { name: "anchorID", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "angularVelocity", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }]
  constexpr ItemTransformationData(::GlobalNamespace::__Item__AnchorState anchorState, ::StringW anchorID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                   ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity) noexcept;

  /// @brief Field anchorState, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::__Item__AnchorState anchorState;

  /// @brief Field anchorID, offset: 0x8, size: 0x8, def value: None
  ::StringW anchorID;

  /// @brief Field position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field velocity, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 velocity;

  /// @brief Field angularVelocity, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 angularVelocity;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ItemTransformationData, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemTransformationData, anchorState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemTransformationData, anchorID) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemTransformationData, position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemTransformationData, rotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemTransformationData, velocity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ItemTransformationData, angularVelocity) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ItemTransformationData, "", "ItemTransformationData");
