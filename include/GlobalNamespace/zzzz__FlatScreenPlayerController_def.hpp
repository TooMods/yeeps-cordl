#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlatScreenPlayerController)
namespace GlobalNamespace {
class MasterPlayer;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FlatScreenPlayerController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlatScreenPlayerController);
// Type: ::FlatScreenPlayerController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FlatScreenPlayerController*
class CORDL_TYPE FlatScreenPlayerController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field head, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_head, put = __cordl_internal_set_head))::UnityW<::UnityEngine::Transform> head;

  /// @brief Field isActive, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field leftHand, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHand, put = __cordl_internal_set_leftHand))::UnityW<::UnityEngine::Transform> leftHand;

  /// @brief Field objectsToDisableForFreeCam, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_objectsToDisableForFreeCam,
                      put = __cordl_internal_set_objectsToDisableForFreeCam))::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> objectsToDisableForFreeCam;

  /// @brief Field player, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_player, put = __cordl_internal_set_player))::UnityW<::GlobalNamespace::MasterPlayer> player;

  /// @brief Field playerRB, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_playerRB, put = __cordl_internal_set_playerRB))::UnityW<::UnityEngine::Rigidbody> playerRB;

  /// @brief Field rightHand, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHand, put = __cordl_internal_set_rightHand))::UnityW<::UnityEngine::Transform> rightHand;

  /// @brief Method Activate, addr 0x1062054, size 0x28, virtual false, abstract: false, final false
  inline void Activate();

  static inline ::GlobalNamespace::FlatScreenPlayerController* New_ctor();

  /// @brief Method Start, addr 0x1062050, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x106207c, size 0x32c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_head() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_head();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHand() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHand();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_objectsToDisableForFreeCam() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get_objectsToDisableForFreeCam();

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_player() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_player();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_playerRB() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_playerRB();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHand() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHand();

  constexpr void __cordl_internal_set_head(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_objectsToDisableForFreeCam(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set_player(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_playerRB(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x10623a8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlatScreenPlayerController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlatScreenPlayerController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlatScreenPlayerController(FlatScreenPlayerController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlatScreenPlayerController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlatScreenPlayerController(FlatScreenPlayerController const&) = delete;

  /// @brief Field player, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___player;

  /// @brief Field playerRB, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___playerRB;

  /// @brief Field head, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___head;

  /// @brief Field rightHand, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHand;

  /// @brief Field leftHand, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHand;

  /// @brief Field objectsToDisableForFreeCam, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ___objectsToDisableForFreeCam;

  /// @brief Field isActive, offset: 0x48, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field horizontalSensitivty offset 0xffffffff size 0x4
  static constexpr float_t horizontalSensitivty{ 3.0 };

  /// @brief Field jumpHeight offset 0xffffffff size 0x4
  static constexpr float_t jumpHeight{ 1.5 };

  /// @brief Field moveSpeed offset 0xffffffff size 0x4
  static constexpr float_t moveSpeed{ 6.0 };

  /// @brief Field strafeSpeed offset 0xffffffff size 0x4
  static constexpr float_t strafeSpeed{ 3.0 };

  /// @brief Field verticalMoveSpeed offset 0xffffffff size 0x4
  static constexpr float_t verticalMoveSpeed{ 3.0 };

  /// @brief Field verticalSensitivity offset 0xffffffff size 0x4
  static constexpr float_t verticalSensitivity{ 3.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlatScreenPlayerController, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatScreenPlayerController, ___player) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatScreenPlayerController, ___playerRB) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatScreenPlayerController, ___head) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatScreenPlayerController, ___rightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatScreenPlayerController, ___leftHand) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatScreenPlayerController, ___objectsToDisableForFreeCam) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FlatScreenPlayerController, ___isActive) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlatScreenPlayerController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlatScreenPlayerController*, "", "FlatScreenPlayerController");
