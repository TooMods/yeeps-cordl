#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MasterPlayerStuffingDisplayUI)
namespace GlobalNamespace {
class AccountData;
}
namespace GlobalNamespace {
class __MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32;
}
namespace GlobalNamespace {
struct __Pattern__Type;
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
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class MasterPlayerStuffingDisplayUI;
}
namespace GlobalNamespace {
class __MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MasterPlayerStuffingDisplayUI);
MARK_REF_PTR_T(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32);
// Type: ::<DisplayAmountRoutine>d__32
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MasterPlayerStuffingDisplayUI::<DisplayAmountRoutine>d__32*
class CORDL_TYPE __MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MasterPlayerStuffingDisplayUI> __4__this;

  /// @brief Field <p>5__3, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__p_5__3, put = __cordl_internal_set__p_5__3)) float_t _p_5__3;

  /// @brief Field <startingCount>5__2, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__startingCount_5__2, put = __cordl_internal_set__startingCount_5__2)) int32_t _startingCount_5__2;

  /// @brief Field isCurrency, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isCurrency, put = __cordl_internal_set_isCurrency)) bool isCurrency;

  /// @brief Field targetCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_targetCount, put = __cordl_internal_set_targetCount)) int32_t targetCount;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x154d4e4, size 0x1e8, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x154d6cc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x154d6d4, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x154d714, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x154d4e0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayerStuffingDisplayUI> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MasterPlayerStuffingDisplayUI>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get__p_5__3() const;

  constexpr float_t& __cordl_internal_get__p_5__3();

  constexpr int32_t const& __cordl_internal_get__startingCount_5__2() const;

  constexpr int32_t& __cordl_internal_get__startingCount_5__2();

  constexpr bool const& __cordl_internal_get_isCurrency() const;

  constexpr bool& __cordl_internal_get_isCurrency();

  constexpr int32_t const& __cordl_internal_get_targetCount() const;

  constexpr int32_t& __cordl_internal_get_targetCount();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MasterPlayerStuffingDisplayUI> value);

  constexpr void __cordl_internal_set__p_5__3(float_t value);

  constexpr void __cordl_internal_set__startingCount_5__2(int32_t value);

  constexpr void __cordl_internal_set_isCurrency(bool value);

  constexpr void __cordl_internal_set_targetCount(int32_t value);

  /// @brief Method .ctor, addr 0x154d4a8, size 0x28, virtual false, abstract: false, final false
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
  constexpr __MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32(__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32(__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field isCurrency, offset: 0x20, size: 0x1, def value: None
  bool ___isCurrency;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MasterPlayerStuffingDisplayUI> _____4__this;

  /// @brief Field targetCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___targetCount;

  /// @brief Field <startingCount>5__2, offset: 0x34, size: 0x4, def value: None
  int32_t ____startingCount_5__2;

  /// @brief Field <p>5__3, offset: 0x38, size: 0x4, def value: None
  float_t ____p_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, ___isCurrency) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, ___targetCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, ____startingCount_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32, ____p_5__3) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MasterPlayerStuffingDisplayUI
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 113, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MasterPlayerStuffingDisplayUI*
class CORDL_TYPE MasterPlayerStuffingDisplayUI : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using _DisplayAmountRoutine_d__32 = ::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32;

  /// @brief Field amountText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_amountText, put = __cordl_internal_set_amountText))::UnityW<::UnityEngine::UI::Text> amountText;

  /// @brief Field curDisplayAmountRoutine, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_curDisplayAmountRoutine, put = __cordl_internal_set_curDisplayAmountRoutine))::UnityEngine::Coroutine* curDisplayAmountRoutine;

  /// @brief Field curUIAlpha, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_curUIAlpha, put = __cordl_internal_set_curUIAlpha)) float_t curUIAlpha;

  /// @brief Field curUIColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_curUIColor, put = __cordl_internal_set_curUIColor))::UnityEngine::Color curUIColor;

  /// @brief Field currencyIcon, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currencyIcon, put = __cordl_internal_set_currencyIcon))::UnityW<::UnityEngine::Sprite> currencyIcon;

  /// @brief Field displayStuffingCountCurve, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_displayStuffingCountCurve, put = __cordl_internal_set_displayStuffingCountCurve))::UnityEngine::AnimationCurve* displayStuffingCountCurve;

  /// @brief Field hideInCreativeMode, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_hideInCreativeMode, put = __cordl_internal_set_hideInCreativeMode)) bool hideInCreativeMode;

  /// @brief Field iconImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_iconImage, put = __cordl_internal_set_iconImage))::UnityW<::UnityEngine::UI::Image> iconImage;

  /// @brief Field isDisplayingCurrency, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_isDisplayingCurrency, put = __cordl_internal_set_isDisplayingCurrency)) bool isDisplayingCurrency;

  /// @brief Field lastDisplayedCurrency, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_lastDisplayedCurrency, put = __cordl_internal_set_lastDisplayedCurrency)) int32_t lastDisplayedCurrency;

  /// @brief Field lastDisplayedStuffingCount, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_lastDisplayedStuffingCount, put = __cordl_internal_set_lastDisplayedStuffingCount)) int32_t lastDisplayedStuffingCount;

  /// @brief Field shouldCurrencyDisplayFadeout, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldCurrencyDisplayFadeout, put = __cordl_internal_set_shouldCurrencyDisplayFadeout)) bool shouldCurrencyDisplayFadeout;

  /// @brief Field stuffingIcon, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffingIcon, put = __cordl_internal_set_stuffingIcon))::UnityW<::UnityEngine::Sprite> stuffingIcon;

  /// @brief Field switchToStuffingCountTimer, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_switchToStuffingCountTimer, put = __cordl_internal_set_switchToStuffingCountTimer)) float_t switchToStuffingCountTimer;

  /// @brief Method CommafyNumberString, addr 0x15472dc, size 0xc4, virtual false, abstract: false, final false
  static inline ::StringW CommafyNumberString(int32_t amount, ByRef<int32_t> numDigits);

  /// @brief Method DisplayAmount, addr 0x154d298, size 0x138, virtual false, abstract: false, final false
  inline void DisplayAmount(bool isCurrency, int32_t amount, bool isCurrencyDeduction, bool instant);

  /// @brief Method DisplayAmountRoutine, addr 0x154d424, size 0x84, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DisplayAmountRoutine(bool isCurrency, int32_t targetCount);

  /// @brief Method DisplayCurrencyAmount, addr 0x154d07c, size 0x14, virtual false, abstract: false, final false
  inline void DisplayCurrencyAmount(int32_t amount, bool isDeduction, bool instant);

  /// @brief Method DisplayStuffingAmount, addr 0x154cb30, size 0x18, virtual false, abstract: false, final false
  inline void DisplayStuffingAmount(int32_t amount, bool instant);

  static inline ::GlobalNamespace::MasterPlayerStuffingDisplayUI* New_ctor();

  /// @brief Method OnAccountDataLoaded, addr 0x154cc68, size 0x190, virtual false, abstract: false, final false
  inline void OnAccountDataLoaded(::GlobalNamespace::AccountData* accountData);

  /// @brief Method OnInCosmeticsStoreUpdated, addr 0x154d1e4, size 0xb4, virtual false, abstract: false, final false
  inline void OnInCosmeticsStoreUpdated(bool newInCosmeticsStore);

  /// @brief Method OnInTechWebUpdated, addr 0x154d0ec, size 0xb4, virtual false, abstract: false, final false
  inline void OnInTechWebUpdated(bool newInTechWeb);

  /// @brief Method OnIsCreativeModeUpdated, addr 0x154cb48, size 0x90, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnMasterPlayerCurrencyChanged, addr 0x154d068, size 0x14, virtual false, abstract: false, final false
  inline void OnMasterPlayerCurrencyChanged(int32_t newCurrency, bool isDeduction);

  /// @brief Method OnMasterPlayerFocusCurrency, addr 0x154d090, size 0x5c, virtual false, abstract: false, final false
  inline void OnMasterPlayerFocusCurrency();

  /// @brief Method OnMasterPlayerInCurrencyZone, addr 0x154d1a0, size 0x44, virtual false, abstract: false, final false
  inline void OnMasterPlayerInCurrencyZone(bool newInZone);

  /// @brief Method OnMasterPlayerStuffingCountChanged, addr 0x154d024, size 0x44, virtual false, abstract: false, final false
  inline void OnMasterPlayerStuffingCountChanged(int32_t newCount);

  /// @brief Method OnPermittedPatternsUpdated, addr 0x154cbd8, size 0x90, virtual false, abstract: false, final false
  inline void OnPermittedPatternsUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedPatternTypes);

  /// @brief Method RefreshUIColor, addr 0x154cfc8, size 0x5c, virtual false, abstract: false, final false
  inline void RefreshUIColor();

  /// @brief Method ShouldShowStuffingCount, addr 0x154ced4, size 0xf4, virtual false, abstract: false, final false
  inline bool ShouldShowStuffingCount();

  /// @brief Method ShowAmount, addr 0x154d3d0, size 0x54, virtual false, abstract: false, final false
  inline void ShowAmount(bool isCurrency, int32_t amount);

  /// @brief Method Start, addr 0x154c610, size 0x520, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x154cdf8, size 0xdc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_amountText() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_amountText();

  constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_curDisplayAmountRoutine();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> const& __cordl_internal_get_curDisplayAmountRoutine() const;

  constexpr float_t const& __cordl_internal_get_curUIAlpha() const;

  constexpr float_t& __cordl_internal_get_curUIAlpha();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_curUIColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_curUIColor();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_currencyIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_currencyIcon();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_displayStuffingCountCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_displayStuffingCountCurve() const;

  constexpr bool const& __cordl_internal_get_hideInCreativeMode() const;

  constexpr bool& __cordl_internal_get_hideInCreativeMode();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_iconImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_iconImage();

  constexpr bool const& __cordl_internal_get_isDisplayingCurrency() const;

  constexpr bool& __cordl_internal_get_isDisplayingCurrency();

  constexpr int32_t const& __cordl_internal_get_lastDisplayedCurrency() const;

  constexpr int32_t& __cordl_internal_get_lastDisplayedCurrency();

  constexpr int32_t const& __cordl_internal_get_lastDisplayedStuffingCount() const;

  constexpr int32_t& __cordl_internal_get_lastDisplayedStuffingCount();

  constexpr bool const& __cordl_internal_get_shouldCurrencyDisplayFadeout() const;

  constexpr bool& __cordl_internal_get_shouldCurrencyDisplayFadeout();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_stuffingIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_stuffingIcon();

  constexpr float_t const& __cordl_internal_get_switchToStuffingCountTimer() const;

  constexpr float_t& __cordl_internal_get_switchToStuffingCountTimer();

  constexpr void __cordl_internal_set_amountText(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_curDisplayAmountRoutine(::UnityEngine::Coroutine* value);

  constexpr void __cordl_internal_set_curUIAlpha(float_t value);

  constexpr void __cordl_internal_set_curUIColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_currencyIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_displayStuffingCountCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_hideInCreativeMode(bool value);

  constexpr void __cordl_internal_set_iconImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_isDisplayingCurrency(bool value);

  constexpr void __cordl_internal_set_lastDisplayedCurrency(int32_t value);

  constexpr void __cordl_internal_set_lastDisplayedStuffingCount(int32_t value);

  constexpr void __cordl_internal_set_shouldCurrencyDisplayFadeout(bool value);

  constexpr void __cordl_internal_set_stuffingIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_switchToStuffingCountTimer(float_t value);

  /// @brief Method .ctor, addr 0x154d4d0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MasterPlayerStuffingDisplayUI();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MasterPlayerStuffingDisplayUI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MasterPlayerStuffingDisplayUI(MasterPlayerStuffingDisplayUI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MasterPlayerStuffingDisplayUI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MasterPlayerStuffingDisplayUI(MasterPlayerStuffingDisplayUI const&) = delete;

  /// @brief Field stuffingIcon, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___stuffingIcon;

  /// @brief Field currencyIcon, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___currencyIcon;

  /// @brief Field iconImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___iconImage;

  /// @brief Field amountText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___amountText;

  /// @brief Field curUIColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ___curUIColor;

  /// @brief Field curUIAlpha, offset: 0x48, size: 0x4, def value: None
  float_t ___curUIAlpha;

  /// @brief Field isDisplayingCurrency, offset: 0x4c, size: 0x1, def value: None
  bool ___isDisplayingCurrency;

  /// @brief Field shouldCurrencyDisplayFadeout, offset: 0x4d, size: 0x1, def value: None
  bool ___shouldCurrencyDisplayFadeout;

  /// @brief Field switchToStuffingCountTimer, offset: 0x50, size: 0x4, def value: None
  float_t ___switchToStuffingCountTimer;

  /// @brief Field lastDisplayedStuffingCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___lastDisplayedStuffingCount;

  /// @brief Field lastDisplayedCurrency, offset: 0x58, size: 0x4, def value: None
  int32_t ___lastDisplayedCurrency;

  /// @brief Field curDisplayAmountRoutine, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Coroutine* ___curDisplayAmountRoutine;

  /// @brief Field displayStuffingCountCurve, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___displayStuffingCountCurve;

  /// @brief Field hideInCreativeMode, offset: 0x70, size: 0x1, def value: None
  bool ___hideInCreativeMode;

  /// @brief Field currencyDisplayDuration offset 0xffffffff size 0x4
  static constexpr float_t currencyDisplayDuration{ 3.5 };

  /// @brief Field currencyDisplayFadeoutDuration offset 0xffffffff size 0x4
  static constexpr float_t currencyDisplayFadeoutDuration{ 1.25 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MasterPlayerStuffingDisplayUI, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___stuffingIcon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___currencyIcon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___iconImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___amountText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___curUIColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___curUIAlpha) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___isDisplayingCurrency) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___shouldCurrencyDisplayFadeout) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___switchToStuffingCountTimer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___lastDisplayedStuffingCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___lastDisplayedCurrency) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___curDisplayAmountRoutine) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___displayStuffingCountCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MasterPlayerStuffingDisplayUI, ___hideInCreativeMode) == 0x70, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MasterPlayerStuffingDisplayUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MasterPlayerStuffingDisplayUI*, "", "MasterPlayerStuffingDisplayUI");
NEED_NO_BOX(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MasterPlayerStuffingDisplayUI___DisplayAmountRoutine_d__32*, "", "MasterPlayerStuffingDisplayUI/<DisplayAmountRoutine>d__32");
