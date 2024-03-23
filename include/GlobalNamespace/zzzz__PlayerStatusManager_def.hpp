#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__PrivateRoomPermissions_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatusManager)
namespace GlobalNamespace {
struct PlayerData;
}
namespace GlobalNamespace {
struct PrivateRoomPermissions;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
struct __AWSDatabase__BatchDynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__UpdateDynamoResponse;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnFetchPlayerStatusFailure;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnFetchPlayerStatusSuccess;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnFetchPlayerStatusesSuccess;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnOnlinePlayerStatusesUpdated;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPlayerBecameOffline;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPlayerBecameOnline;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPutPlayerStatusFailure;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPutPlayerStatusSuccess;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___ClearLocalPlayerStatus_d__31;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___FetchPlayerStatus_d__51;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___FetchPlayerStatuses_d__53;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct DateTime;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerStatusManager;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnFetchPlayerStatusFailure;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnFetchPlayerStatusSuccess;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnFetchPlayerStatusesSuccess;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnOnlinePlayerStatusesUpdated;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPlayerBecameOffline;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPlayerBecameOnline;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPutPlayerStatusFailure;
}
namespace GlobalNamespace {
class __PlayerStatusManager__OnPutPlayerStatusSuccess;
}
namespace GlobalNamespace {
struct __PlayerStatusManager__PlayerStatus;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___ClearLocalPlayerStatus_d__31;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___FetchPlayerStatus_d__51;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___FetchPlayerStatuses_d__53;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30;
}
namespace GlobalNamespace {
struct __PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerStatusManager);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusManager__PlayerStatus);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43);
// Type: ::PlayerStatus
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusManager::PlayerStatus
struct CORDL_TYPE __PlayerStatusManager__PlayerStatus {
public:
  // Declarations
  __declspec(property(get = get_accountID, put = set_accountID))::StringW accountID;

  __declspec(property(get = get_expireTimestamp, put = set_expireTimestamp))::System::DateTime expireTimestamp;

  __declspec(property(get = get_photonRoomName, put = set_photonRoomName))::StringW photonRoomName;

  __declspec(property(get = get_privateRoomPermissions, put = set_privateRoomPermissions))::GlobalNamespace::PrivateRoomPermissions privateRoomPermissions;

  __declspec(property(get = get_roomKey, put = set_roomKey))::StringW roomKey;

  __declspec(property(get = get_roomMapKey, put = set_roomMapKey))::StringW roomMapKey;

  __declspec(property(get = get_roomModeCode, put = set_roomModeCode))::StringW roomModeCode;

  /// @brief Method CanJoinOwnPrivateRoom, addr 0x174f214, size 0x16c, virtual false, abstract: false, final false
  inline bool CanJoinOwnPrivateRoom();

  /// @brief Method CanJoinRoom, addr 0x174f380, size 0x100, virtual false, abstract: false, final false
  inline bool CanJoinRoom(::StringW curRoomMapKey);

  /// @brief Method Equals, addr 0x174f480, size 0xf8, virtual false, abstract: false, final false
  inline bool Equals(::GlobalNamespace::__PlayerStatusManager__PlayerStatus other);

  /// @brief Method Invalid, addr 0x174e654, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__PlayerStatusManager__PlayerStatus Invalid();

  /// @brief Method IsInAnyPrivateRoom, addr 0x174f05c, size 0x8c, virtual false, abstract: false, final false
  inline bool IsInAnyPrivateRoom();

  /// @brief Method IsInAnyPublicRoom, addr 0x174f0e8, size 0x90, virtual false, abstract: false, final false
  inline bool IsInAnyPublicRoom();

  /// @brief Method IsInOwnPrivateRoom, addr 0x174f178, size 0x9c, virtual false, abstract: false, final false
  inline bool IsInOwnPrivateRoom();

  /// @brief Method IsInvalid, addr 0x174f050, size 0xc, virtual false, abstract: false, final false
  inline bool IsInvalid();

