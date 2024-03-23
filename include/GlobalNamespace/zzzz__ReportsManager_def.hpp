#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReportsManager)
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
class __ReportsManager__OnGetAccountReportHistoryFailed;
}
namespace GlobalNamespace {
class __ReportsManager__OnGetAccountReportHistorySuccess;
}
namespace GlobalNamespace {
class __ReportsManager__OnReportAccountFailed;
}
namespace GlobalNamespace {
class __ReportsManager__OnReportAccountSuccess;
}
namespace GlobalNamespace {
struct __ReportsManager___BanAccount_d__9;
}
namespace GlobalNamespace {
struct __ReportsManager___GetAccountReportHistory_d__6;
}
namespace GlobalNamespace {
struct __ReportsManager___ReportAccount_d__3;
}
namespace GlobalNamespace {
struct __ReportsManager___WarnAccount_d__7;
}
namespace GlobalNamespace {
class __ReportsManager____c;
}
namespace GlobalNamespace {
class __ReportsManager____c__DisplayClass10_0;
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
class ReportsManager;
}
namespace GlobalNamespace {
class __ReportsManager__OnGetAccountReportHistoryFailed;
}
namespace GlobalNamespace {
class __ReportsManager__OnGetAccountReportHistorySuccess;
}
namespace GlobalNamespace {
class __ReportsManager__OnReportAccountFailed;
}
namespace GlobalNamespace {
class __ReportsManager__OnReportAccountSuccess;
}
namespace GlobalNamespace {
class __ReportsManager____c;
}
namespace GlobalNamespace {
class __ReportsManager____c__DisplayClass10_0;
}
namespace GlobalNamespace {
struct __ReportsManager___BanAccount_d__9;
}
namespace GlobalNamespace {
struct __ReportsManager___GetAccountReportHistory_d__6;
}
namespace GlobalNamespace {
struct __ReportsManager___ReportAccount_d__3;
}
namespace GlobalNamespace {
struct __ReportsManager___WarnAccount_d__7;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ReportsManager);
MARK_REF_PTR_T(::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed);
MARK_REF_PTR_T(::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess);
MARK_REF_PTR_T(::GlobalNamespace::__ReportsManager__OnReportAccountFailed);
MARK_REF_PTR_T(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__ReportsManager____c);
MARK_REF_PTR_T(::GlobalNamespace::__ReportsManager____c__DisplayClass10_0);
MARK_VAL_T(::GlobalNamespace::__ReportsManager___BanAccount_d__9);
MARK_VAL_T(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6);
MARK_VAL_T(::GlobalNamespace::__ReportsManager___ReportAccount_d__3);
MARK_VAL_T(::GlobalNamespace::__ReportsManager___WarnAccount_d__7);
// Type: ::OnReportAccountSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReportsManager::OnReportAccountSuccess*
class CORDL_TYPE __ReportsManager__OnReportAccountSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c8243c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c8245c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c82428, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c8236c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager__OnReportAccountSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnReportAccountSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReportsManager__OnReportAccountSuccess(__ReportsManager__OnReportAccountSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnReportAccountSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReportsManager__OnReportAccountSuccess(__ReportsManager__OnReportAccountSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager__OnReportAccountSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnReportAccountFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReportsManager::OnReportAccountFailed*
class CORDL_TYPE __ReportsManager__OnReportAccountFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c82550, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c82570, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c8253c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c82468, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager__OnReportAccountFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnReportAccountFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReportsManager__OnReportAccountFailed(__ReportsManager__OnReportAccountFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnReportAccountFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReportsManager__OnReportAccountFailed(__ReportsManager__OnReportAccountFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager__OnReportAccountFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetAccountReportHistorySuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReportsManager::OnGetAccountReportHistorySuccess*
class CORDL_TYPE __ReportsManager__OnGetAccountReportHistorySuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c82658, size 0xe8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t reportCount, int32_t banCount, int32_t longestBanDuration, bool wasPermabanned, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c82740, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c82640, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(int32_t reportCount, int32_t banCount, int32_t longestBanDuration, bool wasPermabanned);

  static inline ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c8257c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager__OnGetAccountReportHistorySuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnGetAccountReportHistorySuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReportsManager__OnGetAccountReportHistorySuccess(__ReportsManager__OnGetAccountReportHistorySuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnGetAccountReportHistorySuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReportsManager__OnGetAccountReportHistorySuccess(__ReportsManager__OnGetAccountReportHistorySuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnGetAccountReportHistoryFailed
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReportsManager::OnGetAccountReportHistoryFailed*
class CORDL_TYPE __ReportsManager__OnGetAccountReportHistoryFailed : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2c82834, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2c82854, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2c82820, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errType);

  static inline ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2c8274c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager__OnGetAccountReportHistoryFailed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnGetAccountReportHistoryFailed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReportsManager__OnGetAccountReportHistoryFailed(__ReportsManager__OnGetAccountReportHistoryFailed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager__OnGetAccountReportHistoryFailed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReportsManager__OnGetAccountReportHistoryFailed(__ReportsManager__OnGetAccountReportHistoryFailed const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<ReportAccount>d__3
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ReportsManager::<ReportAccount>d__3
struct CORDL_TYPE __ReportsManager___ReportAccount_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c82860, size 0x4e4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c82d44, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager___ReportAccount_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty: "::GlobalNamespace::__ReportsManager__OnReportAccountFailed*",
  // modifiers: "", def_value: None }, CppParam { name: "targetAccountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __ReportsManager___ReportAccount_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                  ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed, ::StringW targetAccountID,
                                                  ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess,
                                                  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailed, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed;

  /// @brief Field targetAccountID, offset: 0x30, size: 0x8, def value: None
  ::StringW targetAccountID;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager___ReportAccount_d__3, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___ReportAccount_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___ReportAccount_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___ReportAccount_d__3, onFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___ReportAccount_d__3, targetAccountID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___ReportAccount_d__3, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___ReportAccount_d__3, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetAccountReportHistory>d__6
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ReportsManager::<GetAccountReportHistory>d__6
struct CORDL_TYPE __ReportsManager___GetAccountReportHistory_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c82d50, size 0x498, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c831e8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager___GetAccountReportHistory_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "targetAccountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "onFailed", ty: "::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse>", modifiers: "", def_value: None }]
  constexpr __ReportsManager___GetAccountReportHistory_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW targetAccountID,
                                                            ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed* onFailed,
                                                            ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess* onSuccess,
                                                            ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field targetAccountID, offset: 0x28, size: 0x8, def value: None
  ::StringW targetAccountID;

  /// @brief Field onFailed, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed* onFailed;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__DynamoResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, targetAccountID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, onFailed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<WarnAccount>d__7
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ReportsManager::<WarnAccount>d__7
struct CORDL_TYPE __ReportsManager___WarnAccount_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c831f4, size 0x5cc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c837c0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager___WarnAccount_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty: "::GlobalNamespace::__ReportsManager__OnReportAccountFailed*",
  // modifiers: "", def_value: None }, CppParam { name: "targetAccountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __ReportsManager___WarnAccount_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed, ::StringW targetAccountID,
                                                ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailed, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed;

  /// @brief Field targetAccountID, offset: 0x30, size: 0x8, def value: None
  ::StringW targetAccountID;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager___WarnAccount_d__7, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___WarnAccount_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___WarnAccount_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___WarnAccount_d__7, onFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___WarnAccount_d__7, targetAccountID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___WarnAccount_d__7, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___WarnAccount_d__7, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReportsManager::<>c*
class CORDL_TYPE __ReportsManager____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ReportsManager____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* __9__8_0;

  static inline ::GlobalNamespace::__ReportsManager____c* New_ctor();

  /// @brief Method <OnReceiveWarnAccount>b__8_0, addr 0x2c83838, size 0x18, virtual false, abstract: false, final false
  inline void _OnReceiveWarnAccount_b__8_0(bool success);

  /// @brief Method .ctor, addr 0x2c83830, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ReportsManager____c* getStaticF___9();

  static inline ::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* getStaticF___9__8_0();

  static inline void setStaticF___9(::GlobalNamespace::__ReportsManager____c* value);

  static inline void setStaticF___9__8_0(::GlobalNamespace::__AccountOnlineManager__OnRefreshAccountOnlineResponse* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReportsManager____c(__ReportsManager____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReportsManager____c(__ReportsManager____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<BanAccount>d__9
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ReportsManager::<BanAccount>d__9
struct CORDL_TYPE __ReportsManager___BanAccount_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2c83850, size 0x694, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2c83ee4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager___BanAccount_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "onFailed", ty: "::GlobalNamespace::__ReportsManager__OnReportAccountFailed*",
  // modifiers: "", def_value: None }, CppParam { name: "targetAccountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "hours", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "onSuccess", ty: "::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __ReportsManager___BanAccount_d__9(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                               ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed, ::StringW targetAccountID, int32_t hours,
                                               ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess,
                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field onFailed, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed;

  /// @brief Field targetAccountID, offset: 0x30, size: 0x8, def value: None
  ::StringW targetAccountID;

  /// @brief Field hours, offset: 0x38, size: 0x4, def value: None
  int32_t hours;

  /// @brief Field onSuccess, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager___BanAccount_d__9, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___BanAccount_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___BanAccount_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___BanAccount_d__9, onFailed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___BanAccount_d__9, targetAccountID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___BanAccount_d__9, hours) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___BanAccount_d__9, onSuccess) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager___BanAccount_d__9, __u__1) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReportsManager::<>c__DisplayClass10_0*
class CORDL_TYPE __ReportsManager____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field hours, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_hours, put = __cordl_internal_set_hours)) int32_t hours;

  static inline ::GlobalNamespace::__ReportsManager____c__DisplayClass10_0* New_ctor();

  /// @brief Method <OnReceiveBanAccount>b__0, addr 0x2c83ef0, size 0x1c, virtual false, abstract: false, final false
  inline void _OnReceiveBanAccount_b__0(bool success);

  constexpr int32_t const& __cordl_internal_get_hours() const;

  constexpr int32_t& __cordl_internal_get_hours();

  constexpr void __cordl_internal_set_hours(int32_t value);

  /// @brief Method .ctor, addr 0x2c8231c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReportsManager____c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReportsManager____c__DisplayClass10_0(__ReportsManager____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReportsManager____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReportsManager____c__DisplayClass10_0(__ReportsManager____c__DisplayClass10_0 const&) = delete;

  /// @brief Field hours, offset: 0x10, size: 0x4, def value: None
  int32_t ___hours;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ReportsManager____c__DisplayClass10_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ReportsManager____c__DisplayClass10_0, ___hours) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ReportsManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ReportsManager*
class CORDL_TYPE ReportsManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ReportsManager>> {
public:
  // Declarations
  using OnGetAccountReportHistoryFailed = ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed;

  using OnGetAccountReportHistorySuccess = ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess;

  using OnReportAccountFailed = ::GlobalNamespace::__ReportsManager__OnReportAccountFailed;

  using OnReportAccountSuccess = ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess;

  using _BanAccount_d__9 = ::GlobalNamespace::__ReportsManager___BanAccount_d__9;

  using _GetAccountReportHistory_d__6 = ::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6;

  using _ReportAccount_d__3 = ::GlobalNamespace::__ReportsManager___ReportAccount_d__3;

  using _WarnAccount_d__7 = ::GlobalNamespace::__ReportsManager___WarnAccount_d__7;

  using __c = ::GlobalNamespace::__ReportsManager____c;

  using __c__DisplayClass10_0 = ::GlobalNamespace::__ReportsManager____c__DisplayClass10_0;

  /// @brief Method BanAccount, addr 0x2c82264, size 0xb8, virtual false, abstract: false, final false
  static inline void BanAccount(::StringW targetAccountID, int32_t hours, ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess,
                                ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed);

  /// @brief Method GetAccountReportHistory, addr 0x2c82114, size 0xa8, virtual false, abstract: false, final false
  static inline void GetAccountReportHistory(::StringW targetAccountID, ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess* onSuccess,
                                             ::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed* onFailed);

  static inline ::GlobalNamespace::ReportsManager* New_ctor();

  /// @brief Method OnReceiveBanAccount, addr 0x2c80b18, size 0x17c, virtual false, abstract: false, final false
  static inline void OnReceiveBanAccount(::StringW targetAccountID, int32_t hours);

  /// @brief Method OnReceiveWarnAccount, addr 0x2c80840, size 0x1a4, virtual false, abstract: false, final false
  static inline void OnReceiveWarnAccount(::StringW targetAccountID);

  /// @brief Method ReportAccount, addr 0x2c8206c, size 0xa8, virtual false, abstract: false, final false
  static inline void ReportAccount(::StringW targetAccountID, ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess,
                                   ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed);

  /// @brief Method WarnAccount, addr 0x2c821bc, size 0xa8, virtual false, abstract: false, final false
  static inline void WarnAccount(::StringW targetAccountID, ::GlobalNamespace::__ReportsManager__OnReportAccountSuccess* onSuccess,
                                 ::GlobalNamespace::__ReportsManager__OnReportAccountFailed* onFailed);

  /// @brief Method .ctor, addr 0x2c82324, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReportsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReportsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReportsManager(ReportsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReportsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReportsManager(ReportsManager const&) = delete;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Reports: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReportsManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReportsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReportsManager*, "", "ReportsManager");
NEED_NO_BOX(::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager__OnGetAccountReportHistoryFailed*, "", "ReportsManager/OnGetAccountReportHistoryFailed");
NEED_NO_BOX(::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager__OnGetAccountReportHistorySuccess*, "", "ReportsManager/OnGetAccountReportHistorySuccess");
NEED_NO_BOX(::GlobalNamespace::__ReportsManager__OnReportAccountFailed);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager__OnReportAccountFailed*, "", "ReportsManager/OnReportAccountFailed");
NEED_NO_BOX(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager__OnReportAccountSuccess*, "", "ReportsManager/OnReportAccountSuccess");
NEED_NO_BOX(::GlobalNamespace::__ReportsManager____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager____c*, "", "ReportsManager/<>c");
NEED_NO_BOX(::GlobalNamespace::__ReportsManager____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager____c__DisplayClass10_0*, "", "ReportsManager/<>c__DisplayClass10_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager___BanAccount_d__9, "", "ReportsManager/<BanAccount>d__9");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager___GetAccountReportHistory_d__6, "", "ReportsManager/<GetAccountReportHistory>d__6");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager___ReportAccount_d__3, "", "ReportsManager/<ReportAccount>d__3");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ReportsManager___WarnAccount_d__7, "", "ReportsManager/<WarnAccount>d__7");
