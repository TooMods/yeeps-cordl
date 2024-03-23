#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Item_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticItem)
namespace GlobalNamespace {
struct CosmeticZone;
}
namespace GlobalNamespace {
class CosmeticsPreviewAvatar;
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
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CosmeticItem);
// Type: ::CosmeticItem
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 324, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CosmeticItem*
class CORDL_TYPE CosmeticItem : public ::GlobalNamespace::Item {
public:
  // Declarations
  /// @brief Field avatarReference, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_avatarReference, put = __cordl_internal_set_avatarReference))::UnityW<::UnityEngine::SkinnedMeshRenderer> avatarReference;

  /// @brief Field canEquip, offset 0xf1, size 0x1
  __declspec(property(get = __cordl_internal_get_canEquip, put = __cordl_internal_set_canEquip)) bool canEquip;

  /// @brief Field cosmeticContainer, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticContainer, put = __cordl_internal_set_cosmeticContainer))::UnityW<::UnityEngine::Transform> cosmeticContainer;

  /// @brief Field cosmeticKeys, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticKeys, put = __cordl_internal_set_cosmeticKeys))::System::Collections::Generic::List_1<::StringW>* cosmeticKeys;

  /// @brief Field cosmeticPlaceholder, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticPlaceholder, put = __cordl_internal_set_cosmeticPlaceholder))::UnityW<::UnityEngine::GameObject> cosmeticPlaceholder;

  /// @brief Field cosmeticVisualCopy, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticVisualCopy, put = __cordl_internal_set_cosmeticVisualCopy))::UnityW<::UnityEngine::GameObject> cosmeticVisualCopy;

  /// @brief Field despawnTimer, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_despawnTimer, put = __cordl_internal_set_despawnTimer)) float_t despawnTimer;

  /// @brief Field equipZones, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_equipZones, put = __cordl_internal_set_equipZones))::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* equipZones;

  /// @brief Field hoveringToEquip, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_hoveringToEquip, put = __cordl_internal_set_hoveringToEquip)) bool hoveringToEquip;

  /// @brief Field isActiveInHand, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveInHand, put = __cordl_internal_set_isActiveInHand)) bool isActiveInHand;

  /// @brief Field maxPreviewRadius, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPreviewRadius, put = __cordl_internal_set_maxPreviewRadius)) float_t maxPreviewRadius;

  /// @brief Field minPreviewRadius, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_minPreviewRadius, put = __cordl_internal_set_minPreviewRadius)) float_t minPreviewRadius;

  /// @brief Field previewAvatar, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_previewAvatar, put = __cordl_internal_set_previewAvatar))::UnityW<::GlobalNamespace::CosmeticsPreviewAvatar> previewAvatar;

  /// @brief Field zipperAnchor, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_zipperAnchor, put = __cordl_internal_set_zipperAnchor))::UnityW<::UnityEngine::Transform> zipperAnchor;

  /// @brief Method CanTransferOwnership, addr 0x29dac34, size 0x8, virtual true, abstract: false, final false
  inline bool CanTransferOwnership();

