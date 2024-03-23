#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__WearableItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WearableCameraItem)
namespace GlobalNamespace {
class OverrideCamera;
}
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
// Forward declare root types
namespace GlobalNamespace {
class WearableCameraItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::WearableCameraItem);
// Type: ::WearableCameraItem
// SizeInfo { instance_size: 344, native_size: -1, calculated_instance_size: 344, calculated_native_size: 344, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::WearableCameraItem*
class CORDL_TYPE WearableCameraItem : public ::GlobalNamespace::WearableItem {
public:
  // Declarations
  /// @brief Field overrideCamera, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideCamera, put = __cordl_internal_set_overrideCamera))::UnityW<::GlobalNamespace::OverrideCamera> overrideCamera;

  /// @brief Method CanTransferOwnership, addr 0x2f68734, size 0x8, virtual true, abstract: false, final false
  inline bool CanTransferOwnership();

  /// @brief Method Initialize, addr 0x2f68680, size 0x98, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::WearableCameraItem* New_ctor();

  /// @brief Method OnIsWornUpdated, addr 0x2f6873c, size 0x24, virtual true, abstract: false, final false
  inline void OnIsWornUpdated();

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera> const& __cordl_internal_get_overrideCamera() const;

  constexpr ::UnityW<::GlobalNamespace::OverrideCamera>& __cordl_internal_get_overrideCamera();

  constexpr void __cordl_internal_set_overrideCamera(::UnityW<::GlobalNamespace::OverrideCamera> value);

  /// @brief Method .ctor, addr 0x2f68760, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WearableCameraItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WearableCameraItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WearableCameraItem(WearableCameraItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WearableCameraItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WearableCameraItem(WearableCameraItem const&) = delete;

  /// @brief Field overrideCamera, offset: 0x150, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OverrideCamera> ___overrideCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::WearableCameraItem, 0x158>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::WearableCameraItem, ___overrideCamera) == 0x150, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::WearableCameraItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WearableCameraItem*, "", "WearableCameraItem");
