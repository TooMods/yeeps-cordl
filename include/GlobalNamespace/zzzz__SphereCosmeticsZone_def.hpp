#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticsZone_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphereCosmeticsZone)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SphereCosmeticsZone;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SphereCosmeticsZone);
// Type: ::SphereCosmeticsZone
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SphereCosmeticsZone*
class CORDL_TYPE SphereCosmeticsZone : public ::GlobalNamespace::CosmeticsZone {
public:
  // Declarations
  /// @brief Field radius, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field testRadiusSqr, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_testRadiusSqr, put = __cordl_internal_set_testRadiusSqr)) float_t testRadiusSqr;

  /// @brief Method GetLocalBounds, addr 0x158ddf4, size 0xac, virtual true, abstract: false, final false
  inline void GetLocalBounds(::UnityEngine::Transform* localTransform, ByRef<::UnityEngine::Vector3> halfExtents, ByRef<::UnityEngine::Vector3> localCenter);

  /// @brief Method IsWithinZone, addr 0x158dc90, size 0x70, virtual true, abstract: false, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position);

  /// @brief Method IsWithinZone, addr 0x158dd00, size 0xf4, virtual true, abstract: false, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position, ByRef<float_t> distanceFromZoneSurface);

  static inline ::GlobalNamespace::SphereCosmeticsZone* New_ctor();

  /// @brief Method Start, addr 0x158dc74, size 0x1c, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr float_t const& __cordl_internal_get_testRadiusSqr() const;

  constexpr float_t& __cordl_internal_get_testRadiusSqr();

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_testRadiusSqr(float_t value);

  /// @brief Method .ctor, addr 0x158dea0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphereCosmeticsZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SphereCosmeticsZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphereCosmeticsZone(SphereCosmeticsZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphereCosmeticsZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphereCosmeticsZone(SphereCosmeticsZone const&) = delete;

  /// @brief Field radius, offset: 0x34, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field testRadiusSqr, offset: 0x38, size: 0x4, def value: None
  float_t ___testRadiusSqr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SphereCosmeticsZone, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SphereCosmeticsZone, ___radius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SphereCosmeticsZone, ___testRadiusSqr) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SphereCosmeticsZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SphereCosmeticsZone*, "", "SphereCosmeticsZone");
