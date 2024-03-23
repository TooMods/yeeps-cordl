#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThrowableImpactItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ThrowableTeleporterItem)
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableTeleporterItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableTeleporterItem);
// Type: ::ThrowableTeleporterItem
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 288, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableTeleporterItem*
class CORDL_TYPE ThrowableTeleporterItem : public ::GlobalNamespace::ThrowableImpactItem {
public:
  // Declarations
  /// @brief Field failSoundKey, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_failSoundKey, put = __cordl_internal_set_failSoundKey))::StringW failSoundKey;

  /// @brief Field successSoundKey, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_successSoundKey, put = __cordl_internal_set_successSoundKey))::StringW successSoundKey;

  /// @brief Method GetDespawnTime, addr 0x2f674b8, size 0xc, virtual true, abstract: false, final false
  inline float_t GetDespawnTime();

  static inline ::GlobalNamespace::ThrowableTeleporterItem* New_ctor();

  /// @brief Method OnImpactTriggered, addr 0x2f674c4, size 0x2e8, virtual true, abstract: false, final false
  inline void OnImpactTriggered(::UnityEngine::Collision* collision);

  constexpr ::StringW const& __cordl_internal_get_failSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_failSoundKey();

  constexpr ::StringW const& __cordl_internal_get_successSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_successSoundKey();

  constexpr void __cordl_internal_set_failSoundKey(::StringW value);

  constexpr void __cordl_internal_set_successSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x2f68170, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableTeleporterItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableTeleporterItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableTeleporterItem(ThrowableTeleporterItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableTeleporterItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableTeleporterItem(ThrowableTeleporterItem const&) = delete;

  /// @brief Field successSoundKey, offset: 0x110, size: 0x8, def value: None
  ::StringW ___successSoundKey;

  /// @brief Field failSoundKey, offset: 0x118, size: 0x8, def value: None
  ::StringW ___failSoundKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableTeleporterItem, 0x120>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableTeleporterItem, ___successSoundKey) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableTeleporterItem, ___failSoundKey) == 0x118, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableTeleporterItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableTeleporterItem*, "", "ThrowableTeleporterItem");
