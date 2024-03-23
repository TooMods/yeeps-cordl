#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DespawningItem_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DetonatorItem)
namespace GlobalNamespace {
class PlayerItemManager;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace GlobalNamespace {
struct __Item__Type;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class DetonatorItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DetonatorItem);
// Type: ::DetonatorItem
// SizeInfo { instance_size: 304, native_size: -1, calculated_instance_size: 304, calculated_native_size: 304, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DetonatorItem*
class CORDL_TYPE DetonatorItem : public ::GlobalNamespace::DespawningItem {
public:
  // Declarations
  /// @brief Field boundingCenter, offset 0x120, size 0xc
  __declspec(property(get = __cordl_internal_get_boundingCenter, put = __cordl_internal_set_boundingCenter))::UnityEngine::Vector3 boundingCenter;

  /// @brief Field boundingRadius, offset 0x12c, size 0x4
  __declspec(property(get = __cordl_internal_get_boundingRadius, put = __cordl_internal_set_boundingRadius)) float_t boundingRadius;

  /// @brief Field detonatorButton, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_detonatorButton, put = __cordl_internal_set_detonatorButton))::UnityW<::GlobalNamespace::SimpleButtonController> detonatorButton;

  /// @brief Field flashingMat, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_flashingMat, put = __cordl_internal_set_flashingMat))::UnityW<::UnityEngine::Material> flashingMat;

  /// @brief Field fuseTimer, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_fuseTimer, put = __cordl_internal_set_fuseTimer)) float_t fuseTimer;

  /// @brief Field hasPlayedTickSound, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPlayedTickSound, put = __cordl_internal_set_hasPlayedTickSound)) bool hasPlayedTickSound;

  /// @brief Field isFuseLit, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_isFuseLit, put = __cordl_internal_set_isFuseLit)) bool isFuseLit;

  /// @brief Field renderer, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_renderer, put = __cordl_internal_set_renderer))::UnityW<::UnityEngine::MeshRenderer> renderer;

  /// @brief Field tickSoundKey, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_tickSoundKey, put = __cordl_internal_set_tickSoundKey))::StringW tickSoundKey;

  /// @brief Method GetBounds, addr 0x2a9d79c, size 0x1c, virtual true, abstract: false, final false
  inline void GetBounds(ByRef<::UnityEngine::Vector3> center, ByRef<float_t> radius);

  /// @brief Method Initialize, addr 0x2a9d7b8, size 0x138, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::DetonatorItem* New_ctor();

  /// @brief Method OnDespawned, addr 0x2a9dcd0, size 0x8, virtual true, abstract: false, final false
  inline void OnDespawned();

  /// @brief Method OnDetonateButtonPressed, addr 0x2a9da44, size 0x48, virtual false, abstract: false, final false
  inline void OnDetonateButtonPressed();

  /// @brief Method OnDetonateButtonReleased, addr 0x2a9dad4, size 0x48, virtual false, abstract: false, final false
  inline void OnDetonateButtonReleased();

  /// @brief Method OnIsMasterUpdated, addr 0x2a9da14, size 0x2c, virtual true, abstract: false, final false
  inline void OnIsMasterUpdated();

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x2a9db1c, size 0xa8, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(::StringW payload);

  /// @brief Method OnUpdate, addr 0x2a9dcd8, size 0x168, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetFuseLit, addr 0x2a9dbc4, size 0x10c, virtual false, abstract: false, final false
  inline void SetFuseLit(bool newIsFuseLit);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_boundingCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_boundingCenter();

  constexpr float_t const& __cordl_internal_get_boundingRadius() const;

  constexpr float_t& __cordl_internal_get_boundingRadius();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_detonatorButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_detonatorButton();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_flashingMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_flashingMat();

  constexpr float_t const& __cordl_internal_get_fuseTimer() const;

  constexpr float_t& __cordl_internal_get_fuseTimer();

  constexpr bool const& __cordl_internal_get_hasPlayedTickSound() const;

  constexpr bool& __cordl_internal_get_hasPlayedTickSound();

  constexpr bool const& __cordl_internal_get_isFuseLit() const;

  constexpr bool& __cordl_internal_get_isFuseLit();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_renderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_renderer();

  constexpr ::StringW const& __cordl_internal_get_tickSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_tickSoundKey();

  constexpr void __cordl_internal_set_boundingCenter(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_boundingRadius(float_t value);

  constexpr void __cordl_internal_set_detonatorButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_flashingMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_fuseTimer(float_t value);

  constexpr void __cordl_internal_set_hasPlayedTickSound(bool value);

  constexpr void __cordl_internal_set_isFuseLit(bool value);

  constexpr void __cordl_internal_set_renderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_tickSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x2a9de40, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetonatorItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DetonatorItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetonatorItem(DetonatorItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetonatorItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetonatorItem(DetonatorItem const&) = delete;

  /// @brief Field flashingMat, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___flashingMat;

  /// @brief Field isFuseLit, offset: 0xf8, size: 0x1, def value: None
  bool ___isFuseLit;

  /// @brief Field fuseTimer, offset: 0xfc, size: 0x4, def value: None
  float_t ___fuseTimer;

  /// @brief Field tickSoundKey, offset: 0x100, size: 0x8, def value: None
  ::StringW ___tickSoundKey;

  /// @brief Field hasPlayedTickSound, offset: 0x108, size: 0x1, def value: None
  bool ___hasPlayedTickSound;

  /// @brief Field renderer, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___renderer;

  /// @brief Field detonatorButton, offset: 0x118, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___detonatorButton;

  /// @brief Field boundingCenter, offset: 0x120, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___boundingCenter;

  /// @brief Field boundingRadius, offset: 0x12c, size: 0x4, def value: None
  float_t ___boundingRadius;

  /// @brief Field flashColorIntensity offset 0xffffffff size 0x4
  static constexpr float_t flashColorIntensity{ 0.5 };

  /// @brief Field flashDuration offset 0xffffffff size 0x4
  static constexpr float_t flashDuration{ 0.1 };

  /// @brief Field flashingMatIndex offset 0xffffffff size 0x4
  static constexpr int32_t flashingMatIndex{ static_cast<int32_t>(0x1) };

  /// @brief Field startFuseMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString startFuseMessage{ u"startFuse" };

  /// @brief Field stopFuseMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString stopFuseMessage{ u"stopFuse" };

  /// @brief Field timeBetweenFlashes offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenFlashes{ 0.18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DetonatorItem, 0x130>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___flashingMat) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___isFuseLit) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___fuseTimer) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___tickSoundKey) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___hasPlayedTickSound) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___renderer) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___detonatorButton) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___boundingCenter) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DetonatorItem, ___boundingRadius) == 0x12c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DetonatorItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DetonatorItem*, "", "DetonatorItem");
