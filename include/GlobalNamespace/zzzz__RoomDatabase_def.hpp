#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__MapData_def.hpp"
#include "GlobalNamespace/zzzz__RoomDatabase_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomDatabase)
namespace GlobalNamespace {
struct MapData;
}
namespace GlobalNamespace {
class RoomData;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
class __RoomDatabase__OnAutoEnterCreativeModeSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnFailure;
}
namespace GlobalNamespace {
class __RoomDatabase__OnFetchRoomDatabaseEntrySuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnGetRoomDataSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnGetRoomMapSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnVerboseFailure;
}
namespace GlobalNamespace {
struct __RoomDatabase__RoomDatabaseEntry;
}
namespace GlobalNamespace {
struct __RoomDatabase__RoomDoorConfigurationDataBaseEntry;
}
namespace GlobalNamespace {
struct __RoomDatabase___EnterCreativeMode_d__48;
}
namespace GlobalNamespace {
struct __RoomDatabase___EnterPlayMode_d__51;
}
namespace GlobalNamespace {
struct __RoomDatabase___FetchAWSRoomDatabaseEntry_d__40;
}
namespace GlobalNamespace {
struct __RoomDatabase___FetchLocalRoomDatabaseEntry_d__36;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetAutoCycleSwitchTimestamp_d__53;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetMapDataDirect_d__45;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetRoomDataDirect_d__44;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetRoomMap_d__46;
}
namespace GlobalNamespace {
struct __RoomDatabase___SaveRoomMap_d__47;
}
namespace GlobalNamespace {
struct __RoomDatabase___SetFloorDepth_d__54;
}
namespace GlobalNamespace {
struct __RoomDatabase___TryAutoEnterCreativeMode_d__50;
}
namespace GlobalNamespace {
class __RoomDatabase____c__DisplayClass39_0;
}
namespace GlobalNamespace {
class __RoomDatabase____c__DisplayClass39_1;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace GlobalNamespace {
class __RoomMapManager__OnGetNodeFailure;
}
namespace GlobalNamespace {
class __RoomMap__Node;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
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
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomDatabase;
}
namespace GlobalNamespace {
class __RoomDatabase__OnAutoEnterCreativeModeSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnFailure;
}
namespace GlobalNamespace {
class __RoomDatabase__OnFetchRoomDatabaseEntrySuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnGetRoomDataSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnGetRoomMapSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnSuccess;
}
namespace GlobalNamespace {
class __RoomDatabase__OnVerboseFailure;
}
namespace GlobalNamespace {
class __RoomDatabase____c__DisplayClass39_0;
}
namespace GlobalNamespace {
class __RoomDatabase____c__DisplayClass39_1;
}
namespace GlobalNamespace {
struct __RoomDatabase__RoomDatabaseEntry;
}
namespace GlobalNamespace {
struct __RoomDatabase__RoomDoorConfigurationDataBaseEntry;
}
namespace GlobalNamespace {
struct __RoomDatabase___EnterCreativeMode_d__48;
}
namespace GlobalNamespace {
struct __RoomDatabase___EnterPlayMode_d__51;
}
namespace GlobalNamespace {
struct __RoomDatabase___FetchAWSRoomDatabaseEntry_d__40;
}
namespace GlobalNamespace {
struct __RoomDatabase___FetchLocalRoomDatabaseEntry_d__36;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetAutoCycleSwitchTimestamp_d__53;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetMapDataDirect_d__45;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetRoomDataDirect_d__44;
}
namespace GlobalNamespace {
struct __RoomDatabase___GetRoomMap_d__46;
}
namespace GlobalNamespace {
struct __RoomDatabase___SaveRoomMap_d__47;
}
namespace GlobalNamespace {
struct __RoomDatabase___SetFloorDepth_d__54;
}
namespace GlobalNamespace {
struct __RoomDatabase___TryAutoEnterCreativeMode_d__50;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomDatabase);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase__OnVerboseFailure);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0);
MARK_REF_PTR_T(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54);
MARK_VAL_T(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50);
// Type: ::OnSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnSuccess*
class CORDL_TYPE __RoomDatabase__OnSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163526c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x163528c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1635258, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__RoomDatabase__OnSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163519c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnSuccess(__RoomDatabase__OnSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnSuccess(__RoomDatabase__OnSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnFailure*
class CORDL_TYPE __RoomDatabase__OnFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1635380, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW failCode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x16353a0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x163536c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW failCode);

  static inline ::GlobalNamespace::__RoomDatabase__OnFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1635298, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnFailure(__RoomDatabase__OnFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnFailure(__RoomDatabase__OnFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnVerboseFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnVerboseFailure*
class CORDL_TYPE __RoomDatabase__OnVerboseFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1635494, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW failMessage, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x16354b4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1635480, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW failMessage);

  static inline ::GlobalNamespace::__RoomDatabase__OnVerboseFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x16353ac, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnVerboseFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnVerboseFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnVerboseFailure(__RoomDatabase__OnVerboseFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnVerboseFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnVerboseFailure(__RoomDatabase__OnVerboseFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnVerboseFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomDoorConfigurationDataBaseEntry
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::RoomDoorConfigurationDataBaseEntry
struct CORDL_TYPE __RoomDatabase__RoomDoorConfigurationDataBaseEntry {
public:
  // Declarations
  /// @brief Method Blocked, addr 0x163498c, size 0x64, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry Blocked();

  /// @brief Method .ctor, addr 0x16349f0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool block, ::UnityEngine::Vector2Int position);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__RoomDoorConfigurationDataBaseEntry();

  // Ctor Parameters [CppParam { name: "block", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }]
  constexpr __RoomDatabase__RoomDoorConfigurationDataBaseEntry(bool block, ::UnityEngine::Vector2Int position) noexcept;

  /// @brief Field block, offset: 0x0, size: 0x1, def value: None
  bool block;

  /// @brief Field position, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2Int position;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry, 0xc>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry, block) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry, position) == 0x4, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomDatabaseEntry
// SizeInfo { instance_size: 96, native_size: 104, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::RoomDatabaseEntry
struct CORDL_TYPE __RoomDatabase__RoomDatabaseEntry {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x1634914, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::StringW roomKey, ::StringW roomName, ::UnityEngine::Vector3Int dimensions, int32_t floorDepth, ::GlobalNamespace::__RoomManager__TravelDirection lobbyDirection,
                    ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry upDoor, ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry rightDoor,
                    ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry downDoor, ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry leftDoor, bool isCreativeMode,
                    bool isModeLocked, bool isAutoCycling, ::StringW autoCycleTimestamp);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__RoomDatabaseEntry();

  // Ctor Parameters [CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "roomName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "dimensions", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "floorDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lobbyDirection",
  // ty: "::GlobalNamespace::__RoomManager__TravelDirection", modifiers: "", def_value: None }, CppParam { name: "upDoor", ty: "::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry",
  // modifiers: "", def_value: None }, CppParam { name: "rightDoor", ty: "::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry", modifiers: "", def_value: None }, CppParam { name:
  // "downDoor", ty: "::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry", modifiers: "", def_value: None }, CppParam { name: "leftDoor", ty:
  // "::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry", modifiers: "", def_value: None }, CppParam { name: "isCreativeMode", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "isModeLocked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isAutoCycling", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "autoCycleTimestamp", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __RoomDatabase__RoomDatabaseEntry(::StringW roomKey, ::StringW roomName, ::UnityEngine::Vector3Int dimensions, int32_t floorDepth,
                                              ::GlobalNamespace::__RoomManager__TravelDirection lobbyDirection, ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry upDoor,
                                              ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry rightDoor,
                                              ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry downDoor,
                                              ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry leftDoor, bool isCreativeMode, bool isModeLocked, bool isAutoCycling,
                                              ::StringW autoCycleTimestamp) noexcept;

  /// @brief Field roomKey, offset: 0x0, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field roomName, offset: 0x8, size: 0x8, def value: None
  ::StringW roomName;

  /// @brief Field dimensions, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3Int dimensions;

  /// @brief Field floorDepth, offset: 0x1c, size: 0x4, def value: None
  int32_t floorDepth;

  /// @brief Field lobbyDirection, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__RoomManager__TravelDirection lobbyDirection;

  /// @brief Field upDoor, offset: 0x24, size: 0xc, def value: None
  ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry upDoor;

  /// @brief Field rightDoor, offset: 0x30, size: 0xc, def value: None
  ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry rightDoor;

  /// @brief Field downDoor, offset: 0x3c, size: 0xc, def value: None
  ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry downDoor;

  /// @brief Field leftDoor, offset: 0x48, size: 0xc, def value: None
  ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry leftDoor;

  /// @brief Field isCreativeMode, offset: 0x54, size: 0x1, def value: None
  bool isCreativeMode;

  /// @brief Field isModeLocked, offset: 0x55, size: 0x1, def value: None
  bool isModeLocked;

  /// @brief Field isAutoCycling, offset: 0x56, size: 0x1, def value: None
  bool isAutoCycling;

  /// @brief Field autoCycleTimestamp, offset: 0x58, size: 0x8, def value: None
  ::StringW autoCycleTimestamp;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, roomKey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, roomName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, dimensions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, floorDepth) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, lobbyDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, upDoor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, rightDoor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, downDoor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, leftDoor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, isCreativeMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, isModeLocked) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, isAutoCycling) == 0x56, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, autoCycleTimestamp) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchRoomDatabaseEntrySuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnFetchRoomDatabaseEntrySuccess*
