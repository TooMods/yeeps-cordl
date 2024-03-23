#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NewsManager)
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __NewsManager__NewsData;
}
namespace GlobalNamespace {
class __NewsManager__OnFetchNewsFailure;
}
namespace GlobalNamespace {
class __NewsManager__OnFetchNewsSuccess;
}
namespace GlobalNamespace {
struct __NewsManager___FetchNews_d__8;
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
class NewsManager;
}
namespace GlobalNamespace {
class __NewsManager__OnFetchNewsFailure;
}
namespace GlobalNamespace {
class __NewsManager__OnFetchNewsSuccess;
}
namespace GlobalNamespace {
struct __NewsManager__NewsData;
}
namespace GlobalNamespace {
struct __NewsManager___FetchNews_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NewsManager);
MARK_REF_PTR_T(::GlobalNamespace::__NewsManager__OnFetchNewsFailure);
MARK_REF_PTR_T(::GlobalNamespace::__NewsManager__OnFetchNewsSuccess);
MARK_VAL_T(::GlobalNamespace::__NewsManager__NewsData);
MARK_VAL_T(::GlobalNamespace::__NewsManager___FetchNews_d__8);
// Type: ::NewsData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NewsManager::NewsData
struct CORDL_TYPE __NewsManager__NewsData {
public:
  // Declarations
  /// @brief Method Empty, addr 0x2c84738, size 0x5c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__NewsManager__NewsData Empty();

  /// @brief Method GetMessage, addr 0x2c84794, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetMessage();

  /// @brief Method GetUpdatedTimeDisplay, addr 0x2c844b0, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetUpdatedTimeDisplay();

  /// @brief Method HasMessage, addr 0x2c84490, size 0x20, virtual false, abstract: false, final false
  inline bool HasMessage();

  /// @brief Method .ctor, addr 0x2c84730, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::DateTime timestamp);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NewsManager__NewsData();

  // Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "timestamp", ty: "::System::DateTime", modifiers: "", def_value: None }]
  constexpr __NewsManager__NewsData(::StringW message, ::System::DateTime timestamp) noexcept;

  /// @brief Field message, offset: 0x0, size: 0x8, def value: None
  ::StringW message;

  /// @brief Field timestamp, offset: 0x8, size: 0x8, def value: None
  ::System::DateTime timestamp;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NewsManager__NewsData, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NewsManager__NewsData, message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NewsManager__NewsData, timestamp) == 0x8, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchNewsSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NewsManager::OnFetchNewsSuccess*
