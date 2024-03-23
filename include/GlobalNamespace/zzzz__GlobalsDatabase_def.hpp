#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlobalsDatabase)
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
class __GlobalsDatabase__OnGetPriceFailed;
}
namespace GlobalNamespace {
class __GlobalsDatabase__OnGetPriceSuccess;
}
namespace GlobalNamespace {
struct __GlobalsDatabase___GetGlobalPrice_d__18;
}
namespace GlobalNamespace {
struct __GlobalsDatabase___GetGlobal_d__10;
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
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalsDatabase;
}
namespace GlobalNamespace {
class __GlobalsDatabase__OnGetPriceFailed;
}
namespace GlobalNamespace {
class __GlobalsDatabase__OnGetPriceSuccess;
}
namespace GlobalNamespace {
struct __GlobalsDatabase___GetGlobalPrice_d__18;
}
namespace GlobalNamespace {
struct __GlobalsDatabase___GetGlobal_d__10;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GlobalsDatabase);
MARK_REF_PTR_T(::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed);
MARK_REF_PTR_T(::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess);
MARK_VAL_T(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18);
MARK_VAL_T(::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10);
// Type: ::OnGetPriceSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalsDatabase::OnGetPriceSuccess*
class CORDL_TYPE __GlobalsDatabase__OnGetPriceSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1599538, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t price, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x15995bc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1599524, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t price);

  static inline ::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1599460, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalsDatabase__OnGetPriceSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GlobalsDatabase__OnGetPriceSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GlobalsDatabase__OnGetPriceSuccess(__GlobalsDatabase__OnGetPriceSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GlobalsDatabase__OnGetPriceSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GlobalsDatabase__OnGetPriceSuccess(__GlobalsDatabase__OnGetPriceSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetPriceFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalsDatabase::OnGetPriceFailed*
class CORDL_TYPE __GlobalsDatabase__OnGetPriceFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x15996b0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x15996d0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x159969c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x15995c8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalsDatabase__OnGetPriceFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GlobalsDatabase__OnGetPriceFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GlobalsDatabase__OnGetPriceFailed(__GlobalsDatabase__OnGetPriceFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GlobalsDatabase__OnGetPriceFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GlobalsDatabase__OnGetPriceFailed(__GlobalsDatabase__OnGetPriceFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetGlobal>d__10
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GlobalsDatabase::<GetGlobal>d__10
struct CORDL_TYPE __GlobalsDatabase___GetGlobal_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x15996dc, size 0x32c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1599a08, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalsDatabase___GetGlobal_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::StringW",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value:
  // None }]
  constexpr __GlobalsDatabase___GetGlobal_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder,
                                                ::StringW key, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __t__builder;

  /// @brief Field key, offset: 0x20, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10, key) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetGlobalPrice>d__18
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GlobalsDatabase::<GetGlobalPrice>d__18
struct CORDL_TYPE __GlobalsDatabase___GetGlobalPrice_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1599a60, size 0x328, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1599d88, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GlobalsDatabase___GetGlobalPrice_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "key", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onSuccess", ty: "::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess*", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty:
  // "::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __GlobalsDatabase___GetGlobalPrice_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW key,
                                                     ::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess* onSuccess, ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed* onFailure,
                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field key, offset: 0x28, size: 0x8, def value: None
  ::StringW key;

  /// @brief Field onSuccess, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess* onSuccess;

  /// @brief Field onFailure, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed* onFailure;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, key) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, onSuccess) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, onFailure) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GlobalsDatabase
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GlobalsDatabase*
class CORDL_TYPE GlobalsDatabase : public ::System::Object {
public:
  // Declarations
  using OnGetPriceFailed = ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed;

  using OnGetPriceSuccess = ::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess;

  using _GetGlobalPrice_d__18 = ::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18;

  using _GetGlobal_d__10 = ::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10;

  /// @brief Field cachedPrices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedPrices, put = setStaticF_cachedPrices))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* cachedPrices;

  /// @brief Method ExtractData, addr 0x1599238, size 0xac, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__AWSDatabase__DynamoResponse ExtractData(::GlobalNamespace::__AWSDatabase__DynamoResponse response);

  /// @brief Method ExtractDataList, addr 0x15992e4, size 0x48, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* ExtractDataList(::GlobalNamespace::__AWSDatabase__DynamoResponse response);

  /// @brief Method ExtractInt, addr 0x15991e0, size 0x58, virtual false, abstract: false, final false
  static inline int32_t ExtractInt(::GlobalNamespace::__AWSDatabase__DynamoResponse response, int32_t defaultValue);

  /// @brief Method ExtractString, addr 0x1597158, size 0x58, virtual false, abstract: false, final false
  static inline ::StringW ExtractString(::GlobalNamespace::__AWSDatabase__DynamoResponse response, ::StringW defaultValue);

  /// @brief Method GetGlobal, addr 0x1597060, size 0xf8, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>* GetGlobal(::StringW key);

  /// @brief Method GetGlobalPrice, addr 0x159932c, size 0xa8, virtual false, abstract: false, final false
  static inline void GetGlobalPrice(::StringW key, ::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess* onSuccess, ::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed* onFailure);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* getStaticF_cachedPrices();

  static inline void setStaticF_cachedPrices(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlobalsDatabase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlobalsDatabase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlobalsDatabase(GlobalsDatabase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlobalsDatabase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlobalsDatabase(GlobalsDatabase const&) = delete;

  /// @brief Field ACTIVE_BUNDLE_KEY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString ACTIVE_BUNDLE_KEY_KEY{ u"activeBundleKey" };

  /// @brief Field APPLICATION_VERSION_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString APPLICATION_VERSION_KEY{ u"applicationVersion" };

  /// @brief Field CREATOR_PACK_PRICE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CREATOR_PACK_PRICE_KEY{ u"price_creatorPack" };

  /// @brief Field DATA_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString DATA_KEY{ u"data" };

  /// @brief Field GAME_ACCESS_ALPHA_DEV_ONLY offset 0xffffffff size 0x4
  static constexpr int32_t GAME_ACCESS_ALPHA_DEV_ONLY{ static_cast<int32_t>(0x4) };

  /// @brief Field GAME_ACCESS_ALPHA_INTERNAL_ONLY offset 0xffffffff size 0x4
  static constexpr int32_t GAME_ACCESS_ALPHA_INTERNAL_ONLY{ static_cast<int32_t>(0x5) };

  /// @brief Field GAME_ACCESS_ALPHA_OPEN offset 0xffffffff size 0x4
  static constexpr int32_t GAME_ACCESS_ALPHA_OPEN{ static_cast<int32_t>(0x3) };

  /// @brief Field GAME_ACCESS_NORMAL_DEV_ONLY offset 0xffffffff size 0x4
  static constexpr int32_t GAME_ACCESS_NORMAL_DEV_ONLY{ static_cast<int32_t>(0x1) };

  /// @brief Field GAME_ACCESS_NORMAL_INTERNAL_ONLY offset 0xffffffff size 0x4
  static constexpr int32_t GAME_ACCESS_NORMAL_INTERNAL_ONLY{ static_cast<int32_t>(0x2) };

  /// @brief Field GAME_ACCESS_NORMAL_OPEN offset 0xffffffff size 0x4
  static constexpr int32_t GAME_ACCESS_NORMAL_OPEN{ static_cast<int32_t>(0x0) };

  /// @brief Field GAME_ACCESS_SECRET_PREPARATIONS offset 0xffffffff size 0x4
  static constexpr int32_t GAME_ACCESS_SECRET_PREPARATIONS{ static_cast<int32_t>(0x6) };

  /// @brief Field GAME_ACCESS_TYPE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString GAME_ACCESS_TYPE_KEY{ u"gameAccessType" };

  /// @brief Field GLOBALS_TABLE offset 0xffffffff size 0x8
  static constexpr ::ConstString GLOBALS_TABLE{ u"G2_Globals" };

  /// @brief Field NEWS_GLOBAL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString NEWS_GLOBAL_KEY{ u"announcementData" };

  /// @brief Field PRICE_KEY_PREFIX offset 0xffffffff size 0x8
  static constexpr ::ConstString PRICE_KEY_PREFIX{ u"price_" };

  /// @brief Field PRIMARY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString PRIMARY_KEY{ u"key" };

  /// @brief Field UNLOCK_PRIVATE_ROOMS_PRICE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString UNLOCK_PRIVATE_ROOMS_PRICE_KEY{ u"price_unlockPrivateRooms" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GlobalsDatabase, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GlobalsDatabase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalsDatabase*, "", "GlobalsDatabase");
NEED_NO_BOX(::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalsDatabase__OnGetPriceFailed*, "", "GlobalsDatabase/OnGetPriceFailed");
NEED_NO_BOX(::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalsDatabase__OnGetPriceSuccess*, "", "GlobalsDatabase/OnGetPriceSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalsDatabase___GetGlobalPrice_d__18, "", "GlobalsDatabase/<GetGlobalPrice>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GlobalsDatabase___GetGlobal_d__10, "", "GlobalsDatabase/<GetGlobal>d__10");
