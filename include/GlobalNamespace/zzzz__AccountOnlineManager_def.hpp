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
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AccountOnlineManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct __AWSDatabase__DynamoResponse;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
class __AccountOnlineManager__OnRefreshAccountOnlineResponse;
}
namespace GlobalNamespace {
struct __AccountOnlineManager___CheckForOverrideRefresh_d__17;
}
namespace GlobalNamespace {
struct __AccountOnlineManager___RefreshAccountOnline_d__19;
}
namespace GlobalNamespace {
struct __AccountOnlineManager___RefreshGuestAccount_d__20;
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
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class AccountOnlineManager;
}
namespace GlobalNamespace {
class __AccountOnlineManager__OnRefreshAccountOnlineResponse;
}
namespace GlobalNamespace {
struct __AccountOnlineManager___CheckForOverrideRefresh_d__17;
}
namespace GlobalNamespace {
struct __AccountOnlineManager___RefreshAccountOnline_d__19;
}
namespace GlobalNamespace {
struct __AccountOnlineManager___RefreshGuestAccount_d__20;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AccountOnlineManager);
MARK_REF_PTR_T(::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse);
MARK_VAL_T(::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17);
MARK_VAL_T(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19);
MARK_VAL_T(::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20);
// Type: ::OnRefreshAccountOnlineResponse
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountOnlineManager::OnRefreshAccountOnlineResponse*
class CORDL_TYPE __AccountOnlineManager__OnRefreshAccountOnlineResponse : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c709b8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool success, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c70a40, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c709a0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool success);

  static inline ::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c708dc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountOnlineManager__OnRefreshAccountOnlineResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AccountOnlineManager__OnRefreshAccountOnlineResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AccountOnlineManager__OnRefreshAccountOnlineResponse(__AccountOnlineManager__OnRefreshAccountOnlineResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AccountOnlineManager__OnRefreshAccountOnlineResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AccountOnlineManager__OnRefreshAccountOnlineResponse(__AccountOnlineManager__OnRefreshAccountOnlineResponse const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<CheckForOverrideRefresh>d__17
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountOnlineManager::<CheckForOverrideRefresh>d__17
struct CORDL_TYPE __AccountOnlineManager___CheckForOverrideRefresh_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c70a4c, size 0x40c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c70f5c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountOnlineManager___CheckForOverrideRefresh_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AccountOnlineManager>", modifiers:
  // "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __AccountOnlineManager___CheckForOverrideRefresh_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                   ::UnityW<::GlobalNamespace::AccountOnlineManager> __4__this,
                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AccountOnlineManager> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshAccountOnline>d__19
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountOnlineManager::<RefreshAccountOnline>d__19
struct CORDL_TYPE __AccountOnlineManager___RefreshAccountOnline_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c70f68, size 0x66c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c715d4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountOnlineManager___RefreshAccountOnline_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "shouldProcessResults", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "callback", ty: "::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse*", modifiers: "", def_value: None }, CppParam { name: "hoursSpent", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __AccountOnlineManager___RefreshAccountOnline_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool shouldProcessResults,
                                                                ::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* callback, float_t hoursSpent,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field shouldProcessResults, offset: 0x28, size: 0x1, def value: None
  bool shouldProcessResults;

  /// @brief Field callback, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* callback;

  /// @brief Field hoursSpent, offset: 0x38, size: 0x4, def value: None
  float_t hoursSpent;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, shouldProcessResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, callback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, hoursSpent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<RefreshGuestAccount>d__20
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AccountOnlineManager::<RefreshGuestAccount>d__20
struct CORDL_TYPE __AccountOnlineManager___RefreshGuestAccount_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c715e0, size 0x1c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c717a4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AccountOnlineManager___RefreshGuestAccount_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "shouldProcessResults", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __AccountOnlineManager___RefreshGuestAccount_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, bool shouldProcessResults,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field shouldProcessResults, offset: 0x28, size: 0x1, def value: None
  bool shouldProcessResults;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20, shouldProcessResults) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AccountOnlineManager
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AccountOnlineManager*
class CORDL_TYPE AccountOnlineManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::AccountOnlineManager>> {
public:
  // Declarations
  using OnRefreshAccountOnlineResponse = ::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse;

  using _CheckForOverrideRefresh_d__17 = ::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17;

  using _RefreshAccountOnline_d__19 = ::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19;

  using _RefreshGuestAccount_d__20 = ::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20;

  /// @brief Field isInitialized, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isInitialized, put = __cordl_internal_set_isInitialized)) bool isInitialized;

  /// @brief Field lastRefreshTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lastRefreshTime, put = __cordl_internal_set_lastRefreshTime)) float_t lastRefreshTime;

  /// @brief Field nextForceRefreshTime, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nextForceRefreshTime, put = __cordl_internal_set_nextForceRefreshTime))::System::DateTime nextForceRefreshTime;

  /// @brief Field nextOverrideCheckTime, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextOverrideCheckTime, put = __cordl_internal_set_nextOverrideCheckTime)) float_t nextOverrideCheckTime;

  /// @brief Field nextRefreshTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextRefreshTime, put = __cordl_internal_set_nextRefreshTime)) float_t nextRefreshTime;

  /// @brief Method CheckForOverrideRefresh, addr 0x2c705b4, size 0x94, virtual false, abstract: false, final false
  inline void CheckForOverrideRefresh();

  /// @brief Method DoRefresh, addr 0x2c70740, size 0xc, virtual false, abstract: false, final false
  inline void DoRefresh(::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* callback);

  /// @brief Method DoRefresh, addr 0x2c70648, size 0xb4, virtual false, abstract: false, final false
  inline void DoRefresh(bool shouldProcessResults, ::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* callback);

  /// @brief Method GetHoursSpent, addr 0x2c70714, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetHoursSpent();

  static inline ::GlobalNamespace::AccountOnlineManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x2c703f8, size 0x4c, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnApplicationQuit, addr 0x2c706fc, size 0x18, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method RefreshAccountOnline, addr 0x2c7074c, size 0xb4, virtual false, abstract: false, final false
  inline void RefreshAccountOnline(float_t hoursSpent, bool shouldProcessResults, ::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* callback);

  /// @brief Method RefreshGuestAccount, addr 0x2c70800, size 0x94, virtual false, abstract: false, final false
  inline void RefreshGuestAccount(bool shouldProcessResults);

  /// @brief Method Start, addr 0x2c702cc, size 0x12c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2c704dc, size 0xd8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateRefreshTime, addr 0x2c70444, size 0x98, virtual false, abstract: false, final false
  inline void UpdateRefreshTime();

  constexpr bool const& __cordl_internal_get_isInitialized() const;

  constexpr bool& __cordl_internal_get_isInitialized();

  constexpr float_t const& __cordl_internal_get_lastRefreshTime() const;

  constexpr float_t& __cordl_internal_get_lastRefreshTime();

  constexpr ::System::DateTime const& __cordl_internal_get_nextForceRefreshTime() const;

  constexpr ::System::DateTime& __cordl_internal_get_nextForceRefreshTime();

  constexpr float_t const& __cordl_internal_get_nextOverrideCheckTime() const;

  constexpr float_t& __cordl_internal_get_nextOverrideCheckTime();

  constexpr float_t const& __cordl_internal_get_nextRefreshTime() const;

  constexpr float_t& __cordl_internal_get_nextRefreshTime();

  constexpr void __cordl_internal_set_isInitialized(bool value);

  constexpr void __cordl_internal_set_lastRefreshTime(float_t value);

  constexpr void __cordl_internal_set_nextForceRefreshTime(::System::DateTime value);

  constexpr void __cordl_internal_set_nextOverrideCheckTime(float_t value);

  constexpr void __cordl_internal_set_nextRefreshTime(float_t value);

  /// @brief Method .ctor, addr 0x2c70894, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccountOnlineManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AccountOnlineManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccountOnlineManager(AccountOnlineManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccountOnlineManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccountOnlineManager(AccountOnlineManager const&) = delete;

  /// @brief Field lastRefreshTime, offset: 0x18, size: 0x4, def value: None
  float_t ___lastRefreshTime;

  /// @brief Field nextRefreshTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___nextRefreshTime;

  /// @brief Field nextForceRefreshTime, offset: 0x20, size: 0x8, def value: None
  ::System::DateTime ___nextForceRefreshTime;

  /// @brief Field isInitialized, offset: 0x28, size: 0x1, def value: None
  bool ___isInitialized;

  /// @brief Field nextOverrideCheckTime, offset: 0x2c, size: 0x4, def value: None
  float_t ___nextOverrideCheckTime;

  /// @brief Field FORCE_REFRESH_BUFFER offset 0xffffffff size 0x4
  static constexpr float_t FORCE_REFRESH_BUFFER{ 60.0 };

  /// @brief Field OVERRIDE_REFRESH_INTERVAL_SECONDS offset 0xffffffff size 0x4
  static constexpr float_t OVERRIDE_REFRESH_INTERVAL_SECONDS{ 45.0 };

  /// @brief Field REFRESH_INTERVAL_SECONDS offset 0xffffffff size 0x4
  static constexpr float_t REFRESH_INTERVAL_SECONDS{ 900.0 };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"AccountOnlineManager: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AccountOnlineManager, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountOnlineManager, ___lastRefreshTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountOnlineManager, ___nextRefreshTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountOnlineManager, ___nextForceRefreshTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountOnlineManager, ___isInitialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AccountOnlineManager, ___nextOverrideCheckTime) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AccountOnlineManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AccountOnlineManager*, "", "AccountOnlineManager");
NEED_NO_BOX(::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse*, "", "AccountOnlineManager/OnRefreshAccountOnlineResponse");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountOnlineManager___CheckForOverrideRefresh_d__17, "", "AccountOnlineManager/<CheckForOverrideRefresh>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountOnlineManager___RefreshAccountOnline_d__19, "", "AccountOnlineManager/<RefreshAccountOnline>d__19");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AccountOnlineManager___RefreshGuestAccount_d__20, "", "AccountOnlineManager/<RefreshGuestAccount>d__20");
