#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DistanceInfo)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct DistanceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::DistanceInfo);
// Type: UnityEngine.XR.Interaction.Toolkit::DistanceInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::DistanceInfo
struct CORDL_TYPE DistanceInfo {
public:
  // Declarations
  __declspec(property(get = get_collider, put = set_collider))::UnityW<::UnityEngine::Collider> collider;

  __declspec(property(get = get_distanceSqr, put = set_distanceSqr)) float_t distanceSqr;

  __declspec(property(get = get_point, put = set_point))::UnityEngine::Vector3 point;

  /// @brief Method get_collider, addr 0x259a944, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Collider> get_collider();

  /// @brief Method get_distanceSqr, addr 0x259a934, size 0x8, virtual false, abstract: false, final false
  inline float_t get_distanceSqr();

  /// @brief Method get_point, addr 0x259a91c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method set_collider, addr 0x259a94c, size 0x8, virtual false, abstract: false, final false
  inline void set_collider(::UnityEngine::Collider* value);

  /// @brief Method set_distanceSqr, addr 0x259a93c, size 0x8, virtual false, abstract: false, final false
  inline void set_distanceSqr(float_t value);

  /// @brief Method set_point, addr 0x259a928, size 0xc, virtual false, abstract: false, final false
  inline void set_point(::UnityEngine::Vector3 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DistanceInfo();

  // Ctor Parameters [CppParam { name: "_point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "_distanceSqr_k__BackingField", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "_collider_k__BackingField", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None }]
  constexpr DistanceInfo(::UnityEngine::Vector3 _point_k__BackingField, float_t _distanceSqr_k__BackingField, ::UnityW<::UnityEngine::Collider> _collider_k__BackingField) noexcept;

  /// @brief Field <point>k__BackingField, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 _point_k__BackingField;

  /// @brief Field <distanceSqr>k__BackingField, offset: 0xc, size: 0x4, def value: None
  float_t _distanceSqr_k__BackingField;

  /// @brief Field <collider>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> _collider_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::DistanceInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DistanceInfo, _point_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DistanceInfo, _distanceSqr_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DistanceInfo, _collider_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DistanceInfo, "UnityEngine.XR.Interaction.Toolkit", "DistanceInfo");
