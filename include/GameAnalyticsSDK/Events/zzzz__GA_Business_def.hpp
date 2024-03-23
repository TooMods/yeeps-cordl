#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GA_Business)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GameAnalyticsSDK::Events {
class GA_Business;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_Business);
// Type: GameAnalyticsSDK.Events::GA_Business
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_Business*
class CORDL_TYPE GA_Business : public ::System::Object {
public:
  // Declarations
  /// @brief Method NewEvent, addr 0x108224c, size 0x9c, virtual false, abstract: false, final false
  static inline void NewEvent(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEventGooglePlay, addr 0x1082170, size 0xdc, virtual false, abstract: false, final false
  static inline void NewEventGooglePlay(::StringW currency, int32_t amount, ::StringW itemType, ::StringW itemId, ::StringW cartType, ::StringW receipt, ::StringW signature,
                                        ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Business();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Business", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Business(GA_Business&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Business", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Business(GA_Business const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_Business, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_Business);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_Business*, "GameAnalyticsSDK.Events", "GA_Business");
