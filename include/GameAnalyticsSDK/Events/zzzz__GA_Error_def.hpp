#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GA_Error)
namespace GameAnalyticsSDK {
struct GAErrorSeverity;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GameAnalyticsSDK::Events {
class GA_Error;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_Error);
// Type: GameAnalyticsSDK.Events::GA_Error
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_Error*
class CORDL_TYPE GA_Error : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateNewEvent, addr 0x10828a0, size 0x7c, virtual false, abstract: false, final false
  static inline void CreateNewEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields,
                                    bool mergeFields);

  /// @brief Method NewEvent, addr 0x1082664, size 0x8, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAErrorSeverity severity, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Error();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Error", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Error(GA_Error&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Error", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Error(GA_Error const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_Error, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_Error);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_Error*, "GameAnalyticsSDK.Events", "GA_Error");
