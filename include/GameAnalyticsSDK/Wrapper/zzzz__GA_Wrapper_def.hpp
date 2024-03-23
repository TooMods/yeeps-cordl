#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GA_Wrapper)
namespace GameAnalyticsSDK {
struct GAAdAction;
}
namespace GameAnalyticsSDK {
struct GAAdError;
}
namespace GameAnalyticsSDK {
struct GAAdType;
}
namespace GameAnalyticsSDK {
struct GAErrorSeverity;
}
namespace GameAnalyticsSDK {
struct GAProgressionStatus;
}
namespace GameAnalyticsSDK {
struct GAResourceFlowType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AndroidJavaClass;
}
// Forward declare root types
namespace GameAnalyticsSDK::Wrapper {
class GA_Wrapper;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Wrapper::GA_Wrapper);
// Type: GameAnalyticsSDK.Wrapper::GA_Wrapper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Wrapper {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Wrapper::GA_Wrapper*
class CORDL_TYPE GA_Wrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field GA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GA, put = setStaticF_GA))::UnityEngine::AndroidJavaClass* GA;

  /// @brief Field UNITY_GA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_UNITY_GA, put = setStaticF_UNITY_GA))::UnityEngine::AndroidJavaClass* UNITY_GA;

  /// @brief Method AddAdEvent, addr 0x107dc24, size 0x9c, virtual false, abstract: false, final false
  static inline void AddAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement,
                                ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddAdEventWithDuration, addr 0x107dadc, size 0xa4, virtual false, abstract: false, final false
  static inline void AddAdEventWithDuration(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement, int64_t duration,
                                            ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddAdEventWithReason, addr 0x107db80, size 0xa4, virtual false, abstract: false, final false
  static inline void AddAdEventWithReason(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement,
                                          ::GameAnalyticsSDK::GAAdError noAdReason, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddBusinessEvent, addr 0x107d6d0, size 0xa4, virtual false, abstract: false, final false
  static inline void AddBusinessEvent(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType,
                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddBusinessEventWithReceipt, addr 0x107d600, size 0xd0, virtual false, abstract: false, final false
  static inline void AddBusinessEventWithReceipt(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType, ::StringW receipt, ::StringW store, ::StringW signature,
                                                 ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddDesignEvent, addr 0x107d960, size 0x84, virtual false, abstract: false, final false
  static inline void AddDesignEvent(::StringW eventID, float_t eventValue, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddDesignEvent, addr 0x107d9e4, size 0x74, virtual false, abstract: false, final false
  static inline void AddDesignEvent(::StringW eventID, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddErrorEvent, addr 0x107da58, size 0x84, virtual false, abstract: false, final false
  static inline void AddErrorEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields,
                                   bool mergeFields);

  /// @brief Method AddProgressionEvent, addr 0x107d820, size 0x9c, virtual false, abstract: false, final false
  static inline void AddProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03,
                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddProgressionEventWithScore, addr 0x107d8bc, size 0xa4, virtual false, abstract: false, final false
  static inline void AddProgressionEventWithScore(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03, int32_t score,
                                                  ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method AddResourceEvent, addr 0x107d774, size 0xac, virtual false, abstract: false, final false
  static inline void AddResourceEvent(::GameAnalyticsSDK::GAResourceFlowType flowType, ::StringW currency, float_t amount, ::StringW itemType, ::StringW itemId,
                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method DictionaryToJsonString, addr 0x107d2d0, size 0x330, virtual false, abstract: false, final false
  static inline ::StringW DictionaryToJsonString(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* dict);

  /// @brief Method EndSession, addr 0x107d084, size 0x94, virtual false, abstract: false, final false
  static inline void EndSession();

  /// @brief Method GetABTestingId, addr 0x107de64, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetABTestingId();

  /// @brief Method GetABTestingVariantId, addr 0x107deb0, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetABTestingVariantId();

  /// @brief Method GetRemoteConfigsContentAsString, addr 0x107de18, size 0x4c, virtual false, abstract: false, final false
  static inline ::StringW GetRemoteConfigsContentAsString();

  /// @brief Method GetRemoteConfigsValueAsString, addr 0x107dd68, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW GetRemoteConfigsValueAsString(::StringW key, ::StringW defaultValue);

  /// @brief Method Initialize, addr 0x107d118, size 0x64, virtual false, abstract: false, final false
  static inline void Initialize(::StringW gamekey, ::StringW gamesecret);

  /// @brief Method IsRemoteConfigsReady, addr 0x107ddcc, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsRemoteConfigsReady();

  static inline ::GameAnalyticsSDK::Wrapper::GA_Wrapper* New_ctor();

  /// @brief Method PauseTimer, addr 0x107df54, size 0x54, virtual false, abstract: false, final false
  static inline void PauseTimer(::StringW key);

  /// @brief Method ResumeTimer, addr 0x107dfa8, size 0x54, virtual false, abstract: false, final false
  static inline void ResumeTimer(::StringW key);

  /// @brief Method SetAutoDetectAppVersion, addr 0x107cf48, size 0x54, virtual false, abstract: false, final false
  static inline void SetAutoDetectAppVersion(bool flag);

  /// @brief Method SetAvailableCustomDimensions01, addr 0x107cbac, size 0x54, virtual false, abstract: false, final false
  static inline void SetAvailableCustomDimensions01(::StringW list);

  /// @brief Method SetAvailableCustomDimensions02, addr 0x107cc00, size 0x54, virtual false, abstract: false, final false
  static inline void SetAvailableCustomDimensions02(::StringW list);

  /// @brief Method SetAvailableCustomDimensions03, addr 0x107cc54, size 0x54, virtual false, abstract: false, final false
  static inline void SetAvailableCustomDimensions03(::StringW list);

  /// @brief Method SetAvailableResourceCurrencies, addr 0x107cca8, size 0x54, virtual false, abstract: false, final false
  static inline void SetAvailableResourceCurrencies(::StringW list);

  /// @brief Method SetAvailableResourceItemTypes, addr 0x107ccfc, size 0x54, virtual false, abstract: false, final false
  static inline void SetAvailableResourceItemTypes(::StringW list);

  /// @brief Method SetBuild, addr 0x107cdf8, size 0x54, virtual false, abstract: false, final false
  static inline void SetBuild(::StringW build);

  /// @brief Method SetCustomDimension01, addr 0x107d17c, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomDimension01(::StringW customDimension);

  /// @brief Method SetCustomDimension02, addr 0x107d1d0, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomDimension02(::StringW customDimension);

  /// @brief Method SetCustomDimension03, addr 0x107d224, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomDimension03(::StringW customDimension);

  /// @brief Method SetCustomUserId, addr 0x107ce4c, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomUserId(::StringW userId);

  /// @brief Method SetEnabledEventSubmission, addr 0x107cef4, size 0x54, virtual false, abstract: false, final false
  static inline void SetEnabledEventSubmission(bool enabled);

  /// @brief Method SetEnabledManualSessionHandling, addr 0x107cea0, size 0x54, virtual false, abstract: false, final false
  static inline void SetEnabledManualSessionHandling(bool enabled);

  /// @brief Method SetGlobalCustomEventFields, addr 0x107d278, size 0x58, virtual false, abstract: false, final false
  static inline void SetGlobalCustomEventFields(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields);

  /// @brief Method SetInfoLog, addr 0x107dcc0, size 0x54, virtual false, abstract: false, final false
  static inline void SetInfoLog(bool enabled);

  /// @brief Method SetUnityEngineVersion, addr 0x107cda4, size 0x54, virtual false, abstract: false, final false
  static inline void SetUnityEngineVersion(::StringW unityEngineVersion);

  /// @brief Method SetUnitySdkVersion, addr 0x107cd50, size 0x54, virtual false, abstract: false, final false
  static inline void SetUnitySdkVersion(::StringW unitySdkVersion);

  /// @brief Method SetVerboseLog, addr 0x107dd14, size 0x54, virtual false, abstract: false, final false
  static inline void SetVerboseLog(bool enabled);

  /// @brief Method StartSession, addr 0x107cf9c, size 0x94, virtual false, abstract: false, final false
  static inline void StartSession();

  /// @brief Method StartTimer, addr 0x107df00, size 0x54, virtual false, abstract: false, final false
  static inline void StartTimer(::StringW key);

  /// @brief Method StopTimer, addr 0x107dffc, size 0x54, virtual false, abstract: false, final false
  static inline int64_t StopTimer(::StringW key);

  /// @brief Method .ctor, addr 0x107e050, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method addAdEvent, addr 0x107b8cc, size 0x24c, virtual false, abstract: false, final false
  static inline void addAdEvent(int32_t adAction, int32_t adType, ::StringW adSdkName, ::StringW adPlacement, ::StringW fields, bool mergeFields);

  /// @brief Method addAdEventWithDuration, addr 0x107b390, size 0x2a8, virtual false, abstract: false, final false
  static inline void addAdEventWithDuration(int32_t adAction, int32_t adType, ::StringW adSdkName, ::StringW adPlacement, int64_t duration, ::StringW fields, bool mergeFields);

  /// @brief Method addAdEventWithReason, addr 0x107b638, size 0x294, virtual false, abstract: false, final false
  static inline void addAdEventWithReason(int32_t adAction, int32_t adType, ::StringW adSdkName, ::StringW adPlacement, int32_t noAdReason, ::StringW fields, bool mergeFields);

  /// @brief Method addBusinessEvent, addr 0x107a1b0, size 0x264, virtual false, abstract: false, final false
  static inline void addBusinessEvent(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType, ::StringW fields, bool mergeFields);

  /// @brief Method addBusinessEventWithReceipt, addr 0x107a414, size 0x2e8, virtual false, abstract: false, final false
  static inline void addBusinessEventWithReceipt(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType, ::StringW receipt, ::StringW store, ::StringW signature,
                                                 ::StringW fields, bool mergeFields);

  /// @brief Method addDesignEvent, addr 0x107ae60, size 0x17c, virtual false, abstract: false, final false
  static inline void addDesignEvent(::StringW eventId, ::StringW fields, bool mergeFields);

  /// @brief Method addDesignEventWithValue, addr 0x107afdc, size 0x1dc, virtual false, abstract: false, final false
  static inline void addDesignEventWithValue(::StringW eventId, float_t value, ::StringW fields, bool mergeFields);

  /// @brief Method addErrorEvent, addr 0x107b1b8, size 0x1d8, virtual false, abstract: false, final false
  static inline void addErrorEvent(int32_t severity, ::StringW message, ::StringW fields, bool mergeFields);

  /// @brief Method addProgressionEvent, addr 0x107a990, size 0x238, virtual false, abstract: false, final false
  static inline void addProgressionEvent(int32_t progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03, ::StringW fields, bool mergeFields);

  /// @brief Method addProgressionEventWithScore, addr 0x107abc8, size 0x298, virtual false, abstract: false, final false
  static inline void addProgressionEventWithScore(int32_t progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03, int32_t score, ::StringW fields,
                                                  bool mergeFields);

  /// @brief Method addResourceEvent, addr 0x107a6fc, size 0x294, virtual false, abstract: false, final false
  static inline void addResourceEvent(int32_t flowType, ::StringW currency, float_t amount, ::StringW itemType, ::StringW itemId, ::StringW fields, bool mergeFields);

  /// @brief Method configureAutoDetectAppVersion, addr 0x10799b4, size 0x118, virtual false, abstract: false, final false
  static inline void configureAutoDetectAppVersion(bool flag);

  /// @brief Method configureAvailableCustomDimensions01, addr 0x1077ffc, size 0x46c, virtual false, abstract: false, final false
  static inline void configureAvailableCustomDimensions01(::StringW list);

  /// @brief Method configureAvailableCustomDimensions02, addr 0x1078474, size 0x46c, virtual false, abstract: false, final false
  static inline void configureAvailableCustomDimensions02(::StringW list);

  /// @brief Method configureAvailableCustomDimensions03, addr 0x10788e0, size 0x46c, virtual false, abstract: false, final false
  static inline void configureAvailableCustomDimensions03(::StringW list);

  /// @brief Method configureAvailableResourceCurrencies, addr 0x1078d4c, size 0x46c, virtual false, abstract: false, final false
  static inline void configureAvailableResourceCurrencies(::StringW list);

  /// @brief Method configureAvailableResourceItemTypes, addr 0x10791b8, size 0x46c, virtual false, abstract: false, final false
  static inline void configureAvailableResourceItemTypes(::StringW list);

  /// @brief Method configureBuild, addr 0x10797ec, size 0xe4, virtual false, abstract: false, final false
  static inline void configureBuild(::StringW build);

  /// @brief Method configureGameEngineVersion, addr 0x1079708, size 0xe4, virtual false, abstract: false, final false
  static inline void configureGameEngineVersion(::StringW unityEngineVersion);

  /// @brief Method configureSdkGameEngineVersion, addr 0x1079624, size 0xe4, virtual false, abstract: false, final false
  static inline void configureSdkGameEngineVersion(::StringW unitySdkVersion);

  /// @brief Method configureUserId, addr 0x10798d0, size 0xe4, virtual false, abstract: false, final false
  static inline void configureUserId(::StringW userId);

  /// @brief Method enableGAIDTracking, addr 0x107ca94, size 0x118, virtual false, abstract: false, final false
  static inline void enableGAIDTracking(bool flag);

  /// @brief Method gameAnalyticsEndSession, addr 0x107c050, size 0xd8, virtual false, abstract: false, final false
  static inline void gameAnalyticsEndSession();

  /// @brief Method gameAnalyticsStartSession, addr 0x107bf78, size 0xd8, virtual false, abstract: false, final false
  static inline void gameAnalyticsStartSession();

  /// @brief Method getABTestingId, addr 0x107c42c, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW getABTestingId();

  /// @brief Method getABTestingVariantId, addr 0x107c518, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW getABTestingVariantId();

  /// @brief Method getRemoteConfigsContentAsString, addr 0x107c340, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW getRemoteConfigsContentAsString();

  /// @brief Method getRemoteConfigsValueAsString, addr 0x107c128, size 0x12c, virtual false, abstract: false, final false
  static inline ::StringW getRemoteConfigsValueAsString(::StringW key, ::StringW defaultValue);

  static inline ::UnityEngine::AndroidJavaClass* getStaticF_GA();

  static inline ::UnityEngine::AndroidJavaClass* getStaticF_UNITY_GA();

  /// @brief Method getUserId, addr 0x107c9a8, size 0xec, virtual false, abstract: false, final false
  static inline ::StringW getUserId();

  /// @brief Method initialize, addr 0x1079acc, size 0x354, virtual false, abstract: false, final false
  static inline void initialize(::StringW gamekey, ::StringW gamesecret);

  /// @brief Method isRemoteConfigsReady, addr 0x107c254, size 0xec, virtual false, abstract: false, final false
  static inline bool isRemoteConfigsReady();

  /// @brief Method pauseTimer, addr 0x107c6e8, size 0xe4, virtual false, abstract: false, final false
  static inline void pauseTimer(::StringW key);

  /// @brief Method resumeTimer, addr 0x107c7cc, size 0xe4, virtual false, abstract: false, final false
  static inline void resumeTimer(::StringW key);

  /// @brief Method setCustomDimension01, addr 0x1079e20, size 0xe4, virtual false, abstract: false, final false
  static inline void setCustomDimension01(::StringW customDimension);

  /// @brief Method setCustomDimension02, addr 0x1079f04, size 0xe4, virtual false, abstract: false, final false
  static inline void setCustomDimension02(::StringW customDimension);

  /// @brief Method setCustomDimension03, addr 0x1079fe8, size 0xe4, virtual false, abstract: false, final false
  static inline void setCustomDimension03(::StringW customDimension);

  /// @brief Method setEnabledInfoLog, addr 0x107bb18, size 0x118, virtual false, abstract: false, final false
  static inline void setEnabledInfoLog(bool enabled);

  /// @brief Method setEnabledVerboseLog, addr 0x107bc30, size 0x118, virtual false, abstract: false, final false
  static inline void setEnabledVerboseLog(bool enabled);

  /// @brief Method setEventSubmission, addr 0x107be60, size 0x118, virtual false, abstract: false, final false
  static inline void setEventSubmission(bool enabled);

  /// @brief Method setGlobalCustomEventFields, addr 0x107a0cc, size 0xe4, virtual false, abstract: false, final false
  static inline void setGlobalCustomEventFields(::StringW customFields);

  /// @brief Method setManualSessionHandling, addr 0x107bd48, size 0x118, virtual false, abstract: false, final false
  static inline void setManualSessionHandling(bool enabled);

  static inline void setStaticF_GA(::UnityEngine::AndroidJavaClass* value);

  static inline void setStaticF_UNITY_GA(::UnityEngine::AndroidJavaClass* value);

  /// @brief Method startTimer, addr 0x107c604, size 0xe4, virtual false, abstract: false, final false
  static inline void startTimer(::StringW key);

  /// @brief Method stopTimer, addr 0x107c8b0, size 0xf8, virtual false, abstract: false, final false
  static inline int64_t stopTimer(::StringW key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Wrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Wrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Wrapper(GA_Wrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Wrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Wrapper(GA_Wrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Wrapper::GA_Wrapper, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Wrapper
NEED_NO_BOX(::GameAnalyticsSDK::Wrapper::GA_Wrapper);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Wrapper::GA_Wrapper*, "GameAnalyticsSDK.Wrapper", "GA_Wrapper");
