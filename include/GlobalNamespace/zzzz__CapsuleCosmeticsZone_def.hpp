#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticsZone_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CapsuleCosmeticsZone)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CapsuleCosmeticsZone;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CapsuleCosmeticsZone);
// Type: ::CapsuleCosmeticsZone
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CapsuleCosmeticsZone*
class CORDL_TYPE CapsuleCosmeticsZone : public ::GlobalNamespace::CosmeticsZone {
public:
  // Declarations
  /// @brief Field height, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  /// @brief Field radius, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field testRadius, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_testRadius, put = __cordl_internal_set_testRadius)) float_t testRadius;

  /// @brief Method GetLocalBounds, addr 0x158aff8, size 0xc8, virtual true, abstract: false, final false
  inline void GetLocalBounds(::UnityEngine::Transform* localTransform, ByRef<::UnityEngine::Vector3> halfExtents, ByRef<::UnityEngine::Vector3> localCenter);

  /// @brief Method IsWithinZone, addr 0x158ad74, size 0xc8, virtual true, abstract: false, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position);

  /// @brief Method IsWithinZone, addr 0x158ae3c, size 0x1bc, virtual true, abstract: false, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position, ByRef<float_t> distanceFromZoneSurface);

  static inline ::GlobalNamespace::CapsuleCosmeticsZone* New_ctor();

  /// @brief Method Start, addr 0x158ad5c, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr float_t& __cordl_internal_get_height();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr float_t const& __cordl_internal_get_testRadius() const;

  constexpr float_t& __cordl_internal_get_testRadius();

  constexpr void __cordl_internal_set_height(float_t value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_testRadius(float_t value);

  /// @brief Method .ctor, addr 0x158b0c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CapsuleCosmeticsZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CapsuleCosmeticsZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CapsuleCosmeticsZone(CapsuleCosmeticsZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CapsuleCosmeticsZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CapsuleCosmeticsZone(CapsuleCosmeticsZone const&) = delete;

  /// @brief Field radius, offset: 0x34, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field testRadius, offset: 0x38, size: 0x4, def value: None
  float_t ___testRadius;

  /// @brief Field height, offset: 0x3c, size: 0x4, def value: None
  float_t ___height;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CapsuleCosmeticsZone, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CapsuleCosmeticsZone, ___radius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CapsuleCosmeticsZone, ___testRadius) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CapsuleCosmeticsZone, ___height) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CapsuleCosmeticsZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CapsuleCosmeticsZone*, "", "CapsuleCosmeticsZone");
