#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GA_Design)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GameAnalyticsSDK::Events {
class GA_Design;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_Design);
// Type: GameAnalyticsSDK.Events::GA_Design
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_Design*
class CORDL_TYPE GA_Design : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateNewEvent, addr 0x10827a0, size 0xec, virtual false, abstract: false, final false
  static inline void CreateNewEvent(::StringW eventName, ::System::Nullable_1<float_t> eventValue, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields,
                                    bool mergeFields);

  /// @brief Method NewEvent, addr 0x108271c, size 0x84, virtual false, abstract: false, final false
  static inline void NewEvent(::StringW eventName, float_t eventValue, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x108288c, size 0x14, virtual false, abstract: false, final false
  static inline void NewEvent(::StringW eventName, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Design();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Design", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Design(GA_Design&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Design", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Design(GA_Design const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_Design, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_Design);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_Design*, "GameAnalyticsSDK.Events", "GA_Design");
