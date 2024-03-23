#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameAnalytics)
namespace GameAnalyticsSDK::Setup {
class Settings;
}
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
namespace GameAnalyticsSDK {
class IGameAnalyticsATTListener;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GameAnalyticsSDK {
class GameAnalytics;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::GameAnalytics);
// Type: GameAnalyticsSDK::GameAnalytics
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK {
// Is value type: false
// CS Name: ::GameAnalyticsSDK::GameAnalytics*
class CORDL_TYPE GameAnalytics : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field OnRemoteConfigsUpdatedEvent, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_OnRemoteConfigsUpdatedEvent, put = setStaticF_OnRemoteConfigsUpdatedEvent))::System::Action* OnRemoteConfigsUpdatedEvent;

  /// @brief Field _hasInitializeBeenCalled, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__hasInitializeBeenCalled, put = setStaticF__hasInitializeBeenCalled)) bool _hasInitializeBeenCalled;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__instance, put = setStaticF__instance))::UnityW<::GameAnalyticsSDK::GameAnalytics> _instance;

  /// @brief Field _settings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__settings, put = setStaticF__settings))::UnityW<::GameAnalyticsSDK::Setup::Settings> _settings;

  /// @brief Method Awake, addr 0xf3639c, size 0x160, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method EndSession, addr 0xf38a40, size 0x50, virtual false, abstract: false, final false
  static inline void EndSession();

  /// @brief Method GetABTestingId, addr 0xf38e00, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetABTestingId();

  /// @brief Method GetABTestingVariantId, addr 0xf38e50, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetABTestingVariantId();

  /// @brief Method GetPlatformIndex, addr 0xf36988, size 0x130, virtual false, abstract: false, final false
  static inline int32_t GetPlatformIndex();

  /// @brief Method GetRemoteConfigsContentAsString, addr 0xf38db0, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetRemoteConfigsContentAsString();

  /// @brief Method GetRemoteConfigsValueAsString, addr 0xf38cf0, size 0x8, virtual false, abstract: false, final false
  static inline ::StringW GetRemoteConfigsValueAsString(::StringW key);

  /// @brief Method GetRemoteConfigsValueAsString, addr 0xf38cf8, size 0x68, virtual false, abstract: false, final false
  static inline ::StringW GetRemoteConfigsValueAsString(::StringW key, ::StringW defaultValue);

  /// @brief Method GetUnityVersion, addr 0xf36ab8, size 0x198, virtual false, abstract: false, final false
  static inline ::StringW GetUnityVersion();

  /// @brief Method GetUserId, addr 0xf38948, size 0x50, virtual false, abstract: false, final false
  static inline ::StringW GetUserId();

  /// @brief Method InitAPI, addr 0xf3603c, size 0x21c, virtual false, abstract: false, final false
  static inline void InitAPI();

  /// @brief Method Initialize, addr 0xf36ca8, size 0x184, virtual false, abstract: false, final false
  static inline void Initialize();

  /// @brief Method InternalInitialize, addr 0xf3659c, size 0x3ec, virtual false, abstract: false, final false
  static inline void InternalInitialize();

  /// @brief Method IsRemoteConfigsReady, addr 0xf38d60, size 0x50, virtual false, abstract: false, final false
  static inline bool IsRemoteConfigsReady();

  /// @brief Method NewAdEvent, addr 0xf386c0, size 0xdc, virtual false, abstract: false, final false
  static inline void NewAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement);

  /// @brief Method NewAdEvent, addr 0xf3879c, size 0xf0, virtual false, abstract: false, final false
  static inline void NewAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement,
                                ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewAdEvent, addr 0xf38308, size 0xe4, virtual false, abstract: false, final false
  static inline void NewAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement, int64_t duration);

  /// @brief Method NewAdEvent, addr 0xf383ec, size 0xf8, virtual false, abstract: false, final false
  static inline void NewAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement, int64_t duration,
                                ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewAdEvent, addr 0xf384e4, size 0xe4, virtual false, abstract: false, final false
  static inline void NewAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement, ::GameAnalyticsSDK::GAAdError noAdReason);

  /// @brief Method NewAdEvent, addr 0xf385c8, size 0xf8, virtual false, abstract: false, final false
  static inline void NewAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement, ::GameAnalyticsSDK::GAAdError noAdReason,
                                ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewBusinessEvent, addr 0xf36e2c, size 0xe4, virtual false, abstract: false, final false
  static inline void NewBusinessEvent(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType);

  /// @brief Method NewBusinessEvent, addr 0xf36f10, size 0xf8, virtual false, abstract: false, final false
  static inline void NewBusinessEvent(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType,
                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewBusinessEventGooglePlay, addr 0xf37008, size 0x110, virtual false, abstract: false, final false
  static inline void NewBusinessEventGooglePlay(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType, ::StringW receipt, ::StringW signature);

  /// @brief Method NewBusinessEventGooglePlay, addr 0xf37118, size 0x118, virtual false, abstract: false, final false
  static inline void NewBusinessEventGooglePlay(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType, ::StringW receipt, ::StringW signature,
                                                ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewDesignEvent, addr 0xf37230, size 0xac, virtual false, abstract: false, final false
  static inline void NewDesignEvent(::StringW eventName);

  /// @brief Method NewDesignEvent, addr 0xf372dc, size 0xc0, virtual false, abstract: false, final false
  static inline void NewDesignEvent(::StringW eventName, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewDesignEvent, addr 0xf3739c, size 0xc0, virtual false, abstract: false, final false
  static inline void NewDesignEvent(::StringW eventName, float_t eventValue);

  /// @brief Method NewDesignEvent, addr 0xf3745c, size 0xd4, virtual false, abstract: false, final false
  static inline void NewDesignEvent(::StringW eventName, float_t eventValue, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewErrorEvent, addr 0xf38174, size 0xc0, virtual false, abstract: false, final false
  static inline void NewErrorEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message);

  /// @brief Method NewErrorEvent, addr 0xf38234, size 0xd4, virtual false, abstract: false, final false
  static inline void NewErrorEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields,
                                   bool mergeFields);

  /// @brief Method NewProgressionEvent, addr 0xf37530, size 0xc0, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01);

  /// @brief Method NewProgressionEvent, addr 0xf375f0, size 0xd4, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01,
                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewProgressionEvent, addr 0xf376c4, size 0xc8, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02);

  /// @brief Method NewProgressionEvent, addr 0xf3778c, size 0xdc, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02,
                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewProgressionEvent, addr 0xf37868, size 0xdc, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03);

  /// @brief Method NewProgressionEvent, addr 0xf37944, size 0xf0, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03,
                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewProgressionEvent, addr 0xf37da4, size 0xe4, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03, int32_t score);

  /// @brief Method NewProgressionEvent, addr 0xf37e88, size 0xf8, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03, int32_t score,
                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewProgressionEvent, addr 0xf37bd8, size 0xdc, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, int32_t score);

  /// @brief Method NewProgressionEvent, addr 0xf37cb4, size 0xf0, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, int32_t score,
                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewProgressionEvent, addr 0xf37a34, size 0xc8, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, int32_t score);

  /// @brief Method NewProgressionEvent, addr 0xf37afc, size 0xdc, virtual false, abstract: false, final false
  static inline void NewProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, int32_t score,
                                         ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  /// @brief Method NewResourceEvent, addr 0xf37f80, size 0xf0, virtual false, abstract: false, final false
  static inline void NewResourceEvent(::GameAnalyticsSDK::GAResourceFlowType flowType, ::StringW currency, float_t amount, ::StringW itemType, ::StringW itemId);

  /// @brief Method NewResourceEvent, addr 0xf38070, size 0x104, virtual false, abstract: false, final false
  static inline void NewResourceEvent(::GameAnalyticsSDK::GAResourceFlowType flowType, ::StringW currency, float_t amount, ::StringW itemType, ::StringW itemId,
                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields, bool mergeFields);

  static inline ::GameAnalyticsSDK::GameAnalytics* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0xf36598, size 0x4, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  /// @brief Method OnDestroy, addr 0xf364fc, size 0x9c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0xf36320, size 0x7c, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0xf362a4, size 0x7c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnRemoteConfigsUpdated, addr 0xf38c28, size 0x64, virtual false, abstract: false, final false
  inline void OnRemoteConfigsUpdated();

  /// @brief Method PauseTimer, addr 0xf38ef8, size 0x58, virtual false, abstract: false, final false
  static inline void PauseTimer(::StringW key);

  /// @brief Method RemoteConfigsUpdated, addr 0xf38c8c, size 0x64, virtual false, abstract: false, final false
  static inline void RemoteConfigsUpdated();

  /// @brief Method RequestTrackingAuthorization, addr 0xf39000, size 0x4, virtual false, abstract: false, final false
  static inline void RequestTrackingAuthorization(::GameAnalyticsSDK::IGameAnalyticsATTListener* listener);

  /// @brief Method ResumeTimer, addr 0xf38f50, size 0x58, virtual false, abstract: false, final false
  static inline void ResumeTimer(::StringW key);

  /// @brief Method SetBuildAllPlatforms, addr 0xf39004, size 0x9c, virtual false, abstract: false, final false
  static inline void SetBuildAllPlatforms(::StringW build);

  /// @brief Method SetCustomDimension01, addr 0xf38a90, size 0x8, virtual false, abstract: false, final false
  static inline void SetCustomDimension01(::StringW customDimension);

  /// @brief Method SetCustomDimension02, addr 0xf38a98, size 0x8, virtual false, abstract: false, final false
  static inline void SetCustomDimension02(::StringW customDimension);

  /// @brief Method SetCustomDimension03, addr 0xf38aa0, size 0x8, virtual false, abstract: false, final false
  static inline void SetCustomDimension03(::StringW customDimension);

  /// @brief Method SetCustomId, addr 0xf3888c, size 0xbc, virtual false, abstract: false, final false
  static inline void SetCustomId(::StringW userId);

  /// @brief Method SetEnabledEventSubmission, addr 0xf38998, size 0x58, virtual false, abstract: false, final false
  static inline void SetEnabledEventSubmission(bool enabled);

  /// @brief Method SetEnabledManualSessionHandling, addr 0xf36c50, size 0x58, virtual false, abstract: false, final false
  static inline void SetEnabledManualSessionHandling(bool enabled);

  /// @brief Method SetGlobalCustomEventFields, addr 0xf38aa8, size 0x8, virtual false, abstract: false, final false
  static inline void SetGlobalCustomEventFields(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields);

  /// @brief Method StartSession, addr 0xf389f0, size 0x50, virtual false, abstract: false, final false
  static inline void StartSession();

  /// @brief Method StartTimer, addr 0xf38ea0, size 0x58, virtual false, abstract: false, final false
  static inline void StartTimer(::StringW key);

  /// @brief Method StopTimer, addr 0xf38fa8, size 0x58, virtual false, abstract: false, final false
  static inline int64_t StopTimer(::StringW key);

  /// @brief Method .ctor, addr 0xf390a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnRemoteConfigsUpdatedEvent, addr 0xf38ab0, size 0xbc, virtual false, abstract: false, final false
  static inline void add_OnRemoteConfigsUpdatedEvent(::System::Action* value);

  static inline ::System::Action* getStaticF_OnRemoteConfigsUpdatedEvent();

  static inline bool getStaticF__hasInitializeBeenCalled();

  static inline ::UnityW<::GameAnalyticsSDK::GameAnalytics> getStaticF__instance();

  static inline ::UnityW<::GameAnalyticsSDK::Setup::Settings> getStaticF__settings();

  /// @brief Method get_SettingsGA, addr 0xf35fac, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityW<::GameAnalyticsSDK::Setup::Settings> get_SettingsGA();

  /// @brief Method remove_OnRemoteConfigsUpdatedEvent, addr 0xf38b6c, size 0xbc, virtual false, abstract: false, final false
  static inline void remove_OnRemoteConfigsUpdatedEvent(::System::Action* value);

  static inline void setStaticF_OnRemoteConfigsUpdatedEvent(::System::Action* value);

  static inline void setStaticF__hasInitializeBeenCalled(bool value);

  static inline void setStaticF__instance(::UnityW<::GameAnalyticsSDK::GameAnalytics> value);

  static inline void setStaticF__settings(::UnityW<::GameAnalyticsSDK::Setup::Settings> value);

  /// @brief Method set_SettingsGA, addr 0xf36258, size 0x4c, virtual false, abstract: false, final false
  static inline void set_SettingsGA(::GameAnalyticsSDK::Setup::Settings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameAnalytics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameAnalytics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameAnalytics(GameAnalytics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameAnalytics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameAnalytics(GameAnalytics const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::GameAnalytics, 0x18>, "Size mismatch!");

} // namespace GameAnalyticsSDK
NEED_NO_BOX(::GameAnalyticsSDK::GameAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::GameAnalytics*, "GameAnalyticsSDK", "GameAnalytics");
