#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameAnalyticsATTListener)
// Forward declare root types
namespace GameAnalyticsSDK {
class IGameAnalyticsATTListener;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::IGameAnalyticsATTListener);
// Type: GameAnalyticsSDK::IGameAnalyticsATTListener
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK {
// Is value type: false
// CS Name: ::GameAnalyticsSDK::IGameAnalyticsATTListener*
class CORDL_TYPE IGameAnalyticsATTListener {
public:
  // Declarations
  /// @brief Method GameAnalyticsATTListenerAuthorized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GameAnalyticsATTListenerAuthorized();

  /// @brief Method GameAnalyticsATTListenerDenied, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GameAnalyticsATTListenerDenied();

  /// @brief Method GameAnalyticsATTListenerNotDetermined, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GameAnalyticsATTListenerNotDetermined();

  /// @brief Method GameAnalyticsATTListenerRestricted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GameAnalyticsATTListenerRestricted();

  // Ctor Parameters [CppParam { name: "", ty: "IGameAnalyticsATTListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGameAnalyticsATTListener(IGameAnalyticsATTListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGameAnalyticsATTListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGameAnalyticsATTListener(IGameAnalyticsATTListener const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GameAnalyticsSDK
NEED_NO_BOX(::GameAnalyticsSDK::IGameAnalyticsATTListener);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::IGameAnalyticsATTListener*, "GameAnalyticsSDK", "IGameAnalyticsATTListener");
