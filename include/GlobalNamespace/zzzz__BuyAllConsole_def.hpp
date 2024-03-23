#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuyAllConsole)
namespace GlobalNamespace {
class ConfettiCannon;
}
namespace GlobalNamespace {
class CosmeticsStoreInstance;
}
namespace GlobalNamespace {
class CoveredButton;
}
namespace GlobalNamespace {
class CurrencyDisplay;
}
namespace GlobalNamespace {
struct GlobalRotation;
}
namespace GlobalNamespace {
class MasterPlayer;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
class __BuyAllConsole___DoConfettiRoutine_d__48;
}
namespace GlobalNamespace {
struct __BuyAllConsole___TryExecuteBuyAll_d__40;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
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
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class BuyAllConsole;
}
namespace GlobalNamespace {
class __BuyAllConsole___DoConfettiRoutine_d__48;
}
namespace GlobalNamespace {
struct __BuyAllConsole___TryExecuteBuyAll_d__40;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BuyAllConsole);
MARK_REF_PTR_T(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48);
MARK_VAL_T(::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40);
// Type: ::<TryExecuteBuyAll>d__40
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::BuyAllConsole::<TryExecuteBuyAll>d__40
struct CORDL_TYPE __BuyAllConsole___TryExecuteBuyAll_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1545438, size 0x63c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1545a74, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BuyAllConsole___TryExecuteBuyAll_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::BuyAllConsole>", modifiers: "",
  // def_value: None }, CppParam { name: "_rotationKey_5__2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __BuyAllConsole___TryExecuteBuyAll_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::BuyAllConsole> __4__this,
                                                     ::StringW _rotationKey_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BuyAllConsole> __4__this;

  /// @brief Field <rotationKey>5__2, offset: 0x30, size: 0x8, def value: None
  ::StringW _rotationKey_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40, _rotationKey_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40, __u__1) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<DoConfettiRoutine>d__48
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BuyAllConsole::<DoConfettiRoutine>d__48*
class CORDL_TYPE __BuyAllConsole___DoConfettiRoutine_d__48 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::BuyAllConsole> __4__this;

  /// @brief Field <i>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Field delayBetweenFires, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_delayBetweenFires, put = __cordl_internal_set_delayBetweenFires)) float_t delayBetweenFires;

  /// @brief Field numFires, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_numFires, put = __cordl_internal_set_numFires)) int32_t numFires;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x1545a84, size 0xcc, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1545b50, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x1545b58, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1545b98, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x1545a80, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::BuyAllConsole> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::BuyAllConsole>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr float_t const& __cordl_internal_get_delayBetweenFires() const;

  constexpr float_t& __cordl_internal_get_delayBetweenFires();

  constexpr int32_t const& __cordl_internal_get_numFires() const;

  constexpr int32_t& __cordl_internal_get_numFires();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BuyAllConsole> value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  constexpr void __cordl_internal_set_delayBetweenFires(float_t value);

  constexpr void __cordl_internal_set_numFires(int32_t value);

  /// @brief Method .ctor, addr 0x1545208, size 0x28, virtual false, abstract: false, final false
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
  constexpr __BuyAllConsole___DoConfettiRoutine_d__48();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BuyAllConsole___DoConfettiRoutine_d__48", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BuyAllConsole___DoConfettiRoutine_d__48(__BuyAllConsole___DoConfettiRoutine_d__48&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BuyAllConsole___DoConfettiRoutine_d__48", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BuyAllConsole___DoConfettiRoutine_d__48(__BuyAllConsole___DoConfettiRoutine_d__48 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BuyAllConsole> _____4__this;

  /// @brief Field delayBetweenFires, offset: 0x28, size: 0x4, def value: None
  float_t ___delayBetweenFires;

  /// @brief Field numFires, offset: 0x2c, size: 0x4, def value: None
  int32_t ___numFires;

  /// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48, ___delayBetweenFires) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48, ___numFires) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48, ____i_5__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BuyAllConsole
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BuyAllConsole*
class CORDL_TYPE BuyAllConsole : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DoConfettiRoutine_d__48 = ::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48;

  using _TryExecuteBuyAll_d__40 = ::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40;

  /// @brief Field activeConsoles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activeConsoles, put = setStaticF_activeConsoles))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuyAllConsole>>* activeConsoles;

  /// @brief Field activeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field buyAllCost, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_buyAllCost, put = __cordl_internal_set_buyAllCost)) int32_t buyAllCost;

  /// @brief Field canAfford, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_canAfford, put = __cordl_internal_set_canAfford)) bool canAfford;

  /// @brief Field confettiCannons, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_confettiCannons,
                      put = __cordl_internal_set_confettiCannons))::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> confettiCannons;

  /// @brief Field costDisplay, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_costDisplay, put = __cordl_internal_set_costDisplay))::UnityW<::GlobalNamespace::CurrencyDisplay> costDisplay;

  /// @brief Field coveredBuyAllButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_coveredBuyAllButton, put = __cordl_internal_set_coveredBuyAllButton))::UnityW<::GlobalNamespace::CoveredButton> coveredBuyAllButton;

  /// @brief Field hasBuyAllCost, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_hasBuyAllCost, put = __cordl_internal_set_hasBuyAllCost)) bool hasBuyAllCost;

  /// @brief Field isActive, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isButtonUncovered, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_isButtonUncovered, put = __cordl_internal_set_isButtonUncovered)) bool isButtonUncovered;

  /// @brief Field isBuyAllInProgress, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isBuyAllInProgress, put = setStaticF_isBuyAllInProgress)) bool isBuyAllInProgress;

  /// @brief Field isMasterPlayerUncoveringButton, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_isMasterPlayerUncoveringButton, put = __cordl_internal_set_isMasterPlayerUncoveringButton)) bool isMasterPlayerUncoveringButton;

  /// @brief Field isRegisteredForActiveCallbacks, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForActiveCallbacks, put = __cordl_internal_set_isRegisteredForActiveCallbacks)) bool isRegisteredForActiveCallbacks;

  /// @brief Field isUncoveredByAnotherPlayer, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_isUncoveredByAnotherPlayer, put = __cordl_internal_set_isUncoveredByAnotherPlayer)) bool isUncoveredByAnotherPlayer;

  /// @brief Field isVoteInProgress, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_isVoteInProgress, put = __cordl_internal_set_isVoteInProgress)) bool isVoteInProgress;

  /// @brief Field itemsToBuy, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_itemsToBuy, put = __cordl_internal_set_itemsToBuy))::System::Collections::Generic::List_1<::StringW>* itemsToBuy;

  /// @brief Field masterPlayer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::MasterPlayer> masterPlayer;

  /// @brief Field messageText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_messageText, put = __cordl_internal_set_messageText))::UnityW<::UnityEngine::UI::Text> messageText;

  /// @brief Field nextUncoverSendTime, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_nextUncoverSendTime, put = __cordl_internal_set_nextUncoverSendTime)) float_t nextUncoverSendTime;

  /// @brief Field remainingUncoveredByAnotherPlayerDuration, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_remainingUncoveredByAnotherPlayerDuration,
                      put = __cordl_internal_set_remainingUncoveredByAnotherPlayerDuration)) float_t remainingUncoveredByAnotherPlayerDuration;

  /// @brief Field storeInstance, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_storeInstance, put = __cordl_internal_set_storeInstance))::GlobalNamespace::CosmeticsStoreInstance* storeInstance;

  /// @brief Field uncoverButtonDistance, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_uncoverButtonDistance, put = __cordl_internal_set_uncoverButtonDistance)) float_t uncoverButtonDistance;

  /// @brief Field uncoverButtonDistanceCenter, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_uncoverButtonDistanceCenter, put = __cordl_internal_set_uncoverButtonDistanceCenter))::UnityEngine::Vector3 uncoverButtonDistanceCenter;

  /// @brief Method DeregisterConsole, addr 0x1543420, size 0x80, virtual false, abstract: false, final false
  static inline void DeregisterConsole(::GlobalNamespace::BuyAllConsole* console);

  /// @brief Method DoConfettiRoutine, addr 0x1545180, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoConfettiRoutine(int32_t numFires, float_t delayBetweenFires);

  /// @brief Method FireConfetti, addr 0x1545230, size 0xe0, virtual false, abstract: false, final false
  inline void FireConfetti();

  static inline ::GlobalNamespace::BuyAllConsole* New_ctor();

  /// @brief Method OnBuyAllButtonPressed, addr 0x1544898, size 0x13c, virtual false, abstract: false, final false
  inline void OnBuyAllButtonPressed();

  /// @brief Method OnBuyAllFailure, addr 0x1544d4c, size 0xf4, virtual false, abstract: false, final false
  inline void OnBuyAllFailure(::StringW errorType);

  /// @brief Method OnBuyAllSuccess, addr 0x1544bf8, size 0x58, virtual false, abstract: false, final false
  inline void OnBuyAllSuccess();

  /// @brief Method OnCurrencyUpdated, addr 0x154469c, size 0x4, virtual false, abstract: false, final false
  inline void OnCurrencyUpdated(int32_t newCurrency, bool isDeduction);

  /// @brief Method OnDisable, addr 0x1543ab4, size 0x32c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x15434a0, size 0x19c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsActiveModeUpdated, addr 0x154363c, size 0x478, virtual false, abstract: false, final false
  inline void OnIsActiveModeUpdated(bool newIsActiveMode);

  /// @brief Method OnOwnedPatternsUpdated, addr 0x1544698, size 0x4, virtual false, abstract: false, final false
  inline void OnOwnedPatternsUpdated(::System::Collections::Generic::List_1<::StringW>* newOwnedPatternKeys);

  /// @brief Method OnReceiveBeginParty, addr 0x1544fe4, size 0x19c, virtual false, abstract: false, final false
  static inline void OnReceiveBeginParty();

  /// @brief Method OnReceiveUncoverButton, addr 0x1544e40, size 0x18c, virtual false, abstract: false, final false
  static inline void OnReceiveUncoverButton();

  /// @brief Method OnStoreRotationUpdated, addr 0x1544694, size 0x4, virtual false, abstract: false, final false
  inline void OnStoreRotationUpdated(::GlobalNamespace::GlobalRotation newStoreRotation);

  /// @brief Method RefreshCanAfford, addr 0x1544280, size 0xec, virtual false, abstract: false, final false
  inline void RefreshCanAfford();

  /// @brief Method RefreshCost, addr 0x1543de0, size 0x4a0, virtual false, abstract: false, final false
  inline void RefreshCost();

  /// @brief Method RefreshIsButtonUncovered, addr 0x1544674, size 0x20, virtual false, abstract: false, final false
  inline void RefreshIsButtonUncovered();

  /// @brief Method RegisterConsole, addr 0x154330c, size 0x114, virtual false, abstract: false, final false
  static inline void RegisterConsole(::GlobalNamespace::BuyAllConsole* console);

  /// @brief Method SendBeginParty, addr 0x1544c50, size 0xfc, virtual false, abstract: false, final false
  static inline void SendBeginParty();

  /// @brief Method SendUncoverButtonForOtherPlayers, addr 0x15445a4, size 0xd0, virtual false, abstract: false, final false
  inline void SendUncoverButtonForOtherPlayers();

  /// @brief Method SetIsButtonUncovered, addr 0x1544850, size 0x48, virtual false, abstract: false, final false
  inline void SetIsButtonUncovered(bool newIsButtonUncovered);

  /// @brief Method SetMasterPlayerUncoveringButton, addr 0x154436c, size 0x5c, virtual false, abstract: false, final false
  inline void SetMasterPlayerUncoveringButton(bool newIsMasterPlayerUncoveringButton);

  /// @brief Method TryExecuteBuyAll, addr 0x1544b68, size 0x90, virtual false, abstract: false, final false
  inline void TryExecuteBuyAll();

  /// @brief Method UncoverButtonByAnotherPlayer, addr 0x1544fcc, size 0x18, virtual false, abstract: false, final false
  inline void UncoverButtonByAnotherPlayer();

  /// @brief Method Update, addr 0x15443c8, size 0x1dc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method <OnBuyAllButtonPressed>b__39_0, addr 0x15453a8, size 0x90, virtual false, abstract: false, final false
  inline void _OnBuyAllButtonPressed_b__39_0(::GlobalNamespace::__ImaginationPrompt__ActionType actionTaken);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr int32_t const& __cordl_internal_get_buyAllCost() const;

  constexpr int32_t& __cordl_internal_get_buyAllCost();

  constexpr bool const& __cordl_internal_get_canAfford() const;

  constexpr bool& __cordl_internal_get_canAfford();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> const& __cordl_internal_get_confettiCannons() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*>& __cordl_internal_get_confettiCannons();

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay> const& __cordl_internal_get_costDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay>& __cordl_internal_get_costDisplay();

  constexpr ::UnityW<::GlobalNamespace::CoveredButton> const& __cordl_internal_get_coveredBuyAllButton() const;

  constexpr ::UnityW<::GlobalNamespace::CoveredButton>& __cordl_internal_get_coveredBuyAllButton();

  constexpr bool const& __cordl_internal_get_hasBuyAllCost() const;

  constexpr bool& __cordl_internal_get_hasBuyAllCost();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isButtonUncovered() const;

  constexpr bool& __cordl_internal_get_isButtonUncovered();

  constexpr bool const& __cordl_internal_get_isMasterPlayerUncoveringButton() const;

  constexpr bool& __cordl_internal_get_isMasterPlayerUncoveringButton();

  constexpr bool const& __cordl_internal_get_isRegisteredForActiveCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForActiveCallbacks();

  constexpr bool const& __cordl_internal_get_isUncoveredByAnotherPlayer() const;

  constexpr bool& __cordl_internal_get_isUncoveredByAnotherPlayer();

  constexpr bool const& __cordl_internal_get_isVoteInProgress() const;

  constexpr bool& __cordl_internal_get_isVoteInProgress();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_itemsToBuy();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_itemsToBuy() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayer>& __cordl_internal_get_masterPlayer();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_messageText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_messageText();

  constexpr float_t const& __cordl_internal_get_nextUncoverSendTime() const;

  constexpr float_t& __cordl_internal_get_nextUncoverSendTime();

  constexpr float_t const& __cordl_internal_get_remainingUncoveredByAnotherPlayerDuration() const;

  constexpr float_t& __cordl_internal_get_remainingUncoveredByAnotherPlayerDuration();

  constexpr ::GlobalNamespace::CosmeticsStoreInstance*& __cordl_internal_get_storeInstance();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CosmeticsStoreInstance*> const& __cordl_internal_get_storeInstance() const;

  constexpr float_t const& __cordl_internal_get_uncoverButtonDistance() const;

  constexpr float_t& __cordl_internal_get_uncoverButtonDistance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_uncoverButtonDistanceCenter() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_uncoverButtonDistanceCenter();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_buyAllCost(int32_t value);

  constexpr void __cordl_internal_set_canAfford(bool value);

  constexpr void __cordl_internal_set_confettiCannons(::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> value);

  constexpr void __cordl_internal_set_costDisplay(::UnityW<::GlobalNamespace::CurrencyDisplay> value);

  constexpr void __cordl_internal_set_coveredBuyAllButton(::UnityW<::GlobalNamespace::CoveredButton> value);

  constexpr void __cordl_internal_set_hasBuyAllCost(bool value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isButtonUncovered(bool value);

  constexpr void __cordl_internal_set_isMasterPlayerUncoveringButton(bool value);

  constexpr void __cordl_internal_set_isRegisteredForActiveCallbacks(bool value);

  constexpr void __cordl_internal_set_isUncoveredByAnotherPlayer(bool value);

  constexpr void __cordl_internal_set_isVoteInProgress(bool value);

  constexpr void __cordl_internal_set_itemsToBuy(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::MasterPlayer> value);

  constexpr void __cordl_internal_set_messageText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_nextUncoverSendTime(float_t value);

  constexpr void __cordl_internal_set_remainingUncoveredByAnotherPlayerDuration(float_t value);

  constexpr void __cordl_internal_set_storeInstance(::GlobalNamespace::CosmeticsStoreInstance* value);

  constexpr void __cordl_internal_set_uncoverButtonDistance(float_t value);

  constexpr void __cordl_internal_set_uncoverButtonDistanceCenter(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x1545310, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuyAllConsole>>* getStaticF_activeConsoles();

  static inline bool getStaticF_isBuyAllInProgress();

  static inline void setStaticF_activeConsoles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuyAllConsole>>* value);

  static inline void setStaticF_isBuyAllInProgress(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuyAllConsole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuyAllConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuyAllConsole(BuyAllConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuyAllConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuyAllConsole(BuyAllConsole const&) = delete;

  /// @brief Field activeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field coveredBuyAllButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CoveredButton> ___coveredBuyAllButton;

  /// @brief Field confettiCannons, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> ___confettiCannons;

  /// @brief Field messageText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___messageText;

  /// @brief Field costDisplay, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CurrencyDisplay> ___costDisplay;

  /// @brief Field hasBuyAllCost, offset: 0x40, size: 0x1, def value: None
  bool ___hasBuyAllCost;

  /// @brief Field buyAllCost, offset: 0x44, size: 0x4, def value: None
  int32_t ___buyAllCost;

  /// @brief Field canAfford, offset: 0x48, size: 0x1, def value: None
  bool ___canAfford;

  /// @brief Field itemsToBuy, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___itemsToBuy;

  /// @brief Field uncoverButtonDistanceCenter, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___uncoverButtonDistanceCenter;

  /// @brief Field uncoverButtonDistance, offset: 0x64, size: 0x4, def value: None
  float_t ___uncoverButtonDistance;

  /// @brief Field masterPlayer, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayer> ___masterPlayer;

  /// @brief Field isMasterPlayerUncoveringButton, offset: 0x70, size: 0x1, def value: None
  bool ___isMasterPlayerUncoveringButton;

  /// @brief Field nextUncoverSendTime, offset: 0x74, size: 0x4, def value: None
  float_t ___nextUncoverSendTime;

  /// @brief Field isUncoveredByAnotherPlayer, offset: 0x78, size: 0x1, def value: None
  bool ___isUncoveredByAnotherPlayer;

  /// @brief Field remainingUncoveredByAnotherPlayerDuration, offset: 0x7c, size: 0x4, def value: None
  float_t ___remainingUncoveredByAnotherPlayerDuration;

  /// @brief Field isButtonUncovered, offset: 0x80, size: 0x1, def value: None
  bool ___isButtonUncovered;

  /// @brief Field isActive, offset: 0x81, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isRegisteredForActiveCallbacks, offset: 0x82, size: 0x1, def value: None
  bool ___isRegisteredForActiveCallbacks;

  /// @brief Field storeInstance, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::CosmeticsStoreInstance* ___storeInstance;

  /// @brief Field isVoteInProgress, offset: 0x90, size: 0x1, def value: None
  bool ___isVoteInProgress;

  /// @brief Field partyDurationSeconds offset 0xffffffff size 0x4
  static constexpr float_t partyDurationSeconds{ 90.0 };

  /// @brief Field timeBetweenUncoverSends offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenUncoverSends{ 2.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BuyAllConsole, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___activeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___coveredBuyAllButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___confettiCannons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___messageText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___costDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___hasBuyAllCost) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___buyAllCost) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___canAfford) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___itemsToBuy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___uncoverButtonDistanceCenter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___uncoverButtonDistance) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___masterPlayer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___isMasterPlayerUncoveringButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___nextUncoverSendTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___isUncoveredByAnotherPlayer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___remainingUncoveredByAnotherPlayerDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___isButtonUncovered) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___isActive) == 0x81, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___isRegisteredForActiveCallbacks) == 0x82, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___storeInstance) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuyAllConsole, ___isVoteInProgress) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BuyAllConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuyAllConsole*, "", "BuyAllConsole");
NEED_NO_BOX(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BuyAllConsole___DoConfettiRoutine_d__48*, "", "BuyAllConsole/<DoConfettiRoutine>d__48");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BuyAllConsole___TryExecuteBuyAll_d__40, "", "BuyAllConsole/<TryExecuteBuyAll>d__40");
