#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PlayerHeadLayoutItem2D)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class ExpressionController;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class TapButton2D;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerHeadLayoutItem2D;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerHeadLayoutItem2D);
// Type: ::PlayerHeadLayoutItem2D
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerHeadLayoutItem2D*
class CORDL_TYPE PlayerHeadLayoutItem2D : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field avatar, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_avatar, put = __cordl_internal_set_avatar))::UnityW<::GlobalNamespace::Avatar> avatar;

  /// @brief Field headVoiceChatSource, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_headVoiceChatSource, put = __cordl_internal_set_headVoiceChatSource))::UnityW<::GlobalNamespace::ExpressionController> headVoiceChatSource;

  /// @brief Field tapButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_tapButton, put = __cordl_internal_set_tapButton))::UnityW<::GlobalNamespace::TapButton2D> tapButton;

  /// @brief Method Clear, addr 0x2e05d44, size 0x54, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DestroySelf, addr 0x2e0583c, size 0x6c, virtual false, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method Display, addr 0x2e058b0, size 0x9c, virtual false, abstract: false, final false
  inline void Display(::GlobalNamespace::PlayerData playerData);

  static inline ::GlobalNamespace::PlayerHeadLayoutItem2D* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_avatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_avatar();

  constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& __cordl_internal_get_headVoiceChatSource() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController>& __cordl_internal_get_headVoiceChatSource();

  constexpr ::UnityW<::GlobalNamespace::TapButton2D> const& __cordl_internal_get_tapButton() const;

  constexpr ::UnityW<::GlobalNamespace::TapButton2D>& __cordl_internal_get_tapButton();

  constexpr void __cordl_internal_set_avatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_headVoiceChatSource(::UnityW<::GlobalNamespace::ExpressionController> value);

  constexpr void __cordl_internal_set_tapButton(::UnityW<::GlobalNamespace::TapButton2D> value);

  /// @brief Method .ctor, addr 0x2e05d98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerHeadLayoutItem2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadLayoutItem2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerHeadLayoutItem2D(PlayerHeadLayoutItem2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerHeadLayoutItem2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerHeadLayoutItem2D(PlayerHeadLayoutItem2D const&) = delete;

  /// @brief Field avatar, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___avatar;

  /// @brief Field headVoiceChatSource, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExpressionController> ___headVoiceChatSource;

  /// @brief Field tapButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TapButton2D> ___tapButton;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerHeadLayoutItem2D, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayoutItem2D, ___avatar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayoutItem2D, ___headVoiceChatSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerHeadLayoutItem2D, ___tapButton) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerHeadLayoutItem2D);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerHeadLayoutItem2D*, "", "PlayerHeadLayoutItem2D");