class CORDL_TYPE __NewsManager__OnFetchNewsSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c847b0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__NewsManager__NewsData newsData, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c84834, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c8479c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::__NewsManager__NewsData newsData);

  static inline ::GlobalNamespace::__NewsManager__OnFetchNewsSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c84060, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NewsManager__OnFetchNewsSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NewsManager__OnFetchNewsSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NewsManager__OnFetchNewsSuccess(__NewsManager__OnFetchNewsSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NewsManager__OnFetchNewsSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NewsManager__OnFetchNewsSuccess(__NewsManager__OnFetchNewsSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NewsManager__OnFetchNewsSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnFetchNewsFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NewsManager::OnFetchNewsFailure*
class CORDL_TYPE __NewsManager__OnFetchNewsFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c84854, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c84874, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c84840, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__NewsManager__OnFetchNewsFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c84124, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NewsManager__OnFetchNewsFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NewsManager__OnFetchNewsFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NewsManager__OnFetchNewsFailure(__NewsManager__OnFetchNewsFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NewsManager__OnFetchNewsFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NewsManager__OnFetchNewsFailure(__NewsManager__OnFetchNewsFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NewsManager__OnFetchNewsFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<FetchNews>d__8
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::NewsManager::<FetchNews>d__8
struct CORDL_TYPE __NewsManager___FetchNews_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c84880, size 0x600, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c84e80, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __NewsManager___FetchNews_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty: "::GlobalNamespace::__NewsManager__OnFetchNewsSuccess*",
  // modifiers: "", def_value: None }, CppParam { name: "onFailure", ty: "::GlobalNamespace::__NewsManager__OnFetchNewsFailure*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __NewsManager___FetchNews_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                           ::GlobalNamespace::__NewsManager__OnFetchNewsSuccess* onSuccess, ::GlobalNamespace::__NewsManager__OnFetchNewsFailure* onFailure,
                                           ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onSuccess, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__NewsManager__OnFetchNewsSuccess* onSuccess;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__NewsManager__OnFetchNewsFailure* onFailure;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__NewsManager___FetchNews_d__8, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__NewsManager___FetchNews_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NewsManager___FetchNews_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NewsManager___FetchNews_d__8, onSuccess) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NewsManager___FetchNews_d__8, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__NewsManager___FetchNews_d__8, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::NewsManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NewsManager*
class CORDL_TYPE NewsManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::NewsManager>> {
public:
  // Declarations
  using NewsData = ::GlobalNamespace::__NewsManager__NewsData;

  using OnFetchNewsFailure = ::GlobalNamespace::__NewsManager__OnFetchNewsFailure;

  using OnFetchNewsSuccess = ::GlobalNamespace::__NewsManager__OnFetchNewsSuccess;

  using _FetchNews_d__8 = ::GlobalNamespace::__NewsManager___FetchNews_d__8;

  /// @brief Field cacheExpireTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cacheExpireTime, put = setStaticF_cacheExpireTime))::System::DateTime cacheExpireTime;

  /// @brief Field cachedNewsData, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF_cachedNewsData, put = setStaticF_cachedNewsData))::System::Nullable_1<::GlobalNamespace::__NewsManager__NewsData> cachedNewsData;

  /// @brief Method FetchNews, addr 0x2c841f8, size 0x9c, virtual false, abstract: false, final false
  static inline void FetchNews(::GlobalNamespace::__NewsManager__OnFetchNewsSuccess* onSuccess, ::GlobalNamespace::__NewsManager__OnFetchNewsFailure* onFailure);

  static inline ::GlobalNamespace::NewsManager* New_ctor();

  /// @brief Method .ctor, addr 0x2c84670, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTime getStaticF_cacheExpireTime();

  static inline ::System::Nullable_1<::GlobalNamespace::__NewsManager__NewsData> getStaticF_cachedNewsData();

  static inline void setStaticF_cacheExpireTime(::System::DateTime value);

  static inline void setStaticF_cachedNewsData(::System::Nullable_1<::GlobalNamespace::__NewsManager__NewsData> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NewsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NewsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NewsManager(NewsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NewsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NewsManager(NewsManager const&) = delete;

  /// @brief Field CACHE_EXPIRE_MINUTES offset 0xffffffff size 0x4
  static constexpr int32_t CACHE_EXPIRE_MINUTES{ static_cast<int32_t>(0x5) };

  /// @brief Field LAST_UPDATED_TIME offset 0xffffffff size 0x8
  static constexpr ::ConstString LAST_UPDATED_TIME{ u"activeTime" };

  /// @brief Field MESSAGE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString MESSAGE_KEY{ u"message" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NewsManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NewsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NewsManager*, "", "NewsManager");
NEED_NO_BOX(::GlobalNamespace::__NewsManager__OnFetchNewsFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NewsManager__OnFetchNewsFailure*, "", "NewsManager/OnFetchNewsFailure");
NEED_NO_BOX(::GlobalNamespace::__NewsManager__OnFetchNewsSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NewsManager__OnFetchNewsSuccess*, "", "NewsManager/OnFetchNewsSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NewsManager__NewsData, "", "NewsManager/NewsData");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__NewsManager___FetchNews_d__8, "", "NewsManager/<FetchNews>d__8");
