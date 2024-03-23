#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MapObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TeleporterMapObject)
namespace GlobalNamespace {
struct __MapObject__Facing;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TeleporterMapObject;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TeleporterMapObject);
// Type: ::TeleporterMapObject
// SizeInfo { instance_size: 272, native_size: -1, calculated_instance_size: 272, calculated_native_size: 268, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TeleporterMapObject*
class CORDL_TYPE TeleporterMapObject : public ::GlobalNamespace::MapObject {
public:
  // Declarations
  /// @brief Field activeTeleporters, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activeTeleporters, put = setStaticF_activeTeleporters))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleporterMapObject>>*>* activeTeleporters;

  /// @brief Field inPulse, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_inPulse, put = __cordl_internal_set_inPulse)) bool inPulse;

  /// @brief Field isEntrance, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_isEntrance, put = __cordl_internal_set_isEntrance)) bool isEntrance;

  /// @brief Field nextValidTeleportTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextValidTeleportTime, put = setStaticF_nextValidTeleportTime)) float_t nextValidTeleportTime;

  /// @brief Field pulseStartPosition, offset 0x100, size 0xc
  __declspec(property(get = __cordl_internal_get_pulseStartPosition, put = __cordl_internal_set_pulseStartPosition))::UnityEngine::Vector3 pulseStartPosition;

  /// @brief Field pulseTimer, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_pulseTimer, put = __cordl_internal_set_pulseTimer)) float_t pulseTimer;

  /// @brief Field registeredChannel, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_registeredChannel, put = __cordl_internal_set_registeredChannel))::StringW registeredChannel;

  /// @brief Field teleportEntranceSoundKey, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_teleportEntranceSoundKey, put = __cordl_internal_set_teleportEntranceSoundKey))::StringW teleportEntranceSoundKey;

  /// @brief Field teleportExitSoundKey, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_teleportExitSoundKey, put = __cordl_internal_set_teleportExitSoundKey))::StringW teleportExitSoundKey;

  /// @brief Method AllowsBatching, addr 0x308469c, size 0x8, virtual true, abstract: false, final false
  inline bool AllowsBatching();

  /// @brief Method Deregister, addr 0x30846f4, size 0x120, virtual false, abstract: false, final false
  inline void Deregister();

  /// @brief Method DoCollisionMessaging, addr 0x3084814, size 0x8, virtual true, abstract: false, final false
  inline bool DoCollisionMessaging();

  /// @brief Method GetTeleportPosition, addr 0x3084b14, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTeleportPosition();

  /// @brief Method Initialize, addr 0x3084444, size 0x4c, virtual true, abstract: false, final false
  inline void Initialize(::StringW key, ::UnityEngine::Vector3Int placedPosition, ::GlobalNamespace::__MapObject__Facing placedForwardFacing, ::GlobalNamespace::__MapObject__Facing placedUpFacing,
                         ::StringW colorKey, ::StringW ownerUserID, bool placementPending, bool instant);

  static inline ::GlobalNamespace::TeleporterMapObject* New_ctor();

  /// @brief Method OnDrawGizmosSelectedAdditions, addr 0x3084ef0, size 0x9c, virtual true, abstract: false, final false
  inline void OnDrawGizmosSelectedAdditions();

  /// @brief Method OnMasterPlayerCollided, addr 0x308481c, size 0x2b0, virtual true, abstract: false, final false
  inline void OnMasterPlayerCollided(::UnityEngine::Vector3 playerPosition, ::UnityEngine::Vector3 relativeVelocity);

  /// @brief Method OnMasterPlayerTeleportedTo, addr 0x3084acc, size 0x48, virtual false, abstract: false, final false
  inline void OnMasterPlayerTeleportedTo();

  /// @brief Method OnReceiveChangeColor, addr 0x30846a4, size 0x28, virtual true, abstract: false, final false
  inline void OnReceiveChangeColor(::StringW newColorKey);

  /// @brief Method OnReceiveSimpleCustomMessage, addr 0x3084b34, size 0x1f0, virtual true, abstract: false, final false
  inline void OnReceiveSimpleCustomMessage(bool sentByMasterPlayer, ::StringW payload);

