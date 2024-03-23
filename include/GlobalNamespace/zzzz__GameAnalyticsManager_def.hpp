#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AWSDatabase_def.hpp"
#include "GlobalNamespace/zzzz__Singleton_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameAnalyticsManager)
namespace GameAnalyticsSDK {
class IGameAnalyticsATTListener;
}
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class Room;
}
namespace GlobalNamespace {
struct __AWSDatabase__LambdaResponse;
}
namespace GlobalNamespace {
struct __GameAnalyticsManager___LogAnalyticEventToDatabase_d__41;
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
// Forward declare root types
namespace GlobalNamespace {
class GameAnalyticsManager;
}
namespace GlobalNamespace {
struct __GameAnalyticsManager___LogAnalyticEventToDatabase_d__41;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameAnalyticsManager);
MARK_VAL_T(::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41);
// Type: ::<LogAnalyticEventToDatabase>d__41
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::GameAnalyticsManager::<LogAnalyticEventToDatabase>d__41
struct CORDL_TYPE __GameAnalyticsManager___LogAnalyticEventToDatabase_d__41 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x1585c24, size 0x4d0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x15863e4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GameAnalyticsManager___LogAnalyticEventToDatabase_d__41();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "eventKey", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse>", modifiers: "", def_value: None }]
  constexpr __GameAnalyticsManager___LogAnalyticEventToDatabase_d__41(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::StringW eventKey,
                                                                      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field eventKey, offset: 0x28, size: 0x8, def value: None
  ::StringW eventKey;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::__AWSDatabase__LambdaResponse> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41, eventKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GameAnalyticsManager
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameAnalyticsManager*
class CORDL_TYPE GameAnalyticsManager : public ::GlobalNamespace::Singleton_1<::UnityW<::GlobalNamespace::GameAnalyticsManager>> {
public:
  // Declarations
  using _LogAnalyticEventToDatabase_d__41 = ::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41;

  /// @brief Field accountCreatedDate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_accountCreatedDate, put = setStaticF_accountCreatedDate))::System::DateTime accountCreatedDate;

  /// @brief Field completedTutorialEvents, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_completedTutorialEvents, put = setStaticF_completedTutorialEvents))::System::Collections::Generic::List_1<::StringW>* completedTutorialEvents;

  /// @brief Field hasStartedFirstTutorial, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hasStartedFirstTutorial, put = setStaticF_hasStartedFirstTutorial)) bool hasStartedFirstTutorial;

  /// @brief Field isGameAnalyticsInitialized, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isGameAnalyticsInitialized, put = setStaticF_isGameAnalyticsInitialized)) bool isGameAnalyticsInitialized;

  /// @brief Field isInFirstTutorial, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_isInFirstTutorial, put = setStaticF_isInFirstTutorial)) bool isInFirstTutorial;

  /// @brief Field tutorialStartTime, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_tutorialStartTime, put = setStaticF_tutorialStartTime)) float_t tutorialStartTime;

  /// @brief Convert operator to "::GameAnalyticsSDK::IGameAnalyticsATTListener"
  constexpr operator ::GameAnalyticsSDK::IGameAnalyticsATTListener*() noexcept;

  /// @brief Method GameAnalyticsATTListenerAuthorized, addr 0x1584318, size 0x4, virtual true, abstract: false, final true
  inline void GameAnalyticsATTListenerAuthorized();

  /// @brief Method GameAnalyticsATTListenerDenied, addr 0x1584314, size 0x4, virtual true, abstract: false, final true
  inline void GameAnalyticsATTListenerDenied();

  /// @brief Method GameAnalyticsATTListenerNotDetermined, addr 0x158430c, size 0x4, virtual true, abstract: false, final true
  inline void GameAnalyticsATTListenerNotDetermined();

  /// @brief Method GameAnalyticsATTListenerRestricted, addr 0x1584310, size 0x4, virtual true, abstract: false, final true
  inline void GameAnalyticsATTListenerRestricted();

  /// @brief Method HasLoggedAnalyticEvent, addr 0x15853f8, size 0x78, virtual false, abstract: false, final false
  static inline bool HasLoggedAnalyticEvent(::StringW eventKey);

  /// @brief Method InitializeGameAnalytics, addr 0x1584260, size 0xac, virtual false, abstract: false, final false
  inline void InitializeGameAnalytics();

  /// @brief Method LogAnalyticEventToDatabase, addr 0x158577c, size 0x94, virtual false, abstract: false, final false
  static inline void LogAnalyticEventToDatabase(::StringW eventKey);

  /// @brief Method LogBusinessEvent, addr 0x15850ac, size 0x13c, virtual false, abstract: false, final false
  static inline void LogBusinessEvent(int32_t centAmount, ::StringW itemType, ::StringW itemKey, ::StringW cartType);

  /// @brief Method LogDesignEvent, addr 0x1585470, size 0x74, virtual false, abstract: false, final false
  static inline void LogDesignEvent(::StringW eventKey);

  /// @brief Method LogDesignEvent, addr 0x15849a8, size 0x88, virtual false, abstract: false, final false
  static inline void LogDesignEvent(::StringW eventKey, float_t value);

  /// @brief Method LogPurchaseEvent, addr 0x15843c0, size 0x124, virtual false, abstract: false, final false
  static inline void LogPurchaseEvent(int32_t cost, ::StringW typeKey, ::StringW itemKey);

  /// @brief Method LogSourceEvent, addr 0x1584e50, size 0x124, virtual false, abstract: false, final false
  static inline void LogSourceEvent(int32_t amount, ::StringW typeKey, ::StringW itemKey);

  static inline ::GlobalNamespace::GameAnalyticsManager* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x1584034, size 0x124, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnBoughtATMCurrency, addr 0x1584f74, size 0x138, virtual false, abstract: false, final false
  static inline void OnBoughtATMCurrency(int32_t centAmount, int32_t currencyAmount, ::StringW cartType);

  /// @brief Method OnBoughtBundle, addr 0x1585258, size 0xbc, virtual false, abstract: false, final false
  static inline void OnBoughtBundle(::StringW bundleKey, int32_t currencyAmount, int32_t centCost, ::StringW cartType);

  /// @brief Method OnCompleteChallenge, addr 0x1584dac, size 0xa4, virtual false, abstract: false, final false
  static inline void OnCompleteChallenge(::StringW challengeType, int32_t currencyAmount);

  /// @brief Method OnDiscordButtonPressed, addr 0x1585988, size 0x64, virtual false, abstract: false, final false
  static inline void OnDiscordButtonPressed();

  /// @brief Method OnExpandedPrivateWorld, addr 0x1584b5c, size 0x84, virtual false, abstract: false, final false
  static inline void OnExpandedPrivateWorld(::StringW themeKey, int32_t cost);

  /// @brief Method OnLeaveReviewButtonPressed, addr 0x15859ec, size 0x64, virtual false, abstract: false, final false
  static inline void OnLeaveReviewButtonPressed();

  /// @brief Method OnLinkedMobileAccount, addr 0x1584ca0, size 0x64, virtual false, abstract: false, final false
  static inline void OnLinkedMobileAccount();

  /// @brief Method OnPlayerReported, addr 0x1585924, size 0x64, virtual false, abstract: false, final false
  static inline void OnPlayerReported();

  /// @brief Method OnPurchasedCosmeticItem, addr 0x1584890, size 0x118, virtual false, abstract: false, final false
  static inline void OnPurchasedCosmeticItem(::StringW itemKey, ::StringW poolKey, int32_t rarityIndex, int32_t cost);

  /// @brief Method OnPurchasedCosmeticRotation, addr 0x1584a30, size 0x84, virtual false, abstract: false, final false
  static inline void OnPurchasedCosmeticRotation(::StringW themeKey, int32_t totalCost);

  /// @brief Method OnPurchasedCreatorPack, addr 0x1584d04, size 0xa8, virtual false, abstract: false, final false
  static inline void OnPurchasedCreatorPack(int32_t cost);

  /// @brief Method OnPurchasedPrivateSandbox, addr 0x1584ab4, size 0xa8, virtual false, abstract: false, final false
  static inline void OnPurchasedPrivateSandbox(int32_t cost);

  /// @brief Method OnPurchasedTechWebItem, addr 0x158431c, size 0xa4, virtual false, abstract: false, final false
  static inline void OnPurchasedTechWebItem(::StringW itemKey, int32_t cost);

  /// @brief Method OnRedeemedCurrencyStash, addr 0x15851e8, size 0x70, virtual false, abstract: false, final false
  static inline void OnRedeemedCurrencyStash(int32_t currencyAmount);

  /// @brief Method OnRoomLoaded, addr 0x1585810, size 0x114, virtual false, abstract: false, final false
  inline void OnRoomLoaded(::GlobalNamespace::Room* room);

  /// @brief Method OnTimeSpentChannelSessionComplete, addr 0x1584be0, size 0xc0, virtual false, abstract: false, final false
  inline void OnTimeSpentChannelSessionComplete(::StringW channelKey, ::StringW key, float_t timeSpent);

  /// @brief Method OnTutorialCompleted, addr 0x1585690, size 0xec, virtual false, abstract: false, final false
  static inline void OnTutorialCompleted();

  /// @brief Method OnTutorialEventTriggered, addr 0x15854e4, size 0x1ac, virtual false, abstract: false, final false
  static inline void OnTutorialEventTriggered(::StringW eventKey);

  /// @brief Method OnTutorialStarted, addr 0x1585314, size 0xe4, virtual false, abstract: false, final false
  static inline void OnTutorialStarted();

  /// @brief Method Sanitize, addr 0x1585a50, size 0xf0, virtual false, abstract: false, final false
  static inline ::StringW Sanitize(::StringW input);

  /// @brief Method SetupForGameAnalytics, addr 0x1584230, size 0x30, virtual false, abstract: false, final false
  inline void SetupForGameAnalytics();

  /// @brief Method Start, addr 0x1583db0, size 0x284, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryLogFirstEvent, addr 0x15844e4, size 0x1c4, virtual false, abstract: false, final false
  static inline void TryLogFirstEvent(::StringW eventKey);

  /// @brief Method TryLogPurchaseHistoryEvent, addr 0x15846a8, size 0x1e8, virtual false, abstract: false, final false
  static inline void TryLogPurchaseHistoryEvent(::StringW itemType, int32_t cost);

  /// @brief Method .ctor, addr 0x1585b40, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::DateTime getStaticF_accountCreatedDate();

  static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_completedTutorialEvents();

  static inline bool getStaticF_hasStartedFirstTutorial();

  static inline bool getStaticF_isGameAnalyticsInitialized();

  static inline bool getStaticF_isInFirstTutorial();

  static inline float_t getStaticF_tutorialStartTime();

  /// @brief Convert to "::GameAnalyticsSDK::IGameAnalyticsATTListener"
  constexpr ::GameAnalyticsSDK::IGameAnalyticsATTListener* i___GameAnalyticsSDK__IGameAnalyticsATTListener() noexcept;

  static inline void setStaticF_accountCreatedDate(::System::DateTime value);

  static inline void setStaticF_completedTutorialEvents(::System::Collections::Generic::List_1<::StringW>* value);

  static inline void setStaticF_hasStartedFirstTutorial(bool value);

  static inline void setStaticF_isGameAnalyticsInitialized(bool value);

  static inline void setStaticF_isInFirstTutorial(bool value);

  static inline void setStaticF_tutorialStartTime(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameAnalyticsManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameAnalyticsManager(GameAnalyticsManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameAnalyticsManager(GameAnalyticsManager const&) = delete;

  /// @brief Field CURRENCY_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString CURRENCY_KEY{ u"buttCoins" };

  /// @brief Field MAX_DAYS_FOR_PURCHASE_HISTORY offset 0xffffffff size 0x4
  static constexpr int32_t MAX_DAYS_FOR_PURCHASE_HISTORY{ static_cast<int32_t>(0x1e) };

  /// @brief Field RESOURCE_TYPE_BUY_ALL_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString RESOURCE_TYPE_BUY_ALL_KEY{ u"buyAll" };

  /// @brief Field RESOURCE_TYPE_COSMETIC_ITEM_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString RESOURCE_TYPE_COSMETIC_ITEM_KEY{ u"cosmeticItem" };

  /// @brief Field RESOURCE_TYPE_EXPAND_PRIVATE_WORLD_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString RESOURCE_TYPE_EXPAND_PRIVATE_WORLD_KEY{ u"expandPrivateWorld" };

  /// @brief Field RESOURCE_TYPE_MOBILE_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString RESOURCE_TYPE_MOBILE_KEY{ u"mobile" };

  /// @brief Field RESOURCE_TYPE_PRIVATE_SANDBOX_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString RESOURCE_TYPE_PRIVATE_SANDBOX_KEY{ u"privateSandbox" };

  /// @brief Field RESOURCE_TYPE_TECH_WEB_ITEM_KEY offset 0xffffffff size 0x8
  static constexpr ::ConstString RESOURCE_TYPE_TECH_WEB_ITEM_KEY{ u"techWebItem" };

  /// @brief Field VALID_CHARACTERS offset 0xffffffff size 0x8
  static constexpr ::ConstString VALID_CHARACTERS{ u"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.-_" };

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Game Analytics Manager: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameAnalyticsManager, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameAnalyticsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameAnalyticsManager*, "", "GameAnalyticsManager");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameAnalyticsManager___LogAnalyticEventToDatabase_d__41, "", "GameAnalyticsManager/<LogAnalyticEventToDatabase>d__41");