class CORDL_TYPE __RoomDatabase__OnFetchRoomDatabaseEntrySuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1635504, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1635590, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x16354c0, size 0x44, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry);

  static inline ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1633fd0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnFetchRoomDatabaseEntrySuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnFetchRoomDatabaseEntrySuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnFetchRoomDatabaseEntrySuccess(__RoomDatabase__OnFetchRoomDatabaseEntrySuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnFetchRoomDatabaseEntrySuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnFetchRoomDatabaseEntrySuccess(__RoomDatabase__OnFetchRoomDatabaseEntrySuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetRoomDataSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnGetRoomDataSuccess*
class CORDL_TYPE __RoomDatabase__OnGetRoomDataSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x16356dc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::RoomData* roomData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x16356fc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x16356c8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::RoomData* roomData);

  static inline ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x163559c, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnGetRoomDataSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnGetRoomDataSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnGetRoomDataSuccess(__RoomDatabase__OnGetRoomDataSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnGetRoomDataSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnGetRoomDataSuccess(__RoomDatabase__OnGetRoomDataSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetRoomMapSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnGetRoomMapSuccess*
class CORDL_TYPE __RoomDatabase__OnGetRoomMapSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x16357e0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::MapData mapData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1635864, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x16357cc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::MapData mapData);

  static inline ::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1635708, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnGetRoomMapSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnGetRoomMapSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnGetRoomMapSuccess(__RoomDatabase__OnGetRoomMapSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnGetRoomMapSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnGetRoomMapSuccess(__RoomDatabase__OnGetRoomMapSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnAutoEnterCreativeModeSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnAutoEnterCreativeModeSuccess*
class CORDL_TYPE __RoomDatabase__OnAutoEnterCreativeModeSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x163594c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool didSwitch, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x16359d4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1635934, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool didSwitch);

  static inline ::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1635870, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnAutoEnterCreativeModeSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnAutoEnterCreativeModeSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnAutoEnterCreativeModeSuccess(__RoomDatabase__OnAutoEnterCreativeModeSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnAutoEnterCreativeModeSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnAutoEnterCreativeModeSuccess(__RoomDatabase__OnAutoEnterCreativeModeSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetAutoCycleSwitchTimestampSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::OnGetAutoCycleSwitchTimestampSuccess*
class CORDL_TYPE __RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1635ab8, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::DateTime timestamp, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1635b3c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1635aa4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::DateTime timestamp);

  static inline ::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x16359e0, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess(__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess(__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchLocalRoomDatabaseEntry>d__36
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<FetchLocalRoomDatabaseEntry>d__36
struct CORDL_TYPE __RoomDatabase___FetchLocalRoomDatabaseEntry_d__36 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1635b48, size 0x3b0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1635ef8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___FetchLocalRoomDatabaseEntry_d__36();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "",
  // def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __RoomDatabase___FetchLocalRoomDatabaseEntry_d__36(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                               ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure, ::StringW roomKey,
                                                               ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess* onSuccess,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field roomKey, offset: 0x30, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, roomKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass39_0
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::<>c__DisplayClass39_0*
class CORDL_TYPE __RoomDatabase____c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2, put = __cordl_internal_set___9__2))::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* __9__2;

  /// @brief Field onFailure, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_onFailure, put = __cordl_internal_set_onFailure))::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onSuccess, put = __cordl_internal_set_onSuccess))::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* onSuccess;

  /// @brief Field roomKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_roomKey, put = __cordl_internal_set_roomKey))::StringW roomKey;

  /// @brief Field roomMapKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_roomMapKey, put = __cordl_internal_set_roomMapKey))::StringW roomMapKey;

  static inline ::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0* New_ctor();

  /// @brief Method <GetRoomData>b__0, addr 0x1635f04, size 0x150, virtual false, abstract: false, final false
  inline void _GetRoomData_b__0(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry);

  /// @brief Method <GetRoomData>b__2, addr 0x163619c, size 0xe4, virtual false, abstract: false, final false
  inline void _GetRoomData_b__2(::StringW errType);

  constexpr ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*& __cordl_internal_get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMapManager__OnGetNodeFailure*> const& __cordl_internal_get___9__2() const;

  constexpr ::GlobalNamespace::__RoomDatabase__OnFailure*& __cordl_internal_get_onFailure();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnFailure*> const& __cordl_internal_get_onFailure() const;

  constexpr ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess*& __cordl_internal_get_onSuccess();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess*> const& __cordl_internal_get_onSuccess() const;

  constexpr ::StringW const& __cordl_internal_get_roomKey() const;

  constexpr ::StringW& __cordl_internal_get_roomKey();

  constexpr ::StringW const& __cordl_internal_get_roomMapKey() const;

  constexpr ::StringW& __cordl_internal_get_roomMapKey();

  constexpr void __cordl_internal_set___9__2(::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* value);

  constexpr void __cordl_internal_set_onFailure(::GlobalNamespace::__RoomDatabase__OnFailure* value);

  constexpr void __cordl_internal_set_onSuccess(::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* value);

  constexpr void __cordl_internal_set_roomKey(::StringW value);

  constexpr void __cordl_internal_set_roomMapKey(::StringW value);

  /// @brief Method .ctor, addr 0x1633fc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase____c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase____c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase____c__DisplayClass39_0(__RoomDatabase____c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase____c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase____c__DisplayClass39_0(__RoomDatabase____c__DisplayClass39_0 const&) = delete;

  /// @brief Field roomMapKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___roomMapKey;

  /// @brief Field roomKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___roomKey;

  /// @brief Field onSuccess, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* ___onSuccess;

  /// @brief Field onFailure, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* ___onFailure;

  /// @brief Field <>9__2, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMapManager__OnGetNodeFailure* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0, ___roomMapKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0, ___roomKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0, ___onSuccess) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0, ___onFailure) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0, _____9__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass39_1
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase::<>c__DisplayClass39_1*
class CORDL_TYPE __RoomDatabase____c__DisplayClass39_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1, put = __cordl_internal_set_CS$__8__locals1))::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0* CS$__8__locals1;

  /// @brief Field roomDatabaseEntry, offset 0x10, size 0x60
  __declspec(property(get = __cordl_internal_get_roomDatabaseEntry, put = __cordl_internal_set_roomDatabaseEntry))::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry roomDatabaseEntry;

  static inline ::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1* New_ctor();

  /// @brief Method <GetRoomData>b__1, addr 0x1636280, size 0x18c, virtual false, abstract: false, final false
  inline void _GetRoomData_b__1(::GlobalNamespace::__RoomMap__Node* roomMapNode);

  constexpr ::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0*> const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry const& __cordl_internal_get_roomDatabaseEntry() const;

  constexpr ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry& __cordl_internal_get_roomDatabaseEntry();

  constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0* value);

  constexpr void __cordl_internal_set_roomDatabaseEntry(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry value);

  /// @brief Method .ctor, addr 0x1636054, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase____c__DisplayClass39_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase____c__DisplayClass39_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomDatabase____c__DisplayClass39_1(__RoomDatabase____c__DisplayClass39_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomDatabase____c__DisplayClass39_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomDatabase____c__DisplayClass39_1(__RoomDatabase____c__DisplayClass39_1 const&) = delete;

  /// @brief Field roomDatabaseEntry, offset: 0x10, size: 0x60, def value: None
  ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry ___roomDatabaseEntry;

  /// @brief Field CS$<>8__locals1, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1, ___roomDatabaseEntry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1, ___CS$__8__locals1) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchAWSRoomDatabaseEntry>d__40
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<FetchAWSRoomDatabaseEntry>d__40
struct CORDL_TYPE __RoomDatabase___FetchAWSRoomDatabaseEntry_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x163640c, size 0xbd4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1636fe0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___FetchAWSRoomDatabaseEntry_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___FetchAWSRoomDatabaseEntry_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey,
                                                             ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure, ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess* onSuccess,
                                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetRoomDataDirect>d__44
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<GetRoomDataDirect>d__44
struct CORDL_TYPE __RoomDatabase___GetRoomDataDirect_d__44 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1636fec, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1637248, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___GetRoomDataDirect_d__44();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___GetRoomDataDirect_d__44(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                                     ::StringW roomKey, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field roomKey, offset: 0x20, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field attributesToGet, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* attributesToGet;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44, roomKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44, attributesToGet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetMapDataDirect>d__45
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<GetMapDataDirect>d__45
struct CORDL_TYPE __RoomDatabase___GetMapDataDirect_d__45 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x16372a0, size 0x25c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x16374fc, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___GetMapDataDirect_d__45();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "mapKey", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "attributesToGet", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___GetMapDataDirect_d__45(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                                    ::StringW mapKey, ::System::Collections::Generic::List_1<::StringW>* attributesToGet,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field mapKey, offset: 0x20, size: 0x8, def value: None
  ::StringW mapKey;

  /// @brief Field attributesToGet, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* attributesToGet;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45, mapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45, attributesToGet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetRoomMap>d__46
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<GetRoomMap>d__46
struct CORDL_TYPE __RoomDatabase___GetRoomMap_d__46 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1637554, size 0x92c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1637e80, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___GetRoomMap_d__46();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value:
  // None }]
  constexpr __RoomDatabase___GetRoomMap_d__46(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey,
                                              ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure, ::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess* onSuccess,
                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SaveRoomMap>d__47
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<SaveRoomMap>d__47
struct CORDL_TYPE __RoomDatabase___SaveRoomMap_d__47 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1637e8c, size 0x620, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x16384ac, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___SaveRoomMap_d__47();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnVerboseFailure*", modifiers: "", def_value: None }, CppParam { name: "mapData", ty: "::GlobalNamespace::MapData", modifiers: "", def_value:
  // None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__RoomDatabase__OnSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___SaveRoomMap_d__47(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey,
                                               ::GlobalNamespace::__RoomDatabase__OnVerboseFailure* onFailure, ::GlobalNamespace::MapData mapData,
                                               ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnVerboseFailure* onFailure;

  /// @brief Field mapData, offset: 0x38, size: 0x10, def value: None
  ::GlobalNamespace::MapData mapData;

  /// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, mapData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<EnterCreativeMode>d__48
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<EnterCreativeMode>d__48
struct CORDL_TYPE __RoomDatabase___EnterCreativeMode_d__48 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x16384b8, size 0x578, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1638a30, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___EnterCreativeMode_d__48();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__RoomDatabase__OnSuccess*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___EnterCreativeMode_d__48(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey,
                                                     ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure, ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryAutoEnterCreativeMode>d__50
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<TryAutoEnterCreativeMode>d__50
struct CORDL_TYPE __RoomDatabase___TryAutoEnterCreativeMode_d__50 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1638a3c, size 0x580, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1638fbc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___TryAutoEnterCreativeMode_d__50();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___TryAutoEnterCreativeMode_d__50(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey,
                                                            ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure, ::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess* onSuccess,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<EnterPlayMode>d__51
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<EnterPlayMode>d__51
struct CORDL_TYPE __RoomDatabase___EnterPlayMode_d__51 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1638fc8, size 0x524, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x16394ec, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___EnterPlayMode_d__51();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__RoomDatabase__OnSuccess*", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___EnterPlayMode_d__51(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey,
                                                 ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure, ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetAutoCycleSwitchTimestamp>d__53
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<GetAutoCycleSwitchTimestamp>d__53
struct CORDL_TYPE __RoomDatabase___GetAutoCycleSwitchTimestamp_d__53 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x16394f8, size 0x440, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1639938, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___GetAutoCycleSwitchTimestamp_d__53();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___GetAutoCycleSwitchTimestamp_d__53(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey,
                                                               ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure,
                                                               ::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess* onSuccess,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<SetFloorDepth>d__54
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::RoomDatabase::<SetFloorDepth>d__54
struct CORDL_TYPE __RoomDatabase___SetFloorDepth_d__54 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1639944, size 0x5cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1639f10, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomDatabase___SetFloorDepth_d__54();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "newDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__RoomDatabase__OnFailure*", modifiers: "", def_value: None }, CppParam { name:
  // "onSuccess", ty: "::GlobalNamespace::__RoomDatabase__OnSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __RoomDatabase___SetFloorDepth_d__54(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW roomKey, int32_t newDepth,
                                                 ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure, ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess,
                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field roomKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field newDepth, offset: 0x30, size: 0x4, def value: None
  int32_t newDepth;

  /// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, roomKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, newDepth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomDatabase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomDatabase*
class CORDL_TYPE RoomDatabase : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::RoomDatabase>> {
public:
  // Declarations
  using OnAutoEnterCreativeModeSuccess = ::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess;

  using OnFailure = ::GlobalNamespace::__RoomDatabase__OnFailure;

  using OnFetchRoomDatabaseEntrySuccess = ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess;

  using OnGetAutoCycleSwitchTimestampSuccess = ::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess;

  using OnGetRoomDataSuccess = ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess;

  using OnGetRoomMapSuccess = ::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess;

  using OnSuccess = ::GlobalNamespace::__RoomDatabase__OnSuccess;

  using OnVerboseFailure = ::GlobalNamespace::__RoomDatabase__OnVerboseFailure;

  using RoomDatabaseEntry = ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry;

  using RoomDoorConfigurationDataBaseEntry = ::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry;

  using _EnterCreativeMode_d__48 = ::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48;

  using _EnterPlayMode_d__51 = ::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51;

  using _FetchAWSRoomDatabaseEntry_d__40 = ::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40;

  using _FetchLocalRoomDatabaseEntry_d__36 = ::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36;

  using _GetAutoCycleSwitchTimestamp_d__53 = ::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53;

  using _GetMapDataDirect_d__45 = ::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45;

  using _GetRoomDataDirect_d__44 = ::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44;

  using _GetRoomMap_d__46 = ::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46;

  using _SaveRoomMap_d__47 = ::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47;

  using _SetFloorDepth_d__54 = ::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54;

  using _TryAutoEnterCreativeMode_d__50 = ::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50;

  using __c__DisplayClass39_0 = ::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0;

  using __c__DisplayClass39_1 = ::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1;

  /// @brief Field cachedRoomDatas, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedRoomDatas, put = setStaticF_cachedRoomDatas))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomData*>* cachedRoomDatas;

  __declspec(property(get = get_isLocalRoomDatabaseInitialized)) bool isLocalRoomDatabaseInitialized;

  /// @brief Field localRoomDatabase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_localRoomDatabase,
                             put = setStaticF_localRoomDatabase))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>* localRoomDatabase;

  /// @brief Field roomDatabaseRaw, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get_roomDatabaseRaw,
      put = __cordl_internal_set_roomDatabaseRaw))::ArrayW<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, ::Array<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>*> roomDatabaseRaw;

  /// @brief Method EnterCreativeMode, addr 0x1634d70, size 0xa8, virtual false, abstract: false, final false
  static inline void EnterCreativeMode(::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess, ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method EnterPlayMode, addr 0x1634ec0, size 0xa8, virtual false, abstract: false, final false
  static inline void EnterPlayMode(::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess, ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method FetchAWSRoomDatabaseEntry, addr 0x1634094, size 0xa8, virtual false, abstract: false, final false
  static inline void FetchAWSRoomDatabaseEntry(::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess* onSuccess,
                                               ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method FetchLocalRoomDatabaseEntry, addr 0x1633d60, size 0xa8, virtual false, abstract: false, final false
  static inline void FetchLocalRoomDatabaseEntry(::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess* onSuccess,
                                                 ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method GetAutoCycleSwitchTimestamp, addr 0x1634f68, size 0xa8, virtual false, abstract: false, final false
  static inline void GetAutoCycleSwitchTimestamp(::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess* onSuccess,
                                                 ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method GetMapDataDirect, addr 0x1634b04, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetMapDataDirect(::StringW mapKey,
                                                                                                                       ::System::Collections::Generic::List_1<::StringW>* attributesToGet);

  /// @brief Method GetMapKey, addr 0x16339a0, size 0x194, virtual false, abstract: false, final false
  static inline ::StringW GetMapKey(::StringW roomKey, int32_t creativeSessionID, int32_t saveOffset);

  /// @brief Method GetRoomData, addr 0x1633e08, size 0x1c0, virtual false, abstract: false, final false
  static inline void GetRoomData(::StringW roomMapKey, ::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess* onSuccess, ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method GetRoomDataDirect, addr 0x1634a00, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetRoomDataDirect(::StringW roomKey,
                                                                                                                        ::System::Collections::Generic::List_1<::StringW>* attributesToGet);

  /// @brief Method GetRoomMap, addr 0x1634c08, size 0xa8, virtual false, abstract: false, final false
  static inline void GetRoomMap(::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess* onSuccess, ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method InitializeLocalRoomDatabase, addr 0x1633b94, size 0x1cc, virtual false, abstract: false, final false
  inline void InitializeLocalRoomDatabase();

  static inline ::GlobalNamespace::RoomDatabase* New_ctor();

  /// @brief Method SaveRoomMap, addr 0x1634cb0, size 0xc0, virtual false, abstract: false, final false
  static inline void SaveRoomMap(::StringW roomKey, ::GlobalNamespace::MapData mapData, ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess,
                                 ::GlobalNamespace::__RoomDatabase__OnVerboseFailure* onFailure);

  /// @brief Method SetFloorDepth, addr 0x1635010, size 0xb8, virtual false, abstract: false, final false
  static inline void SetFloorDepth(::StringW roomKey, int32_t newDepth, ::GlobalNamespace::__RoomDatabase__OnSuccess* onSuccess, ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method TryAutoEnterCreativeMode, addr 0x1634e18, size 0xa8, virtual false, abstract: false, final false
  static inline void TryAutoEnterCreativeMode(::StringW roomKey, ::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess* onSuccess, ::GlobalNamespace::__RoomDatabase__OnFailure* onFailure);

  /// @brief Method TryExtractDoorAttributes, addr 0x1634754, size 0x1c0, virtual false, abstract: false, final false
  static inline bool TryExtractDoorAttributes(::GlobalNamespace::__AWSDatabase__LambdaResponse attributes, ::StringW doorKey,
                                              ByRef<::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry> entry);

  /// @brief Method TryExtractRoomAttributes, addr 0x163413c, size 0x618, virtual false, abstract: false, final false
  static inline bool TryExtractRoomAttributes(::StringW roomKey, ::GlobalNamespace::__AWSDatabase__LambdaResponse attributes, ByRef<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry> entry);

  constexpr ::ArrayW<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, ::Array<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>*> const& __cordl_internal_get_roomDatabaseRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, ::Array<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>*>& __cordl_internal_get_roomDatabaseRaw();

  constexpr void __cordl_internal_set_roomDatabaseRaw(::ArrayW<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, ::Array<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>*> value);

  /// @brief Method .ctor, addr 0x16350c8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomData*>* getStaticF_cachedRoomDatas();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>* getStaticF_localRoomDatabase();

  /// @brief Method get_isLocalRoomDatabaseInitialized, addr 0x1633b34, size 0x60, virtual false, abstract: false, final false
  inline bool get_isLocalRoomDatabaseInitialized();

  static inline void setStaticF_cachedRoomDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::RoomData*>* value);

  static inline void setStaticF_localRoomDatabase(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomDatabase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomDatabase(RoomDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomDatabase(RoomDatabase const&) = delete;

  /// @brief Field roomDatabaseRaw, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, ::Array<::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry>*> ___roomDatabaseRaw;

  /// @brief Field DOOR_BLOCK_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DOOR_BLOCK_KEY{ u"block" };

  /// @brief Field DOOR_POSITION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DOOR_POSITION_KEY{ u"position" };

  /// @brief Field MAPS_DATA_VERSION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString MAPS_DATA_VERSION_KEY{ u"mapDataVersion" };

  /// @brief Field MAPS_PRIMARY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString MAPS_PRIMARY_KEY{ u"mapKey" };

  /// @brief Field MAPS_SAVE_DATA_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString MAPS_SAVE_DATA_KEY{ u"saveData" };

  /// @brief Field MAPS_TABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString MAPS_TABLE{ u"G2_Maps" };

  /// @brief Field ROOMS_AUTO_CYCLING_TIMESTAMP_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_AUTO_CYCLING_TIMESTAMP_KEY{ u"autoCycleTimestamp" };

  /// @brief Field ROOMS_DATA_VERSION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_DATA_VERSION_KEY{ u"roomDataVersion" };

  /// @brief Field ROOMS_DIMENSIONS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_DIMENSIONS_KEY{ u"dimensions" };

  /// @brief Field ROOMS_DOOR_DOWN_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_DOOR_DOWN_KEY{ u"door_down" };

  /// @brief Field ROOMS_DOOR_LEFT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_DOOR_LEFT_KEY{ u"door_left" };

  /// @brief Field ROOMS_DOOR_RIGHT_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_DOOR_RIGHT_KEY{ u"door_right" };

  /// @brief Field ROOMS_DOOR_UP_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_DOOR_UP_KEY{ u"door_up" };

  /// @brief Field ROOMS_FLOOR_DEPTH_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_FLOOR_DEPTH_KEY{ u"floorDepth" };

  /// @brief Field ROOMS_IS_AUTO_CYCLING_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_IS_AUTO_CYCLING_KEY{ u"isAutoCycling" };

  /// @brief Field ROOMS_IS_CREATIVE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_IS_CREATIVE_KEY{ u"isCreative" };

  /// @brief Field ROOMS_IS_MODE_LOCKED_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_IS_MODE_LOCKED_KEY{ u"isModeLocked" };

  /// @brief Field ROOMS_LAST_EDITED_SESSION_ID_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_LAST_EDITED_SESSION_ID_KEY{ u"lastEditedSessionID" };

  /// @brief Field ROOMS_LAST_VALID_SAVE_OFFSET_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_LAST_VALID_SAVE_OFFSET_KEY{ u"lastValidSaveOffset" };

  /// @brief Field ROOMS_LOBBY_DIRECTION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_LOBBY_DIRECTION_KEY{ u"lobbyDirection" };

  /// @brief Field ROOMS_NAME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_NAME_KEY{ u"roomName" };

  /// @brief Field ROOMS_PRIMARY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_PRIMARY_KEY{ u"roomKey" };

  /// @brief Field ROOMS_TABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOMS_TABLE{ u"G2_Rooms" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Room Database: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomDatabase, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomDatabase, ___roomDatabaseRaw) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomDatabase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomDatabase*, "", "RoomDatabase");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnAutoEnterCreativeModeSuccess*, "", "RoomDatabase/OnAutoEnterCreativeModeSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnFailure*, "", "RoomDatabase/OnFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnFetchRoomDatabaseEntrySuccess*, "", "RoomDatabase/OnFetchRoomDatabaseEntrySuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnGetAutoCycleSwitchTimestampSuccess*, "", "RoomDatabase/OnGetAutoCycleSwitchTimestampSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnGetRoomDataSuccess*, "", "RoomDatabase/OnGetRoomDataSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnGetRoomMapSuccess*, "", "RoomDatabase/OnGetRoomMapSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnSuccess*, "", "RoomDatabase/OnSuccess");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase__OnVerboseFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__OnVerboseFailure*, "", "RoomDatabase/OnVerboseFailure");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_0*, "", "RoomDatabase/<>c__DisplayClass39_0");
NEED_NO_BOX(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase____c__DisplayClass39_1*, "", "RoomDatabase/<>c__DisplayClass39_1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__RoomDatabaseEntry, "", "RoomDatabase/RoomDatabaseEntry");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase__RoomDoorConfigurationDataBaseEntry, "", "RoomDatabase/RoomDoorConfigurationDataBaseEntry");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___EnterCreativeMode_d__48, "", "RoomDatabase/<EnterCreativeMode>d__48");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___EnterPlayMode_d__51, "", "RoomDatabase/<EnterPlayMode>d__51");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___FetchAWSRoomDatabaseEntry_d__40, "", "RoomDatabase/<FetchAWSRoomDatabaseEntry>d__40");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___FetchLocalRoomDatabaseEntry_d__36, "", "RoomDatabase/<FetchLocalRoomDatabaseEntry>d__36");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___GetAutoCycleSwitchTimestamp_d__53, "", "RoomDatabase/<GetAutoCycleSwitchTimestamp>d__53");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___GetMapDataDirect_d__45, "", "RoomDatabase/<GetMapDataDirect>d__45");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___GetRoomDataDirect_d__44, "", "RoomDatabase/<GetRoomDataDirect>d__44");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___GetRoomMap_d__46, "", "RoomDatabase/<GetRoomMap>d__46");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___SaveRoomMap_d__47, "", "RoomDatabase/<SaveRoomMap>d__47");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___SetFloorDepth_d__54, "", "RoomDatabase/<SetFloorDepth>d__54");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomDatabase___TryAutoEnterCreativeMode_d__50, "", "RoomDatabase/<TryAutoEnterCreativeMode>d__50");
