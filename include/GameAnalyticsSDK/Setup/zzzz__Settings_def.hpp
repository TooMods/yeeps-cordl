#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GameAnalyticsSDK/Setup/zzzz__Settings_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Settings)
namespace GameAnalyticsSDK::Setup {
class Organization;
}
namespace GameAnalyticsSDK::Setup {
struct __Settings__HelpInfo;
}
namespace GameAnalyticsSDK::Setup {
struct __Settings__HelpTypes;
}
namespace GameAnalyticsSDK::Setup {
struct __Settings__InspectorStates;
}
namespace GameAnalyticsSDK::Setup {
struct __Settings__MessageTypes;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct RuntimePlatform;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GameAnalyticsSDK::Setup {
struct __Settings__HelpTypes;
}
namespace GameAnalyticsSDK::Setup {
struct __Settings__InspectorStates;
}
namespace GameAnalyticsSDK::Setup {
struct __Settings__MessageTypes;
}
namespace GameAnalyticsSDK::Setup {
class Settings;
}
namespace GameAnalyticsSDK::Setup {
struct __Settings__HelpInfo;
}
// Write type traits
MARK_VAL_T(::GameAnalyticsSDK::Setup::__Settings__HelpTypes);
MARK_VAL_T(::GameAnalyticsSDK::Setup::__Settings__InspectorStates);
MARK_VAL_T(::GameAnalyticsSDK::Setup::__Settings__MessageTypes);
MARK_REF_PTR_T(::GameAnalyticsSDK::Setup::Settings);
MARK_VAL_T(::GameAnalyticsSDK::Setup::__Settings__HelpInfo);
// Type: ::HelpTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: true
// CS Name: ::Settings::HelpTypes
struct CORDL_TYPE __Settings__HelpTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Settings__HelpTypes_Unwrapped
  enum struct ____Settings__HelpTypes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IncludeSystemSpecsHelp = static_cast<int32_t>(0x1),
    __E_ProvideCustomUserID = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Settings__HelpTypes_Unwrapped() const noexcept {
    return static_cast<____Settings__HelpTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Settings__HelpTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Settings__HelpTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field IncludeSystemSpecsHelp value: static_cast<int32_t>(0x1)
  static ::GameAnalyticsSDK::Setup::__Settings__HelpTypes const IncludeSystemSpecsHelp;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GameAnalyticsSDK::Setup::__Settings__HelpTypes const None;

  /// @brief Field ProvideCustomUserID value: static_cast<int32_t>(0x2)
  static ::GameAnalyticsSDK::Setup::__Settings__HelpTypes const ProvideCustomUserID;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::__Settings__HelpTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::__Settings__HelpTypes, value__) == 0x0, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
// Type: ::MessageTypes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: true
// CS Name: ::Settings::MessageTypes
struct CORDL_TYPE __Settings__MessageTypes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Settings__MessageTypes_Unwrapped
  enum struct ____Settings__MessageTypes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Error = static_cast<int32_t>(0x1),
    __E_Info = static_cast<int32_t>(0x2),
    __E_Warning = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Settings__MessageTypes_Unwrapped() const noexcept {
    return static_cast<____Settings__MessageTypes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Settings__MessageTypes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Settings__MessageTypes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Error value: static_cast<int32_t>(0x1)
  static ::GameAnalyticsSDK::Setup::__Settings__MessageTypes const Error;

  /// @brief Field Info value: static_cast<int32_t>(0x2)
  static ::GameAnalyticsSDK::Setup::__Settings__MessageTypes const Info;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GameAnalyticsSDK::Setup::__Settings__MessageTypes const None;

  /// @brief Field Warning value: static_cast<int32_t>(0x3)
  static ::GameAnalyticsSDK::Setup::__Settings__MessageTypes const Warning;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::__Settings__MessageTypes, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::__Settings__MessageTypes, value__) == 0x0, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
// Type: ::HelpInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: true
// CS Name: ::Settings::HelpInfo
struct CORDL_TYPE __Settings__HelpInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Settings__HelpInfo();

  // Ctor Parameters [CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "MsgType", ty: "::GameAnalyticsSDK::Setup::__Settings__MessageTypes", modifiers:
  // "", def_value: None }, CppParam { name: "HelpType", ty: "::GameAnalyticsSDK::Setup::__Settings__HelpTypes", modifiers: "", def_value: None }]
  constexpr __Settings__HelpInfo(::StringW Message, ::GameAnalyticsSDK::Setup::__Settings__MessageTypes MsgType, ::GameAnalyticsSDK::Setup::__Settings__HelpTypes HelpType) noexcept;

  /// @brief Field Message, offset: 0x0, size: 0x8, def value: None
  ::StringW Message;

  /// @brief Field MsgType, offset: 0x8, size: 0x4, def value: None
  ::GameAnalyticsSDK::Setup::__Settings__MessageTypes MsgType;

  /// @brief Field HelpType, offset: 0xc, size: 0x4, def value: None
  ::GameAnalyticsSDK::Setup::__Settings__HelpTypes HelpType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::__Settings__HelpInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::__Settings__HelpInfo, Message) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::__Settings__HelpInfo, MsgType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::__Settings__HelpInfo, HelpType) == 0xc, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
// Type: ::InspectorStates
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: true
// CS Name: ::Settings::InspectorStates
struct CORDL_TYPE __Settings__InspectorStates {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Settings__InspectorStates_Unwrapped
  enum struct ____Settings__InspectorStates_Unwrapped : int32_t {
    __E_Account = static_cast<int32_t>(0x0),
    __E_Basic = static_cast<int32_t>(0x1),
    __E_Debugging = static_cast<int32_t>(0x2),
    __E_Pref = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Settings__InspectorStates_Unwrapped() const noexcept {
    return static_cast<____Settings__InspectorStates_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Settings__InspectorStates();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Settings__InspectorStates(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Account value: static_cast<int32_t>(0x0)
  static ::GameAnalyticsSDK::Setup::__Settings__InspectorStates const Account;

  /// @brief Field Basic value: static_cast<int32_t>(0x1)
  static ::GameAnalyticsSDK::Setup::__Settings__InspectorStates const Basic;

  /// @brief Field Debugging value: static_cast<int32_t>(0x2)
  static ::GameAnalyticsSDK::Setup::__Settings__InspectorStates const Debugging;

  /// @brief Field Pref value: static_cast<int32_t>(0x3)
  static ::GameAnalyticsSDK::Setup::__Settings__InspectorStates const Pref;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::__Settings__InspectorStates, 0x4>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::__Settings__InspectorStates, value__) == 0x0, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
// Type: GameAnalyticsSDK.Setup::Settings
// SizeInfo { instance_size: 528, native_size: -1, calculated_instance_size: 528, calculated_native_size: 525, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Setup {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Setup::Settings*
class CORDL_TYPE Settings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using HelpInfo = ::GameAnalyticsSDK::Setup::__Settings__HelpInfo;

  using HelpTypes = ::GameAnalyticsSDK::Setup::__Settings__HelpTypes;

  using InspectorStates = ::GameAnalyticsSDK::Setup::__Settings__InspectorStates;

  using MessageTypes = ::GameAnalyticsSDK::Setup::__Settings__MessageTypes;

  /// @brief Field AmazonIcon, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_AmazonIcon, put = __cordl_internal_set_AmazonIcon))::UnityW<::UnityEngine::Texture2D> AmazonIcon;

  /// @brief Field AvailablePlatforms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AvailablePlatforms,
                             put = setStaticF_AvailablePlatforms))::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> AvailablePlatforms;

