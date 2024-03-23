#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BundleConsole)
namespace GlobalNamespace {
class BundleData;
}
namespace GlobalNamespace {
class ConfettiCannon;
}
namespace GlobalNamespace {
class CosmeticsDisplay;
}
namespace GlobalNamespace {
class CurrencyDisplay;
}
namespace GlobalNamespace {
class ItemDisplay;
}
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace GlobalNamespace {
class __BundleConsole___DoConfettiRoutine_d__30;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class BundleConsole;
}
namespace GlobalNamespace {
class __BundleConsole___DoConfettiRoutine_d__30;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BundleConsole);
MARK_REF_PTR_T(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30);
// Type: ::<DoConfettiRoutine>d__30
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleConsole::<DoConfettiRoutine>d__30*
class CORDL_TYPE __BundleConsole___DoConfettiRoutine_d__30 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::BundleConsole> __4__this;

  /// @brief Field <i>5__2, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__i_5__2, put = __cordl_internal_set__i_5__2)) int32_t _i_5__2;

  /// @brief Field delayBetweenFires, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_delayBetweenFires, put = __cordl_internal_set_delayBetweenFires)) float_t delayBetweenFires;

  /// @brief Field numFires, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_numFires, put = __cordl_internal_set_numFires)) int32_t numFires;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x15431ac, size 0x110, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x15432bc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x15432c4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1543304, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x15431a8, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::BundleConsole> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::BundleConsole>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get__i_5__2() const;

  constexpr int32_t& __cordl_internal_get__i_5__2();

  constexpr float_t const& __cordl_internal_get_delayBetweenFires() const;

  constexpr float_t& __cordl_internal_get_delayBetweenFires();

  constexpr int32_t const& __cordl_internal_get_numFires() const;

  constexpr int32_t& __cordl_internal_get_numFires();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BundleConsole> value);

  constexpr void __cordl_internal_set__i_5__2(int32_t value);

  constexpr void __cordl_internal_set_delayBetweenFires(float_t value);

  constexpr void __cordl_internal_set_numFires(int32_t value);

  /// @brief Method .ctor, addr 0x1543008, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BundleConsole___DoConfettiRoutine_d__30();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BundleConsole___DoConfettiRoutine_d__30", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BundleConsole___DoConfettiRoutine_d__30(__BundleConsole___DoConfettiRoutine_d__30&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BundleConsole___DoConfettiRoutine_d__30", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BundleConsole___DoConfettiRoutine_d__30(__BundleConsole___DoConfettiRoutine_d__30 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BundleConsole> _____4__this;

  /// @brief Field delayBetweenFires, offset: 0x28, size: 0x4, def value: None
  float_t ___delayBetweenFires;

  /// @brief Field numFires, offset: 0x2c, size: 0x4, def value: None
  int32_t ___numFires;

  /// @brief Field <i>5__2, offset: 0x30, size: 0x4, def value: None
  int32_t ____i_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30, ___delayBetweenFires) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30, ___numFires) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30, ____i_5__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::BundleConsole
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 122, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BundleConsole*
class CORDL_TYPE BundleConsole : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DoConfettiRoutine_d__30 = ::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30;

  /// @brief Field activeConsoles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activeConsoles, put = setStaticF_activeConsoles))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BundleConsole>>* activeConsoles;

  /// @brief Field activeContainer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_activeContainer, put = __cordl_internal_set_activeContainer))::UnityW<::UnityEngine::GameObject> activeContainer;

  /// @brief Field bundleNameText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bundleNameText, put = __cordl_internal_set_bundleNameText))::UnityW<::UnityEngine::UI::Text> bundleNameText;

  /// @brief Field buyBundleButton, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_buyBundleButton, put = __cordl_internal_set_buyBundleButton))::UnityW<::GlobalNamespace::SimpleButtonController> buyBundleButton;

  /// @brief Field confettiCannons, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_confettiCannons,
                      put = __cordl_internal_set_confettiCannons))::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> confettiCannons;

  /// @brief Field cosmeticsDisplay, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cosmeticsDisplay, put = __cordl_internal_set_cosmeticsDisplay))::UnityW<::GlobalNamespace::CosmeticsDisplay> cosmeticsDisplay;

  /// @brief Field currencyDisplay, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyDisplay, put = __cordl_internal_set_currencyDisplay))::UnityW<::GlobalNamespace::CurrencyDisplay> currencyDisplay;

  /// @brief Field dispensePoint, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_dispensePoint, put = __cordl_internal_set_dispensePoint))::UnityW<::UnityEngine::Transform> dispensePoint;

  /// @brief Field hasBundleContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_hasBundleContainer, put = __cordl_internal_set_hasBundleContainer))::UnityW<::UnityEngine::GameObject> hasBundleContainer;

  /// @brief Field isActive, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_isActive, put = __cordl_internal_set_isActive)) bool isActive;

  /// @brief Field isRegisteredForActiveCallbacks, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForActiveCallbacks, put = __cordl_internal_set_isRegisteredForActiveCallbacks)) bool isRegisteredForActiveCallbacks;

  /// @brief Field itemDisplay, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_itemDisplay, put = __cordl_internal_set_itemDisplay))::UnityW<::GlobalNamespace::ItemDisplay> itemDisplay;

  /// @brief Field moneyPriceText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_moneyPriceText, put = __cordl_internal_set_moneyPriceText))::UnityW<::UnityEngine::UI::Text> moneyPriceText;

  /// @brief Field purchaseSoundKey, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_purchaseSoundKey, put = __cordl_internal_set_purchaseSoundKey))::StringW purchaseSoundKey;

  /// @brief Field timeUntilExpireCountdownText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_timeUntilExpireCountdownText, put = __cordl_internal_set_timeUntilExpireCountdownText))::UnityW<::UnityEngine::UI::Text> timeUntilExpireCountdownText;

  /// @brief Method DeregiserActiveCallbacks, addr 0x15424f8, size 0x12c, virtual false, abstract: false, final false
  inline void DeregiserActiveCallbacks();

  /// @brief Method DeregisterConsole, addr 0x154189c, size 0x80, virtual false, abstract: false, final false
  static inline void DeregisterConsole(::GlobalNamespace::BundleConsole* console);

  /// @brief Method DoConfettiRoutine, addr 0x1542f80, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DoConfettiRoutine(int32_t numFires, float_t delayBetweenFires);

  /// @brief Method FireConfetti, addr 0x1543030, size 0xe0, virtual false, abstract: false, final false
  inline void FireConfetti();

  static inline ::GlobalNamespace::BundleConsole* New_ctor();

  /// @brief Method OnActiveBundleUpdated, addr 0x1541c38, size 0x678, virtual false, abstract: false, final false
  inline void OnActiveBundleUpdated(::GlobalNamespace::BundleData* bundle);

  /// @brief Method OnBuyBundleButtonPressed, addr 0x15428d0, size 0x1ec, virtual false, abstract: false, final false
  inline void OnBuyBundleButtonPressed();

  /// @brief Method OnDisable, addr 0x15422b0, size 0x248, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x154191c, size 0x274, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsActiveModeUpdated, addr 0x1541b90, size 0xa8, virtual false, abstract: false, final false
  inline void OnIsActiveModeUpdated(bool newIsActiveMode);

  /// @brief Method OnPurchaseFailure, addr 0x1542d5c, size 0x88, virtual false, abstract: false, final false
  inline void OnPurchaseFailure();

  /// @brief Method OnPurchaseSuccess, addr 0x1542abc, size 0x1b4, virtual false, abstract: false, final false
  inline void OnPurchaseSuccess(int32_t addedCurrency);

  /// @brief Method OnReceiveDoCelebration, addr 0x1542de4, size 0x19c, virtual false, abstract: false, final false
  static inline void OnReceiveDoCelebration();

  /// @brief Method OnTimeUntilExpireUpdated, addr 0x1542710, size 0x88, virtual false, abstract: false, final false
  inline void OnTimeUntilExpireUpdated(::System::TimeSpan timeUntilExpire);

  /// @brief Method RegisterActiveCallbacks, addr 0x1542624, size 0xec, virtual false, abstract: false, final false
  inline void RegisterActiveCallbacks();

  /// @brief Method RegisterConsole, addr 0x1541788, size 0x114, virtual false, abstract: false, final false
  static inline void RegisterConsole(::GlobalNamespace::BundleConsole* console);

  /// @brief Method SendDoCelebration, addr 0x1542c70, size 0xec, virtual false, abstract: false, final false
  static inline void SendDoCelebration();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activeContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activeContainer();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_bundleNameText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_bundleNameText();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_buyBundleButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_buyBundleButton();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> const& __cordl_internal_get_confettiCannons() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*>& __cordl_internal_get_confettiCannons();

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay> const& __cordl_internal_get_cosmeticsDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CosmeticsDisplay>& __cordl_internal_get_cosmeticsDisplay();

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay> const& __cordl_internal_get_currencyDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::CurrencyDisplay>& __cordl_internal_get_currencyDisplay();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_dispensePoint() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_dispensePoint();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hasBundleContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hasBundleContainer();

  constexpr bool const& __cordl_internal_get_isActive() const;

  constexpr bool& __cordl_internal_get_isActive();

  constexpr bool const& __cordl_internal_get_isRegisteredForActiveCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForActiveCallbacks();

  constexpr ::UnityW<::GlobalNamespace::ItemDisplay> const& __cordl_internal_get_itemDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::ItemDisplay>& __cordl_internal_get_itemDisplay();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_moneyPriceText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_moneyPriceText();

  constexpr ::StringW const& __cordl_internal_get_purchaseSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_purchaseSoundKey();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_timeUntilExpireCountdownText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_timeUntilExpireCountdownText();

  constexpr void __cordl_internal_set_activeContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_bundleNameText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_buyBundleButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_confettiCannons(::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> value);

  constexpr void __cordl_internal_set_cosmeticsDisplay(::UnityW<::GlobalNamespace::CosmeticsDisplay> value);

  constexpr void __cordl_internal_set_currencyDisplay(::UnityW<::GlobalNamespace::CurrencyDisplay> value);

  constexpr void __cordl_internal_set_dispensePoint(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_hasBundleContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_isActive(bool value);

  constexpr void __cordl_internal_set_isRegisteredForActiveCallbacks(bool value);

  constexpr void __cordl_internal_set_itemDisplay(::UnityW<::GlobalNamespace::ItemDisplay> value);

  constexpr void __cordl_internal_set_moneyPriceText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_purchaseSoundKey(::StringW value);

  constexpr void __cordl_internal_set_timeUntilExpireCountdownText(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x1543110, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BundleConsole>>* getStaticF_activeConsoles();

  static inline void setStaticF_activeConsoles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BundleConsole>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BundleConsole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BundleConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BundleConsole(BundleConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BundleConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BundleConsole(BundleConsole const&) = delete;

  /// @brief Field activeContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___activeContainer;

  /// @brief Field hasBundleContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___hasBundleContainer;

  /// @brief Field bundleNameText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___bundleNameText;

  /// @brief Field timeUntilExpireCountdownText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___timeUntilExpireCountdownText;

  /// @brief Field moneyPriceText, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___moneyPriceText;

  /// @brief Field itemDisplay, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ItemDisplay> ___itemDisplay;

  /// @brief Field cosmeticsDisplay, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CosmeticsDisplay> ___cosmeticsDisplay;

  /// @brief Field currencyDisplay, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CurrencyDisplay> ___currencyDisplay;

  /// @brief Field buyBundleButton, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___buyBundleButton;

  /// @brief Field confettiCannons, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ConfettiCannon>, ::Array<::UnityW<::GlobalNamespace::ConfettiCannon>>*> ___confettiCannons;

  /// @brief Field purchaseSoundKey, offset: 0x68, size: 0x8, def value: None
  ::StringW ___purchaseSoundKey;

  /// @brief Field dispensePoint, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___dispensePoint;

  /// @brief Field isActive, offset: 0x78, size: 0x1, def value: None
  bool ___isActive;

  /// @brief Field isRegisteredForActiveCallbacks, offset: 0x79, size: 0x1, def value: None
  bool ___isRegisteredForActiveCallbacks;

  /// @brief Field initialDelay offset 0xffffffff size 0x4
  static constexpr float_t initialDelay{ 1.5 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BundleConsole, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___activeContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___hasBundleContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___bundleNameText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___timeUntilExpireCountdownText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___moneyPriceText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___itemDisplay) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___cosmeticsDisplay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___currencyDisplay) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___buyBundleButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___confettiCannons) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___purchaseSoundKey) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___dispensePoint) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___isActive) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleConsole, ___isRegisteredForActiveCallbacks) == 0x79, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BundleConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BundleConsole*, "", "BundleConsole");
NEED_NO_BOX(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BundleConsole___DoConfettiRoutine_d__30*, "", "BundleConsole/<DoConfettiRoutine>d__30");
