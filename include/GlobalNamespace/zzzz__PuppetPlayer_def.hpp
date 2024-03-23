#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PuppetPlayer)
namespace GlobalNamespace {
class ExpressionController;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
struct __Player__Pose;
}
namespace GlobalNamespace {
struct __Player__Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PuppetPlayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PuppetPlayer);
// Type: ::PuppetPlayer
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PuppetPlayer*
class CORDL_TYPE PuppetPlayer : public ::GlobalNamespace::Player {
public:
  // Declarations
  /// @brief Field advanceTimer, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_advanceTimer, put = __cordl_internal_set_advanceTimer)) float_t advanceTimer;

  /// @brief Field bodyCollider, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_bodyCollider, put = __cordl_internal_set_bodyCollider))::UnityW<::UnityEngine::Collider> bodyCollider;

  /// @brief Field bodyTransform, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bodyTransform, put = __cordl_internal_set_bodyTransform))::UnityW<::UnityEngine::Transform> bodyTransform;

  /// @brief Field displayNameText, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_displayNameText, put = __cordl_internal_set_displayNameText))::UnityW<::UnityEngine::UI::Text> displayNameText;

  /// @brief Field expression, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_expression, put = __cordl_internal_set_expression))::UnityW<::GlobalNamespace::ExpressionController> expression;

  /// @brief Field que, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_que, put = __cordl_internal_set_que))::System::Collections::Generic::List_1<::GlobalNamespace::__Player__Pose>* que;

  /// @brief Method ExpressPose, addr 0x1752b10, size 0x80, virtual true, abstract: false, final false
  inline void ExpressPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method Initialize, addr 0x17526f0, size 0x5c, virtual true, abstract: false, final false
  inline void Initialize(::GlobalNamespace::PlayerData playerData);

  static inline ::GlobalNamespace::PuppetPlayer* New_ctor();

  /// @brief Method OnFixedUpdate, addr 0x1752a0c, size 0x4, virtual true, abstract: false, final false
  inline void OnFixedUpdate();

  /// @brief Method OnLateUpdate, addr 0x1752a10, size 0x4, virtual true, abstract: false, final false
  inline void OnLateUpdate();

  /// @brief Method OnReceivedPose, addr 0x1752a14, size 0xfc, virtual true, abstract: false, final false
  inline void OnReceivedPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method OnUpdate, addr 0x1752874, size 0x198, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method SetIsHidden, addr 0x1752b90, size 0x34, virtual true, abstract: false, final false
  inline void SetIsHidden(bool isHidden);

  /// @brief Method UpdateDisplayName, addr 0x175274c, size 0xac, virtual true, abstract: false, final false
  inline void UpdateDisplayName(::StringW displayName);

  /// @brief Method UpdateType, addr 0x17527f8, size 0x7c, virtual true, abstract: false, final false
  inline void UpdateType(::GlobalNamespace::__Player__Type type);

  constexpr float_t const& __cordl_internal_get_advanceTimer() const;

  constexpr float_t& __cordl_internal_get_advanceTimer();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_bodyCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_bodyCollider();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bodyTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bodyTransform();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_displayNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_displayNameText();

  constexpr ::UnityW<::GlobalNamespace::ExpressionController> const& __cordl_internal_get_expression() const;

  constexpr ::UnityW<::GlobalNamespace::ExpressionController>& __cordl_internal_get_expression();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__Player__Pose>*& __cordl_internal_get_que();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__Player__Pose>*> const& __cordl_internal_get_que() const;

  constexpr void __cordl_internal_set_advanceTimer(float_t value);

  constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_bodyTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_displayNameText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_expression(::UnityW<::GlobalNamespace::ExpressionController> value);

  constexpr void __cordl_internal_set_que(::System::Collections::Generic::List_1<::GlobalNamespace::__Player__Pose>* value);

  /// @brief Method .ctor, addr 0x1752bc4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PuppetPlayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PuppetPlayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PuppetPlayer(PuppetPlayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PuppetPlayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PuppetPlayer(PuppetPlayer const&) = delete;

  /// @brief Field bodyTransform, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bodyTransform;

  /// @brief Field displayNameText, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___displayNameText;

  /// @brief Field expression, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ExpressionController> ___expression;

  /// @brief Field bodyCollider, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___bodyCollider;

  /// @brief Field que, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__Player__Pose>* ___que;

  /// @brief Field advanceTimer, offset: 0x70, size: 0x4, def value: None
  float_t ___advanceTimer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PuppetPlayer, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetPlayer, ___bodyTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetPlayer, ___displayNameText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetPlayer, ___expression) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetPlayer, ___bodyCollider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetPlayer, ___que) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PuppetPlayer, ___advanceTimer) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PuppetPlayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PuppetPlayer*, "", "PuppetPlayer");