  /// @brief Method ToString, addr 0x174f578, size 0x35c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x174e024, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::StringW accountID, ::StringW roomMapKey, ::StringW roomMapCode, ::StringW roomKey, ::StringW photonRoomName, ::GlobalNamespace::PrivateRoomPermissions privateRoomPermissions,
                    ::System::DateTime expireTimestamp);

  /// @brief Method get_accountID, addr 0x174efe0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_accountID();

  /// @brief Method get_expireTimestamp, addr 0x174f040, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_expireTimestamp();

  /// @brief Method get_photonRoomName, addr 0x174f020, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_photonRoomName();

  /// @brief Method get_privateRoomPermissions, addr 0x174f030, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PrivateRoomPermissions get_privateRoomPermissions();

  /// @brief Method get_roomKey, addr 0x174f010, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_roomKey();

  /// @brief Method get_roomMapKey, addr 0x174eff0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_roomMapKey();

  /// @brief Method get_roomModeCode, addr 0x174f000, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_roomModeCode();

  /// @brief Method set_accountID, addr 0x174efe8, size 0x8, virtual false, abstract: false, final false
  inline void set_accountID(::StringW value);

  /// @brief Method set_expireTimestamp, addr 0x174f048, size 0x8, virtual false, abstract: false, final false
  inline void set_expireTimestamp(::System::DateTime value);

  /// @brief Method set_photonRoomName, addr 0x174f028, size 0x8, virtual false, abstract: false, final false
  inline void set_photonRoomName(::StringW value);

  /// @brief Method set_privateRoomPermissions, addr 0x174f038, size 0x8, virtual false, abstract: false, final false
  inline void set_privateRoomPermissions(::GlobalNamespace::PrivateRoomPermissions value);

  /// @brief Method set_roomKey, addr 0x174f018, size 0x8, virtual false, abstract: false, final false
  inline void set_roomKey(::StringW value);

  /// @brief Method set_roomMapKey, addr 0x174eff8, size 0x8, virtual false, abstract: false, final false
  inline void set_roomMapKey(::StringW value);

  /// @brief Method set_roomModeCode, addr 0x174f008, size 0x8, virtual false, abstract: false, final false
  inline void set_roomModeCode(::StringW value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__PlayerStatus();

  // Ctor Parameters [CppParam { name: "_accountID_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_roomMapKey_k__BackingField", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "_roomModeCode_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_roomKey_k__BackingField", ty: "::StringW", modifiers:
  // "", def_value: None }, CppParam { name: "_photonRoomName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_privateRoomPermissions_k__BackingField", ty:
  // "::GlobalNamespace::PrivateRoomPermissions", modifiers: "", def_value: None }, CppParam { name: "_expireTimestamp_k__BackingField", ty: "::System::DateTime", modifiers: "", def_value: None }]
  constexpr __PlayerStatusManager__PlayerStatus(::StringW _accountID_k__BackingField, ::StringW _roomMapKey_k__BackingField, ::StringW _roomModeCode_k__BackingField,
                                                ::StringW _roomKey_k__BackingField, ::StringW _photonRoomName_k__BackingField,
                                                ::GlobalNamespace::PrivateRoomPermissions _privateRoomPermissions_k__BackingField, ::System::DateTime _expireTimestamp_k__BackingField) noexcept;

  /// @brief Field <accountID>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _accountID_k__BackingField;

  /// @brief Field <roomMapKey>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::StringW _roomMapKey_k__BackingField;

  /// @brief Field <roomModeCode>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW _roomModeCode_k__BackingField;

  /// @brief Field <roomKey>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW _roomKey_k__BackingField;

  /// @brief Field <photonRoomName>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::StringW _photonRoomName_k__BackingField;

  /// @brief Field <privateRoomPermissions>k__BackingField, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::PrivateRoomPermissions _privateRoomPermissions_k__BackingField;

  /// @brief Field <expireTimestamp>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::DateTime _expireTimestamp_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__PlayerStatus, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, _accountID_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, _roomMapKey_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, _roomModeCode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, _roomKey_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, _photonRoomName_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, _privateRoomPermissions_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, _expireTimestamp_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerBecameOnline
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnPlayerBecameOnline*
class CORDL_TYPE __PlayerStatusManager__OnPlayerBecameOnline : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174f9f0, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus initialStatus, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174fa84, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174f9ac, size 0x44, virtual true, abstract: false, final false
  inline void Invoke(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus initialStatus);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174f8d4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnPlayerBecameOnline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPlayerBecameOnline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnPlayerBecameOnline(__PlayerStatusManager__OnPlayerBecameOnline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPlayerBecameOnline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnPlayerBecameOnline(__PlayerStatusManager__OnPlayerBecameOnline const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPlayerBecameOffline
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnPlayerBecameOffline*
class CORDL_TYPE __PlayerStatusManager__OnPlayerBecameOffline : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174fb78, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW accountID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174fb98, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174fb64, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW accountID);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174fa90, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnPlayerBecameOffline();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPlayerBecameOffline", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnPlayerBecameOffline(__PlayerStatusManager__OnPlayerBecameOffline&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPlayerBecameOffline", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnPlayerBecameOffline(__PlayerStatusManager__OnPlayerBecameOffline const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnOnlinePlayerStatusesUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnOnlinePlayerStatusesUpdated*
class CORDL_TYPE __PlayerStatusManager__OnOnlinePlayerStatusesUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174fce4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174fd04, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174fcd0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174fba4, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnOnlinePlayerStatusesUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnOnlinePlayerStatusesUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnOnlinePlayerStatusesUpdated(__PlayerStatusManager__OnOnlinePlayerStatusesUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnOnlinePlayerStatusesUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnOnlinePlayerStatusesUpdated(__PlayerStatusManager__OnOnlinePlayerStatusesUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnLocalPrivateRoomPermissionsUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnLocalPrivateRoomPermissionsUpdated*
class CORDL_TYPE __PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174fde8, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174fe6c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174fdd4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174fd10, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated(__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated(__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPutPlayerStatusSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnPutPlayerStatusSuccess*
class CORDL_TYPE __PlayerStatusManager__OnPutPlayerStatusSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x174ff48, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x174ff68, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x174ff34, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174fe78, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnPutPlayerStatusSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPutPlayerStatusSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnPutPlayerStatusSuccess(__PlayerStatusManager__OnPutPlayerStatusSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPutPlayerStatusSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnPutPlayerStatusSuccess(__PlayerStatusManager__OnPutPlayerStatusSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnPutPlayerStatusFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnPutPlayerStatusFailure*
class CORDL_TYPE __PlayerStatusManager__OnPutPlayerStatusFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x175005c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x175007c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1750048, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x174ff74, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnPutPlayerStatusFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPutPlayerStatusFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnPutPlayerStatusFailure(__PlayerStatusManager__OnPutPlayerStatusFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnPutPlayerStatusFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnPutPlayerStatusFailure(__PlayerStatusManager__OnPutPlayerStatusFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchPlayerStatusSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnFetchPlayerStatusSuccess*
class CORDL_TYPE __PlayerStatusManager__OnFetchPlayerStatusSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1750194, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool isOnline, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1750250, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x175014c, size 0x48, virtual true, abstract: false, final false
  inline void Invoke(bool isOnline, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus playerStatus);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1750088, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnFetchPlayerStatusSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnFetchPlayerStatusSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnFetchPlayerStatusSuccess(__PlayerStatusManager__OnFetchPlayerStatusSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnFetchPlayerStatusSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnFetchPlayerStatusSuccess(__PlayerStatusManager__OnFetchPlayerStatusSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchPlayerStatusFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnFetchPlayerStatusFailure*
class CORDL_TYPE __PlayerStatusManager__OnFetchPlayerStatusFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1750344, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1750364, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1750330, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x175025c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnFetchPlayerStatusFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnFetchPlayerStatusFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnFetchPlayerStatusFailure(__PlayerStatusManager__OnFetchPlayerStatusFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnFetchPlayerStatusFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnFetchPlayerStatusFailure(__PlayerStatusManager__OnFetchPlayerStatusFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchPlayerStatusesSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager::OnFetchPlayerStatusesSuccess*
class CORDL_TYPE __PlayerStatusManager__OnFetchPlayerStatusesSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x17504b0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x17504d0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x175049c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses);

  static inline ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1750370, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager__OnFetchPlayerStatusesSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnFetchPlayerStatusesSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerStatusManager__OnFetchPlayerStatusesSuccess(__PlayerStatusManager__OnFetchPlayerStatusesSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerStatusManager__OnFetchPlayerStatusesSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerStatusManager__OnFetchPlayerStatusesSuccess(__PlayerStatusManager__OnFetchPlayerStatusesSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<PutLocalPlayerStatusToDatabase>d__30
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusManager::<PutLocalPlayerStatusToDatabase>d__30
struct CORDL_TYPE __PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x17504dc, size 0x380, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x175085c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty:
  // "::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure*", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "roomMapKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "roomMapCode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "photonRoomName", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess*", modifiers: "", def_value: None }, CppParam
  // { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                         ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure* onFailure, ::StringW roomKey, ::StringW roomMapKey,
                                                                         ::StringW roomMapCode, ::StringW photonRoomName, ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess* onSuccess,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure* onFailure;

  /// @brief Field roomKey, offset: 0x30, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field roomMapKey, offset: 0x38, size: 0x8, def value: None
  ::StringW roomMapKey;

  /// @brief Field roomMapCode, offset: 0x40, size: 0x8, def value: None
  ::StringW roomMapCode;

  /// @brief Field photonRoomName, offset: 0x48, size: 0x8, def value: None
  ::StringW photonRoomName;

  /// @brief Field onSuccess, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, roomKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, roomMapKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, roomMapCode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, photonRoomName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, onSuccess) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, __u__1) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ClearLocalPlayerStatus>d__31
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusManager::<ClearLocalPlayerStatus>d__31
struct CORDL_TYPE __PlayerStatusManager___ClearLocalPlayerStatus_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1750868, size 0x2cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1750b34, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager___ClearLocalPlayerStatus_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty:
  // "::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerStatusManager___ClearLocalPlayerStatus_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                 ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure* onFailure,
                                                                 ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess* onSuccess,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshOnlinePlayerStatuses>d__43
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusManager::<RefreshOnlinePlayerStatuses>d__43
struct CORDL_TYPE __PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1750b40, size 0x708, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1751248, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerStatusManager>", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None
  // }]
  constexpr __PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                      ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchPlayerStatus>d__51
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusManager::<FetchPlayerStatus>d__51
struct CORDL_TYPE __PlayerStatusManager___FetchPlayerStatus_d__51 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1751254, size 0x410, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1751664, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager___FetchPlayerStatus_d__51();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "ignoreCache", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerStatusManager>", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "onSuccess", ty: "::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty:
  // "::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerStatusManager___FetchPlayerStatus_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool ignoreCache,
                                                            ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this, ::StringW accountID,
                                                            ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess* onSuccess,
                                                            ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field ignoreCache, offset: 0x28, size: 0x1, def value: None
  bool ignoreCache;

  /// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this;

  /// @brief Field accountID, offset: 0x38, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess* onSuccess;

  /// @brief Field onFailure, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, ignoreCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, accountID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, onFailure) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchPlayerStatuses>d__53
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusManager::<FetchPlayerStatuses>d__53
struct CORDL_TYPE __PlayerStatusManager___FetchPlayerStatuses_d__53 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1751670, size 0x89c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1751f0c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager___FetchPlayerStatuses_d__53();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "accountIDs", ty: "::System::Collections::Generic::List_1<::StringW>*",
  // modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess*", modifiers: "", def_value: None }, CppParam { name:
  // "ignoreCache", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PlayerStatusManager>", modifiers: "", def_value: None }, CppParam {
  // name: "onFailure", ty: "::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerStatusManager___FetchPlayerStatuses_d__53(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                              ::System::Collections::Generic::List_1<::StringW>* accountIDs,
                                                              ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess* onSuccess, bool ignoreCache,
                                                              ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this,
                                                              ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure,
                                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field accountIDs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* accountIDs;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess* onSuccess;

  /// @brief Field ignoreCache, offset: 0x38, size: 0x1, def value: None
  bool ignoreCache;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this;

  /// @brief Field onFailure, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, accountIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, ignoreCache) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, onFailure) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchPlayerStatusesIntoCache>d__54
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusManager::<FetchPlayerStatusesIntoCache>d__54
struct CORDL_TYPE __PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1751f18, size 0x7cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x17526e4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "accountIDs", ty: "::System::Collections::Generic::List_1<::StringW>*",
  // modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess*", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure*", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::PlayerStatusManager>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                       ::System::Collections::Generic::List_1<::StringW>* accountIDs,
                                                                       ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess* onSuccess,
                                                                       ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure,
                                                                       ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field accountIDs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* accountIDs;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess* onSuccess;

  /// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure;

  /// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerStatusManager> __4__this;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, accountIDs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, __4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerStatusManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusManager*
class CORDL_TYPE PlayerStatusManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::PlayerStatusManager>> {
public:
  // Declarations
  using OnFetchPlayerStatusFailure = ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure;

  using OnFetchPlayerStatusSuccess = ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess;

  using OnFetchPlayerStatusesSuccess = ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess;

  using OnLocalPrivateRoomPermissionsUpdated = ::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated;

  using OnOnlinePlayerStatusesUpdated = ::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated;

  using OnPlayerBecameOffline = ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline;

  using OnPlayerBecameOnline = ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline;

  using OnPutPlayerStatusFailure = ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure;

  using OnPutPlayerStatusSuccess = ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess;

  using PlayerStatus = ::GlobalNamespace::__PlayerStatusManager__PlayerStatus;

  using _ClearLocalPlayerStatus_d__31 = ::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31;

  using _FetchPlayerStatus_d__51 = ::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51;

  using _FetchPlayerStatusesIntoCache_d__54 = ::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54;

  using _FetchPlayerStatuses_d__53 = ::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53;

  using _PutLocalPlayerStatusToDatabase_d__30 = ::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30;

  using _RefreshOnlinePlayerStatuses_d__43 = ::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43;

  /// @brief Field localPrivateRoomPermissions, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_localPrivateRoomPermissions,
                             put = setStaticF_localPrivateRoomPermissions))::System::Nullable_1<::GlobalNamespace::PrivateRoomPermissions> localPrivateRoomPermissions;

  /// @brief Field nextLocalUpdateTime, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_nextLocalUpdateTime, put = __cordl_internal_set_nextLocalUpdateTime)) float_t nextLocalUpdateTime;

  /// @brief Field nextRefreshOnlinePlayerStatusesTime, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_nextRefreshOnlinePlayerStatusesTime, put = __cordl_internal_set_nextRefreshOnlinePlayerStatusesTime)) float_t nextRefreshOnlinePlayerStatusesTime;

  /// @brief Field onLocalPrivateRoomPermissionsUpdated, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_onLocalPrivateRoomPermissionsUpdated,
               put = setStaticF_onLocalPrivateRoomPermissionsUpdated))::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated* onLocalPrivateRoomPermissionsUpdated;

  /// @brief Field onOnlinePlayerStatusesUpdatedCallbacks, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onOnlinePlayerStatusesUpdatedCallbacks,
               put = __cordl_internal_set_onOnlinePlayerStatusesUpdatedCallbacks))::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated* onOnlinePlayerStatusesUpdatedCallbacks;

  /// @brief Field onPlayerBecameOfflineCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerBecameOfflineCallbacks,
                      put = __cordl_internal_set_onPlayerBecameOfflineCallbacks))::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline* onPlayerBecameOfflineCallbacks;

  /// @brief Field onPlayerBecameOnlineCallbacks, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onPlayerBecameOnlineCallbacks,
                      put = __cordl_internal_set_onPlayerBecameOnlineCallbacks))::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline* onPlayerBecameOnlineCallbacks;

  /// @brief Field onlinePlayerStatuses, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onlinePlayerStatuses,
               put = __cordl_internal_set_onlinePlayerStatuses))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* onlinePlayerStatuses;

  /// @brief Field otherNonSpectatorAccountIDsInRoom, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_otherNonSpectatorAccountIDsInRoom,
                      put = __cordl_internal_set_otherNonSpectatorAccountIDsInRoom))::System::Collections::Generic::List_1<::StringW>* otherNonSpectatorAccountIDsInRoom;

  /// @brief Field trackedAccountIDs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_trackedAccountIDs, put = __cordl_internal_set_trackedAccountIDs))::System::Collections::Generic::List_1<::StringW>* trackedAccountIDs;

  /// @brief Method AddAccountID, addr 0x174cc9c, size 0x108, virtual false, abstract: false, final false
  inline void AddAccountID(::StringW accountID);

  /// @brief Method AddAccountIDs, addr 0x174cda4, size 0x13c, virtual false, abstract: false, final false
  inline void AddAccountIDs(::System::Collections::Generic::List_1<::StringW>* accountIDs);

  /// @brief Method ClearLocalPlayerStatus, addr 0x174d970, size 0x9c, virtual false, abstract: false, final false
  inline void ClearLocalPlayerStatus(::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess* onSuccess, ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure* onFailure);

  /// @brief Method DeregisterCallbacks, addr 0x174d208, size 0x130, virtual false, abstract: false, final false
  inline void DeregisterCallbacks(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline* onPlayerBecameOnline,
                                  ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline* onPlayerBecameOffline,
                                  ::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated* onOnlinePlayerStatusesUpdated);

  /// @brief Method FetchPlayerStatus, addr 0x174e818, size 0xc0, virtual false, abstract: false, final false
  inline void FetchPlayerStatus(::StringW accountID, bool ignoreCache, ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess* onSuccess,
                                ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure);

  /// @brief Method FetchPlayerStatuses, addr 0x174e8d8, size 0xc0, virtual false, abstract: false, final false
  inline void FetchPlayerStatuses(::System::Collections::Generic::List_1<::StringW>* accountIDs, bool ignoreCache, ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess* onSuccess,
                                  ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure);

  /// @brief Method FetchPlayerStatusesIntoCache, addr 0x174e998, size 0xb4, virtual false, abstract: false, final false
  inline void FetchPlayerStatusesIntoCache(::System::Collections::Generic::List_1<::StringW>* accountIDs, ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess* onSuccess,
                                           ::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure* onFailure);

  /// @brief Method GetLocalPrivateRoomPermissions, addr 0x174d338, size 0x1b4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PrivateRoomPermissions GetLocalPrivateRoomPermissions();

  /// @brief Method GetOnlinePlayerStatuses, addr 0x174e76c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* GetOnlinePlayerStatuses();

  /// @brief Method GetOnlinePlayerStatusesList, addr 0x174e774, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* GetOnlinePlayerStatusesList();

  /// @brief Method GetPhotonRoomNameWithMostTrackedPlayers, addr 0x174ebac, size 0x33c, virtual false, abstract: false, final false
  inline ::StringW GetPhotonRoomNameWithMostTrackedPlayers(::GlobalNamespace::RoomData* roomData);

  static inline ::GlobalNamespace::PlayerStatusManager* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x174dbd8, size 0x6c, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnBanned, addr 0x174dad4, size 0x24, virtual false, abstract: false, final false
  inline void OnBanned();

  /// @brief Method OnLocalPlayerJoinedPhotonRoom, addr 0x174dc44, size 0x18, virtual false, abstract: false, final false
  inline void OnLocalPlayerJoinedPhotonRoom(::StringW photonRoomName);

  /// @brief Method OnOtherPlayerJoinedPhotonRoom, addr 0x174dc5c, size 0x360, virtual false, abstract: false, final false
  inline void OnOtherPlayerJoinedPhotonRoom(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnOtherPlayerLeftPhotonRoom, addr 0x174e1b4, size 0xb4, virtual false, abstract: false, final false
  inline void OnOtherPlayerLeftPhotonRoom(::GlobalNamespace::PlayerData playerData);

  /// @brief Method OnReceivedOfflinePlayerStatus, addr 0x174e6c0, size 0xac, virtual false, abstract: false, final false
  inline void OnReceivedOfflinePlayerStatus(::StringW accountID);

  /// @brief Method OnReceivedOnlinePlayerStatus, addr 0x174e03c, size 0x178, virtual false, abstract: false, final false
  inline void OnReceivedOnlinePlayerStatus(::StringW accountID, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus newStatus);

  /// @brief Method OnReceivedPrivateRoomPermissionsUpdated, addr 0x174ea4c, size 0x160, virtual false, abstract: false, final false
  inline void OnReceivedPrivateRoomPermissionsUpdated(::StringW accountID, ::GlobalNamespace::PrivateRoomPermissions newPrivateRoomPermissions);

  /// @brief Method PutLocalPlayerStatusToDatabase, addr 0x174da0c, size 0xc8, virtual false, abstract: false, final false
  inline void PutLocalPlayerStatusToDatabase(::StringW roomMapKey, ::StringW roomMapCode, ::StringW roomKey, ::StringW photonRoomName,
                                             ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess* onSuccess,
                                             ::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure* onFailure);

  /// @brief Method RefreshOnlinePlayerStatuses, addr 0x174db44, size 0x94, virtual false, abstract: false, final false
  inline void RefreshOnlinePlayerStatuses();

  /// @brief Method RegisterCallbacks, addr 0x174d0d8, size 0x130, virtual false, abstract: false, final false
  inline void RegisterCallbacks(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline* onPlayerBecameOnline,
                                ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline* onPlayerBecameOffline,
                                ::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated* onOnlinePlayerStatusesUpdated);

  /// @brief Method RemoveAccountID, addr 0x174cee0, size 0x150, virtual false, abstract: false, final false
  inline bool RemoveAccountID(::StringW accountID);

  /// @brief Method RemoveAccountIDs, addr 0x174d030, size 0xa8, virtual false, abstract: false, final false
  inline void RemoveAccountIDs(::System::Collections::Generic::List_1<::StringW>* accountIDs);

  /// @brief Method SetLocalPrivateRoomPermissions, addr 0x174d4ec, size 0x274, virtual false, abstract: false, final false
  static inline void SetLocalPrivateRoomPermissions(::GlobalNamespace::PrivateRoomPermissions newLocalPrivateRoomPermissions);

  /// @brief Method Start, addr 0x174c780, size 0x51c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryExtractPlayerStatus, addr 0x174e268, size 0x3ec, virtual false, abstract: false, final false
  inline bool TryExtractPlayerStatus(::GlobalNamespace::__AWSDatabase__DynamoResponse response, bool isPlayerInPhotonRoom, ByRef<::GlobalNamespace::__PlayerStatusManager__PlayerStatus> playerStatus,
                                     ByRef<bool> isFormatValid);

  /// @brief Method TryGetOnlinePlayerStatus, addr 0x174dfbc, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetOnlinePlayerStatus(::StringW accountID, ByRef<::GlobalNamespace::__PlayerStatusManager__PlayerStatus> playerStatus);

  /// @brief Method TryUpdateLocalPlayerStatus, addr 0x174d760, size 0x210, virtual false, abstract: false, final false
  inline void TryUpdateLocalPlayerStatus();

  /// @brief Method Update, addr 0x174daf8, size 0x4c, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_nextLocalUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextLocalUpdateTime();

  constexpr float_t const& __cordl_internal_get_nextRefreshOnlinePlayerStatusesTime() const;

  constexpr float_t& __cordl_internal_get_nextRefreshOnlinePlayerStatusesTime();

  constexpr ::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated*& __cordl_internal_get_onOnlinePlayerStatusesUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated*> const& __cordl_internal_get_onOnlinePlayerStatusesUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline*& __cordl_internal_get_onPlayerBecameOfflineCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline*> const& __cordl_internal_get_onPlayerBecameOfflineCallbacks() const;

  constexpr ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline*& __cordl_internal_get_onPlayerBecameOnlineCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline*> const& __cordl_internal_get_onPlayerBecameOnlineCallbacks() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*& __cordl_internal_get_onlinePlayerStatuses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus>*> const&
  __cordl_internal_get_onlinePlayerStatuses() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_otherNonSpectatorAccountIDsInRoom();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_otherNonSpectatorAccountIDsInRoom() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_trackedAccountIDs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_trackedAccountIDs() const;

  constexpr void __cordl_internal_set_nextLocalUpdateTime(float_t value);

  constexpr void __cordl_internal_set_nextRefreshOnlinePlayerStatusesTime(float_t value);

  constexpr void __cordl_internal_set_onOnlinePlayerStatusesUpdatedCallbacks(::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated* value);

  constexpr void __cordl_internal_set_onPlayerBecameOfflineCallbacks(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline* value);

  constexpr void __cordl_internal_set_onPlayerBecameOnlineCallbacks(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline* value);

  constexpr void __cordl_internal_set_onlinePlayerStatuses(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* value);

  constexpr void __cordl_internal_set_otherNonSpectatorAccountIDsInRoom(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_trackedAccountIDs(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x174eee8, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Nullable_1<::GlobalNamespace::PrivateRoomPermissions> getStaticF_localPrivateRoomPermissions();

  static inline ::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated* getStaticF_onLocalPrivateRoomPermissionsUpdated();

  static inline void setStaticF_localPrivateRoomPermissions(::System::Nullable_1<::GlobalNamespace::PrivateRoomPermissions> value);

  static inline void setStaticF_onLocalPrivateRoomPermissionsUpdated(::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStatusManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatusManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerStatusManager(PlayerStatusManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatusManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerStatusManager(PlayerStatusManager const&) = delete;

  /// @brief Field onlinePlayerStatuses, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__PlayerStatusManager__PlayerStatus>* ___onlinePlayerStatuses;

  /// @brief Field trackedAccountIDs, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___trackedAccountIDs;

  /// @brief Field onPlayerBecameOnlineCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline* ___onPlayerBecameOnlineCallbacks;

  /// @brief Field onPlayerBecameOfflineCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline* ___onPlayerBecameOfflineCallbacks;

  /// @brief Field onOnlinePlayerStatusesUpdatedCallbacks, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated* ___onOnlinePlayerStatusesUpdatedCallbacks;

  /// @brief Field nextLocalUpdateTime, offset: 0x40, size: 0x4, def value: None
  float_t ___nextLocalUpdateTime;

  /// @brief Field nextRefreshOnlinePlayerStatusesTime, offset: 0x44, size: 0x4, def value: None
  float_t ___nextRefreshOnlinePlayerStatusesTime;

  /// @brief Field otherNonSpectatorAccountIDsInRoom, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___otherNonSpectatorAccountIDsInRoom;

  /// @brief Field FETCH_PLAYER_STATUS_DELAY offset 0xffffffff size 0x4
  static constexpr int32_t FETCH_PLAYER_STATUS_DELAY{ static_cast<int32_t>(0xa) };

  /// @brief Field LOCAL_PRIVATE_ROOM_PERMISSIONS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString LOCAL_PRIVATE_ROOM_PERMISSIONS_KEY{ u"localPrivateRoomPermissions" };

  /// @brief Field PLAYER_ADDED_REFRESH_DELAY offset 0xffffffff size 0x4
  static constexpr float_t PLAYER_ADDED_REFRESH_DELAY{ 0.5 };

  /// @brief Field PLAYER_LEFT_REFRESH_DELAY offset 0xffffffff size 0x4
  static constexpr float_t PLAYER_LEFT_REFRESH_DELAY{ 2.0 };

  /// @brief Field STATUS_LIFETIME offset 0xffffffff size 0x4
  static constexpr int32_t STATUS_LIFETIME{ static_cast<int32_t>(0x2d) };

  /// @brief Field UPDATE_PLAYER_STATUS_DELAY offset 0xffffffff size 0x4
  static constexpr int32_t UPDATE_PLAYER_STATUS_DELAY{ static_cast<int32_t>(0x14) };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Player Status Manager: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStatusManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___onlinePlayerStatuses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___trackedAccountIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___onPlayerBecameOnlineCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___onPlayerBecameOfflineCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___onOnlinePlayerStatusesUpdatedCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___nextLocalUpdateTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___nextRefreshOnlinePlayerStatusesTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerStatusManager, ___otherNonSpectatorAccountIDsInRoom) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerStatusManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatusManager*, "", "PlayerStatusManager");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusFailure*, "", "PlayerStatusManager/OnFetchPlayerStatusFailure");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusSuccess*, "", "PlayerStatusManager/OnFetchPlayerStatusSuccess");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnFetchPlayerStatusesSuccess*, "", "PlayerStatusManager/OnFetchPlayerStatusesSuccess");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnLocalPrivateRoomPermissionsUpdated*, "", "PlayerStatusManager/OnLocalPrivateRoomPermissionsUpdated");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnOnlinePlayerStatusesUpdated*, "", "PlayerStatusManager/OnOnlinePlayerStatusesUpdated");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOffline*, "", "PlayerStatusManager/OnPlayerBecameOffline");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnPlayerBecameOnline*, "", "PlayerStatusManager/OnPlayerBecameOnline");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusFailure*, "", "PlayerStatusManager/OnPutPlayerStatusFailure");
NEED_NO_BOX(::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__OnPutPlayerStatusSuccess*, "", "PlayerStatusManager/OnPutPlayerStatusSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager__PlayerStatus, "", "PlayerStatusManager/PlayerStatus");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager___ClearLocalPlayerStatus_d__31, "", "PlayerStatusManager/<ClearLocalPlayerStatus>d__31");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatus_d__51, "", "PlayerStatusManager/<FetchPlayerStatus>d__51");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatusesIntoCache_d__54, "", "PlayerStatusManager/<FetchPlayerStatusesIntoCache>d__54");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager___FetchPlayerStatuses_d__53, "", "PlayerStatusManager/<FetchPlayerStatuses>d__53");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager___PutLocalPlayerStatusToDatabase_d__30, "", "PlayerStatusManager/<PutLocalPlayerStatusToDatabase>d__30");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusManager___RefreshOnlinePlayerStatuses_d__43, "", "PlayerStatusManager/<RefreshOnlinePlayerStatuses>d__43");
