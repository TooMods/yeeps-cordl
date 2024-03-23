#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/UtilityScripts/zzzz__OnJoinedInstantiate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnJoinedInstantiate)
namespace Photon::Pun::UtilityScripts {
struct __OnJoinedInstantiate__SpawnSequence;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
struct __OnJoinedInstantiate__SpawnSequence;
}
namespace Photon::Pun::UtilityScripts {
class OnJoinedInstantiate;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::OnJoinedInstantiate);
// Type: ::SpawnSequence
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: true
// CS Name: ::OnJoinedInstantiate::SpawnSequence
struct CORDL_TYPE __OnJoinedInstantiate__SpawnSequence {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OnJoinedInstantiate__SpawnSequence_Unwrapped
  enum struct ____OnJoinedInstantiate__SpawnSequence_Unwrapped : int32_t {
    __E_Connection = static_cast<int32_t>(0x0),
    __E_Random = static_cast<int32_t>(0x1),
    __E_RoundRobin = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OnJoinedInstantiate__SpawnSequence_Unwrapped() const noexcept {
    return static_cast<____OnJoinedInstantiate__SpawnSequence_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OnJoinedInstantiate__SpawnSequence();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OnJoinedInstantiate__SpawnSequence(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Connection value: static_cast<int32_t>(0x0)
  static ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence const Connection;

  /// @brief Field Random value: static_cast<int32_t>(0x1)
  static ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence const Random;

  /// @brief Field RoundRobin value: static_cast<int32_t>(0x2)
  static ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence const RoundRobin;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence, 0x4>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::OnJoinedInstantiate
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::OnJoinedInstantiate*
class CORDL_TYPE OnJoinedInstantiate : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using SpawnSequence = ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence;

  /// @brief Field AutoSpawnObjects, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_AutoSpawnObjects, put = __cordl_internal_set_AutoSpawnObjects)) bool AutoSpawnObjects;

  /// @brief Field ClampY, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_ClampY, put = __cordl_internal_set_ClampY)) bool ClampY;

  /// @brief Field PrefabsToInstantiate, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_PrefabsToInstantiate,
                      put = __cordl_internal_set_PrefabsToInstantiate))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* PrefabsToInstantiate;

  /// @brief Field RandomOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_RandomOffset, put = __cordl_internal_set_RandomOffset)) float_t RandomOffset;

  /// @brief Field Sequence, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_Sequence, put = __cordl_internal_set_Sequence))::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence Sequence;

  /// @brief Field SpawnPoints, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SpawnPoints, put = __cordl_internal_set_SpawnPoints))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* SpawnPoints;

  /// @brief Field SpawnPosition, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_SpawnPosition, put = __cordl_internal_set_SpawnPosition))::UnityW<::UnityEngine::Transform> SpawnPosition;