  /// @brief Field Build, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_Build, put = __cordl_internal_set_Build))::System::Collections::Generic::List_1<::StringW>* Build;

  /// @brief Field BusinessMessagesFailed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_BusinessMessagesFailed, put = __cordl_internal_set_BusinessMessagesFailed)) int32_t BusinessMessagesFailed;

  /// @brief Field BusinessMessagesSubmitted, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_BusinessMessagesSubmitted, put = __cordl_internal_set_BusinessMessagesSubmitted)) int32_t BusinessMessagesSubmitted;

  /// @brief Field Changes, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_Changes, put = __cordl_internal_set_Changes))::StringW Changes;

  /// @brief Field CheckingForUpdates, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_CheckingForUpdates, put = setStaticF_CheckingForUpdates)) bool CheckingForUpdates;

  /// @brief Field ClosedHints, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_ClosedHints,
                      put = __cordl_internal_set_ClosedHints))::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>* ClosedHints;

  /// @brief Field CurrentInspectorState, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_CurrentInspectorState, put = __cordl_internal_set_CurrentInspectorState))::GameAnalyticsSDK::Setup::__Settings__InspectorStates CurrentInspectorState;

  /// @brief Field CustomArea, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomArea, put = __cordl_internal_set_CustomArea))::StringW CustomArea;

  /// @brief Field CustomDimensions01, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomDimensions01, put = __cordl_internal_set_CustomDimensions01))::System::Collections::Generic::List_1<::StringW>* CustomDimensions01;

  /// @brief Field CustomDimensions01FoldOut, offset 0x208, size 0x1
  __declspec(property(get = __cordl_internal_get_CustomDimensions01FoldOut, put = __cordl_internal_set_CustomDimensions01FoldOut)) bool CustomDimensions01FoldOut;

  /// @brief Field CustomDimensions02, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomDimensions02, put = __cordl_internal_set_CustomDimensions02))::System::Collections::Generic::List_1<::StringW>* CustomDimensions02;

  /// @brief Field CustomDimensions02FoldOut, offset 0x209, size 0x1
  __declspec(property(get = __cordl_internal_get_CustomDimensions02FoldOut, put = __cordl_internal_set_CustomDimensions02FoldOut)) bool CustomDimensions02FoldOut;

  /// @brief Field CustomDimensions03, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomDimensions03, put = __cordl_internal_set_CustomDimensions03))::System::Collections::Generic::List_1<::StringW>* CustomDimensions03;

  /// @brief Field CustomDimensions03FoldOut, offset 0x20a, size 0x1
  __declspec(property(get = __cordl_internal_get_CustomDimensions03FoldOut, put = __cordl_internal_set_CustomDimensions03FoldOut)) bool CustomDimensions03FoldOut;

  /// @brief Field DeleteIcon, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_DeleteIcon, put = __cordl_internal_set_DeleteIcon))::UnityW<::UnityEngine::Texture2D> DeleteIcon;

  /// @brief Field DesignMessagesFailed, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_DesignMessagesFailed, put = __cordl_internal_set_DesignMessagesFailed)) int32_t DesignMessagesFailed;

  /// @brief Field DesignMessagesSubmitted, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_DesignMessagesSubmitted, put = __cordl_internal_set_DesignMessagesSubmitted)) int32_t DesignMessagesSubmitted;

  /// @brief Field DisplayHints, offset 0x160, size 0x1
  __declspec(property(get = __cordl_internal_get_DisplayHints, put = __cordl_internal_set_DisplayHints)) bool DisplayHints;

  /// @brief Field DisplayHintsScrollState, offset 0x164, size 0x8
  __declspec(property(get = __cordl_internal_get_DisplayHintsScrollState, put = __cordl_internal_set_DisplayHintsScrollState))::UnityEngine::Vector2 DisplayHintsScrollState;

  /// @brief Field EmailGA, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_EmailGA, put = __cordl_internal_set_EmailGA))::StringW EmailGA;

  /// @brief Field ErrorMessagesFailed, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_ErrorMessagesFailed, put = __cordl_internal_set_ErrorMessagesFailed)) int32_t ErrorMessagesFailed;

  /// @brief Field ErrorMessagesSubmitted, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_ErrorMessagesSubmitted, put = __cordl_internal_set_ErrorMessagesSubmitted)) int32_t ErrorMessagesSubmitted;

  /// @brief Field ExpireTime, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_ExpireTime, put = __cordl_internal_set_ExpireTime))::StringW ExpireTime;

  /// @brief Field FpsCirticalSubmitInterval, offset 0x1f8, size 0x4
  __declspec(property(get = __cordl_internal_get_FpsCirticalSubmitInterval, put = __cordl_internal_set_FpsCirticalSubmitInterval)) int32_t FpsCirticalSubmitInterval;

  /// @brief Field FpsCriticalThreshold, offset 0x1f4, size 0x4
  __declspec(property(get = __cordl_internal_get_FpsCriticalThreshold, put = __cordl_internal_set_FpsCriticalThreshold)) int32_t FpsCriticalThreshold;

  /// @brief Field GameIcon, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_GameIcon, put = __cordl_internal_set_GameIcon))::UnityW<::UnityEngine::Texture2D> GameIcon;

  /// @brief Field GameName, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_GameName, put = __cordl_internal_set_GameName))::StringW GameName;

  /// @brief Field GooglePlayIcon, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_GooglePlayIcon, put = __cordl_internal_set_GooglePlayIcon))::UnityW<::UnityEngine::Texture2D> GooglePlayIcon;

  /// @brief Field HideSignupWarning, offset 0x101, size 0x1
  __declspec(property(get = __cordl_internal_get_HideSignupWarning, put = __cordl_internal_set_HideSignupWarning)) bool HideSignupWarning;

  /// @brief Field HomeIcon, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_HomeIcon, put = __cordl_internal_set_HomeIcon))::UnityW<::UnityEngine::Texture2D> HomeIcon;

  /// @brief Field IncludeGooglePlay, offset 0x1f2, size 0x1
  __declspec(property(get = __cordl_internal_get_IncludeGooglePlay, put = __cordl_internal_set_IncludeGooglePlay)) bool IncludeGooglePlay;

  /// @brief Field InfoIcon, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_InfoIcon, put = __cordl_internal_set_InfoIcon))::UnityW<::UnityEngine::Texture2D> InfoIcon;

  /// @brief Field InfoLogBuild, offset 0x111, size 0x1
  __declspec(property(get = __cordl_internal_get_InfoLogBuild, put = __cordl_internal_set_InfoLogBuild)) bool InfoLogBuild;

  /// @brief Field InfoLogEditor, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get_InfoLogEditor, put = __cordl_internal_set_InfoLogEditor)) bool InfoLogEditor;

  /// @brief Field InstrumentIcon, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_InstrumentIcon, put = __cordl_internal_set_InstrumentIcon))::UnityW<::UnityEngine::Texture2D> InstrumentIcon;

  /// @brief Field InternetConnectivity, offset 0x115, size 0x1
  __declspec(property(get = __cordl_internal_get_InternetConnectivity, put = __cordl_internal_set_InternetConnectivity)) bool InternetConnectivity;

  /// @brief Field IntroScreen, offset 0x102, size 0x1
  __declspec(property(get = __cordl_internal_get_IntroScreen, put = __cordl_internal_set_IntroScreen)) bool IntroScreen;

  /// @brief Field JustSignedUp, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get_JustSignedUp, put = __cordl_internal_set_JustSignedUp)) bool JustSignedUp;

  /// @brief Field LastCreatedGamePlatform, offset 0x140, size 0x4
  __declspec(property(get = __cordl_internal_get_LastCreatedGamePlatform, put = __cordl_internal_set_LastCreatedGamePlatform))::UnityEngine::RuntimePlatform LastCreatedGamePlatform;

  /// @brief Field LoginStatus, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_LoginStatus, put = __cordl_internal_set_LoginStatus))::StringW LoginStatus;

  /// @brief Field Logo, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_Logo, put = __cordl_internal_set_Logo))::UnityW<::UnityEngine::Texture2D> Logo;

  /// @brief Field MaxErrorCount, offset 0x1ec, size 0x4
  __declspec(property(get = __cordl_internal_get_MaxErrorCount, put = __cordl_internal_set_MaxErrorCount)) int32_t MaxErrorCount;

  /// @brief Field NativeErrorReporting, offset 0x1ea, size 0x1
  __declspec(property(get = __cordl_internal_get_NativeErrorReporting, put = __cordl_internal_set_NativeErrorReporting)) bool NativeErrorReporting;

  /// @brief Field NewVersion, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_NewVersion, put = __cordl_internal_set_NewVersion))::StringW NewVersion;

  /// @brief Field OrganizationIdentifier, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_OrganizationIdentifier, put = __cordl_internal_set_OrganizationIdentifier))::StringW OrganizationIdentifier;

  /// @brief Field OrganizationName, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_OrganizationName, put = __cordl_internal_set_OrganizationName))::StringW OrganizationName;

  /// @brief Field Organizations, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_Organizations,
                      put = __cordl_internal_set_Organizations))::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>* Organizations;

  /// @brief Field PasswordGA, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_PasswordGA, put = __cordl_internal_set_PasswordGA))::StringW PasswordGA;

  /// @brief Field PlatformFoldOut, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_PlatformFoldOut, put = __cordl_internal_set_PlatformFoldOut))::System::Collections::Generic::List_1<bool>* PlatformFoldOut;

  /// @brief Field Platforms, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_Platforms, put = __cordl_internal_set_Platforms))::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>* Platforms;

  /// @brief Field QualityMessagesFailed, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_QualityMessagesFailed, put = __cordl_internal_set_QualityMessagesFailed)) int32_t QualityMessagesFailed;

  /// @brief Field QualityMessagesSubmitted, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_QualityMessagesSubmitted, put = __cordl_internal_set_QualityMessagesSubmitted)) int32_t QualityMessagesSubmitted;

  /// @brief Field QuestionIcon, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_QuestionIcon, put = __cordl_internal_set_QuestionIcon))::UnityW<::UnityEngine::Texture2D> QuestionIcon;

  /// @brief Field ResourceCurrencies, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceCurrencies, put = __cordl_internal_set_ResourceCurrencies))::System::Collections::Generic::List_1<::StringW>* ResourceCurrencies;

  /// @brief Field ResourceCurrenciesFoldOut, offset 0x20c, size 0x1
  __declspec(property(get = __cordl_internal_get_ResourceCurrenciesFoldOut, put = __cordl_internal_set_ResourceCurrenciesFoldOut)) bool ResourceCurrenciesFoldOut;

  /// @brief Field ResourceItemTypes, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_ResourceItemTypes, put = __cordl_internal_set_ResourceItemTypes))::System::Collections::Generic::List_1<::StringW>* ResourceItemTypes;

  /// @brief Field ResourceItemTypesFoldOut, offset 0x20b, size 0x1
  __declspec(property(get = __cordl_internal_get_ResourceItemTypesFoldOut, put = __cordl_internal_set_ResourceItemTypesFoldOut)) bool ResourceItemTypesFoldOut;

  /// @brief Field SelectedGame, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectedGame, put = __cordl_internal_set_SelectedGame))::System::Collections::Generic::List_1<int32_t>* SelectedGame;

  /// @brief Field SelectedOrganization, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectedOrganization, put = __cordl_internal_set_SelectedOrganization))::System::Collections::Generic::List_1<int32_t>* SelectedOrganization;

  /// @brief Field SelectedPlatformGame, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectedPlatformGame, put = __cordl_internal_set_SelectedPlatformGame))::System::Collections::Generic::List_1<::StringW>* SelectedPlatformGame;

  /// @brief Field SelectedPlatformGameID, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectedPlatformGameID, put = __cordl_internal_set_SelectedPlatformGameID))::System::Collections::Generic::List_1<int32_t>* SelectedPlatformGameID;

  /// @brief Field SelectedPlatformOrganization, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectedPlatformOrganization,
                      put = __cordl_internal_set_SelectedPlatformOrganization))::System::Collections::Generic::List_1<::StringW>* SelectedPlatformOrganization;

  /// @brief Field SelectedPlatformStudio, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectedPlatformStudio, put = __cordl_internal_set_SelectedPlatformStudio))::System::Collections::Generic::List_1<::StringW>* SelectedPlatformStudio;

  /// @brief Field SelectedStudio, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_SelectedStudio, put = __cordl_internal_set_SelectedStudio))::System::Collections::Generic::List_1<int32_t>* SelectedStudio;

  /// @brief Field SendExampleGameDataToMyGame, offset 0x114, size 0x1
  __declspec(property(get = __cordl_internal_get_SendExampleGameDataToMyGame, put = __cordl_internal_set_SendExampleGameDataToMyGame)) bool SendExampleGameDataToMyGame;

  /// @brief Field SignUpOpen, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_SignUpOpen, put = __cordl_internal_set_SignUpOpen)) bool SignUpOpen;

  /// @brief Field SignupButton, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_SignupButton, put = __cordl_internal_set_SignupButton))::UnityEngine::GUIStyle* SignupButton;

  /// @brief Field StudioName, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_StudioName, put = __cordl_internal_set_StudioName))::StringW StudioName;

  /// @brief Field SubmitErrors, offset 0x1e9, size 0x1
  __declspec(property(get = __cordl_internal_get_SubmitErrors, put = __cordl_internal_set_SubmitErrors)) bool SubmitErrors;

  /// @brief Field SubmitFpsAverage, offset 0x1f0, size 0x1
  __declspec(property(get = __cordl_internal_get_SubmitFpsAverage, put = __cordl_internal_set_SubmitFpsAverage)) bool SubmitFpsAverage;

  /// @brief Field SubmitFpsCritical, offset 0x1f1, size 0x1
  __declspec(property(get = __cordl_internal_get_SubmitFpsCritical, put = __cordl_internal_set_SubmitFpsCritical)) bool SubmitFpsCritical;

  /// @brief Field TokenGA, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_TokenGA, put = __cordl_internal_set_TokenGA))::StringW TokenGA;

  /// @brief Field TotalMessagesFailed, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_TotalMessagesFailed, put = __cordl_internal_set_TotalMessagesFailed)) int32_t TotalMessagesFailed;

  /// @brief Field TotalMessagesSubmitted, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_TotalMessagesSubmitted, put = __cordl_internal_set_TotalMessagesSubmitted)) int32_t TotalMessagesSubmitted;

  /// @brief Field UpdateIcon, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_UpdateIcon, put = __cordl_internal_set_UpdateIcon))::UnityW<::UnityEngine::Texture2D> UpdateIcon;

  /// @brief Field UseManualSessionHandling, offset 0x113, size 0x1
  __declspec(property(get = __cordl_internal_get_UseManualSessionHandling, put = __cordl_internal_set_UseManualSessionHandling)) bool UseManualSessionHandling;

  /// @brief Field UsePlayerSettingsBuildNumber, offset 0x1e8, size 0x1
  __declspec(property(get = __cordl_internal_get_UsePlayerSettingsBuildNumber, put = __cordl_internal_set_UsePlayerSettingsBuildNumber)) bool UsePlayerSettingsBuildNumber;

  /// @brief Field UserIcon, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_UserIcon, put = __cordl_internal_set_UserIcon))::UnityW<::UnityEngine::Texture2D> UserIcon;

  /// @brief Field UserMessagesFailed, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_UserMessagesFailed, put = __cordl_internal_set_UserMessagesFailed)) int32_t UserMessagesFailed;

  /// @brief Field UserMessagesSubmitted, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_UserMessagesSubmitted, put = __cordl_internal_set_UserMessagesSubmitted)) int32_t UserMessagesSubmitted;

  /// @brief Field VerboseLogBuild, offset 0x112, size 0x1
  __declspec(property(get = __cordl_internal_get_VerboseLogBuild, put = __cordl_internal_set_VerboseLogBuild)) bool VerboseLogBuild;

  /// @brief Field VERSION, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__cordl_VERSION, put = setStaticF__cordl_VERSION))::StringW _cordl_VERSION;

  /// @brief Field gameKey, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gameKey, put = __cordl_internal_set_gameKey))::System::Collections::Generic::List_1<::StringW>* gameKey;

  /// @brief Field iosIcon, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_iosIcon, put = __cordl_internal_set_iosIcon))::UnityW<::UnityEngine::Texture2D> iosIcon;

  /// @brief Field macIcon, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_macIcon, put = __cordl_internal_set_macIcon))::UnityW<::UnityEngine::Texture2D> macIcon;

  /// @brief Field secretKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_secretKey, put = __cordl_internal_set_secretKey))::System::Collections::Generic::List_1<::StringW>* secretKey;

  /// @brief Field windowsPhoneIcon, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_windowsPhoneIcon, put = __cordl_internal_set_windowsPhoneIcon))::UnityW<::UnityEngine::Texture2D> windowsPhoneIcon;

  /// @brief Method AddPlatform, addr 0x108050c, size 0x514, virtual false, abstract: false, final false
  inline void AddPlatform(::UnityEngine::RuntimePlatform platform);

  /// @brief Method GetAvailablePlatforms, addr 0x1080a20, size 0x300, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAvailablePlatforms();

  /// @brief Method GetGameKey, addr 0x1081148, size 0x58, virtual false, abstract: false, final false
  inline ::StringW GetGameKey(int32_t index);

  /// @brief Method GetSecretKey, addr 0x10811a0, size 0x58, virtual false, abstract: false, final false
  inline ::StringW GetSecretKey(int32_t index);

  /// @brief Method IsGameKeyValid, addr 0x1080d20, size 0xc4, virtual false, abstract: false, final false
  inline bool IsGameKeyValid(int32_t index, ::StringW value);

  /// @brief Method IsSecretKeyValid, addr 0x1080de4, size 0xc4, virtual false, abstract: false, final false
  inline bool IsSecretKeyValid(int32_t index, ::StringW value);

  static inline ::GameAnalyticsSDK::Setup::Settings* New_ctor();

  /// @brief Method RemovePlatformAtIndex, addr 0x108036c, size 0x1a0, virtual false, abstract: false, final false
  inline void RemovePlatformAtIndex(int32_t index);

  /// @brief Method SetCustomArea, addr 0x10811f8, size 0x4, virtual false, abstract: false, final false
  inline void SetCustomArea(::StringW customArea);

  /// @brief Method SetCustomUserID, addr 0x1080318, size 0x54, virtual false, abstract: false, final false
  inline void SetCustomUserID(::StringW customID);

  /// @brief Method SetKeys, addr 0x10811fc, size 0x4, virtual false, abstract: false, final false
  inline void SetKeys(::StringW gamekey, ::StringW secretkey);

  /// @brief Method UpdateGameKey, addr 0x1080f40, size 0x104, virtual false, abstract: false, final false
  inline void UpdateGameKey(int32_t index, ::StringW value);

  /// @brief Method UpdateKeys, addr 0x1080ea8, size 0x98, virtual false, abstract: false, final false
  static inline void UpdateKeys(int32_t index, ::StringW gameKey, ::StringW secretKey);

  /// @brief Method UpdateSecretKey, addr 0x1081044, size 0x104, virtual false, abstract: false, final false
  inline void UpdateSecretKey(int32_t index, ::StringW value);

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_AmazonIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_AmazonIcon();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Build();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_Build() const;

  constexpr int32_t const& __cordl_internal_get_BusinessMessagesFailed() const;

  constexpr int32_t& __cordl_internal_get_BusinessMessagesFailed();

  constexpr int32_t const& __cordl_internal_get_BusinessMessagesSubmitted() const;

  constexpr int32_t& __cordl_internal_get_BusinessMessagesSubmitted();

  constexpr ::StringW const& __cordl_internal_get_Changes() const;

  constexpr ::StringW& __cordl_internal_get_Changes();

  constexpr ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>*& __cordl_internal_get_ClosedHints();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>*> const& __cordl_internal_get_ClosedHints() const;

  constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates const& __cordl_internal_get_CurrentInspectorState() const;

  constexpr ::GameAnalyticsSDK::Setup::__Settings__InspectorStates& __cordl_internal_get_CurrentInspectorState();

  constexpr ::StringW const& __cordl_internal_get_CustomArea() const;

  constexpr ::StringW& __cordl_internal_get_CustomArea();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_CustomDimensions01();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_CustomDimensions01() const;

  constexpr bool const& __cordl_internal_get_CustomDimensions01FoldOut() const;

  constexpr bool& __cordl_internal_get_CustomDimensions01FoldOut();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_CustomDimensions02();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_CustomDimensions02() const;

  constexpr bool const& __cordl_internal_get_CustomDimensions02FoldOut() const;

  constexpr bool& __cordl_internal_get_CustomDimensions02FoldOut();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_CustomDimensions03();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_CustomDimensions03() const;

  constexpr bool const& __cordl_internal_get_CustomDimensions03FoldOut() const;

  constexpr bool& __cordl_internal_get_CustomDimensions03FoldOut();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_DeleteIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_DeleteIcon();

  constexpr int32_t const& __cordl_internal_get_DesignMessagesFailed() const;

  constexpr int32_t& __cordl_internal_get_DesignMessagesFailed();

  constexpr int32_t const& __cordl_internal_get_DesignMessagesSubmitted() const;

  constexpr int32_t& __cordl_internal_get_DesignMessagesSubmitted();

  constexpr bool const& __cordl_internal_get_DisplayHints() const;

  constexpr bool& __cordl_internal_get_DisplayHints();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_DisplayHintsScrollState() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_DisplayHintsScrollState();

  constexpr ::StringW const& __cordl_internal_get_EmailGA() const;

  constexpr ::StringW& __cordl_internal_get_EmailGA();

  constexpr int32_t const& __cordl_internal_get_ErrorMessagesFailed() const;

  constexpr int32_t& __cordl_internal_get_ErrorMessagesFailed();

  constexpr int32_t const& __cordl_internal_get_ErrorMessagesSubmitted() const;

  constexpr int32_t& __cordl_internal_get_ErrorMessagesSubmitted();

  constexpr ::StringW const& __cordl_internal_get_ExpireTime() const;

  constexpr ::StringW& __cordl_internal_get_ExpireTime();

  constexpr int32_t const& __cordl_internal_get_FpsCirticalSubmitInterval() const;

  constexpr int32_t& __cordl_internal_get_FpsCirticalSubmitInterval();

  constexpr int32_t const& __cordl_internal_get_FpsCriticalThreshold() const;

  constexpr int32_t& __cordl_internal_get_FpsCriticalThreshold();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_GameIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_GameIcon();

  constexpr ::StringW const& __cordl_internal_get_GameName() const;

  constexpr ::StringW& __cordl_internal_get_GameName();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_GooglePlayIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_GooglePlayIcon();

  constexpr bool const& __cordl_internal_get_HideSignupWarning() const;

  constexpr bool& __cordl_internal_get_HideSignupWarning();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_HomeIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_HomeIcon();

  constexpr bool const& __cordl_internal_get_IncludeGooglePlay() const;

  constexpr bool& __cordl_internal_get_IncludeGooglePlay();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_InfoIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_InfoIcon();

  constexpr bool const& __cordl_internal_get_InfoLogBuild() const;

  constexpr bool& __cordl_internal_get_InfoLogBuild();

  constexpr bool const& __cordl_internal_get_InfoLogEditor() const;

  constexpr bool& __cordl_internal_get_InfoLogEditor();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_InstrumentIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_InstrumentIcon();

  constexpr bool const& __cordl_internal_get_InternetConnectivity() const;

  constexpr bool& __cordl_internal_get_InternetConnectivity();

  constexpr bool const& __cordl_internal_get_IntroScreen() const;

  constexpr bool& __cordl_internal_get_IntroScreen();

  constexpr bool const& __cordl_internal_get_JustSignedUp() const;

  constexpr bool& __cordl_internal_get_JustSignedUp();

  constexpr ::UnityEngine::RuntimePlatform const& __cordl_internal_get_LastCreatedGamePlatform() const;

  constexpr ::UnityEngine::RuntimePlatform& __cordl_internal_get_LastCreatedGamePlatform();

  constexpr ::StringW const& __cordl_internal_get_LoginStatus() const;

  constexpr ::StringW& __cordl_internal_get_LoginStatus();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_Logo() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_Logo();

  constexpr int32_t const& __cordl_internal_get_MaxErrorCount() const;

  constexpr int32_t& __cordl_internal_get_MaxErrorCount();

  constexpr bool const& __cordl_internal_get_NativeErrorReporting() const;

  constexpr bool& __cordl_internal_get_NativeErrorReporting();

  constexpr ::StringW const& __cordl_internal_get_NewVersion() const;

  constexpr ::StringW& __cordl_internal_get_NewVersion();

  constexpr ::StringW const& __cordl_internal_get_OrganizationIdentifier() const;

  constexpr ::StringW& __cordl_internal_get_OrganizationIdentifier();

  constexpr ::StringW const& __cordl_internal_get_OrganizationName() const;

  constexpr ::StringW& __cordl_internal_get_OrganizationName();

  constexpr ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>*& __cordl_internal_get_Organizations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>*> const& __cordl_internal_get_Organizations() const;

  constexpr ::StringW const& __cordl_internal_get_PasswordGA() const;

  constexpr ::StringW& __cordl_internal_get_PasswordGA();

  constexpr ::System::Collections::Generic::List_1<bool>*& __cordl_internal_get_PlatformFoldOut();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<bool>*> const& __cordl_internal_get_PlatformFoldOut() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*& __cordl_internal_get_Platforms();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>*> const& __cordl_internal_get_Platforms() const;

  constexpr int32_t const& __cordl_internal_get_QualityMessagesFailed() const;

  constexpr int32_t& __cordl_internal_get_QualityMessagesFailed();

  constexpr int32_t const& __cordl_internal_get_QualityMessagesSubmitted() const;

  constexpr int32_t& __cordl_internal_get_QualityMessagesSubmitted();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_QuestionIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_QuestionIcon();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ResourceCurrencies();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_ResourceCurrencies() const;

  constexpr bool const& __cordl_internal_get_ResourceCurrenciesFoldOut() const;

  constexpr bool& __cordl_internal_get_ResourceCurrenciesFoldOut();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_ResourceItemTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_ResourceItemTypes() const;

  constexpr bool const& __cordl_internal_get_ResourceItemTypesFoldOut() const;

  constexpr bool& __cordl_internal_get_ResourceItemTypesFoldOut();

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_SelectedGame();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_SelectedGame() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_SelectedOrganization();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_SelectedOrganization() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SelectedPlatformGame();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_SelectedPlatformGame() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_SelectedPlatformGameID();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_SelectedPlatformGameID() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SelectedPlatformOrganization();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_SelectedPlatformOrganization() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_SelectedPlatformStudio();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_SelectedPlatformStudio() const;

  constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_SelectedStudio();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_SelectedStudio() const;

  constexpr bool const& __cordl_internal_get_SendExampleGameDataToMyGame() const;

  constexpr bool& __cordl_internal_get_SendExampleGameDataToMyGame();

  constexpr bool const& __cordl_internal_get_SignUpOpen() const;

  constexpr bool& __cordl_internal_get_SignUpOpen();

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_SignupButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_SignupButton() const;

  constexpr ::StringW const& __cordl_internal_get_StudioName() const;

  constexpr ::StringW& __cordl_internal_get_StudioName();

  constexpr bool const& __cordl_internal_get_SubmitErrors() const;

  constexpr bool& __cordl_internal_get_SubmitErrors();

  constexpr bool const& __cordl_internal_get_SubmitFpsAverage() const;

  constexpr bool& __cordl_internal_get_SubmitFpsAverage();

  constexpr bool const& __cordl_internal_get_SubmitFpsCritical() const;

  constexpr bool& __cordl_internal_get_SubmitFpsCritical();

  constexpr ::StringW const& __cordl_internal_get_TokenGA() const;

  constexpr ::StringW& __cordl_internal_get_TokenGA();

  constexpr int32_t const& __cordl_internal_get_TotalMessagesFailed() const;

  constexpr int32_t& __cordl_internal_get_TotalMessagesFailed();

  constexpr int32_t const& __cordl_internal_get_TotalMessagesSubmitted() const;

  constexpr int32_t& __cordl_internal_get_TotalMessagesSubmitted();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_UpdateIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_UpdateIcon();

  constexpr bool const& __cordl_internal_get_UseManualSessionHandling() const;

  constexpr bool& __cordl_internal_get_UseManualSessionHandling();

  constexpr bool const& __cordl_internal_get_UsePlayerSettingsBuildNumber() const;

  constexpr bool& __cordl_internal_get_UsePlayerSettingsBuildNumber();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_UserIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_UserIcon();

  constexpr int32_t const& __cordl_internal_get_UserMessagesFailed() const;

  constexpr int32_t& __cordl_internal_get_UserMessagesFailed();

  constexpr int32_t const& __cordl_internal_get_UserMessagesSubmitted() const;

  constexpr int32_t& __cordl_internal_get_UserMessagesSubmitted();

  constexpr bool const& __cordl_internal_get_VerboseLogBuild() const;

  constexpr bool& __cordl_internal_get_VerboseLogBuild();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_gameKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_gameKey() const;

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_iosIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_iosIcon();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_macIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_macIcon();

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_secretKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get_secretKey() const;

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_windowsPhoneIcon() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_windowsPhoneIcon();

  constexpr void __cordl_internal_set_AmazonIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_Build(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_BusinessMessagesFailed(int32_t value);

  constexpr void __cordl_internal_set_BusinessMessagesSubmitted(int32_t value);

  constexpr void __cordl_internal_set_Changes(::StringW value);

  constexpr void __cordl_internal_set_ClosedHints(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>* value);

  constexpr void __cordl_internal_set_CurrentInspectorState(::GameAnalyticsSDK::Setup::__Settings__InspectorStates value);

  constexpr void __cordl_internal_set_CustomArea(::StringW value);

  constexpr void __cordl_internal_set_CustomDimensions01(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_CustomDimensions01FoldOut(bool value);

  constexpr void __cordl_internal_set_CustomDimensions02(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_CustomDimensions02FoldOut(bool value);

  constexpr void __cordl_internal_set_CustomDimensions03(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_CustomDimensions03FoldOut(bool value);

  constexpr void __cordl_internal_set_DeleteIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_DesignMessagesFailed(int32_t value);

  constexpr void __cordl_internal_set_DesignMessagesSubmitted(int32_t value);

  constexpr void __cordl_internal_set_DisplayHints(bool value);

  constexpr void __cordl_internal_set_DisplayHintsScrollState(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_EmailGA(::StringW value);

  constexpr void __cordl_internal_set_ErrorMessagesFailed(int32_t value);

  constexpr void __cordl_internal_set_ErrorMessagesSubmitted(int32_t value);

  constexpr void __cordl_internal_set_ExpireTime(::StringW value);

  constexpr void __cordl_internal_set_FpsCirticalSubmitInterval(int32_t value);

  constexpr void __cordl_internal_set_FpsCriticalThreshold(int32_t value);

  constexpr void __cordl_internal_set_GameIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_GameName(::StringW value);

  constexpr void __cordl_internal_set_GooglePlayIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_HideSignupWarning(bool value);

  constexpr void __cordl_internal_set_HomeIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_IncludeGooglePlay(bool value);

  constexpr void __cordl_internal_set_InfoIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_InfoLogBuild(bool value);

  constexpr void __cordl_internal_set_InfoLogEditor(bool value);

  constexpr void __cordl_internal_set_InstrumentIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_InternetConnectivity(bool value);

  constexpr void __cordl_internal_set_IntroScreen(bool value);

  constexpr void __cordl_internal_set_JustSignedUp(bool value);

  constexpr void __cordl_internal_set_LastCreatedGamePlatform(::UnityEngine::RuntimePlatform value);

  constexpr void __cordl_internal_set_LoginStatus(::StringW value);

  constexpr void __cordl_internal_set_Logo(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_MaxErrorCount(int32_t value);

  constexpr void __cordl_internal_set_NativeErrorReporting(bool value);

  constexpr void __cordl_internal_set_NewVersion(::StringW value);

  constexpr void __cordl_internal_set_OrganizationIdentifier(::StringW value);

  constexpr void __cordl_internal_set_OrganizationName(::StringW value);

  constexpr void __cordl_internal_set_Organizations(::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>* value);

  constexpr void __cordl_internal_set_PasswordGA(::StringW value);

  constexpr void __cordl_internal_set_PlatformFoldOut(::System::Collections::Generic::List_1<bool>* value);

  constexpr void __cordl_internal_set_Platforms(::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>* value);

  constexpr void __cordl_internal_set_QualityMessagesFailed(int32_t value);

  constexpr void __cordl_internal_set_QualityMessagesSubmitted(int32_t value);

  constexpr void __cordl_internal_set_QuestionIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_ResourceCurrencies(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_ResourceCurrenciesFoldOut(bool value);

  constexpr void __cordl_internal_set_ResourceItemTypes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_ResourceItemTypesFoldOut(bool value);

  constexpr void __cordl_internal_set_SelectedGame(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_SelectedOrganization(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_SelectedPlatformGame(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_SelectedPlatformGameID(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_SelectedPlatformOrganization(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_SelectedPlatformStudio(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_SelectedStudio(::System::Collections::Generic::List_1<int32_t>* value);

  constexpr void __cordl_internal_set_SendExampleGameDataToMyGame(bool value);

  constexpr void __cordl_internal_set_SignUpOpen(bool value);

  constexpr void __cordl_internal_set_SignupButton(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_StudioName(::StringW value);

  constexpr void __cordl_internal_set_SubmitErrors(bool value);

  constexpr void __cordl_internal_set_SubmitFpsAverage(bool value);

  constexpr void __cordl_internal_set_SubmitFpsCritical(bool value);

  constexpr void __cordl_internal_set_TokenGA(::StringW value);

  constexpr void __cordl_internal_set_TotalMessagesFailed(int32_t value);

  constexpr void __cordl_internal_set_TotalMessagesSubmitted(int32_t value);

  constexpr void __cordl_internal_set_UpdateIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_UseManualSessionHandling(bool value);

  constexpr void __cordl_internal_set_UsePlayerSettingsBuildNumber(bool value);

  constexpr void __cordl_internal_set_UserIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_UserMessagesFailed(int32_t value);

  constexpr void __cordl_internal_set_UserMessagesSubmitted(int32_t value);

  constexpr void __cordl_internal_set_VerboseLogBuild(bool value);

  constexpr void __cordl_internal_set_gameKey(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_iosIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_macIcon(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_secretKey(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_windowsPhoneIcon(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x1081200, size 0x3ac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> getStaticF_AvailablePlatforms();

  static inline bool getStaticF_CheckingForUpdates();

  static inline ::StringW getStaticF__cordl_VERSION();

  static inline void setStaticF_AvailablePlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value);

  static inline void setStaticF_CheckingForUpdates(bool value);

  static inline void setStaticF__cordl_VERSION(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Settings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Settings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Settings(Settings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Settings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Settings(Settings const&) = delete;

  /// @brief Field TotalMessagesSubmitted, offset: 0x18, size: 0x4, def value: None
  int32_t ___TotalMessagesSubmitted;

  /// @brief Field TotalMessagesFailed, offset: 0x1c, size: 0x4, def value: None
  int32_t ___TotalMessagesFailed;

  /// @brief Field DesignMessagesSubmitted, offset: 0x20, size: 0x4, def value: None
  int32_t ___DesignMessagesSubmitted;

  /// @brief Field DesignMessagesFailed, offset: 0x24, size: 0x4, def value: None
  int32_t ___DesignMessagesFailed;

  /// @brief Field QualityMessagesSubmitted, offset: 0x28, size: 0x4, def value: None
  int32_t ___QualityMessagesSubmitted;

  /// @brief Field QualityMessagesFailed, offset: 0x2c, size: 0x4, def value: None
  int32_t ___QualityMessagesFailed;

  /// @brief Field ErrorMessagesSubmitted, offset: 0x30, size: 0x4, def value: None
  int32_t ___ErrorMessagesSubmitted;

  /// @brief Field ErrorMessagesFailed, offset: 0x34, size: 0x4, def value: None
  int32_t ___ErrorMessagesFailed;

  /// @brief Field BusinessMessagesSubmitted, offset: 0x38, size: 0x4, def value: None
  int32_t ___BusinessMessagesSubmitted;

  /// @brief Field BusinessMessagesFailed, offset: 0x3c, size: 0x4, def value: None
  int32_t ___BusinessMessagesFailed;

  /// @brief Field UserMessagesSubmitted, offset: 0x40, size: 0x4, def value: None
  int32_t ___UserMessagesSubmitted;

  /// @brief Field UserMessagesFailed, offset: 0x44, size: 0x4, def value: None
  int32_t ___UserMessagesFailed;

  /// @brief Field CustomArea, offset: 0x48, size: 0x8, def value: None
  ::StringW ___CustomArea;

  /// @brief Field gameKey, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___gameKey;

  /// @brief Field secretKey, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___secretKey;

  /// @brief Field Build, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___Build;

  /// @brief Field SelectedPlatformOrganization, offset: 0x68, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___SelectedPlatformOrganization;

  /// @brief Field SelectedPlatformStudio, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___SelectedPlatformStudio;

  /// @brief Field SelectedPlatformGame, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___SelectedPlatformGame;

  /// @brief Field SelectedPlatformGameID, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___SelectedPlatformGameID;

  /// @brief Field SelectedOrganization, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___SelectedOrganization;

  /// @brief Field SelectedStudio, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___SelectedStudio;

  /// @brief Field SelectedGame, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* ___SelectedGame;

  /// @brief Field NewVersion, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___NewVersion;

  /// @brief Field Changes, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___Changes;

  /// @brief Field SignUpOpen, offset: 0xb0, size: 0x1, def value: None
  bool ___SignUpOpen;

  /// @brief Field StudioName, offset: 0xb8, size: 0x8, def value: None
  ::StringW ___StudioName;

  /// @brief Field GameName, offset: 0xc0, size: 0x8, def value: None
  ::StringW ___GameName;

  /// @brief Field OrganizationName, offset: 0xc8, size: 0x8, def value: None
  ::StringW ___OrganizationName;

  /// @brief Field OrganizationIdentifier, offset: 0xd0, size: 0x8, def value: None
  ::StringW ___OrganizationIdentifier;

  /// @brief Field EmailGA, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___EmailGA;

  /// @brief Field PasswordGA, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___PasswordGA;

  /// @brief Field TokenGA, offset: 0xe8, size: 0x8, def value: None
  ::StringW ___TokenGA;

  /// @brief Field ExpireTime, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___ExpireTime;

  /// @brief Field LoginStatus, offset: 0xf8, size: 0x8, def value: None
  ::StringW ___LoginStatus;

  /// @brief Field JustSignedUp, offset: 0x100, size: 0x1, def value: None
  bool ___JustSignedUp;

  /// @brief Field HideSignupWarning, offset: 0x101, size: 0x1, def value: None
  bool ___HideSignupWarning;

  /// @brief Field IntroScreen, offset: 0x102, size: 0x1, def value: None
  bool ___IntroScreen;

  /// @brief Field Organizations, offset: 0x108, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::Organization*>* ___Organizations;

  /// @brief Field InfoLogEditor, offset: 0x110, size: 0x1, def value: None
  bool ___InfoLogEditor;

  /// @brief Field InfoLogBuild, offset: 0x111, size: 0x1, def value: None
  bool ___InfoLogBuild;

  /// @brief Field VerboseLogBuild, offset: 0x112, size: 0x1, def value: None
  bool ___VerboseLogBuild;

  /// @brief Field UseManualSessionHandling, offset: 0x113, size: 0x1, def value: None
  bool ___UseManualSessionHandling;

  /// @brief Field SendExampleGameDataToMyGame, offset: 0x114, size: 0x1, def value: None
  bool ___SendExampleGameDataToMyGame;

  /// @brief Field InternetConnectivity, offset: 0x115, size: 0x1, def value: None
  bool ___InternetConnectivity;

  /// @brief Field CustomDimensions01, offset: 0x118, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___CustomDimensions01;

  /// @brief Field CustomDimensions02, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___CustomDimensions02;

  /// @brief Field CustomDimensions03, offset: 0x128, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___CustomDimensions03;

  /// @brief Field ResourceItemTypes, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___ResourceItemTypes;

  /// @brief Field ResourceCurrencies, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___ResourceCurrencies;

  /// @brief Field LastCreatedGamePlatform, offset: 0x140, size: 0x4, def value: None
  ::UnityEngine::RuntimePlatform ___LastCreatedGamePlatform;

  /// @brief Field Platforms, offset: 0x148, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::RuntimePlatform>* ___Platforms;

  /// @brief Field CurrentInspectorState, offset: 0x150, size: 0x4, def value: None
  ::GameAnalyticsSDK::Setup::__Settings__InspectorStates ___CurrentInspectorState;

  /// @brief Field ClosedHints, offset: 0x158, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GameAnalyticsSDK::Setup::__Settings__HelpTypes>* ___ClosedHints;

  /// @brief Field DisplayHints, offset: 0x160, size: 0x1, def value: None
  bool ___DisplayHints;

  /// @brief Field DisplayHintsScrollState, offset: 0x164, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___DisplayHintsScrollState;

  /// @brief Field Logo, offset: 0x170, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___Logo;

  /// @brief Field UpdateIcon, offset: 0x178, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___UpdateIcon;

  /// @brief Field InfoIcon, offset: 0x180, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___InfoIcon;

  /// @brief Field DeleteIcon, offset: 0x188, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___DeleteIcon;

  /// @brief Field GameIcon, offset: 0x190, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___GameIcon;

  /// @brief Field HomeIcon, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___HomeIcon;

  /// @brief Field InstrumentIcon, offset: 0x1a0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___InstrumentIcon;

  /// @brief Field QuestionIcon, offset: 0x1a8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___QuestionIcon;

  /// @brief Field UserIcon, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___UserIcon;

  /// @brief Field AmazonIcon, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___AmazonIcon;

  /// @brief Field GooglePlayIcon, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___GooglePlayIcon;

  /// @brief Field iosIcon, offset: 0x1c8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___iosIcon;

  /// @brief Field macIcon, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___macIcon;

  /// @brief Field windowsPhoneIcon, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___windowsPhoneIcon;

  /// @brief Field SignupButton, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___SignupButton;

  /// @brief Field UsePlayerSettingsBuildNumber, offset: 0x1e8, size: 0x1, def value: None
  bool ___UsePlayerSettingsBuildNumber;

  /// @brief Field SubmitErrors, offset: 0x1e9, size: 0x1, def value: None
  bool ___SubmitErrors;

  /// @brief Field NativeErrorReporting, offset: 0x1ea, size: 0x1, def value: None
  bool ___NativeErrorReporting;

  /// @brief Field MaxErrorCount, offset: 0x1ec, size: 0x4, def value: None
  int32_t ___MaxErrorCount;

  /// @brief Field SubmitFpsAverage, offset: 0x1f0, size: 0x1, def value: None
  bool ___SubmitFpsAverage;

  /// @brief Field SubmitFpsCritical, offset: 0x1f1, size: 0x1, def value: None
  bool ___SubmitFpsCritical;

  /// @brief Field IncludeGooglePlay, offset: 0x1f2, size: 0x1, def value: None
  bool ___IncludeGooglePlay;

  /// @brief Field FpsCriticalThreshold, offset: 0x1f4, size: 0x4, def value: None
  int32_t ___FpsCriticalThreshold;

  /// @brief Field FpsCirticalSubmitInterval, offset: 0x1f8, size: 0x4, def value: None
  int32_t ___FpsCirticalSubmitInterval;

  /// @brief Field PlatformFoldOut, offset: 0x200, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<bool>* ___PlatformFoldOut;

  /// @brief Field CustomDimensions01FoldOut, offset: 0x208, size: 0x1, def value: None
  bool ___CustomDimensions01FoldOut;

  /// @brief Field CustomDimensions02FoldOut, offset: 0x209, size: 0x1, def value: None
  bool ___CustomDimensions02FoldOut;

  /// @brief Field CustomDimensions03FoldOut, offset: 0x20a, size: 0x1, def value: None
  bool ___CustomDimensions03FoldOut;

  /// @brief Field ResourceItemTypesFoldOut, offset: 0x20b, size: 0x1, def value: None
  bool ___ResourceItemTypesFoldOut;

  /// @brief Field ResourceCurrenciesFoldOut, offset: 0x20c, size: 0x1, def value: None
  bool ___ResourceCurrenciesFoldOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Setup::Settings, 0x210>, "Size mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___TotalMessagesSubmitted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___TotalMessagesFailed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___DesignMessagesSubmitted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___DesignMessagesFailed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___QualityMessagesSubmitted) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___QualityMessagesFailed) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ErrorMessagesSubmitted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ErrorMessagesFailed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___BusinessMessagesSubmitted) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___BusinessMessagesFailed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___UserMessagesSubmitted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___UserMessagesFailed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CustomArea) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___gameKey) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___secretKey) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___Build) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SelectedPlatformOrganization) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SelectedPlatformStudio) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SelectedPlatformGame) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SelectedPlatformGameID) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SelectedOrganization) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SelectedStudio) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SelectedGame) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___NewVersion) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___Changes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SignUpOpen) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___StudioName) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___GameName) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___OrganizationName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___OrganizationIdentifier) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___EmailGA) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___PasswordGA) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___TokenGA) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ExpireTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___LoginStatus) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___JustSignedUp) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___HideSignupWarning) == 0x101, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___IntroScreen) == 0x102, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___Organizations) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___InfoLogEditor) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___InfoLogBuild) == 0x111, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___VerboseLogBuild) == 0x112, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___UseManualSessionHandling) == 0x113, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SendExampleGameDataToMyGame) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___InternetConnectivity) == 0x115, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CustomDimensions01) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CustomDimensions02) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CustomDimensions03) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ResourceItemTypes) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ResourceCurrencies) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___LastCreatedGamePlatform) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___Platforms) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CurrentInspectorState) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ClosedHints) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___DisplayHints) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___DisplayHintsScrollState) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___Logo) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___UpdateIcon) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___InfoIcon) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___DeleteIcon) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___GameIcon) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___HomeIcon) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___InstrumentIcon) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___QuestionIcon) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___UserIcon) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___AmazonIcon) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___GooglePlayIcon) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___iosIcon) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___macIcon) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___windowsPhoneIcon) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SignupButton) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___UsePlayerSettingsBuildNumber) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SubmitErrors) == 0x1e9, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___NativeErrorReporting) == 0x1ea, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___MaxErrorCount) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SubmitFpsAverage) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___SubmitFpsCritical) == 0x1f1, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___IncludeGooglePlay) == 0x1f2, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___FpsCriticalThreshold) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___FpsCirticalSubmitInterval) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___PlatformFoldOut) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CustomDimensions01FoldOut) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CustomDimensions02FoldOut) == 0x209, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___CustomDimensions03FoldOut) == 0x20a, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ResourceItemTypesFoldOut) == 0x20b, "Offset mismatch!");

static_assert(offsetof(::GameAnalyticsSDK::Setup::Settings, ___ResourceCurrenciesFoldOut) == 0x20c, "Offset mismatch!");

} // namespace GameAnalyticsSDK::Setup
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::__Settings__HelpTypes, "GameAnalyticsSDK.Setup", "Settings/HelpTypes");
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::__Settings__InspectorStates, "GameAnalyticsSDK.Setup", "Settings/InspectorStates");
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::__Settings__MessageTypes, "GameAnalyticsSDK.Setup", "Settings/MessageTypes");
NEED_NO_BOX(::GameAnalyticsSDK::Setup::Settings);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::Settings*, "GameAnalyticsSDK.Setup", "Settings");
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Setup::__Settings__HelpInfo, "GameAnalyticsSDK.Setup", "Settings/HelpInfo");
