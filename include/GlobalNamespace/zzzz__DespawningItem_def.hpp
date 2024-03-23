#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DespawningItem)
// Forward declare root types
namespace GlobalNamespace {
class DespawningItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DespawningItem);
// Type: ::DespawningItem
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DespawningItem*
class CORDL_TYPE DespawningItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field <timeSinceLastUsed>k__BackingField, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get__timeSinceLastUsed_k__BackingField, put = __cordl_internal_set__timeSinceLastUsed_k__BackingField)) float_t _timeSinceLastUsed_k__BackingField;

  /// @brief Field despawnTime, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTime, put = __cordl_internal_set_despawnTime)) float_t despawnTime;

  __declspec(property(get = get_timeSinceLastUsed, put = set_timeSinceLastUsed)) float_t timeSinceLastUsed;

  static inline ::GlobalNamespace::DespawningItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2a9d6b8, size 0x8, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnUpdate, addr 0x2a9d6c0, size 0x78, virtual true, abstract: false, final false
  inline void OnUpdate();

  constexpr float_t const& __cordl_internal_get__timeSinceLastUsed_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__timeSinceLastUsed_k__BackingField();

  constexpr float_t const& __cordl_internal_get_despawnTime() const;

  constexpr float_t& __cordl_internal_get_despawnTime();

  constexpr void __cordl_internal_set__timeSinceLastUsed_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_despawnTime(float_t value);

  /// @brief Method .ctor, addr 0x2a9d774, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_timeSinceLastUsed, addr 0x2a9d6a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timeSinceLastUsed();

  /// @brief Method set_timeSinceLastUsed, addr 0x2a9d6b0, size 0x8, virtual false, abstract: false, final false
  inline void set_timeSinceLastUsed(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DespawningItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DespawningItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DespawningItem(DespawningItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DespawningItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DespawningItem(DespawningItem const&) = delete;

  /// @brief Field despawnTime, offset: 0xe8, size: 0x4, def value: None
  float_t ___despawnTime;

  /// @brief Field <timeSinceLastUsed>k__BackingField, offset: 0xec, size: 0x4, def value: None
  float_t ____timeSinceLastUsed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DespawningItem, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DespawningItem, ___despawnTime) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DespawningItem, ____timeSinceLastUsed_k__BackingField) == 0xec, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DespawningItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DespawningItem*, "", "DespawningItem");
