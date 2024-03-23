#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThrowableEmbeddingItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowableDecoyItem)
namespace GlobalNamespace {
class Avatar;
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
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class ThrowableDecoyItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ThrowableDecoyItem);
// Type: ::ThrowableDecoyItem
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 384, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ThrowableDecoyItem*
class CORDL_TYPE ThrowableDecoyItem : public ::GlobalNamespace::ThrowableEmbeddingItem {
public:
  // Declarations
  /// @brief Field animator, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_animator, put = __cordl_internal_set_animator))::UnityW<::UnityEngine::Animator> animator;

  /// @brief Field avatar, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Method EmbedAtRightAngle, addr 0x2ab2fb4, size 0x8, virtual true, abstract: false, final false
  inline bool EmbedAtRightAngle();

  /// @brief Method Initialize, addr 0x2ab2d20, size 0x1a8, virtual true, abstract: false, final false
  inline void Initialize(::StringW itemID, ::StringW itemKey, ::GlobalNamespace::__Item__Type itemType, ::GlobalNamespace::PlayerItemManager* playerItemManager,
                         ::GlobalNamespace::__Item__CustomParameters* customParameters);

  /// @brief Method MakeVisualOnly, addr 0x2ab2c54, size 0xcc, virtual true, abstract: false, final false
  inline void MakeVisualOnly(::GlobalNamespace::__Item__CustomParameters* customParameters);

  static inline ::GlobalNamespace::ThrowableDecoyItem* New_ctor();

  /// @brief Method OnAnchorStateUpdated, addr 0x2ab2fbc, size 0x10c, virtual true, abstract: false, final false
  inline void OnAnchorStateUpdated();

  /// @brief Method OnIsMasterUpdated, addr 0x2ab2fb0, size 0x4, virtual true, abstract: false, final false
  inline void OnIsMasterUpdated();

  /// @brief Method Refresh, addr 0x2ab2ec8, size 0xe8, virtual false, abstract: false, final false
  inline void Refresh();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get_animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get_animator();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr void __cordl_internal_set_animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  /// @brief Method .ctor, addr 0x2ab30e8, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThrowableDecoyItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThrowableDecoyItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThrowableDecoyItem(ThrowableDecoyItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThrowableDecoyItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThrowableDecoyItem(ThrowableDecoyItem const&) = delete;

  /// @brief Field avatar, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field animator, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ___animator;

  /// @brief Field danceChance offset 0xffffffff size 0x4
  static constexpr float_t danceChance{ 0.05 };

  /// @brief Field danceCount offset 0xffffffff size 0x4
  static constexpr int32_t danceCount{ static_cast<int32_t>(0x4) };

  /// @brief Field danceIDParameterName offset 0xffffffff size 0x8
  static constexpr ::ConstString danceIDParameterName{ u"danceID" };

  /// @brief Field startDancingTriggerName offset 0xffffffff size 0x8
  static constexpr ::ConstString startDancingTriggerName{ u"StartDancing" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ThrowableDecoyItem, 0x180>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableDecoyItem, ___avatar) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ThrowableDecoyItem, ___animator) == 0x178, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ThrowableDecoyItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ThrowableDecoyItem*, "", "ThrowableDecoyItem");
