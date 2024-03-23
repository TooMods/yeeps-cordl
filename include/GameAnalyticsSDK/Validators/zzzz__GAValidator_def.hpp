#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GAValidator)
namespace GameAnalyticsSDK {
struct GAAdAction;
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
// Forward declare root types
namespace GameAnalyticsSDK::Validators {
class GAValidator;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Validators::GAValidator);
// Type: GameAnalyticsSDK.Validators::GAValidator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Validators {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Validators::GAValidator*
class CORDL_TYPE GAValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Method StringMatch, addr 0x1083fb0, size 0x78, virtual false, abstract: false, final false
  static inline bool StringMatch(::StringW s, ::StringW pattern);

  /// @brief Method ValidateAdEvent, addr 0x1084ac4, size 0x130, virtual false, abstract: false, final false
  static inline bool ValidateAdEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement);

  /// @brief Method ValidateArrayOfStrings, addr 0x1084e54, size 0x454, virtual false, abstract: false, final false
  static inline bool ValidateArrayOfStrings(int64_t maxCount, int64_t maxStringLength, bool allowNoValues, ::StringW logTag, ::ArrayW<::StringW, ::Array<::StringW>*> arrayOfStrings);

  /// @brief Method ValidateBuild, addr 0x1084d78, size 0x8, virtual false, abstract: false, final false
  static inline bool ValidateBuild(::StringW build);

  /// @brief Method ValidateBusinessEvent, addr 0x1084028, size 0x188, virtual false, abstract: false, final false
  static inline bool ValidateBusinessEvent(::StringW currency, int32_t amount, ::StringW cartType, ::StringW itemType, ::StringW itemId);

  /// @brief Method ValidateClientTs, addr 0x108553c, size 0x24, virtual false, abstract: false, final false
  static inline bool ValidateClientTs(int64_t clientTs);

  /// @brief Method ValidateConnectionType, addr 0x1084e0c, size 0x48, virtual false, abstract: false, final false
  static inline bool ValidateConnectionType(::StringW connectionType);

  /// @brief Method ValidateCurrency, addr 0x10841b0, size 0x68, virtual false, abstract: false, final false
  static inline bool ValidateCurrency(::StringW currency);

  /// @brief Method ValidateCustomDimensions, addr 0x1082da8, size 0x54, virtual false, abstract: false, final false
  static inline bool ValidateCustomDimensions(::ArrayW<::StringW, ::Array<::StringW>*> customDimensions);

  /// @brief Method ValidateDesignEvent, addr 0x108481c, size 0xc4, virtual false, abstract: false, final false
  static inline bool ValidateDesignEvent(::StringW eventId);

  /// @brief Method ValidateDimension01, addr 0x10852a8, size 0xdc, virtual false, abstract: false, final false
  static inline bool ValidateDimension01(::StringW dimension01);

  /// @brief Method ValidateDimension02, addr 0x1085384, size 0xdc, virtual false, abstract: false, final false
  static inline bool ValidateDimension02(::StringW dimension02);

  /// @brief Method ValidateDimension03, addr 0x1085460, size 0xdc, virtual false, abstract: false, final false
  static inline bool ValidateDimension03(::StringW dimension03);

  /// @brief Method ValidateErrorEvent, addr 0x10849b0, size 0xbc, virtual false, abstract: false, final false
  static inline bool ValidateErrorEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message);

  /// @brief Method ValidateEventIdCharacters, addr 0x1084948, size 0x68, virtual false, abstract: false, final false
  static inline bool ValidateEventIdCharacters(::StringW eventId);

  /// @brief Method ValidateEventIdLength, addr 0x10848e0, size 0x68, virtual false, abstract: false, final false
  static inline bool ValidateEventIdLength(::StringW eventId);

  /// @brief Method ValidateEventPartCharacters, addr 0x10842c8, size 0x48, virtual false, abstract: false, final false
  static inline bool ValidateEventPartCharacters(::StringW eventPart);

  /// @brief Method ValidateEventPartLength, addr 0x1084270, size 0x58, virtual false, abstract: false, final false
  static inline bool ValidateEventPartLength(::StringW eventPart, bool allowNull);

  /// @brief Method ValidateKeys, addr 0x1084cec, size 0x8c, virtual false, abstract: false, final false
  static inline bool ValidateKeys(::StringW gameKey, ::StringW gameSecret);

  /// @brief Method ValidateLongString, addr 0x1084a6c, size 0x58, virtual false, abstract: false, final false
  static inline bool ValidateLongString(::StringW longString, bool canBeEmpty);

  /// @brief Method ValidateProgressionEvent, addr 0x108457c, size 0x2a0, virtual false, abstract: false, final false
  static inline bool ValidateProgressionEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03);

  /// @brief Method ValidateResourceCurrencies, addr 0x1082fdc, size 0x140, virtual false, abstract: false, final false
  static inline bool ValidateResourceCurrencies(::ArrayW<::StringW, ::Array<::StringW>*> resourceCurrencies);

  /// @brief Method ValidateResourceEvent, addr 0x1084310, size 0x26c, virtual false, abstract: false, final false
  static inline bool ValidateResourceEvent(::GameAnalyticsSDK::GAResourceFlowType flowType, ::StringW currency, float_t amount, ::StringW itemType, ::StringW itemId);

  /// @brief Method ValidateResourceItemTypes, addr 0x10831bc, size 0x128, virtual false, abstract: false, final false
  static inline bool ValidateResourceItemTypes(::ArrayW<::StringW, ::Array<::StringW>*> resourceItemTypes);

  /// @brief Method ValidateSdkErrorEvent, addr 0x1084c4c, size 0xa0, virtual false, abstract: false, final false
  static inline bool ValidateSdkErrorEvent(::StringW gameKey, ::StringW gameSecret, ::GameAnalyticsSDK::GAErrorSeverity type);

  /// @brief Method ValidateShortString, addr 0x1084218, size 0x58, virtual false, abstract: false, final false
  static inline bool ValidateShortString(::StringW shortString, bool canBeEmpty);

  /// @brief Method ValidateString, addr 0x1084bf4, size 0x58, virtual false, abstract: false, final false
  static inline bool ValidateString(::StringW s, bool canBeEmpty);

  /// @brief Method ValidateUserId, addr 0x1084d80, size 0x8c, virtual false, abstract: false, final false
  static inline bool ValidateUserId(::StringW uId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GAValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GAValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GAValidator(GAValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GAValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GAValidator(GAValidator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Validators::GAValidator, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Validators
NEED_NO_BOX(::GameAnalyticsSDK::Validators::GAValidator);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Validators::GAValidator*, "GameAnalyticsSDK.Validators", "GAValidator");
