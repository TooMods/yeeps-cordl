#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GA_Ads)
namespace GameAnalyticsSDK {
struct GAAdAction;
}
namespace GameAnalyticsSDK {
struct GAAdError;
}
namespace GameAnalyticsSDK {
struct GAAdType;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GameAnalyticsSDK::Events {
class GA_Ads;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_Ads);
// Type: GameAnalyticsSDK.Events::GA_Ads
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_Ads*
class CORDL_TYPE GA_Ads : public ::System::Object {
public:
  // Declarations
  /// @brief Method NewEvent, addr 0x1081fa4, size 0x9c, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement, int64_t duration,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x10820dc, size 0x94, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x1082040, size 0x9c, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAAdAction adAction, ::GameAnalyticsSDK::GAAdType adType, ::StringW adSdkName, ::StringW adPlacement, ::GameAnalyticsSDK::GAAdError noAdReason,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Ads();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Ads", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Ads(GA_Ads&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Ads", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Ads(GA_Ads const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_Ads, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_Ads);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_Ads*, "GameAnalyticsSDK.Events", "GA_Ads");
