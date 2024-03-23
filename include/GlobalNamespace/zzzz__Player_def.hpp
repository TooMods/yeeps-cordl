#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Avatar_def.hpp"
#include "GlobalNamespace/zzzz__Player_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Player)
namespace GlobalNamespace {
class AvatarController;
}
namespace GlobalNamespace {
class AvatarIdentity;
}
namespace GlobalNamespace {
class CosmeticData;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class ToxModPlayerTracker;
}
namespace GlobalNamespace {
struct __Avatar__Pose;
}
namespace GlobalNamespace {
struct __Player__KnockbackSource;
}
namespace GlobalNamespace {
struct __Player__Pose;
}
namespace GlobalNamespace {
struct __Player__StatusEffect;
}
namespace GlobalNamespace {
struct __Player__SurfaceTouchType;
}
namespace GlobalNamespace {
struct __Player__Type;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __Player__KnockbackSource;
}
namespace GlobalNamespace {
struct __Player__StatusEffect;
}
namespace GlobalNamespace {
struct __Player__SurfaceTouchType;
}
namespace GlobalNamespace {
struct __Player__Type;
}
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
struct __Player__Pose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__Player__KnockbackSource);
MARK_VAL_T(::GlobalNamespace::__Player__StatusEffect);
MARK_VAL_T(::GlobalNamespace::__Player__SurfaceTouchType);
MARK_VAL_T(::GlobalNamespace::__Player__Type);
MARK_REF_PTR_T(::GlobalNamespace::Player);
MARK_VAL_T(::GlobalNamespace::__Player__Pose);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Player::Type
struct CORDL_TYPE __Player__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Player__Type_Unwrapped
  enum struct ____Player__Type_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Seeker = static_cast<int32_t>(0x1),
    __E_Hider = static_cast<int32_t>(0x2),
    __E_Killed = static_cast<int32_t>(0x3),
    __E_SpectatorVisible = static_cast<int32_t>(0x4),
    __E_SpectatorHidden = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Player__Type_Unwrapped() const noexcept {
    return static_cast<____Player__Type_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Player__Type();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Player__Type(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Hider value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Player__Type const Hider;

  /// @brief Field Killed value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Player__Type const Killed;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Player__Type const None;

  /// @brief Field Seeker value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Player__Type const Seeker;

  /// @brief Field SpectatorHidden value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__Player__Type const SpectatorHidden;

  /// @brief Field SpectatorVisible value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__Player__Type const SpectatorVisible;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Player__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Player__Type, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::StatusEffect
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Player::StatusEffect
struct CORDL_TYPE __Player__StatusEffect {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Player__StatusEffect_Unwrapped
  enum struct ____Player__StatusEffect_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Frozen = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Player__StatusEffect_Unwrapped() const noexcept {
    return static_cast<____Player__StatusEffect_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Player__StatusEffect();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Player__StatusEffect(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Frozen value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Player__StatusEffect const Frozen;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Player__StatusEffect const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Player__StatusEffect, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Player__StatusEffect, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SurfaceTouchType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Player::SurfaceTouchType
struct CORDL_TYPE __Player__SurfaceTouchType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Player__SurfaceTouchType_Unwrapped
  enum struct ____Player__SurfaceTouchType_Unwrapped : int32_t {
    __E_GroundEnter = static_cast<int32_t>(0x0),
    __E_GroundExit = static_cast<int32_t>(0x1),
    __E_TaggedPlayer = static_cast<int32_t>(0x2),
    __E_HoveringToDespawnItem = static_cast<int32_t>(0x3),
    __E_HoveringToPickup = static_cast<int32_t>(0x4),
    __E_PushButtonPress = static_cast<int32_t>(0x5),
    __E_PushButtonRelease = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Player__SurfaceTouchType_Unwrapped() const noexcept {
    return static_cast<____Player__SurfaceTouchType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Player__SurfaceTouchType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Player__SurfaceTouchType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field GroundEnter value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Player__SurfaceTouchType const GroundEnter;

  /// @brief Field GroundExit value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Player__SurfaceTouchType const GroundExit;

  /// @brief Field HoveringToDespawnItem value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Player__SurfaceTouchType const HoveringToDespawnItem;

  /// @brief Field HoveringToPickup value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__Player__SurfaceTouchType const HoveringToPickup;

  /// @brief Field PushButtonPress value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__Player__SurfaceTouchType const PushButtonPress;

  /// @brief Field PushButtonRelease value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__Player__SurfaceTouchType const PushButtonRelease;

  /// @brief Field TaggedPlayer value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Player__SurfaceTouchType const TaggedPlayer;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Player__SurfaceTouchType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Player__SurfaceTouchType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KnockbackSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Player::KnockbackSource
struct CORDL_TYPE __Player__KnockbackSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Player__KnockbackSource_Unwrapped
  enum struct ____Player__KnockbackSource_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_explosion = static_cast<int32_t>(0x1),
    __E_projectile = static_cast<int32_t>(0x2),
    __E_baton = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Player__KnockbackSource_Unwrapped() const noexcept {
    return static_cast<____Player__KnockbackSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Player__KnockbackSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Player__KnockbackSource(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field baton value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__Player__KnockbackSource const baton;

  /// @brief Field explosion value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__Player__KnockbackSource const explosion;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__Player__KnockbackSource const none;

  /// @brief Field projectile value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__Player__KnockbackSource const projectile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Player__KnockbackSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Player__KnockbackSource, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Pose
// SizeInfo { instance_size: 136, native_size: 136, calculated_instance_size: 136, calculated_native_size: 152, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::Player::Pose
struct CORDL_TYPE __Player__Pose {
public:
  // Declarations
  /// @brief Method GetHeadWorldPosition, addr 0x106a41c, size 0x44, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHeadWorldPosition();

  /// @brief Method GetHeadWorldRotation, addr 0x106a518, size 0x84, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetHeadWorldRotation();

  /// @brief Method LerpUnclamped, addr 0x106a928, size 0x198, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__Player__Pose LerpUnclamped(::GlobalNamespace::__Player__Pose a, ::GlobalNamespace::__Player__Pose b, float_t p);

  /// @brief Method Set, addr 0x106a900, size 0x28, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::GlobalNamespace::__Avatar__Pose avatarPose);

  /// @brief Method .ctor, addr 0x106a8d8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::GlobalNamespace::__Avatar__Pose avatarPose);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Player__Pose();

  // Ctor Parameters [CppParam { name: "bodyPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "bodyRotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "avatarPose", ty: "::GlobalNamespace::__Avatar__Pose", modifiers: "", def_value: None }]
  constexpr __Player__Pose(::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation, ::GlobalNamespace::__Avatar__Pose avatarPose) noexcept;

  /// @brief Field bodyPosition, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 bodyPosition;

  /// @brief Field bodyRotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion bodyRotation;

  /// @brief Field avatarPose, offset: 0x1c, size: 0x6c, def value: None
  ::GlobalNamespace::__Avatar__Pose avatarPose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__Player__Pose, 0x88>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__Player__Pose, bodyPosition) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Player__Pose, bodyRotation) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__Player__Pose, avatarPose) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Player
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Player*
class CORDL_TYPE Player : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using KnockbackSource = ::GlobalNamespace::__Player__KnockbackSource;

  using Pose = ::GlobalNamespace::__Player__Pose;

  using StatusEffect = ::GlobalNamespace::__Player__StatusEffect;

  using SurfaceTouchType = ::GlobalNamespace::__Player__SurfaceTouchType;

  using Type = ::GlobalNamespace::__Player__Type;

  /// @brief Field <isMaster>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isMaster_k__BackingField, put = __cordl_internal_set__isMaster_k__BackingField)) bool _isMaster_k__BackingField;

  /// @brief Field <playerType>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__playerType_k__BackingField, put = __cordl_internal_set__playerType_k__BackingField))::GlobalNamespace::__Player__Type _playerType_k__BackingField;

  /// @brief Field <statusEffectExpireTime>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__statusEffectExpireTime_k__BackingField,
                      put = __cordl_internal_set__statusEffectExpireTime_k__BackingField)) float_t _statusEffectExpireTime_k__BackingField;

  /// @brief Field <statusEffect>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__statusEffect_k__BackingField,
                      put = __cordl_internal_set__statusEffect_k__BackingField))::GlobalNamespace::__Player__StatusEffect _statusEffect_k__BackingField;

  /// @brief Field <userID>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__userID_k__BackingField, put = __cordl_internal_set__userID_k__BackingField))::StringW _userID_k__BackingField;

  /// @brief Field activeStuffingTransferCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_activeStuffingTransferCount, put = __cordl_internal_set_activeStuffingTransferCount)) int32_t activeStuffingTransferCount;

  /// @brief Field avatarController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_avatarController, put = __cordl_internal_set_avatarController))::UnityW<::GlobalNamespace::AvatarController> avatarController;

  __declspec(property(get = get_initialized)) bool initialized;

  __declspec(property(get = get_isMaster, put = set_isMaster)) bool isMaster;

  /// @brief Field playerLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_playerLayerMask, put = setStaticF_playerLayerMask))::UnityEngine::LayerMask playerLayerMask;

  __declspec(property(get = get_playerType, put = set_playerType))::GlobalNamespace::__Player__Type playerType;

  __declspec(property(get = get_statusEffect, put = set_statusEffect))::GlobalNamespace::__Player__StatusEffect statusEffect;

  __declspec(property(get = get_statusEffectExpireTime, put = set_statusEffectExpireTime)) float_t statusEffectExpireTime;

  /// @brief Field toxModPlayerTracker, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_toxModPlayerTracker, put = __cordl_internal_set_toxModPlayerTracker))::UnityW<::GlobalNamespace::ToxModPlayerTracker> toxModPlayerTracker;

  __declspec(property(get = get_userID, put = set_userID))::StringW userID;

  /// @brief Method DestroySelf, addr 0x106a334, size 0x6c, virtual true, abstract: false, final false
  inline void DestroySelf();

  /// @brief Method ExpressPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ExpressPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method FixedUpdate, addr 0x106a3bc, size 0x1c, virtual false, abstract: false, final false
  inline void FixedUpdate();

  /// @brief Method GetBodyPosition, addr 0x1068050, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetBodyPosition();

  /// @brief Method GetHeadForward, addr 0x106a460, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHeadForward();

  /// @brief Method GetHeadPosition, addr 0x106970c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetHeadPosition();

  /// @brief Method GetHeadTransformation, addr 0x106a59c, size 0x8c, virtual false, abstract: false, final false
  inline void GetHeadTransformation(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetPose, addr 0x106a3f4, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Player__Pose GetPose();

  /// @brief Method GetSurfaceTouchHapticFeedback, addr 0x106a184, size 0x2c, virtual false, abstract: false, final false
  static inline void GetSurfaceTouchHapticFeedback(::GlobalNamespace::__Player__SurfaceTouchType surfaceTouchType, ByRef<float_t> amplitude, ByRef<float_t> duration);

  /// @brief Method Initialize, addr 0x1062aac, size 0x284, virtual true, abstract: false, final false
  inline void Initialize(::GlobalNamespace::PlayerData playerData);

  /// @brief Method LateUpdate, addr 0x106a3d8, size 0x1c, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::Player* New_ctor();

  /// @brief Method OnFixedUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnFixedUpdate();

  /// @brief Method OnLateUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnLateUpdate();

  /// @brief Method OnReceiveApplyKnockback, addr 0x106a784, size 0x4, virtual true, abstract: false, final false
  inline void OnReceiveApplyKnockback(::UnityEngine::Vector3 force, ::GlobalNamespace::__Player__KnockbackSource source);

  /// @brief Method OnReceivedPose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnReceivedPose(::GlobalNamespace::__Player__Pose pose);

  /// @brief Method OnStuffingTransferBegun, addr 0x106a788, size 0x44, virtual false, abstract: false, final false
  inline void OnStuffingTransferBegun();

  /// @brief Method OnStuffingTransferEnded, addr 0x106a7cc, size 0xb8, virtual false, abstract: false, final false
  inline void OnStuffingTransferEnded();

  /// @brief Method OnUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnUpdate();

  /// @brief Method RefreshAlwaysVisible, addr 0x106a244, size 0xcc, virtual false, abstract: false, final false
  inline void RefreshAlwaysVisible();

  /// @brief Method SendApplyKnockback, addr 0x106a628, size 0x15c, virtual false, abstract: false, final false
  inline void SendApplyKnockback(::UnityEngine::Vector3 force, ::GlobalNamespace::__Player__KnockbackSource source);

  /// @brief Method SetIsHidden, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetIsHidden(bool isHidden);

  /// @brief Method Update, addr 0x106a3a0, size 0x1c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateActiveCosmetics, addr 0x106a310, size 0x24, virtual true, abstract: false, final false
  inline void UpdateActiveCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticData*>* newActiveCosmeticDatas);

  /// @brief Method UpdateAvatarIdentity, addr 0x106a220, size 0x24, virtual true, abstract: false, final false
  inline void UpdateAvatarIdentity(::GlobalNamespace::AvatarIdentity* avatarIdentity);

  /// @brief Method UpdateDisplayName, addr 0x106a21c, size 0x4, virtual true, abstract: false, final false
  inline void UpdateDisplayName(::StringW displayName);

  /// @brief Method UpdateStatusEffect, addr 0x1067d18, size 0x2c, virtual true, abstract: false, final false
  inline void UpdateStatusEffect(::GlobalNamespace::__Player__StatusEffect statusEffect, float_t expireTime);

  /// @brief Method UpdateType, addr 0x1067410, size 0x130, virtual true, abstract: false, final false
  inline void UpdateType(::GlobalNamespace::__Player__Type type);

  /// @brief Method UpdateUserID, addr 0x106a214, size 0x8, virtual true, abstract: false, final false
  inline void UpdateUserID(::StringW userID);

  constexpr bool const& __cordl_internal_get__isMaster_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isMaster_k__BackingField();

  constexpr ::GlobalNamespace::__Player__Type const& __cordl_internal_get__playerType_k__BackingField() const;

  constexpr ::GlobalNamespace::__Player__Type& __cordl_internal_get__playerType_k__BackingField();

  constexpr float_t const& __cordl_internal_get__statusEffectExpireTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__statusEffectExpireTime_k__BackingField();

  constexpr ::GlobalNamespace::__Player__StatusEffect const& __cordl_internal_get__statusEffect_k__BackingField() const;

  constexpr ::GlobalNamespace::__Player__StatusEffect& __cordl_internal_get__statusEffect_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__userID_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__userID_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_activeStuffingTransferCount() const;

  constexpr int32_t& __cordl_internal_get_activeStuffingTransferCount();

  constexpr ::UnityW<::GlobalNamespace::AvatarController> const& __cordl_internal_get_avatarController() const;

  constexpr ::UnityW<::GlobalNamespace::AvatarController>& __cordl_internal_get_avatarController();

  constexpr ::UnityW<::GlobalNamespace::ToxModPlayerTracker> const& __cordl_internal_get_toxModPlayerTracker() const;

  constexpr ::UnityW<::GlobalNamespace::ToxModPlayerTracker>& __cordl_internal_get_toxModPlayerTracker();

  constexpr void __cordl_internal_set__isMaster_k__BackingField(bool value);

  constexpr void __cordl_internal_set__playerType_k__BackingField(::GlobalNamespace::__Player__Type value);

  constexpr void __cordl_internal_set__statusEffectExpireTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__statusEffect_k__BackingField(::GlobalNamespace::__Player__StatusEffect value);

  constexpr void __cordl_internal_set__userID_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_activeStuffingTransferCount(int32_t value);

  constexpr void __cordl_internal_set_avatarController(::UnityW<::GlobalNamespace::AvatarController> value);

  constexpr void __cordl_internal_set_toxModPlayerTracker(::UnityW<::GlobalNamespace::ToxModPlayerTracker> value);

  /// @brief Method .ctor, addr 0x1069d70, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::LayerMask getStaticF_playerLayerMask();

  /// @brief Method get_initialized, addr 0x106a1d4, size 0x10, virtual false, abstract: false, final false
  inline bool get_initialized();

  /// @brief Method get_isMaster, addr 0x106a1c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_isMaster();

  /// @brief Method get_playerType, addr 0x106a1e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Player__Type get_playerType();

  /// @brief Method get_statusEffect, addr 0x106a1f4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__Player__StatusEffect get_statusEffect();

  /// @brief Method get_statusEffectExpireTime, addr 0x106a204, size 0x8, virtual false, abstract: false, final false
  inline float_t get_statusEffectExpireTime();

  /// @brief Method get_userID, addr 0x106a1b0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_userID();

  static inline void setStaticF_playerLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_isMaster, addr 0x106a1c8, size 0xc, virtual false, abstract: false, final false
  inline void set_isMaster(bool value);

  /// @brief Method set_playerType, addr 0x106a1ec, size 0x8, virtual false, abstract: false, final false
  inline void set_playerType(::GlobalNamespace::__Player__Type value);

  /// @brief Method set_statusEffect, addr 0x106a1fc, size 0x8, virtual false, abstract: false, final false
  inline void set_statusEffect(::GlobalNamespace::__Player__StatusEffect value);

  /// @brief Method set_statusEffectExpireTime, addr 0x106a20c, size 0x8, virtual false, abstract: false, final false
  inline void set_statusEffectExpireTime(float_t value);

  /// @brief Method set_userID, addr 0x106a1b8, size 0x8, virtual false, abstract: false, final false
  inline void set_userID(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Player();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Player(Player&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Player", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Player(Player const&) = delete;

  /// @brief Field <userID>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____userID_k__BackingField;

  /// @brief Field <isMaster>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isMaster_k__BackingField;

  /// @brief Field <playerType>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::GlobalNamespace::__Player__Type ____playerType_k__BackingField;

  /// @brief Field <statusEffect>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__Player__StatusEffect ____statusEffect_k__BackingField;

  /// @brief Field <statusEffectExpireTime>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  float_t ____statusEffectExpireTime_k__BackingField;

  /// @brief Field avatarController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AvatarController> ___avatarController;

  /// @brief Field toxModPlayerTracker, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ToxModPlayerTracker> ___toxModPlayerTracker;

  /// @brief Field activeStuffingTransferCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___activeStuffingTransferCount;

  /// @brief Field defaultHapticDuration offset 0xffffffff size 0x4
  static constexpr float_t defaultHapticDuration{ 0.1 };

  /// @brief Field playerAlwaysVisibleLayer offset 0xffffffff size 0x4
  static constexpr int32_t playerAlwaysVisibleLayer{ static_cast<int32_t>(0x9) };

  /// @brief Field playerLayer offset 0xffffffff size 0x4
  static constexpr int32_t playerLayer{ static_cast<int32_t>(0x6) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Player, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ____userID_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ____isMaster_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ____playerType_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ____statusEffect_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ____statusEffectExpireTime_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ___avatarController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ___toxModPlayerTracker) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Player, ___activeStuffingTransferCount) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Player__KnockbackSource, "", "Player/KnockbackSource");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Player__StatusEffect, "", "Player/StatusEffect");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Player__SurfaceTouchType, "", "Player/SurfaceTouchType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Player__Type, "", "Player/Type");
NEED_NO_BOX(::GlobalNamespace::Player);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Player*, "", "Player");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__Player__Pose, "", "Player/Pose");
