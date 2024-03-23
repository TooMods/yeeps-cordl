#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkManager_def.hpp"
#include "GlobalNamespace/zzzz__PersistentSingleton_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkManager)
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
struct __NetworkManager__DirectAttemptType;
}
namespace GlobalNamespace {
struct __NetworkManager__KickSource;
}
namespace GlobalNamespace {
struct __NetworkManager__KickedRoomData;
}
namespace GlobalNamespace {
class __NetworkManager__OnJoinedPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager__OnLeftPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager__OnPlayerJoinedPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager__OnPlayerLeftPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager___InRoomTimeout_d__83;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
}
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class FriendInfo;
}
namespace Photon::Realtime {
class IConnectionCallbacks;
}
namespace Photon::Realtime {
class IInRoomCallbacks;
}
namespace Photon::Realtime {
class ILobbyCallbacks;
}
namespace Photon::Realtime {
class IMatchmakingCallbacks;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RegionHandler;
}
namespace Photon::Realtime {
class RoomInfo;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class TypedLobbyInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GlobalNamespace {
struct __NetworkManager__DirectAttemptType;
}
namespace GlobalNamespace {
struct __NetworkManager__KickSource;
}
namespace GlobalNamespace {
class NetworkManager;
}
namespace GlobalNamespace {
class __NetworkManager__OnJoinedPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager__OnLeftPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager__OnPlayerJoinedPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager__OnPlayerLeftPhotonRoom;
}
namespace GlobalNamespace {
class __NetworkManager___InRoomTimeout_d__83;
}
namespace GlobalNamespace {
struct __NetworkManager__KickedRoomData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__NetworkManager__DirectAttemptType);
MARK_VAL_T(::GlobalNamespace::__NetworkManager__KickSource);
MARK_REF_PTR_T(::GlobalNamespace::NetworkManager);
MARK_REF_PTR_T(::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom);
MARK_REF_PTR_T(::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom);
MARK_REF_PTR_T(::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom);
MARK_REF_PTR_T(::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom);
MARK_REF_PTR_T(::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83);
MARK_VAL_T(::GlobalNamespace::__NetworkManager__KickedRoomData);
// Type: ::OnJoinedPhotonRoom
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkManager::OnJoinedPhotonRoom*
class CORDL_TYPE __NetworkManager__OnJoinedPhotonRoom : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c793a4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW roomName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c793c4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c79390, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW roomName);

  static inline ::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c792bc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager__OnJoinedPhotonRoom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnJoinedPhotonRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkManager__OnJoinedPhotonRoom(__NetworkManager__OnJoinedPhotonRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnJoinedPhotonRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkManager__OnJoinedPhotonRoom(__NetworkManager__OnJoinedPhotonRoom const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnLeftPhotonRoom
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkManager::OnLeftPhotonRoom*
class CORDL_TYPE __NetworkManager__OnLeftPhotonRoom : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c794a0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c794c0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c7948c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c793d0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager__OnLeftPhotonRoom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnLeftPhotonRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkManager__OnLeftPhotonRoom(__NetworkManager__OnLeftPhotonRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnLeftPhotonRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkManager__OnLeftPhotonRoom(__NetworkManager__OnLeftPhotonRoom const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerJoinedPhotonRoom
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkManager::OnPlayerJoinedPhotonRoom*
class CORDL_TYPE __NetworkManager__OnPlayerJoinedPhotonRoom : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c7960c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Photon::Realtime::Player* photonPlayer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c7962c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c795f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Photon::Realtime::Player* photonPlayer);

  static inline ::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c794cc, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager__OnPlayerJoinedPhotonRoom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnPlayerJoinedPhotonRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkManager__OnPlayerJoinedPhotonRoom(__NetworkManager__OnPlayerJoinedPhotonRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnPlayerJoinedPhotonRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkManager__OnPlayerJoinedPhotonRoom(__NetworkManager__OnPlayerJoinedPhotonRoom const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerLeftPhotonRoom
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkManager::OnPlayerLeftPhotonRoom*
class CORDL_TYPE __NetworkManager__OnPlayerLeftPhotonRoom : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c79778, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Photon::Realtime::Player* photonPlayer, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c79798, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c79764, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Photon::Realtime::Player* photonPlayer);

  static inline ::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c79638, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager__OnPlayerLeftPhotonRoom();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnPlayerLeftPhotonRoom", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkManager__OnPlayerLeftPhotonRoom(__NetworkManager__OnPlayerLeftPhotonRoom&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager__OnPlayerLeftPhotonRoom", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkManager__OnPlayerLeftPhotonRoom(__NetworkManager__OnPlayerLeftPhotonRoom const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DirectAttemptType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NetworkManager::DirectAttemptType
struct CORDL_TYPE __NetworkManager__DirectAttemptType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NetworkManager__DirectAttemptType_Unwrapped
  enum struct ____NetworkManager__DirectAttemptType_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_target = static_cast<int32_t>(0x1),
    __E_joinFriend = static_cast<int32_t>(0x2),
    __E_joinPreviouslyVisited = static_cast<int32_t>(0x3),
    __E_joinMainInstance = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NetworkManager__DirectAttemptType_Unwrapped() const noexcept {
    return static_cast<____NetworkManager__DirectAttemptType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager__DirectAttemptType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NetworkManager__DirectAttemptType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field joinFriend value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__NetworkManager__DirectAttemptType const joinFriend;

  /// @brief Field joinMainInstance value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__NetworkManager__DirectAttemptType const joinMainInstance;

  /// @brief Field joinPreviouslyVisited value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__NetworkManager__DirectAttemptType const joinPreviouslyVisited;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NetworkManager__DirectAttemptType const none;

  /// @brief Field target value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NetworkManager__DirectAttemptType const target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager__DirectAttemptType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkManager__DirectAttemptType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KickedRoomData
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NetworkManager::KickedRoomData
struct CORDL_TYPE __NetworkManager__KickedRoomData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2c78944, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW photonRoomName, float_t expireTime);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager__KickedRoomData();

  // Ctor Parameters [CppParam { name: "photonRoomName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "expireTime", ty: "float_t", modifiers: "", def_value: None }]
  constexpr __NetworkManager__KickedRoomData(::StringW photonRoomName, float_t expireTime) noexcept;

  /// @brief Field photonRoomName, offset: 0x0, size: 0x8, def value: None
  ::StringW photonRoomName;

  /// @brief Field expireTime, offset: 0x8, size: 0x4, def value: None
  float_t expireTime;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager__KickedRoomData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkManager__KickedRoomData, photonRoomName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkManager__KickedRoomData, expireTime) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::KickSource
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NetworkManager::KickSource
struct CORDL_TYPE __NetworkManager__KickSource {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____NetworkManager__KickSource_Unwrapped
  enum struct ____NetworkManager__KickSource_Unwrapped : int32_t {
    __E_playerList = static_cast<int32_t>(0x0),
    __E_onJoin = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____NetworkManager__KickSource_Unwrapped() const noexcept {
    return static_cast<____NetworkManager__KickSource_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager__KickSource();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __NetworkManager__KickSource(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field onJoin value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__NetworkManager__KickSource const onJoin;

  /// @brief Field playerList value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__NetworkManager__KickSource const playerList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager__KickSource, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkManager__KickSource, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InRoomTimeout>d__83
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkManager::<InRoomTimeout>d__83*
class CORDL_TYPE __NetworkManager___InRoomTimeout_d__83 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::NetworkManager> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2c797a8, size 0xa4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2c7984c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2c79854, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2c79894, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2c797a4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkManager> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::NetworkManager>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::NetworkManager> value);

  /// @brief Method .ctor, addr 0x2c76edc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NetworkManager___InRoomTimeout_d__83();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager___InRoomTimeout_d__83", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NetworkManager___InRoomTimeout_d__83(__NetworkManager___InRoomTimeout_d__83&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NetworkManager___InRoomTimeout_d__83", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NetworkManager___InRoomTimeout_d__83(__NetworkManager___InRoomTimeout_d__83 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NetworkManager> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83, _____4__this) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NetworkManager
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NetworkManager*
class CORDL_TYPE NetworkManager : public ::GlobalNamespace::PersistentSingleton_1<::UnityW<::GlobalNamespace::NetworkManager>> {
public:
  // Declarations
  using DirectAttemptType = ::GlobalNamespace::__NetworkManager__DirectAttemptType;

  using KickSource = ::GlobalNamespace::__NetworkManager__KickSource;

  using KickedRoomData = ::GlobalNamespace::__NetworkManager__KickedRoomData;

  using OnJoinedPhotonRoom = ::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom;

  using OnLeftPhotonRoom = ::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom;

  using OnPlayerJoinedPhotonRoom = ::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom;

  using OnPlayerLeftPhotonRoom = ::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom;

  using _InRoomTimeout_d__83 = ::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83;

  /// @brief Field <isInMainInstance>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__isInMainInstance_k__BackingField, put = setStaticF__isInMainInstance_k__BackingField)) bool _isInMainInstance_k__BackingField;

  /// @brief Field accountIDsKickedFromCurrentPrivateWorld, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_accountIDsKickedFromCurrentPrivateWorld,
                             put = setStaticF_accountIDsKickedFromCurrentPrivateWorld))::System::Collections::Generic::List_1<::StringW>* accountIDsKickedFromCurrentPrivateWorld;

  /// @brief Field accountIDsKickedFromCurrentRoom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_accountIDsKickedFromCurrentRoom,
                             put = setStaticF_accountIDsKickedFromCurrentRoom))::System::Collections::Generic::List_1<::StringW>* accountIDsKickedFromCurrentRoom;

  /// @brief Field attemptedDirectJoinTypes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attemptedDirectJoinTypes,
                      put = __cordl_internal_set_attemptedDirectJoinTypes))::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__DirectAttemptType>* attemptedDirectJoinTypes;

  /// @brief Field curInRoomTimeoutCoroutine, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_curInRoomTimeoutCoroutine, put = __cordl_internal_set_curInRoomTimeoutCoroutine))::UnityEngine::Coroutine* curInRoomTimeoutCoroutine;

  /// @brief Field currentPrivateWorldRoomMapKey, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_currentPrivateWorldRoomMapKey, put = setStaticF_currentPrivateWorldRoomMapKey))::StringW currentPrivateWorldRoomMapKey;

  /// @brief Field hasQueuedRoomLeave, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasQueuedRoomLeave, put = setStaticF_hasQueuedRoomLeave)) bool hasQueuedRoomLeave;

  /// @brief Field isAllowedToJoinRooms, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isAllowedToJoinRooms, put = setStaticF_isAllowedToJoinRooms)) bool isAllowedToJoinRooms;

  /// @brief Field kickedPrivateWorldDatas, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kickedPrivateWorldDatas,
                             put = setStaticF_kickedPrivateWorldDatas))::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__KickedRoomData>* kickedPrivateWorldDatas;

  /// @brief Field kickedRoomDatas, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kickedRoomDatas,
                             put = setStaticF_kickedRoomDatas))::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__KickedRoomData>* kickedRoomDatas;

  /// @brief Field lastDirectAttemptType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lastDirectAttemptType, put = __cordl_internal_set_lastDirectAttemptType))::GlobalNamespace::__NetworkManager__DirectAttemptType lastDirectAttemptType;

  /// @brief Field lastJoinedPhotonRoomName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_lastJoinedPhotonRoomName, put = setStaticF_lastJoinedPhotonRoomName))::StringW lastJoinedPhotonRoomName;

  /// @brief Field lastSendBufferFullHackTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_lastSendBufferFullHackTime, put = setStaticF_lastSendBufferFullHackTime)) float_t lastSendBufferFullHackTime;

  /// @brief Field onJoinedRoomLatePersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onJoinedRoomLatePersistantCallbacks,
                             put = setStaticF_onJoinedRoomLatePersistantCallbacks))::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom* onJoinedRoomLatePersistantCallbacks;

  /// @brief Field onJoinedRoomPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onJoinedRoomPersistantCallbacks,
                             put = setStaticF_onJoinedRoomPersistantCallbacks))::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom* onJoinedRoomPersistantCallbacks;

  /// @brief Field onLeftRoomEarlyPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onLeftRoomEarlyPersistantCallbacks,
                             put = setStaticF_onLeftRoomEarlyPersistantCallbacks))::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom* onLeftRoomEarlyPersistantCallbacks;

  /// @brief Field onLeftRoomPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onLeftRoomPersistantCallbacks,
                             put = setStaticF_onLeftRoomPersistantCallbacks))::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom* onLeftRoomPersistantCallbacks;

  /// @brief Field onPlayerJoinedRoomPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPlayerJoinedRoomPersistantCallbacks,
                             put = setStaticF_onPlayerJoinedRoomPersistantCallbacks))::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom* onPlayerJoinedRoomPersistantCallbacks;

  /// @brief Field onPlayerLeftRoomPersistantCallbacks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onPlayerLeftRoomPersistantCallbacks,
                             put = setStaticF_onPlayerLeftRoomPersistantCallbacks))::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom* onPlayerLeftRoomPersistantCallbacks;

  /// @brief Field roomJoinTargetPhotonRoomName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_roomJoinTargetPhotonRoomName, put = __cordl_internal_set_roomJoinTargetPhotonRoomName))::StringW roomJoinTargetPhotonRoomName;

  /// @brief Field roomJoinTargetRoomKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_roomJoinTargetRoomKey, put = __cordl_internal_set_roomJoinTargetRoomKey))::StringW roomJoinTargetRoomKey;

  /// @brief Field userIDsKickedFromCurrentPrivateWorld, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_userIDsKickedFromCurrentPrivateWorld,
                             put = setStaticF_userIDsKickedFromCurrentPrivateWorld))::System::Collections::Generic::List_1<::StringW>* userIDsKickedFromCurrentPrivateWorld;

  /// @brief Field userIDsKickedFromCurrentRoom, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_userIDsKickedFromCurrentRoom,
                             put = setStaticF_userIDsKickedFromCurrentRoom))::System::Collections::Generic::List_1<::StringW>* userIDsKickedFromCurrentRoom;

  /// @brief Field visitedRoomInstances, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_visitedRoomInstances, put = setStaticF_visitedRoomInstances))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* visitedRoomInstances;

  /// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
  constexpr operator ::Photon::Realtime::IConnectionCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
  constexpr operator ::Photon::Realtime::IInRoomCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
  constexpr operator ::Photon::Realtime::ILobbyCallbacks*() noexcept;

  /// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept;

  /// @brief Method BeginConnection, addr 0x2c738e4, size 0x108, virtual false, abstract: false, final false
  inline void BeginConnection();

  /// @brief Method ClearOtherUserKickedFromCurrentPrivateWorld, addr 0x2c77264, size 0xcc, virtual false, abstract: false, final false
  static inline void ClearOtherUserKickedFromCurrentPrivateWorld();

  /// @brief Method ClearOtherUserKickedFromCurrentRoom, addr 0x2c764a8, size 0xcc, virtual false, abstract: false, final false
  static inline void ClearOtherUserKickedFromCurrentRoom();

  /// @brief Method ClearRoomJoinTarget, addr 0x2c74f04, size 0x74, virtual false, abstract: false, final false
  inline void ClearRoomJoinTarget();

  /// @brief Method DoRoomJoinAttempt, addr 0x2c73b60, size 0x8b4, virtual false, abstract: false, final false
  inline void DoRoomJoinAttempt(::GlobalNamespace::RoomData* roomData);

  /// @brief Method ForceLeaveRoom, addr 0x2c75130, size 0x110, virtual false, abstract: false, final false
  static inline void ForceLeaveRoom();

  /// @brief Method GenerateRandomRoomName, addr 0x2c74b28, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW GenerateRandomRoomName();

  /// @brief Method GetBannedRoomOptions, addr 0x2c746d8, size 0x214, virtual false, abstract: false, final false
  inline ::Photon::Realtime::RoomOptions* GetBannedRoomOptions();

  /// @brief Method GetKickedRoomSet, addr 0x2c74b54, size 0x15c, virtual false, abstract: false, final false
  static inline ::StringW GetKickedRoomSet();

  /// @brief Method GetMainInstancePhotonRoomName, addr 0x2c72d1c, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetMainInstancePhotonRoomName(::StringW roomKey);

  /// @brief Method GetNetworkVersionNumber, addr 0x2c72f1c, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetNetworkVersionNumber();

  /// @brief Method GetRoomNamesWeHaveBeenKickedFrom, addr 0x2c782c4, size 0x1e8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* GetRoomNamesWeHaveBeenKickedFrom();

  /// @brief Method GetRoomOptions, addr 0x2c748ec, size 0x23c, virtual false, abstract: false, final false
  inline ::Photon::Realtime::RoomOptions* GetRoomOptions(::StringW roomName);

  /// @brief Method GetRoomProperties, addr 0x2c76cd0, size 0xc8, virtual false, abstract: false, final false
  static inline ::ExitGames::Client::Photon::Hashtable* GetRoomProperties();

  /// @brief Method InRoomTimeout, addr 0x2c76e74, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* InRoomTimeout();

  /// @brief Method IsKickedFromPrivateWorld, addr 0x2c78668, size 0x120, virtual false, abstract: false, final false
  static inline bool IsKickedFromPrivateWorld(::StringW roomMapKey);

  /// @brief Method IsKickedFromRoom, addr 0x2c745b8, size 0x120, virtual false, abstract: false, final false
  static inline bool IsKickedFromRoom(::StringW roomName);

  /// @brief Method IsOtherUserPreviouslyKickedFromCurrentPrivateWorld, addr 0x2c78bd0, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsOtherUserPreviouslyKickedFromCurrentPrivateWorld(::StringW userID, ::StringW accountID);

  /// @brief Method IsOtherUserPreviouslyKickedFromCurrentRoom, addr 0x2c78b00, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsOtherUserPreviouslyKickedFromCurrentRoom(::StringW userID, ::StringW accountID);

  /// @brief Method MarkKickedFromPrivateWorld, addr 0x2c77b00, size 0x258, virtual false, abstract: false, final false
  static inline void MarkKickedFromPrivateWorld(::StringW roomMapKey);

  /// @brief Method MarkKickedFromRoom, addr 0x2c7700c, size 0x258, virtual false, abstract: false, final false
  static inline void MarkKickedFromRoom(::StringW roomName);

  /// @brief Method MarkOtherUserKickedFromCurrentPrivateWorld, addr 0x2c77e5c, size 0x234, virtual false, abstract: false, final false
  static inline void MarkOtherUserKickedFromCurrentPrivateWorld(::StringW userID, ::StringW accountID);

  /// @brief Method MarkOtherUserKickedFromCurrentRoom, addr 0x2c78090, size 0x234, virtual false, abstract: false, final false
  static inline void MarkOtherUserKickedFromCurrentRoom(::StringW userID, ::StringW accountID);

  static inline ::GlobalNamespace::NetworkManager* New_ctor();

  /// @brief Method OnBanned, addr 0x2c78dc4, size 0x178, virtual false, abstract: false, final false
  inline void OnBanned();

  /// @brief Method OnCreateRoomFailed, addr 0x2c752ac, size 0xd4, virtual true, abstract: false, final true
  inline void OnCreateRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnCreatedRoom, addr 0x2c75244, size 0x68, virtual true, abstract: false, final true
  inline void OnCreatedRoom();

  /// @brief Method OnDisable, addr 0x2c7330c, size 0x58, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2c72f6c, size 0x2a0, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnFriendListUpdate, addr 0x2c75240, size 0x4, virtual true, abstract: false, final true
  inline void OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>* friendList);

  /// @brief Method OnGameRoomLoaded, addr 0x2c7320c, size 0x100, virtual false, abstract: false, final false
  inline void OnGameRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnGameRoomUnloaded, addr 0x2c75000, size 0x130, virtual false, abstract: false, final false
  static inline void OnGameRoomUnloaded();

  /// @brief Method OnHasInitialFriendsList, addr 0x2c735b8, size 0x1fc, virtual false, abstract: false, final false
  inline void OnHasInitialFriendsList(::System::Collections::Generic::List_1<::StringW>* initialFriendAccountIDs);

  /// @brief Method OnInRoomTimeoutCompleted, addr 0x2c76f08, size 0x104, virtual false, abstract: false, final false
  inline void OnInRoomTimeoutCompleted();

  /// @brief Method OnInitialFriendStatusesLoaded, addr 0x2c738e0, size 0x4, virtual false, abstract: false, final false
  inline void OnInitialFriendStatusesLoaded();

  /// @brief Method OnJoinRandomFailed, addr 0x2c76088, size 0xd4, virtual true, abstract: false, final true
  inline void OnJoinRandomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinRoomFailed, addr 0x2c75fb4, size 0xd4, virtual true, abstract: false, final true
  inline void OnJoinRoomFailed(int16_t returnCode, ::StringW message);

  /// @brief Method OnJoinedLobby, addr 0x2c74504, size 0xb4, virtual true, abstract: false, final true
  inline void OnJoinedLobby();

  /// @brief Method OnJoinedRoom, addr 0x2c75380, size 0x980, virtual true, abstract: false, final true
  inline void OnJoinedRoom();

  /// @brief Method OnLeftLobby, addr 0x2c74ff4, size 0x4, virtual true, abstract: false, final true
  inline void OnLeftLobby();

  /// @brief Method OnLeftRoom, addr 0x2c7615c, size 0x34c, virtual true, abstract: false, final true
  inline void OnLeftRoom();

  /// @brief Method OnLobbyStatisticsUpdate, addr 0x2c74ff8, size 0x4, virtual true, abstract: false, final true
  inline void OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>* lobbyStatistics);

  /// @brief Method OnMasterClientSwitched, addr 0x2c76600, size 0x8c, virtual true, abstract: false, final true
  inline void OnMasterClientSwitched(::Photon::Realtime::Player* newMasterClient);

  /// @brief Method OnPlayerDataAdded, addr 0x2c78ca0, size 0x124, virtual false, abstract: false, final false
  static inline void OnPlayerDataAdded(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnPlayerEnteredRoom, addr 0x2c7668c, size 0x250, virtual true, abstract: false, final true
  inline void OnPlayerEnteredRoom(::Photon::Realtime::Player* newPlayer);

  /// @brief Method OnPlayerLeftRoom, addr 0x2c768dc, size 0x250, virtual true, abstract: false, final true
  inline void OnPlayerLeftRoom(::Photon::Realtime::Player* otherPlayer);

  /// @brief Method OnPlayerPropertiesUpdate, addr 0x2c76b2c, size 0xcc, virtual true, abstract: false, final true
  inline void OnPlayerPropertiesUpdate(::Photon::Realtime::Player* targetPlayer, ::ExitGames::Client::Photon::Hashtable* changedProps);

  /// @brief Method OnReceiveExecuteKickPlayer, addr 0x2c77690, size 0x470, virtual false, abstract: false, final false
  static inline void OnReceiveExecuteKickPlayer(::GlobalNamespace::__NetworkManager__KickSource source, ::StringW sourceUserID, ::StringW targetUserID);

  /// @brief Method OnRoomJoinAttemptFailure, addr 0x2c74d00, size 0x144, virtual false, abstract: false, final false
  inline void OnRoomJoinAttemptFailure();

  /// @brief Method OnRoomJoinAttemptSuccess, addr 0x2c74cb0, size 0x50, virtual false, abstract: false, final false
  inline void OnRoomJoinAttemptSuccess();

  /// @brief Method OnRoomListUpdate, addr 0x2c74ffc, size 0x4, virtual true, abstract: false, final true
  inline void OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>* roomList);

  /// @brief Method OnRoomPropertiesUpdate, addr 0x2c76bf8, size 0xd8, virtual true, abstract: false, final true
  inline void OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable* propertiesThatChanged);

  /// @brief Method OnSendBufferFullHackFix, addr 0x2c78950, size 0x1b0, virtual false, abstract: false, final false
  static inline void OnSendBufferFullHackFix();

  /// @brief Method OnSuccessfullyReceivedMapSync, addr 0x2c76f04, size 0x4, virtual false, abstract: false, final false
  inline void OnSuccessfullyReceivedMapSync();

  /// @brief Method Photon.Realtime.IConnectionCallbacks.OnConnected, addr 0x2c739ec, size 0x4, virtual true, abstract: false, final true
  inline void Photon_Realtime_IConnectionCallbacks_OnConnected();

  /// @brief Method Photon.Realtime.IConnectionCallbacks.OnConnectedToMaster, addr 0x2c739f0, size 0x170, virtual true, abstract: false, final true
  inline void Photon_Realtime_IConnectionCallbacks_OnConnectedToMaster();

  /// @brief Method Photon.Realtime.IConnectionCallbacks.OnCustomAuthenticationFailed, addr 0x2c74414, size 0x4, virtual true, abstract: false, final true
  inline void Photon_Realtime_IConnectionCallbacks_OnCustomAuthenticationFailed(::StringW debugMessage);

  /// @brief Method Photon.Realtime.IConnectionCallbacks.OnCustomAuthenticationResponse, addr 0x2c74418, size 0x4, virtual true, abstract: false, final true
  inline void Photon_Realtime_IConnectionCallbacks_OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data);

  /// @brief Method Photon.Realtime.IConnectionCallbacks.OnDisconnected, addr 0x2c7441c, size 0xe4, virtual true, abstract: false, final true
  inline void Photon_Realtime_IConnectionCallbacks_OnDisconnected(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method Photon.Realtime.IConnectionCallbacks.OnRegionListReceived, addr 0x2c74500, size 0x4, virtual true, abstract: false, final true
  inline void Photon_Realtime_IConnectionCallbacks_OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler);

  /// @brief Method RefreshRoomIsVisible, addr 0x2c75e88, size 0x12c, virtual false, abstract: false, final false
  static inline void RefreshRoomIsVisible();

  /// @brief Method RemoveExpiredKickedPrivateWorlds, addr 0x2c78788, size 0x1bc, virtual false, abstract: false, final false
  static inline void RemoveExpiredKickedPrivateWorlds();

  /// @brief Method RemoveExpiredKickedRooms, addr 0x2c784ac, size 0x1bc, virtual false, abstract: false, final false
  static inline void RemoveExpiredKickedRooms();

  /// @brief Method SendExecuteKickPlayer, addr 0x2c77330, size 0x204, virtual false, abstract: false, final false
  static inline void SendExecuteKickPlayer(::StringW targetUserID, ::GlobalNamespace::__NetworkManager__KickSource source);

  /// @brief Method SetCurrentPrivateWorldRoomMapKey, addr 0x2c75df4, size 0x94, virtual false, abstract: false, final false
  static inline void SetCurrentPrivateWorldRoomMapKey(::StringW newRoomMapKey);

  /// @brief Method SetRoomJoinTarget, addr 0x2c74e44, size 0xc0, virtual false, abstract: false, final false
  inline void SetRoomJoinTarget(::StringW roomKey, ::StringW targetPhotonRoomName);

  /// @brief Method SetRoomProperties, addr 0x2c76d98, size 0xdc, virtual false, abstract: false, final false
  static inline void SetRoomProperties(::ExitGames::Client::Photon::Hashtable* properties);

  /// @brief Method Start, addr 0x2c73364, size 0x254, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StartInRoomTimeout, addr 0x2c75d00, size 0xf4, virtual false, abstract: false, final false
  inline void StartInRoomTimeout();

  /// @brief Method StopInRoomTimeout, addr 0x2c76574, size 0x8c, virtual false, abstract: false, final false
  inline void StopInRoomTimeout();

  /// @brief Method TryLeaveRoom, addr 0x2c74f78, size 0x7c, virtual false, abstract: false, final false
  inline void TryLeaveRoom();

  /// @brief Method <OnHasInitialFriendsList>b__32_0, addr 0x2c79194, size 0xbc, virtual false, abstract: false, final false
  inline void _OnHasInitialFriendsList_b__32_0(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* playerStatuses);

  /// @brief Method <OnHasInitialFriendsList>b__32_1, addr 0x2c79250, size 0x6c, virtual false, abstract: false, final false
  inline void _OnHasInitialFriendsList_b__32_1(::StringW errType);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__DirectAttemptType>*& __cordl_internal_get_attemptedDirectJoinTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__DirectAttemptType>*> const&
  __cordl_internal_get_attemptedDirectJoinTypes() const;

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curInRoomTimeoutCoroutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curInRoomTimeoutCoroutine() const;

  constexpr ::GlobalNamespace::__NetworkManager__DirectAttemptType const& __cordl_internal_get_lastDirectAttemptType() const;

  constexpr ::GlobalNamespace::__NetworkManager__DirectAttemptType& __cordl_internal_get_lastDirectAttemptType();

  constexpr ::StringW const& __cordl_internal_get_roomJoinTargetPhotonRoomName() const;

  constexpr ::StringW& __cordl_internal_get_roomJoinTargetPhotonRoomName();

  constexpr ::StringW const& __cordl_internal_get_roomJoinTargetRoomKey() const;

  constexpr ::StringW& __cordl_internal_get_roomJoinTargetRoomKey();

  constexpr void __cordl_internal_set_attemptedDirectJoinTypes(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__DirectAttemptType>* value);

  constexpr void __cordl_internal_set_curInRoomTimeoutCoroutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_lastDirectAttemptType(::GlobalNamespace::__NetworkManager__DirectAttemptType value);

  constexpr void __cordl_internal_set_roomJoinTargetPhotonRoomName(::StringW value);

  constexpr void __cordl_internal_set_roomJoinTargetRoomKey(::StringW value);

  /// @brief Method .ctor, addr 0x2c78f3c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF__isInMainInstance_k__BackingField();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_accountIDsKickedFromCurrentPrivateWorld();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_accountIDsKickedFromCurrentRoom();

  static inline ::StringW getStaticF_currentPrivateWorldRoomMapKey();

  static inline bool getStaticF_hasQueuedRoomLeave();

  static inline bool getStaticF_isAllowedToJoinRooms();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__KickedRoomData>* getStaticF_kickedPrivateWorldDatas();

  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__KickedRoomData>* getStaticF_kickedRoomDatas();

  static inline ::StringW getStaticF_lastJoinedPhotonRoomName();

  static inline float_t getStaticF_lastSendBufferFullHackTime();

  static inline ::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom* getStaticF_onJoinedRoomLatePersistantCallbacks();

  static inline ::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom* getStaticF_onJoinedRoomPersistantCallbacks();

  static inline ::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom* getStaticF_onLeftRoomEarlyPersistantCallbacks();

  static inline ::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom* getStaticF_onLeftRoomPersistantCallbacks();

  static inline ::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom* getStaticF_onPlayerJoinedRoomPersistantCallbacks();

  static inline ::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom* getStaticF_onPlayerLeftRoomPersistantCallbacks();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_userIDsKickedFromCurrentPrivateWorld();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_userIDsKickedFromCurrentRoom();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_visitedRoomInstances();

  /// @brief Method get_currentRoomName, addr 0x2c72ebc, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW get_currentRoomName();

  /// @brief Method get_isHost, addr 0x2c72d68, size 0x50, virtual false, abstract: false, final false
  static inline bool get_isHost();

  /// @brief Method get_isInMainInstance, addr 0x2c72e08, size 0x58, virtual false, abstract: false, final false
  static inline bool get_isInMainInstance();

  /// @brief Method get_isInRoom, addr 0x2c72db8, size 0x50, virtual false, abstract: false, final false
  static inline bool get_isInRoom();

  /// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
  constexpr ::Photon::Realtime::IConnectionCallbacks* i___Photon__Realtime__IConnectionCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
  constexpr ::Photon::Realtime::IInRoomCallbacks* i___Photon__Realtime__IInRoomCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
  constexpr ::Photon::Realtime::ILobbyCallbacks* i___Photon__Realtime__ILobbyCallbacks() noexcept;

  /// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
  constexpr ::Photon::Realtime::IMatchmakingCallbacks* i___Photon__Realtime__IMatchmakingCallbacks() noexcept;

  static inline void setStaticF__isInMainInstance_k__BackingField(bool value);

  static inline void setStaticF_accountIDsKickedFromCurrentPrivateWorld(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_accountIDsKickedFromCurrentRoom(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_currentPrivateWorldRoomMapKey(::StringW value);

  static inline void setStaticF_hasQueuedRoomLeave(bool value);

  static inline void setStaticF_isAllowedToJoinRooms(bool value);

  static inline void setStaticF_kickedPrivateWorldDatas(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__KickedRoomData>* value);

  static inline void setStaticF_kickedRoomDatas(::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__KickedRoomData>* value);

  static inline void setStaticF_lastJoinedPhotonRoomName(::StringW value);

  static inline void setStaticF_lastSendBufferFullHackTime(float_t value);

  static inline void setStaticF_onJoinedRoomLatePersistantCallbacks(::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom* value);

  static inline void setStaticF_onJoinedRoomPersistantCallbacks(::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom* value);

  static inline void setStaticF_onLeftRoomEarlyPersistantCallbacks(::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom* value);

  static inline void setStaticF_onLeftRoomPersistantCallbacks(::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom* value);

  static inline void setStaticF_onPlayerJoinedRoomPersistantCallbacks(::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom* value);

  static inline void setStaticF_onPlayerLeftRoomPersistantCallbacks(::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom* value);

  static inline void setStaticF_userIDsKickedFromCurrentPrivateWorld(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_userIDsKickedFromCurrentRoom(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_visitedRoomInstances(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  /// @brief Method set_isInMainInstance, addr 0x2c72e60, size 0x5c, virtual false, abstract: false, final false
  static inline void set_isInMainInstance(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkManager(NetworkManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkManager(NetworkManager const&) = delete;

  /// @brief Field attemptedDirectJoinTypes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__NetworkManager__DirectAttemptType>* ___attemptedDirectJoinTypes;

  /// @brief Field lastDirectAttemptType, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__NetworkManager__DirectAttemptType ___lastDirectAttemptType;

  /// @brief Field roomJoinTargetRoomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW ___roomJoinTargetRoomKey;

  /// @brief Field roomJoinTargetPhotonRoomName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___roomJoinTargetPhotonRoomName;

  /// @brief Field curInRoomTimeoutCoroutine, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curInRoomTimeoutCoroutine;

  /// @brief Field SEND_BUFFER_HACK_COOLDOWN offset 0xffffffff size 0x4
  static constexpr float_t SEND_BUFFER_HACK_COOLDOWN{ 5.0 };

  /// @brief Field autoRejoinPreviouslyVisitedRooms offset 0xffffffff size 0x1
  static constexpr bool autoRejoinPreviouslyVisitedRooms{ false };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Network: " };

  /// @brief Field inRoomTimeoutDurationSeconds offset 0xffffffff size 0x4
  static constexpr float_t inRoomTimeoutDurationSeconds{ 5.0 };

  /// @brief Field kickedRoomLifetimeSeconds offset 0xffffffff size 0x4
  static constexpr float_t kickedRoomLifetimeSeconds{ 300.0 };

  /// @brief Field mainInstancePhotonRoomPostFix offset 0xffffffff size 0x8
  static constexpr ::ConstString mainInstancePhotonRoomPostFix{ u"_main" };

  /// @brief Field maxPlayersForMatchmaking offset 0xffffffff size 0x4
  static constexpr int32_t maxPlayersForMatchmaking{ static_cast<int32_t>(0xa) };

  /// @brief Field maxPlayersPerRoom offset 0xffffffff size 0x4
  static constexpr int32_t maxPlayersPerRoom{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkManager, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkManager, ___attemptedDirectJoinTypes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkManager, ___lastDirectAttemptType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkManager, ___roomJoinTargetRoomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkManager, ___roomJoinTargetPhotonRoomName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NetworkManager, ___curInRoomTimeoutCoroutine) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager__DirectAttemptType, "", "NetworkManager/DirectAttemptType");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager__KickSource, "", "NetworkManager/KickSource");
NEED_NO_BOX(::GlobalNamespace::NetworkManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkManager*, "", "NetworkManager");
NEED_NO_BOX(::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager__OnJoinedPhotonRoom*, "", "NetworkManager/OnJoinedPhotonRoom");
NEED_NO_BOX(::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager__OnLeftPhotonRoom*, "", "NetworkManager/OnLeftPhotonRoom");
NEED_NO_BOX(::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager__OnPlayerJoinedPhotonRoom*, "", "NetworkManager/OnPlayerJoinedPhotonRoom");
NEED_NO_BOX(::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager__OnPlayerLeftPhotonRoom*, "", "NetworkManager/OnPlayerLeftPhotonRoom");
NEED_NO_BOX(::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager___InRoomTimeout_d__83*, "", "NetworkManager/<InRoomTimeout>d__83");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NetworkManager__KickedRoomData, "", "NetworkManager/KickedRoomData");
