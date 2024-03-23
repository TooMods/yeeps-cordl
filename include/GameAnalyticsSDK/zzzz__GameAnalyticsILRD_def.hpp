#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameAnalyticsILRD)
namespace UnityEngine {
class AndroidJavaClass;
}
// Forward declare root types
namespace GameAnalyticsSDK {
class GameAnalyticsILRD;
}
// Write type traits
MARK_REF_PTR_T(::GameAnalyticsSDK::GameAnalyticsILRD);
// Type: GameAnalyticsSDK::GameAnalyticsILRD
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GameAnalyticsSDK {
// Is value type: false
// CS Name: ::GameAnalyticsSDK::GameAnalyticsILRD*
class CORDL_TYPE GameAnalyticsILRD : public ::System::Object {
public:
  // Declarations
  /// @brief Field GA, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_GA, put = setStaticF_GA))::UnityEngine::AndroidJavaClass* GA;

  /// @brief Method AequusImpressionHandler, addr 0x1077cc0, size 0xc, virtual false, abstract: false, final false
  static inline void AequusImpressionHandler(::StringW sdkVersion, ::StringW json);

  /// @brief Method FyberImpressionHandler, addr 0x1077ac0, size 0x4, virtual false, abstract: false, final false
  static inline void FyberImpressionHandler(::StringW json);

  /// @brief Method HyperBidImpressionHandler, addr 0x1077d48, size 0x8, virtual false, abstract: false, final false
  static inline void HyperBidImpressionHandler(::StringW json);

  /// @brief Method IronSourceImpressionHandler, addr 0x1077b40, size 0x4, virtual false, abstract: false, final false
  static inline void IronSourceImpressionHandler(::StringW json);

  /// @brief Method MaxImpressionHandler, addr 0x1077c40, size 0x4, virtual false, abstract: false, final false
  static inline void MaxImpressionHandler(::StringW json);

  /// @brief Method MopubImpressionHandler, addr 0x1077a40, size 0x4, virtual false, abstract: false, final false
  static inline void MopubImpressionHandler(::StringW json);

  static inline ::GameAnalyticsSDK::GameAnalyticsILRD* New_ctor();

  /// @brief Method SubscribeAequusImpressions, addr 0x1077ecc, size 0x4c, virtual false, abstract: false, final false
  static inline void SubscribeAequusImpressions();

  /// @brief Method SubscribeFyberImpressions, addr 0x1077d9c, size 0x4c, virtual false, abstract: false, final false
  static inline void SubscribeFyberImpressions();

  /// @brief Method SubscribeHyperBidImpressions, addr 0x1077f18, size 0x4c, virtual false, abstract: false, final false
  static inline void SubscribeHyperBidImpressions();

  /// @brief Method SubscribeIronSourceImpressions, addr 0x1077de8, size 0x4c, virtual false, abstract: false, final false
  static inline void SubscribeIronSourceImpressions();

  /// @brief Method SubscribeMaxImpressions, addr 0x1077e80, size 0x4c, virtual false, abstract: false, final false
  static inline void SubscribeMaxImpressions();

  /// @brief Method SubscribeMoPubImpressions, addr 0x1077d50, size 0x4c, virtual false, abstract: false, final false
  static inline void SubscribeMoPubImpressions();

  /// @brief Method SubscribeTopOnImpressions, addr 0x1077e34, size 0x4c, virtual false, abstract: false, final false
  static inline void SubscribeTopOnImpressions();

  /// @brief Method TopOnImpressionHandler, addr 0x1077bc0, size 0x4, virtual false, abstract: false, final false
  static inline void TopOnImpressionHandler(::StringW json);

  /// @brief Method .ctor, addr 0x1077f64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::AndroidJavaClass* getStaticF_GA();

  static inline void setStaticF_GA(::UnityEngine::AndroidJavaClass* value);

  /// @brief Method subscribeAequusImpressions, addr 0x1077c44, size 0x7c, virtual false, abstract: false, final false
  static inline void subscribeAequusImpressions();

  /// @brief Method subscribeFyberImpressions, addr 0x1077a44, size 0x7c, virtual false, abstract: false, final false
  static inline void subscribeFyberImpressions();

  /// @brief Method subscribeHyperBidImpressions, addr 0x1077ccc, size 0x7c, virtual false, abstract: false, final false
  static inline void subscribeHyperBidImpressions();

  /// @brief Method subscribeIronSourceImpressions, addr 0x1077ac4, size 0x7c, virtual false, abstract: false, final false
  static inline void subscribeIronSourceImpressions();

  /// @brief Method subscribeMaxImpressions, addr 0x1077bc4, size 0x7c, virtual false, abstract: false, final false
  static inline void subscribeMaxImpressions();

  /// @brief Method subscribeMoPubImpressions, addr 0x10779c4, size 0x7c, virtual false, abstract: false, final false
  static inline void subscribeMoPubImpressions();

  /// @brief Method subscribeTopOnImpressions, addr 0x1077b44, size 0x7c, virtual false, abstract: false, final false
  static inline void subscribeTopOnImpressions();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameAnalyticsILRD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsILRD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameAnalyticsILRD(GameAnalyticsILRD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameAnalyticsILRD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameAnalyticsILRD(GameAnalyticsILRD const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GameAnalyticsSDK::GameAnalyticsILRD, 0x10>, "Size mismatch!");

} // namespace GameAnalyticsSDK
NEED_NO_BOX(::GameAnalyticsSDK::GameAnalyticsILRD);
DEFINE_IL2CPP_ARG_TYPE(::GameAnalyticsSDK::GameAnalyticsILRD*, "GameAnalyticsSDK", "GameAnalyticsILRD");
