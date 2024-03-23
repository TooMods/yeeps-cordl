#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__GlobalRotation_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChallengeManager)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class ActiveChallenge;
}
namespace GlobalNamespace {
struct ChallengeData;
}
namespace GlobalNamespace {
struct GlobalRotation;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
class __ChallengeManager__OnActiveChallengesUpdated;
}
namespace GlobalNamespace {
class __ChallengeManager__OnHasTimeUntilNextRotationUpdated;
}
namespace GlobalNamespace {
class __ChallengeManager__OnRedeemChallengeRewardFailure;
}
namespace GlobalNamespace {
class __ChallengeManager__OnRedeemChallengeRewardSuccess;
}
namespace GlobalNamespace {
class __ChallengeManager__OnTimeUntilNextRotationUpdated;
}
namespace GlobalNamespace {
struct __ChallengeManager___TryRedeemChallengeReward_d__44;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
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
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace GlobalNamespace {
class ChallengeManager;
}
namespace GlobalNamespace {
class __ChallengeManager__OnActiveChallengesUpdated;
}
namespace GlobalNamespace {
class __ChallengeManager__OnHasTimeUntilNextRotationUpdated;
}
namespace GlobalNamespace {
class __ChallengeManager__OnRedeemChallengeRewardFailure;
}
namespace GlobalNamespace {
class __ChallengeManager__OnRedeemChallengeRewardSuccess;
}
namespace GlobalNamespace {
class __ChallengeManager__OnTimeUntilNextRotationUpdated;
}
namespace GlobalNamespace {
struct __ChallengeManager___TryRedeemChallengeReward_d__44;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ChallengeManager);
MARK_REF_PTR_T(::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated);
MARK_REF_PTR_T(::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure);
MARK_REF_PTR_T(::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess);
MARK_REF_PTR_T(::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated);
MARK_VAL_T(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44);
// Type: ::OnActiveChallengesUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengeManager::OnActiveChallengesUpdated*
class CORDL_TYPE __ChallengeManager__OnActiveChallengesUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x275bb64, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* newActiveChallenges, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x275bb84, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x275bb50, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* newActiveChallenges);

  static inline ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2757454, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChallengeManager__OnActiveChallengesUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnActiveChallengesUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChallengeManager__OnActiveChallengesUpdated(__ChallengeManager__OnActiveChallengesUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnActiveChallengesUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChallengeManager__OnActiveChallengesUpdated(__ChallengeManager__OnActiveChallengesUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnHasTimeUntilNextRotationUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengeManager::OnHasTimeUntilNextRotationUpdated*
class CORDL_TYPE __ChallengeManager__OnHasTimeUntilNextRotationUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x275bba8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newHasTimeUntilNextRotation, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x275bc30, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x275bb90, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newHasTimeUntilNextRotation);

  static inline ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2757b04, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChallengeManager__OnHasTimeUntilNextRotationUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnHasTimeUntilNextRotationUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChallengeManager__OnHasTimeUntilNextRotationUpdated(__ChallengeManager__OnHasTimeUntilNextRotationUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnHasTimeUntilNextRotationUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChallengeManager__OnHasTimeUntilNextRotationUpdated(__ChallengeManager__OnHasTimeUntilNextRotationUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnTimeUntilNextRotationUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengeManager::OnTimeUntilNextRotationUpdated*
class CORDL_TYPE __ChallengeManager__OnTimeUntilNextRotationUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x275bc50, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::TimeSpan newTimeUntilNextRotation, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x275bcd4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x275bc3c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::TimeSpan newTimeUntilNextRotation);

  static inline ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2757bf8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChallengeManager__OnTimeUntilNextRotationUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnTimeUntilNextRotationUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChallengeManager__OnTimeUntilNextRotationUpdated(__ChallengeManager__OnTimeUntilNextRotationUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnTimeUntilNextRotationUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChallengeManager__OnTimeUntilNextRotationUpdated(__ChallengeManager__OnTimeUntilNextRotationUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRedeemChallengeRewardSuccess
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengeManager::OnRedeemChallengeRewardSuccess*
class CORDL_TYPE __ChallengeManager__OnRedeemChallengeRewardSuccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x275bcf4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t rewardAmount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x275bd78, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x275bce0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(int32_t rewardAmount);

  static inline ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2759564, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChallengeManager__OnRedeemChallengeRewardSuccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnRedeemChallengeRewardSuccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChallengeManager__OnRedeemChallengeRewardSuccess(__ChallengeManager__OnRedeemChallengeRewardSuccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnRedeemChallengeRewardSuccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChallengeManager__OnRedeemChallengeRewardSuccess(__ChallengeManager__OnRedeemChallengeRewardSuccess const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OnRedeemChallengeRewardFailure
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengeManager::OnRedeemChallengeRewardFailure*
class CORDL_TYPE __ChallengeManager__OnRedeemChallengeRewardFailure : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x275bd98, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW errorType, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x275bdb8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x275bd84, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW errorType);

  static inline ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2759628, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChallengeManager__OnRedeemChallengeRewardFailure();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnRedeemChallengeRewardFailure", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ChallengeManager__OnRedeemChallengeRewardFailure(__ChallengeManager__OnRedeemChallengeRewardFailure&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ChallengeManager__OnRedeemChallengeRewardFailure", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ChallengeManager__OnRedeemChallengeRewardFailure(__ChallengeManager__OnRedeemChallengeRewardFailure const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<TryRedeemChallengeReward>d__44
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::ChallengeManager::<TryRedeemChallengeReward>d__44
struct CORDL_TYPE __ChallengeManager___TryRedeemChallengeReward_d__44 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x275bdc4, size 0x5a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x275c364, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChallengeManager___TryRedeemChallengeReward_d__44();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "accountID", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "poolKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "itemKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "onFailure", ty:
  // "::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*", modifiers: "", def_value: None }, CppParam { name: "onSuccess", ty:
  // "::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __ChallengeManager___TryRedeemChallengeReward_d__44(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW accountID, ::StringW poolKey,
                                                                ::StringW itemKey, ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure* onFailure,
                                                                ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess* onSuccess,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field accountID, offset: 0x28, size: 0x8, def value: None
  ::StringW accountID;

  /// @brief Field poolKey, offset: 0x30, size: 0x8, def value: None
  ::StringW poolKey;

  /// @brief Field itemKey, offset: 0x38, size: 0x8, def value: None
  ::StringW itemKey;

  /// @brief Field onFailure, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure* onFailure;

  /// @brief Field onSuccess, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess* onSuccess;

  /// @brief Field <>u__1, offset: 0x50, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, accountID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, poolKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, itemKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, onFailure) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, onSuccess) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, __u__1) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ChallengeManager
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ChallengeManager*
class CORDL_TYPE ChallengeManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::ChallengeManager>> {
public:
  // Declarations
  using OnActiveChallengesUpdated = ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated;

  using OnHasTimeUntilNextRotationUpdated = ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated;

  using OnRedeemChallengeRewardFailure = ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure;

  using OnRedeemChallengeRewardSuccess = ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess;

  using OnTimeUntilNextRotationUpdated = ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated;

  using _TryRedeemChallengeReward_d__44 = ::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44;

  /// @brief Field ALL_POOL_KEYS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ALL_POOL_KEYS, put = setStaticF_ALL_POOL_KEYS))::ArrayW<::StringW, ::Array<::StringW>*> ALL_POOL_KEYS;

  /// @brief Field <activeChallenges>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF__activeChallenges_k__BackingField,
               put = setStaticF__activeChallenges_k__BackingField))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* _activeChallenges_k__BackingField;

  /// @brief Field <hasTimeUntilNextRotation>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasTimeUntilNextRotation_k__BackingField, put = setStaticF__hasTimeUntilNextRotation_k__BackingField)) bool _hasTimeUntilNextRotation_k__BackingField;

  /// @brief Field <timeUntilNextRotation>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__timeUntilNextRotation_k__BackingField,
                             put = setStaticF__timeUntilNextRotation_k__BackingField))::System::TimeSpan _timeUntilNextRotation_k__BackingField;

  /// @brief Field challengeDatas, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_challengeDatas,
                             put = setStaticF_challengeDatas))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>* challengeDatas;

  /// @brief Field challengeDatasRaw, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_challengeDatasRaw,
                      put = __cordl_internal_set_challengeDatasRaw))::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*> challengeDatasRaw;

  /// @brief Field challengeRotation, offset 0xffffffff, size 0x28
  static __declspec(property(get = getStaticF_challengeRotation, put = setStaticF_challengeRotation))::GlobalNamespace::GlobalRotation challengeRotation;

  /// @brief Field hasChallengeRotation, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasChallengeRotation, put = setStaticF_hasChallengeRotation)) bool hasChallengeRotation;

  /// @brief Field isFetchingChallengeRotation, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isFetchingChallengeRotation, put = setStaticF_isFetchingChallengeRotation)) bool isFetchingChallengeRotation;

  /// @brief Field nextTimeUntilNextRotationUpdateTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_nextTimeUntilNextRotationUpdateTime, put = setStaticF_nextTimeUntilNextRotationUpdateTime)) float_t nextTimeUntilNextRotationUpdateTime;

  /// @brief Field onActiveChallengesUpdatedCallbacks, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onActiveChallengesUpdatedCallbacks,
                      put = __cordl_internal_set_onActiveChallengesUpdatedCallbacks))::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated* onActiveChallengesUpdatedCallbacks;

  /// @brief Field onHasTimeUntilNextRotationUpdatedCallbacks, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks,
      put = __cordl_internal_set_onHasTimeUntilNextRotationUpdatedCallbacks))::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated* onHasTimeUntilNextRotationUpdatedCallbacks;

  /// @brief Field onTimeUntilNextRotationUpdatedCallbacks, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks,
               put = __cordl_internal_set_onTimeUntilNextRotationUpdatedCallbacks))::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated* onTimeUntilNextRotationUpdatedCallbacks;

  /// @brief Method BuildActiveChallenges, addr 0x275aecc, size 0x3f8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* BuildActiveChallenges(::GlobalNamespace::GlobalRotation globalRotation);

  /// @brief Method DoTimeUntilNextRotationUpdate, addr 0x275b424, size 0x444, virtual false, abstract: false, final false
  static inline void DoTimeUntilNextRotationUpdate();

  static inline ::GlobalNamespace::ChallengeManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x275a290, size 0x188, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnFetchGlobalRotationFailure, addr 0x275b2c4, size 0x160, virtual false, abstract: false, final false
  static inline void OnFetchGlobalRotationFailure(::StringW errorType);

  /// @brief Method OnFetchGlobalRotationSuccess, addr 0x275ad1c, size 0x1b0, virtual false, abstract: false, final false
  static inline void OnFetchGlobalRotationSuccess(::GlobalNamespace::GlobalRotation globalRotation);

  /// @brief Method RefreshChallengeRotation, addr 0x275a418, size 0x1d4, virtual false, abstract: false, final false
  static inline void RefreshChallengeRotation();

  /// @brief Method SetActiveChallenges, addr 0x275a5ec, size 0x438, virtual false, abstract: false, final false
  static inline void SetActiveChallenges(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* newActiveChallenges);

  /// @brief Method SetHasTimeUntilNextRotation, addr 0x275aa24, size 0x2f8, virtual false, abstract: false, final false
  static inline void SetHasTimeUntilNextRotation(bool newHasTimeUntilNextRotation);

  /// @brief Method Start, addr 0x275a170, size 0x120, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryGetChallengeData, addr 0x2759d4c, size 0x208, virtual false, abstract: false, final false
  inline bool TryGetChallengeData(::StringW challengeKey, ByRef<::GlobalNamespace::ChallengeData> challengeData);

  /// @brief Method TryRedeemChallengeReward, addr 0x27596fc, size 0xc0, virtual false, abstract: false, final false
  static inline void TryRedeemChallengeReward(::StringW accountID, ::StringW poolKey, ::StringW itemKey, ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess* onSuccess,
                                              ::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure* onFailure);

  /// @brief Method Update, addr 0x275b868, size 0x104, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*> const& __cordl_internal_get_challengeDatasRaw() const;

  constexpr ::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*>& __cordl_internal_get_challengeDatasRaw();

  constexpr ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*& __cordl_internal_get_onActiveChallengesUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*> const& __cordl_internal_get_onActiveChallengesUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*& __cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*> const&
  __cordl_internal_get_onHasTimeUntilNextRotationUpdatedCallbacks() const;

  constexpr ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*& __cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*> const& __cordl_internal_get_onTimeUntilNextRotationUpdatedCallbacks() const;

  constexpr void __cordl_internal_set_challengeDatasRaw(::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*> value);

  constexpr void __cordl_internal_set_onActiveChallengesUpdatedCallbacks(::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated* value);

  constexpr void __cordl_internal_set_onHasTimeUntilNextRotationUpdatedCallbacks(::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated* value);

  constexpr void __cordl_internal_set_onTimeUntilNextRotationUpdatedCallbacks(::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated* value);

  /// @brief Method .ctor, addr 0x275b96c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_ALL_POOL_KEYS();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* getStaticF__activeChallenges_k__BackingField();

  static inline bool getStaticF__hasTimeUntilNextRotation_k__BackingField();

  static inline ::System::TimeSpan getStaticF__timeUntilNextRotation_k__BackingField();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>* getStaticF_challengeDatas();

  static inline ::GlobalNamespace::GlobalRotation getStaticF_challengeRotation();

  static inline bool getStaticF_hasChallengeRotation();

  static inline bool getStaticF_isFetchingChallengeRotation();

  static inline float_t getStaticF_nextTimeUntilNextRotationUpdateTime();

  /// @brief Method get_activeChallenges, addr 0x2759f54, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* get_activeChallenges();

  /// @brief Method get_hasTimeUntilNextRotation, addr 0x275a008, size 0x58, virtual false, abstract: false, final false
  static inline bool get_hasTimeUntilNextRotation();

  /// @brief Method get_timeUntilNextRotation, addr 0x275a0bc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::TimeSpan get_timeUntilNextRotation();

  static inline void setStaticF_ALL_POOL_KEYS(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF__activeChallenges_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* value);

  static inline void setStaticF__hasTimeUntilNextRotation_k__BackingField(bool value);

  static inline void setStaticF__timeUntilNextRotation_k__BackingField(::System::TimeSpan value);

  static inline void setStaticF_challengeDatas(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ChallengeData>* value);

  static inline void setStaticF_challengeRotation(::GlobalNamespace::GlobalRotation value);

  static inline void setStaticF_hasChallengeRotation(bool value);

  static inline void setStaticF_isFetchingChallengeRotation(bool value);

  static inline void setStaticF_nextTimeUntilNextRotationUpdateTime(float_t value);

  /// @brief Method set_activeChallenges, addr 0x2759fac, size 0x5c, virtual false, abstract: false, final false
  static inline void set_activeChallenges(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ActiveChallenge*>* value);

  /// @brief Method set_hasTimeUntilNextRotation, addr 0x275a060, size 0x5c, virtual false, abstract: false, final false
  static inline void set_hasTimeUntilNextRotation(bool value);

  /// @brief Method set_timeUntilNextRotation, addr 0x275a114, size 0x5c, virtual false, abstract: false, final false
  static inline void set_timeUntilNextRotation(::System::TimeSpan value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChallengeManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChallengeManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChallengeManager(ChallengeManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChallengeManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChallengeManager(ChallengeManager const&) = delete;

  /// @brief Field challengeDatasRaw, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ChallengeData, ::Array<::GlobalNamespace::ChallengeData>*> ___challengeDatasRaw;

  /// @brief Field onActiveChallengesUpdatedCallbacks, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated* ___onActiveChallengesUpdatedCallbacks;

  /// @brief Field onHasTimeUntilNextRotationUpdatedCallbacks, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated* ___onHasTimeUntilNextRotationUpdatedCallbacks;

  /// @brief Field onTimeUntilNextRotationUpdatedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated* ___onTimeUntilNextRotationUpdatedCallbacks;

  /// @brief Field EASY_POOL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString EASY_POOL_KEY{ u"easy" };

  /// @brief Field HARD_POOL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString HARD_POOL_KEY{ u"hard" };

  /// @brief Field LOGIN_POOL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString LOGIN_POOL_KEY{ u"login" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Challenges: " };

  /// @brief Field globalRotationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString globalRotationKey{ u"challenges" };

  /// @brief Field timeUntilNextRotationUpdateIntervals offset 0xffffffff size 0x4
  static constexpr float_t timeUntilNextRotationUpdateIntervals{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ChallengeManager, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeManager, ___challengeDatasRaw) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeManager, ___onActiveChallengesUpdatedCallbacks) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeManager, ___onHasTimeUntilNextRotationUpdatedCallbacks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ChallengeManager, ___onTimeUntilNextRotationUpdatedCallbacks) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ChallengeManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ChallengeManager*, "", "ChallengeManager");
NEED_NO_BOX(::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ChallengeManager__OnActiveChallengesUpdated*, "", "ChallengeManager/OnActiveChallengesUpdated");
NEED_NO_BOX(::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ChallengeManager__OnHasTimeUntilNextRotationUpdated*, "", "ChallengeManager/OnHasTimeUntilNextRotationUpdated");
NEED_NO_BOX(::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardFailure*, "", "ChallengeManager/OnRedeemChallengeRewardFailure");
NEED_NO_BOX(::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ChallengeManager__OnRedeemChallengeRewardSuccess*, "", "ChallengeManager/OnRedeemChallengeRewardSuccess");
NEED_NO_BOX(::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ChallengeManager__OnTimeUntilNextRotationUpdated*, "", "ChallengeManager/OnTimeUntilNextRotationUpdated");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ChallengeManager___TryRedeemChallengeReward_d__44, "", "ChallengeManager/<TryRedeemChallengeReward>d__44");
