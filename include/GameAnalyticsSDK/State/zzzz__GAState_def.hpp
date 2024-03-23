#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GAState)
namespace GameAnalyticsSDK::Setup {
class Settings;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GameAnalyticsSDK::State {
class GAState;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::State::GAState);
// Type: GameAnalyticsSDK.State::GAState
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK::State {
// Is value type: false
// CS Name: ::GameAnalyticsSDK.State::GAState*
class CORDL_TYPE GAState : public ::System::Object {
public:
  // Declarations
  /// @brief Field _settings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__settings, put = setStaticF__settings))::UnityW<::GameAnalyticsSDK::Setup::Settings> _settings;

  /// @brief Method HasAvailableCustomDimensions01, addr 0x1080204, size 0x5c, virtual false, abstract: false, final false
  static inline bool HasAvailableCustomDimensions01(::StringW _dimension01);

  /// @brief Method HasAvailableCustomDimensions02, addr 0x1080260, size 0x5c, virtual false, abstract: false, final false
  static inline bool HasAvailableCustomDimensions02(::StringW _dimension02);

  /// @brief Method HasAvailableCustomDimensions03, addr 0x10802bc, size 0x5c, virtual false, abstract: false, final false
  static inline bool HasAvailableCustomDimensions03(::StringW _dimension03);

  /// @brief Method HasAvailableResourceCurrency, addr 0x108014c, size 0x5c, virtual false, abstract: false, final false
  static inline bool HasAvailableResourceCurrency(::StringW _currency);

  /// @brief Method HasAvailableResourceItemType, addr 0x10801a8, size 0x5c, virtual false, abstract: false, final false
  static inline bool HasAvailableResourceItemType(::StringW _itemType);

  /// @brief Method Init, addr 0x107fee0, size 0x214, virtual false, abstract: false, final false
  static inline void Init();

  /// @brief Method IsManualSessionHandlingEnabled, addr 0x107d030, size 0x54, virtual false, abstract: false, final false
  static inline bool IsManualSessionHandlingEnabled();

  /// @brief Method ListContainsString, addr 0x10800f4, size 0x58, virtual false, abstract: false, final false
  static inline bool ListContainsString(::System::Collections::Generic::List_1<::StringW>* _list, ::StringW _string);

  static inline ::UnityW<::GameAnalyticsSDK::Setup::Settings> getStaticF__settings();

  static inline void setStaticF__settings(::UnityW<::GameAnalyticsSDK::Setup::Settings> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GAState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GAState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GAState(GAState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GAState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GAState(GAState const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::State::GAState, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK::State
NEED_NO_BOX(::GameAnalyticsSDK::State::GAState);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::State::GAState*, "GameAnalyticsSDK.State", "GAState");
