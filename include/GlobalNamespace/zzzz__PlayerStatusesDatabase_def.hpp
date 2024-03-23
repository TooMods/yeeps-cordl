#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerStatusesDatabase)
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
struct __PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13;
}
namespace GlobalNamespace {
struct __PlayerStatusesDatabase___ClearPlayerStatus_d__10;
}
namespace GlobalNamespace {
struct __PlayerStatusesDatabase___GetPlayerStatus_d__12;
}
namespace GlobalNamespace {
struct __PlayerStatusesDatabase___PutPlayerStatus_d__9;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerStatusesDatabase;
}
namespace GlobalNamespace {
struct __PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13;
}
namespace GlobalNamespace {
struct __PlayerStatusesDatabase___ClearPlayerStatus_d__10;
}
namespace GlobalNamespace {
struct __PlayerStatusesDatabase___GetPlayerStatus_d__12;
}
namespace GlobalNamespace {
struct __PlayerStatusesDatabase___PutPlayerStatus_d__9;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerStatusesDatabase);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12);
MARK_VAL_T(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9);
// Type: ::<PutPlayerStatus>d__9
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusesDatabase::<PutPlayerStatus>d__9
struct CORDL_TYPE __PlayerStatusesDatabase___PutPlayerStatus_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x174b918, size 0x4c8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x174bde0, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusesDatabase___PutPlayerStatus_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "roomKey", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "roomMapKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "roomMapCode", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "photonRoomName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateRoomPermissions", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "applicationVersion", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "lifetimeSeconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerStatusesDatabase___PutPlayerStatus_d__9(int32_t __1__state,
                                                            ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder,
                                                            ::StringW roomKey, ::StringW roomMapKey, ::StringW roomMapCode, ::StringW photonRoomName, int32_t privateRoomPermissions,
                                                            ::StringW applicationVersion, int32_t lifetimeSeconds, ::StringW accountID,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder;

  /// @brief Field roomKey, offset: 0x20, size: 0x8, def value: None
  ::StringW roomKey;

  /// @brief Field roomMapKey, offset: 0x28, size: 0x8, def value: None
  ::StringW roomMapKey;

  /// @brief Field roomMapCode, offset: 0x30, size: 0x8, def value: None
  ::StringW roomMapCode;

  /// @brief Field photonRoomName, offset: 0x38, size: 0x8, def value: None
  ::StringW photonRoomName;

  /// @brief Field privateRoomPermissions, offset: 0x40, size: 0x4, def value: None
  int32_t privateRoomPermissions;

  /// @brief Field applicationVersion, offset: 0x48, size: 0x8, def value: None
  ::StringW applicationVersion;

  /// @brief Field lifetimeSeconds, offset: 0x50, size: 0x4, def value: None
  int32_t lifetimeSeconds;

  /// @brief Field accountID, offset: 0x58, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field <>u__1, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, roomKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, roomMapKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, roomMapCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, photonRoomName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, privateRoomPermissions) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, applicationVersion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, lifetimeSeconds) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, accountID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, __u__1) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<ClearPlayerStatus>d__10
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusesDatabase::<ClearPlayerStatus>d__10
struct CORDL_TYPE __PlayerStatusesDatabase___ClearPlayerStatus_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x174be38, size 0x318, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x174c150, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusesDatabase___ClearPlayerStatus_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "accountID", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>",
  // modifiers: "", def_value: None }]
  constexpr __PlayerStatusesDatabase___ClearPlayerStatus_d__10(int32_t __1__state,
                                                               ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder,
                                                               ::StringW accountID,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __t__builder;

  /// @brief Field accountID, offset: 0x20, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10, accountID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPlayerStatus>d__12
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusesDatabase::<GetPlayerStatus>d__12
struct CORDL_TYPE __PlayerStatusesDatabase___GetPlayerStatus_d__12 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x174c1a8, size 0x294, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x174c43c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusesDatabase___GetPlayerStatus_d__12();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value:
  // None }]
  constexpr __PlayerStatusesDatabase___GetPlayerStatus_d__12(int32_t __1__state,
                                                             ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                                             ::StringW accountID, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field accountID, offset: 0x20, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12, accountID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<BatchGetPlayerStatuses>d__13
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::PlayerStatusesDatabase::<BatchGetPlayerStatuses>d__13
struct CORDL_TYPE __PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x174c494, size 0x294, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x174c728, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "accountIDs", ty:
  // "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>", modifiers: "", def_value: None }]
  constexpr __PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13(int32_t __1__state,
                                                                    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __t__builder,
                                                                    ::System::Collections::Generic::List_1<::StringW>* accountIDs,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __t__builder;

  /// @brief Field accountIDs, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* accountIDs;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13, accountIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerStatusesDatabase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerStatusesDatabase*
class CORDL_TYPE PlayerStatusesDatabase : public ::System::Object {
public:
  // Declarations
  using _BatchGetPlayerStatuses_d__13 = ::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13;

  using _ClearPlayerStatus_d__10 = ::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10;

  using _GetPlayerStatus_d__12 = ::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12;

  using _PutPlayerStatus_d__9 = ::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9;

  /// @brief Field propertiesToGet, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_propertiesToGet, put = setStaticF_propertiesToGet))::System::Collections::Generic::List_1<::StringW>* propertiesToGet;

  /// @brief Method BatchGetPlayerStatuses, addr 0x174b43c, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__BatchDynamoResponse>* BatchGetPlayerStatuses(::System::Collections::Generic::List_1<::StringW>* accountIDs);

  /// @brief Method ClearPlayerStatus, addr 0x174b24c, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>* ClearPlayerStatus(::StringW accountID);

  /// @brief Method GetPlayerStatus, addr 0x174b344, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetPlayerStatus(::StringW accountID);

  /// @brief Method PutPlayerStatus, addr 0x174b100, size 0x14c, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__UpdateDynamoResponse>* PutPlayerStatus(::StringW accountID, ::StringW roomKey, ::StringW roomMapKey,
                                                                                                                            ::StringW roomMapCode, ::StringW photonRoomName,
                                                                                                                            int32_t privateRoomPermissions, ::StringW applicationVersion,
                                                                                                                            int32_t lifetimeSeconds);

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_propertiesToGet();

  static inline void setStaticF_propertiesToGet(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerStatusesDatabase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatusesDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerStatusesDatabase(PlayerStatusesDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerStatusesDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerStatusesDatabase(PlayerStatusesDatabase const&) = delete;

  /// @brief Field APPLICATION_VERSION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString APPLICATION_VERSION_KEY{ u"applicationVersion" };

  /// @brief Field EXPIRE_TIMESTAMP_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString EXPIRE_TIMESTAMP_KEY{ u"expireTimestamp" };

  /// @brief Field PHOTON_ROOM_NAME_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PHOTON_ROOM_NAME_KEY{ u"photonRoomName" };

  /// @brief Field PLAYERSTATUSES_TABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString PLAYERSTATUSES_TABLE{ u"G2_PlayerStatuses" };

  /// @brief Field PRIMARY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIMARY_KEY{ u"accountID" };

  /// @brief Field PRIVATE_ROOM_PERMISSIONS_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIVATE_ROOM_PERMISSIONS_KEY{ u"privateRoomPermissions" };

  /// @brief Field ROOM_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOM_KEY{ u"roomKey" };

  /// @brief Field ROOM_MAP_CODE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOM_MAP_CODE_KEY{ u"roomMapCode" };

  /// @brief Field ROOM_MAP_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ROOM_MAP_KEY{ u"roomMapKey" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerStatusesDatabase, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerStatusesDatabase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerStatusesDatabase*, "", "PlayerStatusesDatabase");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusesDatabase___BatchGetPlayerStatuses_d__13, "", "PlayerStatusesDatabase/<BatchGetPlayerStatuses>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusesDatabase___ClearPlayerStatus_d__10, "", "PlayerStatusesDatabase/<ClearPlayerStatus>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusesDatabase___GetPlayerStatus_d__12, "", "PlayerStatusesDatabase/<GetPlayerStatus>d__12");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerStatusesDatabase___PutPlayerStatus_d__9, "", "PlayerStatusesDatabase/<PutPlayerStatus>d__9");
