#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GA_Setup)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GameAnalyticsSDK::Events {
class GA_Setup;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::Events::GA_Setup);
// Type: GameAnalyticsSDK.Events::GA_Setup
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::Events {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.Events::GA_Setup*
class CORDL_TYPE GA_Setup : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetAvailableCustomDimensions01, addr 0x1082d08, size 0xa0, virtual false, abstract: false, final false
  static inline void SetAvailableCustomDimensions01(::System::Collections::Generic::List_1<::StringW>* customDimensions);

  /// @brief Method SetAvailableCustomDimensions02, addr 0x1082dfc, size 0xa0, virtual false, abstract: false, final false
  static inline void SetAvailableCustomDimensions02(::System::Collections::Generic::List_1<::StringW>* customDimensions);

  /// @brief Method SetAvailableCustomDimensions03, addr 0x1082e9c, size 0xa0, virtual false, abstract: false, final false
  static inline void SetAvailableCustomDimensions03(::System::Collections::Generic::List_1<::StringW>* customDimensions);

  /// @brief Method SetAvailableResourceCurrencies, addr 0x1082f3c, size 0xa0, virtual false, abstract: false, final false
  static inline void SetAvailableResourceCurrencies(::System::Collections::Generic::List_1<::StringW>* resourceCurrencies);

  /// @brief Method SetAvailableResourceItemTypes, addr 0x108311c, size 0xa0, virtual false, abstract: false, final false
  static inline void SetAvailableResourceItemTypes(::System::Collections::Generic::List_1<::StringW>* resourceItemTypes);

  /// @brief Method SetCustomDimension01, addr 0x108338c, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomDimension01(::StringW customDimension);

  /// @brief Method SetCustomDimension02, addr 0x10833e0, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomDimension02(::StringW customDimension);

  /// @brief Method SetCustomDimension03, addr 0x1083434, size 0x54, virtual false, abstract: false, final false
  static inline void SetCustomDimension03(::StringW customDimension);

  /// @brief Method SetGlobalCustomEventFields, addr 0x1083488, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalCustomEventFields(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* customFields);

  /// @brief Method SetInfoLog, addr 0x10832e4, size 0x54, virtual false, abstract: false, final false
  static inline void SetInfoLog(bool enabled);

  /// @brief Method SetVerboseLog, addr 0x1083338, size 0x54, virtual false, abstract: false, final false
  static inline void SetVerboseLog(bool enabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GA_Setup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GA_Setup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GA_Setup(GA_Setup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GA_Setup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GA_Setup(GA_Setup const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::Events::GA_Setup, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::Events
NEED_NO_BOX(::GameAnalyticsSDK::Events::GA_Setup);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::Events::GA_Setup*, "GameAnalyticsSDK.Events", "GA_Setup");
