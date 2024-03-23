#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ItemDespawnZone_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(BoxItemDespawnZone)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BoxItemDespawnZone;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BoxItemDespawnZone);
// Type: ::BoxItemDespawnZone
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BoxItemDespawnZone*
class CORDL_TYPE BoxItemDespawnZone : public ::GlobalNamespace::ItemDespawnZone {
public:
  // Declarations
  /// @brief Field size, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size))::UnityEngine::Vector3 size;

  /// @brief Method IsWithinZone, addr 0x29d9d24, size 0x98, virtual true, abstract: false, final false
  inline bool IsWithinZone(::UnityEngine::Vector3 position);

  static inline ::GlobalNamespace::BoxItemDespawnZone* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_size();

  constexpr void __cordl_internal_set_size(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x29d9dbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoxItemDespawnZone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoxItemDespawnZone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoxItemDespawnZone(BoxItemDespawnZone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoxItemDespawnZone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoxItemDespawnZone(BoxItemDespawnZone const&) = delete;

  /// @brief Field size, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BoxItemDespawnZone, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BoxItemDespawnZone, ___size) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BoxItemDespawnZone);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BoxItemDespawnZone*, "", "BoxItemDespawnZone");
