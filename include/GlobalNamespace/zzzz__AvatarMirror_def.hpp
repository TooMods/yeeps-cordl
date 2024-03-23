#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(AvatarMirror)
namespace GlobalNamespace {
class Avatar;
}
namespace GlobalNamespace {
class CosmeticsDisplay;
}
namespace GlobalNamespace {
class ExpressionController;
}
namespace GlobalNamespace {
class Player;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarMirror;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AvatarMirror);
// Type: ::AvatarMirror
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AvatarMirror*
class CORDL_TYPE AvatarMirror : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field activeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field inactiveContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inactiveContainer, put = __cordl_internal_set_inactiveContainer))::UnityW<::UnityEngine::GameObject> inactiveContainer;

  /// @brief Field isActive, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field mirrorAvatar, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mirrorAvatar, put = __cordl_internal_set_mirrorAvatar))::UnityW<::GlobalNamespace::Avatar> mirrorAvatar;

  /// @brief Field mirrorAvatarPosition, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_mirrorAvatarPosition, put = __cordl_internal_set_mirrorAvatarPosition))::UnityEngine::Vector3 mirrorAvatarPosition;

  /// @brief Field mirrorAvatarRotation, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_mirrorAvatarRotation, put = __cordl_internal_set_mirrorAvatarRotation))::UnityEngine::Quaternion mirrorAvatarRotation;

  /// @brief Field mirrorExpression, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mirrorExpression, put = __cordl_internal_set_mirrorExpression))::UnityW<::GlobalNamespace::ExpressionController> mirrorExpression;

  /// @brief Field referenceCosmeticsDisplay, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_referenceCosmeticsDisplay,
                      put = __cordl_internal_set_referenceCosmeticsDisplay))::UnityW<::GlobalNamespace::CosmeticsDisplay> referenceCosmeticsDisplay;

  /// @brief Field referencePlayer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_referencePlayer, put = __cordl_internal_set_referencePlayer))::UnityW<::GlobalNamespace::Player> referencePlayer;

  static inline ::GlobalNamespace::AvatarMirror* New_ctor();

  /// @brief Method OnDisable, addr 0x154100c, size 0x8c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetActive, addr 0x1541310, size 0x2d8, virtual false, abstract: false, final false
  inline void SetActive(bool newActive);

  /// @brief Method SetReferencePlayer, addr 0x1541098, size 0x278, virtual false, abstract: false, final false
  inline void SetReferencePlayer(::GlobalNamespace::Player* newReferencePlayer);

  /// @brief Method Update, addr 0x15415e8, size 0x198, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_inactiveContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_inactiveContainer();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr ::UnityW<::GlobalNamespace::Avatar> const& __cordl_internal_get_mirrorAvatar() const;

  constexpr ::UnityW<::GlobalNamespace::Avatar>& __cordl_internal_get_mirrorAvatar();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_mirrorAvatarPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_mirrorAvatarPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_mirrorAvatarRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_mirrorAvatarRotation();

  constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& __cordl_internal_get_mirrorExpression() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController>& __cordl_internal_get_mirrorExpression();

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay> const& __cordl_internal_get_referenceCosmeticsDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay>& __cordl_internal_get_referenceCosmeticsDisplay();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_referencePlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_referencePlayer();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_inactiveContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_mirrorAvatar(::UnityW<::GlobalNamespace::Avatar> value);

  constexpr void __cordl_internal_set_mirrorAvatarPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_mirrorAvatarRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_mirrorExpression(::UnityW<::GlobalNamespace::ExpressionController> value);

  constexpr void __cordl_internal_set_referenceCosmeticsDisplay(::UnityW<::GlobalNamespace::CosmeticsDisplay> value);

  constexpr void __cordl_internal_set_referencePlayer(::UnityW<::GlobalNamespace::Player> value);

  /// @brief Method .ctor, addr 0x1541780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AvatarMirror();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AvatarMirror", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AvatarMirror(AvatarMirror&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AvatarMirror", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AvatarMirror(AvatarMirror const&) = delete;

  /// @brief Field activeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field inactiveContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___inactiveContainer;

  /// @brief Field mirrorAvatar, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Avatar> ___mirrorAvatar;

  /// @brief Field mirrorExpression, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExpressionController> ___mirrorExpression;

  /// @brief Field mirrorAvatarPosition, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___mirrorAvatarPosition;

  /// @brief Field mirrorAvatarRotation, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___mirrorAvatarRotation;

  /// @brief Field referencePlayer, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___referencePlayer;

  /// @brief Field referenceCosmeticsDisplay, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsDisplay> ___referenceCosmeticsDisplay;

  /// @brief Field isActive, offset: 0x68, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Mirror: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AvatarMirror, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___activeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___inactiveContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___mirrorAvatar) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___mirrorExpression) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___mirrorAvatarPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___mirrorAvatarRotation) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___referencePlayer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___referenceCosmeticsDisplay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AvatarMirror, ___isActive) == 0x68, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AvatarMirror);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AvatarMirror*, "", "AvatarMirror");