  /// @brief Field SpawnedObjects, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_SpawnedObjects,
                      put = __cordl_internal_set_SpawnedObjects))::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* SpawnedObjects;

  /// @brief Field UseRandomOffset, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_UseRandomOffset, put = __cordl_internal_set_UseRandomOffset)) bool UseRandomOffset;

  /// @brief Field lastUsedSpawnPointIndex, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastUsedSpawnPointIndex, put = __cordl_internal_set_lastUsedSpawnPointIndex)) int32_t lastUsedSpawnPointIndex;

  /// @brief Field spawnedAsActorId, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_spawnedAsActorId, put = __cordl_internal_set_spawnedAsActorId)) int32_t spawnedAsActorId;

  /// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

  /// @brief Method DespawnObjects, addr 0x1ec9868, size 0x118, virtual true, abstract: false, final false
  inline void DespawnObjects(bool localOnly);

  /// @brief Method GetRandomOffset, addr 0x1ec9c08, size 0x100, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRandomOffset();

  /// @brief Method GetSpawnPoint, addr 0x1ec9ae8, size 0x120, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> GetSpawnPoint();

  /// @brief Method GetSpawnPoint, addr 0x1ec9998, size 0x150, virtual true, abstract: false, final false
  inline void GetSpawnPoint(ByRef<::UnityEngine::Vector3> spawnPos, ByRef<::UnityEngine::Quaternion> spawnRot);

  static inline ::Photon::Pun::UtilityScripts::OnJoinedInstantiate* New_ctor();

  /// @brief Method OnCreateRoomFailed, addr 0x1ec9988, size 0x4, virtual true, abstract: false, final false
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0x1ec9984, size 0x4, virtual true, abstract: false, final false
  inline void OnCreatedRoom();

  /// @brief Method OnDisable, addr 0x1ec94f8, size 0x58, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x1ec94a0, size 0x58, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFriendListUpdate, addr 0x1ec9980, size 0x4, virtual true, abstract: false, final false
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnJoinRandomFailed, addr 0x1ec9990, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0x1ec998c, size 0x4, virtual true, abstract: false, final false
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedRoom, addr 0x1ec9550, size 0x8c, virtual true, abstract: false, final false
  inline void OnJoinedRoom();

  /// @brief Method OnLeftRoom, addr 0x1ec9994, size 0x4, virtual true, abstract: false, final false
  inline void OnLeftRoom();

  /// @brief Method SpawnObjects, addr 0x1ec95dc, size 0x28c, virtual true, abstract: false, final false
  inline void SpawnObjects();

  constexpr bool const& __cordl_internal_get_AutoSpawnObjects() const;

  constexpr bool& __cordl_internal_get_AutoSpawnObjects();

  constexpr bool const& __cordl_internal_get_ClampY() const;

  constexpr bool& __cordl_internal_get_ClampY();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_PrefabsToInstantiate();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_PrefabsToInstantiate() const;

  constexpr float_t const& __cordl_internal_get_RandomOffset() const;

  constexpr float_t& __cordl_internal_get_RandomOffset();

  constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence const& __cordl_internal_get_Sequence() const;

  constexpr ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence& __cordl_internal_get_Sequence();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_SpawnPoints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_SpawnPoints() const;

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_SpawnPosition() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_SpawnPosition();

  constexpr ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_SpawnedObjects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_SpawnedObjects() const;

  constexpr bool const& __cordl_internal_get_UseRandomOffset() const;

  constexpr bool& __cordl_internal_get_UseRandomOffset();

  constexpr int32_t const& __cordl_internal_get_lastUsedSpawnPointIndex() const;

  constexpr int32_t& __cordl_internal_get_lastUsedSpawnPointIndex();

  constexpr int32_t const& __cordl_internal_get_spawnedAsActorId() const;

  constexpr int32_t& __cordl_internal_get_spawnedAsActorId();

  constexpr void __cordl_internal_set_AutoSpawnObjects(bool value);

  constexpr void __cordl_internal_set_ClampY(bool value);

  constexpr void __cordl_internal_set_PrefabsToInstantiate(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_RandomOffset(float_t value);

  constexpr void __cordl_internal_set_Sequence(::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence value);

  constexpr void __cordl_internal_set_SpawnPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* value);

  constexpr void __cordl_internal_set_SpawnPosition(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_SpawnedObjects(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_UseRandomOffset(bool value);

  constexpr void __cordl_internal_set_lastUsedSpawnPointIndex(int32_t value);

  constexpr void __cordl_internal_set_spawnedAsActorId(int32_t value);

  /// @brief Method .ctor, addr 0x1ec9d08, size 0x208, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnJoinedInstantiate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnJoinedInstantiate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnJoinedInstantiate(OnJoinedInstantiate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnJoinedInstantiate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnJoinedInstantiate(OnJoinedInstantiate const&) = delete;

  /// @brief Field SpawnPosition, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___SpawnPosition;

  /// @brief Field Sequence, offset: 0x20, size: 0x4, def value: None
  ::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence ___Sequence;

  /// @brief Field SpawnPoints, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* ___SpawnPoints;

  /// @brief Field UseRandomOffset, offset: 0x30, size: 0x1, def value: None
  bool ___UseRandomOffset;

  /// @brief Field RandomOffset, offset: 0x34, size: 0x4, def value: None
  float_t ___RandomOffset;

  /// @brief Field ClampY, offset: 0x38, size: 0x1, def value: None
  bool ___ClampY;

  /// @brief Field PrefabsToInstantiate, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___PrefabsToInstantiate;

  /// @brief Field AutoSpawnObjects, offset: 0x48, size: 0x1, def value: None
  bool ___AutoSpawnObjects;

  /// @brief Field SpawnedObjects, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::GameObject>>* ___SpawnedObjects;

  /// @brief Field spawnedAsActorId, offset: 0x58, size: 0x4, def value: None
  int32_t ___spawnedAsActorId;

  /// @brief Field lastUsedSpawnPointIndex, offset: 0x5c, size: 0x4, def value: None
  int32_t ___lastUsedSpawnPointIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::OnJoinedInstantiate, 0x60>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___SpawnPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___Sequence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___SpawnPoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___UseRandomOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___RandomOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___ClampY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___PrefabsToInstantiate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___AutoSpawnObjects) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___SpawnedObjects) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___spawnedAsActorId) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::OnJoinedInstantiate, ___lastUsedSpawnPointIndex) == 0x5c, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__OnJoinedInstantiate__SpawnSequence, "Photon.Pun.UtilityScripts", "OnJoinedInstantiate/SpawnSequence");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::OnJoinedInstantiate);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::OnJoinedInstantiate*, "Photon.Pun.UtilityScripts", "OnJoinedInstantiate");