  /// @brief Method GetBounds, addr 0x29dac3c, size 0x70, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x29db344, size 0xec, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method MakeVisualOnly, addr 0x29dacac, size 0x2c, virtual true, abstract: false, final false
  inline void MakeVisualOnly(::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::CosmeticItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x29db430, size 0x13c, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnUpdate, addr 0x29db5e8, size 0xfc, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetHoveringToEquip, addr 0x29db56c, size 0x7c, virtual false, abstract: false, final false
  inline void SetHoveringToEquip(bool newHoveringToEquip);

  /// @brief Method TryCreateCosmeticVisualCopy, addr 0x29dacd8, size 0x66c, virtual false, abstract: false, final false
  inline bool TryCreateCosmeticVisualCopy(::GlobalNamespace::__Item__CustomParameters* customParameters);

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_avatarReference() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_avatarReference();

  constexpr bool const& __cordl_internal_get_canEquip() const;

  constexpr bool& __cordl_internal_get_canEquip();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cosmeticContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cosmeticContainer();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_cosmeticKeys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_cosmeticKeys() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cosmeticPlaceholder() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cosmeticPlaceholder();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_cosmeticVisualCopy() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_cosmeticVisualCopy();

  constexpr float_t const& __cordl_internal_get_despawnTimer() const;

  constexpr float_t& __cordl_internal_get_despawnTimer();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*& __cordl_internal_get_equipZones();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>*> const& __cordl_internal_get_equipZones() const;

  constexpr bool const& __cordl_internal_get_hoveringToEquip() const;

  constexpr bool& __cordl_internal_get_hoveringToEquip();

  constexpr bool const& __cordl_internal_get_isActiveInHand() const;

  constexpr bool& __cordl_internal_get_isActiveInHand();

  constexpr float_t const& __cordl_internal_get_maxPreviewRadius() const;

  constexpr float_t& __cordl_internal_get_maxPreviewRadius();

  constexpr float_t const& __cordl_internal_get_minPreviewRadius() const;

  constexpr float_t& __cordl_internal_get_minPreviewRadius();

  constexpr ::UnityW<::GlobalNamespace::CosmeticsPreviewAvatar> const& __cordl_internal_get_previewAvatar() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsPreviewAvatar>& __cordl_internal_get_previewAvatar();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_zipperAnchor() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_zipperAnchor();

  constexpr void __cordl_internal_set_avatarReference(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  constexpr void __cordl_internal_set_canEquip(bool value);

  constexpr void __cordl_internal_set_cosmeticContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_cosmeticKeys(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_cosmeticPlaceholder(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_cosmeticVisualCopy(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_despawnTimer(float_t value);

  constexpr void __cordl_internal_set_equipZones(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* value);

  constexpr void __cordl_internal_set_hoveringToEquip(bool value);

  constexpr void __cordl_internal_set_isActiveInHand(bool value);

  constexpr void __cordl_internal_set_maxPreviewRadius(float_t value);

  constexpr void __cordl_internal_set_minPreviewRadius(float_t value);

  constexpr void __cordl_internal_set_previewAvatar(::UnityW<::GlobalNamespace::CosmeticsPreviewAvatar> value);

  constexpr void __cordl_internal_set_zipperAnchor(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x29db6e4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CosmeticItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CosmeticItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CosmeticItem(CosmeticItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CosmeticItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CosmeticItem(CosmeticItem const&) = delete;

  /// @brief Field minPreviewRadius, offset: 0xe8, size: 0x4, def value: None
  float_t ___minPreviewRadius;

  /// @brief Field maxPreviewRadius, offset: 0xec, size: 0x4, def value: None
  float_t ___maxPreviewRadius;

  /// @brief Field isActiveInHand, offset: 0xf0, size: 0x1, def value: None
  bool ___isActiveInHand;

  /// @brief Field canEquip, offset: 0xf1, size: 0x1, def value: None
  bool ___canEquip;

  /// @brief Field equipZones, offset: 0xf8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticZone>* ___equipZones;

  /// @brief Field hoveringToEquip, offset: 0x100, size: 0x1, def value: None
  bool ___hoveringToEquip;

  /// @brief Field cosmeticContainer, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___cosmeticContainer;

  /// @brief Field previewAvatar, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsPreviewAvatar> ___previewAvatar;

  /// @brief Field zipperAnchor, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___zipperAnchor;

  /// @brief Field avatarReference, offset: 0x120, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ___avatarReference;

  /// @brief Field cosmeticPlaceholder, offset: 0x128, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___cosmeticPlaceholder;

  /// @brief Field cosmeticVisualCopy, offset: 0x130, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___cosmeticVisualCopy;

  /// @brief Field cosmeticKeys, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___cosmeticKeys;

  /// @brief Field despawnTimer, offset: 0x140, size: 0x4, def value: None
  float_t ___despawnTimer;

  /// @brief Field EQUIP_SOUND_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString EQUIP_SOUND_KEY{ u"cosmeticEquip" };

  /// @brief Field allowEquipInAnyZone offset 0xffffffff size 0x1
  static constexpr bool allowEquipInAnyZone{ true };

  /// @brief Field hoveringToEquipDisengageHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipDisengageHapticAmplitude{ 0.15 };

  /// @brief Field hoveringToEquipDisengageHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipDisengageHapticDuration{ 0.1 };

  /// @brief Field hoveringToEquipEngageHapticAmplitude offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipEngageHapticAmplitude{ 0.25 };

  /// @brief Field hoveringToEquipEngageHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipEngageHapticDuration{ 0.1 };

  /// @brief Field hoveringToEquipScale offset 0xffffffff size 0x4
  static constexpr float_t hoveringToEquipScale{ 2.2 };

  /// @brief Field timeUntilDespawn offset 0xffffffff size 0x4
  static constexpr float_t timeUntilDespawn{ 2.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CosmeticItem, 0x148>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___minPreviewRadius) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___maxPreviewRadius) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___isActiveInHand) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___canEquip) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___equipZones) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___hoveringToEquip) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___cosmeticContainer) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___previewAvatar) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___zipperAnchor) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___avatarReference) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___cosmeticPlaceholder) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___cosmeticVisualCopy) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___cosmeticKeys) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticItem, ___despawnTimer) == 0x140, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CosmeticItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CosmeticItem*, "", "CosmeticItem");
