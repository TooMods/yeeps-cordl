#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ItemDespawnZone_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SphericalItemDespawnZone)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SphericalItemDespawnZone;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SphericalItemDespawnZone);
// Type: ::SphericalItemDespawnZone
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SphericalItemDespawnZone*
class CORDL_TYPE SphericalItemDespawnZone : public ::GlobalNamespace::ItemDespawnZone {
public:
  // Declarations
  /// @brief Field radius, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Method IsWithinZone, addr 0x2ab2298, size 0x74, virtual true, abstract: false, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::SphericalItemDespawnZone* New_ctor();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr void __cordl_internal_set_radius(float_t value);

  /// @brief Method .ctor, addr 0x2ab230c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SphericalItemDespawnZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SphericalItemDespawnZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SphericalItemDespawnZone(SphericalItemDespawnZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SphericalItemDespawnZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SphericalItemDespawnZone(SphericalItemDespawnZone const&) = delete;

  /// @brief Field radius, offset: 0x2c, size: 0x4, def value: None
  float_t ___radius;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SphericalItemDespawnZone, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SphericalItemDespawnZone, ___radius) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SphericalItemDespawnZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SphericalItemDespawnZone*, "", "SphericalItemDespawnZone");