  /// @brief Method PrepareForDestroy, addr 0x30846cc, size 0x28, virtual true, abstract: false, final false
  inline void PrepareForDestroy();

  /// @brief Method Register, addr 0x3084490, size 0x20c, virtual false, abstract: false, final false
  inline void Register(::StringW channel);

  /// @brief Method Update, addr 0x3084d24, size 0x1cc, virtual false, abstract: false, final false
  inline void Update();

  constexpr bool const& __cordl_internal_get_inPulse() const;

  constexpr bool& __cordl_internal_get_inPulse();

  constexpr bool const& __cordl_internal_get_isEntrance() const;

  constexpr bool& __cordl_internal_get_isEntrance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pulseStartPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pulseStartPosition();

  constexpr float_t const& __cordl_internal_get_pulseTimer() const;

  constexpr float_t& __cordl_internal_get_pulseTimer();

  constexpr ::StringW const& __cordl_internal_get_registeredChannel() const;

  constexpr ::StringW& __cordl_internal_get_registeredChannel();

  constexpr ::StringW const& __cordl_internal_get_teleportEntranceSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_teleportEntranceSoundKey();

  constexpr ::StringW const& __cordl_internal_get_teleportExitSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_teleportExitSoundKey();

  constexpr void __cordl_internal_set_inPulse(bool value);

  constexpr void __cordl_internal_set_isEntrance(bool value);

  constexpr void __cordl_internal_set_pulseStartPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_pulseTimer(float_t value);

  constexpr void __cordl_internal_set_registeredChannel(::StringW value);

  constexpr void __cordl_internal_set_teleportEntranceSoundKey(::StringW value);

  constexpr void __cordl_internal_set_teleportExitSoundKey(::StringW value);

  /// @brief Method .ctor, addr 0x3084f8c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleporterMapObject>>*>* getStaticF_activeTeleporters();

  static inline float_t getStaticF_nextValidTeleportTime();

  static inline void
  setStaticF_activeTeleporters(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::TeleporterMapObject>>*>* value);

  static inline void setStaticF_nextValidTeleportTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeleporterMapObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeleporterMapObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeleporterMapObject(TeleporterMapObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeleporterMapObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeleporterMapObject(TeleporterMapObject const&) = delete;

  /// @brief Field isEntrance, offset: 0xd8, size: 0x1, def value: None
  bool ___isEntrance;

  /// @brief Field teleportEntranceSoundKey, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___teleportEntranceSoundKey;

  /// @brief Field teleportExitSoundKey, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___teleportExitSoundKey;

  /// @brief Field registeredChannel, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___registeredChannel;

  /// @brief Field inPulse, offset: 0xf8, size: 0x1, def value: None
  bool ___inPulse;

  /// @brief Field pulseTimer, offset: 0xfc, size: 0x4, def value: None
  float_t ___pulseTimer;

  /// @brief Field pulseStartPosition, offset: 0x100, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pulseStartPosition;

  /// @brief Field cooldown offset 0xffffffff size 0x4
  static constexpr float_t cooldown{ 1.0 };

  /// @brief Field pulseScaleBoost offset 0xffffffff size 0x4
  static constexpr float_t pulseScaleBoost{ 2.0 };

  /// @brief Field teleportExplosionHeight offset 0xffffffff size 0x4
  static constexpr float_t teleportExplosionHeight{ 0.0 };

  /// @brief Field teleportExplosionRadius offset 0xffffffff size 0x4
  static constexpr float_t teleportExplosionRadius{ 1.35 };

  /// @brief Field teleportFromMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString teleportFromMessage{ u"teleportFrom" };

  /// @brief Field teleportToMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString teleportToMessage{ u"teleportTo" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TeleporterMapObject, 0x110>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleporterMapObject, ___isEntrance) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleporterMapObject, ___teleportEntranceSoundKey) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleporterMapObject, ___teleportExitSoundKey) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleporterMapObject, ___registeredChannel) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleporterMapObject, ___inPulse) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleporterMapObject, ___pulseTimer) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TeleporterMapObject, ___pulseStartPosition) == 0x100, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TeleporterMapObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleporterMapObject*, "", "TeleporterMapObject");
