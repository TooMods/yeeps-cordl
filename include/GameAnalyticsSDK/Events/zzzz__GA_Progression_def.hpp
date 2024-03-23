#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GA_Progression)
namespace GameAnalyticsSDK {
struct GAProgressionStatus;
}
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
class GA_Progression;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_Progression);
// Type: GameAnalyticsSDK.Events::GA_Progression
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_Progression*
class CORDL_TYPE GA_Progression : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateEvent, addr 0x1082934, size 0x120, virtual false, abstract: false, final false
  static inline void CreateEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03,
                                 ::System::Nullable_1<int32_t> score, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x108291c, size 0x18, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields,
                              bool mergeFields);

  /// @brief Method NewEvent, addr 0x1082a54, size 0x14, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x1082a68, size 0x14, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x1082bb8, size 0xac, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, ::StringW progression03, int32_t score,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x1082b18, size 0xa0, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, ::StringW progression02, int32_t score,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

  /// @brief Method NewEvent, addr 0x1082a7c, size 0x9c, virtual false, abstract: false, final false
  static inline void NewEvent(::GameAnalyticsSDK::GAProgressionStatus progressionStatus, ::StringW progression01, int32_t score,
                              ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* fields, bool mergeFields);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Progression();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Progression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Progression(GA_Progression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Progression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Progression(GA_Progression const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_Progression, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_Progression);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_Progression*, "GameAnalyticsSDK.Events", "GA_Progression");
