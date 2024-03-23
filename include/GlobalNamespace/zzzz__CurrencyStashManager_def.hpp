#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CurrencyStashManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
class __CurrencyStashManager__OnRedeemFailure;
}
namespace GlobalNamespace {
class __CurrencyStashManager__OnRedeemSuccess;
}
namespace GlobalNamespace {
struct __CurrencyStashManager___TryRedeemStash_d__8;
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
class CurrencyStashManager;
}
namespace GlobalNamespace {
class __CurrencyStashManager__OnRedeemFailure;
}
namespace GlobalNamespace {
class __CurrencyStashManager__OnRedeemSuccess;
}
namespace GlobalNamespace {
struct __CurrencyStashManager___TryRedeemStash_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CurrencyStashManager);
MARK_REF_PTR_T(::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure);
MARK_REF_PTR_T(::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess);
MARK_VAL_T(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8);
// Type: ::OnRedeemSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CurrencyStashManager::OnRedeemSuccess*
class CORDL_TYPE __CurrencyStashManager__OnRedeemSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x276aa3c, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t currencyAmount, ::StringW stashID, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x276aacc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x276aa28, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t currencyAmount, ::StringW stashID);

  static inline ::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x276a964, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CurrencyStashManager__OnRedeemSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CurrencyStashManager__OnRedeemSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CurrencyStashManager__OnRedeemSuccess(__CurrencyStashManager__OnRedeemSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CurrencyStashManager__OnRedeemSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CurrencyStashManager__OnRedeemSuccess(__CurrencyStashManager__OnRedeemSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRedeemFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CurrencyStashManager::OnRedeemFailure*
class CORDL_TYPE __CurrencyStashManager__OnRedeemFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x276aba8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x276abc8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x276ab94, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x276aad8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CurrencyStashManager__OnRedeemFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CurrencyStashManager__OnRedeemFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CurrencyStashManager__OnRedeemFailure(__CurrencyStashManager__OnRedeemFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CurrencyStashManager__OnRedeemFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CurrencyStashManager__OnRedeemFailure(__CurrencyStashManager__OnRedeemFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryRedeemStash>d__8
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::CurrencyStashManager::<TryRedeemStash>d__8
struct CORDL_TYPE __CurrencyStashManager___TryRedeemStash_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x276abd4, size 0xa20, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x276b5f4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CurrencyStashManager___TryRedeemStash_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "stashKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "onFailure", ty: "::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess*", modifiers: "", def_value: None }, CppParam { name: "_stashID_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam {
  // name: "_accountData_5__3", ty: "::GlobalNamespace::AccountData*", modifiers: "", def_value: None }, CppParam { name: "_reward_5__4", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __CurrencyStashManager___TryRedeemStash_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW stashKey,
                                                         ::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure* onFailure, ::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess* onSuccess,
                                                         ::StringW _stashID_5__2, ::GlobalNamespace::AccountData* _accountData_5__3, int32_t _reward_5__4,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1,
                                                         ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field stashKey, offset: 0x28, size: 0x8, def value: None
  ::StringW stashKey;

  /// @brief Field onFailure, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess* onSuccess;

  /// @brief Field <stashID>5__2, offset: 0x40, size: 0x8, def value: None
  ::StringW _stashID_5__2;

  /// @brief Field <accountData>5__3, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::AccountData* _accountData_5__3;

  /// @brief Field <reward>5__4, offset: 0x50, size: 0x4, def value: None
  int32_t _reward_5__4;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief Field <>u__2, offset: 0x60, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, stashKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, onFailure) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, onSuccess) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, _stashID_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, _accountData_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, _reward_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, __u__2) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CurrencyStashManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CurrencyStashManager*
class CORDL_TYPE CurrencyStashManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::CurrencyStashManager>> {
public:
  // Declarations
  using OnRedeemFailure = ::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure;

  using OnRedeemSuccess = ::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess;

  using _TryRedeemStash_d__8 = ::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8;

  /// @brief Method GenerateStashID, addr 0x276a564, size 0x6c, virtual false, abstract: false, final false
  static inline ::StringW GenerateStashID(::StringW roomKey, ::StringW itemKey, ::StringW colorKey);

  /// @brief Method GenerateStashID, addr 0x276a508, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GenerateStashID(::StringW roomKey, ::StringW stashKey);

  /// @brief Method GenerateStashKey, addr 0x276a5d0, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GenerateStashKey(::StringW itemKey, ::StringW colorKey);

  /// @brief Method IsRedeemable, addr 0x276a62c, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsRedeemable(::StringW stashKey);

  static inline ::GlobalNamespace::CurrencyStashManager* New_ctor();

  /// @brief Method OnFailedToRedeemStash, addr 0x276a7a0, size 0x17c, virtual false, abstract: false, final false
  static inline void OnFailedToRedeemStash(::StringW reason);

  /// @brief Method TryRedeemStash, addr 0x276a6f4, size 0xac, virtual false, abstract: false, final false
  static inline void TryRedeemStash(::StringW stashKey, ::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess* onSuccess, ::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure* onFailure);

  /// @brief Method .ctor, addr 0x276a91c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CurrencyStashManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CurrencyStashManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CurrencyStashManager(CurrencyStashManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CurrencyStashManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CurrencyStashManager(CurrencyStashManager const&) = delete;

  /// @brief Field DELAY offset 0xffffffff size 0x4
  static constexpr float_t DELAY{ 0.5 };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Stashes: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CurrencyStashManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CurrencyStashManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CurrencyStashManager*, "", "CurrencyStashManager");
NEED_NO_BOX(::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CurrencyStashManager__OnRedeemFailure*, "", "CurrencyStashManager/OnRedeemFailure");
NEED_NO_BOX(::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CurrencyStashManager__OnRedeemSuccess*, "", "CurrencyStashManager/OnRedeemSuccess");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__CurrencyStashManager___TryRedeemStash_d__8, "", "CurrencyStashManager/<TryRedeemStash>d__8");
