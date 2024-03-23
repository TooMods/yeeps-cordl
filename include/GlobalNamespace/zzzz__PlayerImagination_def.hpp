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
CORDL_MODULE_EXPORT(PlayerImagination)
namespace GlobalNamespace {
class AnchoredRotator;
}
namespace GlobalNamespace {
class ImaginationPromptDisplay;
}
namespace GlobalNamespace {
class ItemDespawnZone;
}
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class Pattern;
}
namespace GlobalNamespace {
class ScrollingPatternLayout;
}
namespace GlobalNamespace {
class StackPatternLayout;
}
namespace GlobalNamespace {
class SymbolThoughtBubble;
}
namespace GlobalNamespace {
class ThoughtBubble;
}
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace GlobalNamespace {
class __PlayerImagination____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class __PlayerImagination____c__DisplayClass25_1;
}
namespace GlobalNamespace {
class __PlayerImagination____c__DisplayClass28_0;
}
namespace GlobalNamespace {
struct __ScrollingPatternLayout__SaveState;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerImagination;
}
namespace GlobalNamespace {
class __PlayerImagination____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class __PlayerImagination____c__DisplayClass25_1;
}
namespace GlobalNamespace {
class __PlayerImagination____c__DisplayClass28_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerImagination);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1);
MARK_REF_PTR_T(::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0);
// Type: ::<>c__DisplayClass25_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerImagination::<>c__DisplayClass25_0*
class CORDL_TYPE __PlayerImagination____c__DisplayClass25_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlayerImagination> __4__this;

  /// @brief Field currentIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  static inline ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0* New_ctor();

  /// @brief Method <Start>b__0, addr 0xf47e64, size 0x20, virtual false, abstract: false, final false
  inline void _Start_b__0(::GlobalNamespace::ThoughtBubble* curThoughtBubble);

  constexpr ::UnityW<::GlobalNamespace::PlayerImagination> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerImagination>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerImagination> value);

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  /// @brief Method .ctor, addr 0xf44cc0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerImagination____c__DisplayClass25_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerImagination____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerImagination____c__DisplayClass25_0(__PlayerImagination____c__DisplayClass25_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerImagination____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerImagination____c__DisplayClass25_0(__PlayerImagination____c__DisplayClass25_0 const&) = delete;

  /// @brief Field currentIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___currentIndex;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerImagination> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0, ___currentIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass25_1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerImagination::<>c__DisplayClass25_1*
class CORDL_TYPE __PlayerImagination____c__DisplayClass25_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::PlayerImagination> __4__this;

  /// @brief Field currentIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_currentIndex, put = __cordl_internal_set_currentIndex)) int32_t currentIndex;

  static inline ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1* New_ctor();

  /// @brief Method <Start>b__1, addr 0xf47e84, size 0x2c, virtual false, abstract: false, final false
  inline void _Start_b__1(::GlobalNamespace::ThoughtBubble* curThoughtBubble);

  /// @brief Method <Start>b__2, addr 0xf47eb0, size 0x2c, virtual false, abstract: false, final false
  inline void _Start_b__2(::GlobalNamespace::ThoughtBubble* curThoughtBubble);

  constexpr ::UnityW<::GlobalNamespace::PlayerImagination> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerImagination>& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get_currentIndex() const;

  constexpr int32_t& __cordl_internal_get_currentIndex();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerImagination> value);

  constexpr void __cordl_internal_set_currentIndex(int32_t value);

  /// @brief Method .ctor, addr 0xf44d6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerImagination____c__DisplayClass25_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerImagination____c__DisplayClass25_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerImagination____c__DisplayClass25_1(__PlayerImagination____c__DisplayClass25_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerImagination____c__DisplayClass25_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerImagination____c__DisplayClass25_1(__PlayerImagination____c__DisplayClass25_1 const&) = delete;

  /// @brief Field currentIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ___currentIndex;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerImagination> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1, ___currentIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass28_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerImagination::<>c__DisplayClass28_0*
class CORDL_TYPE __PlayerImagination____c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0))::System::Predicate_1<::GlobalNamespace::Pattern*>* __9__0;

  /// @brief Field permittedTypes, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_permittedTypes, put = __cordl_internal_set_permittedTypes))::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes;

  static inline ::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0* New_ctor();

  /// @brief Method <OnPermittedPatternsUpdated>b__0, addr 0xf47edc, size 0x68, virtual false, abstract: false, final false
  inline bool _OnPermittedPatternsUpdated_b__0(::GlobalNamespace::Pattern* pattern);

  constexpr ::System::Predicate_1<::GlobalNamespace::Pattern*>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Predicate_1<::GlobalNamespace::Pattern*>*> const& __cordl_internal_get___9__0() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*& __cordl_internal_get_permittedTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>*> const& __cordl_internal_get_permittedTypes() const;

  constexpr void __cordl_internal_set___9__0(::System::Predicate_1<::GlobalNamespace::Pattern*>* value);

  constexpr void __cordl_internal_set_permittedTypes(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* value);

  /// @brief Method .ctor, addr 0xf4582c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PlayerImagination____c__DisplayClass28_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PlayerImagination____c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PlayerImagination____c__DisplayClass28_0(__PlayerImagination____c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PlayerImagination____c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PlayerImagination____c__DisplayClass28_0(__PlayerImagination____c__DisplayClass28_0 const&) = delete;

  /// @brief Field permittedTypes, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* ___permittedTypes;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Predicate_1<::GlobalNamespace::Pattern*>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0, ___permittedTypes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PlayerImagination
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerImagination*
class CORDL_TYPE PlayerImagination : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass25_0 = ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0;

  using __c__DisplayClass25_1 = ::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1;

  using __c__DisplayClass28_0 = ::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0;

  /// @brief Field allThoughtsLayout, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_allThoughtsLayout, put = __cordl_internal_set_allThoughtsLayout))::UnityW<::GlobalNamespace::ScrollingPatternLayout> allThoughtsLayout;

  /// @brief Field anchoredRotator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_anchoredRotator, put = __cordl_internal_set_anchoredRotator))::UnityW<::GlobalNamespace::AnchoredRotator> anchoredRotator;

  /// @brief Field closeFlowCurve, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_closeFlowCurve, put = __cordl_internal_set_closeFlowCurve))::UnityEngine::AnimationCurve* closeFlowCurve;

  /// @brief Field closeFlowDirections, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_closeFlowDirections,
                      put = __cordl_internal_set_closeFlowDirections))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> closeFlowDirections;

  /// @brief Field closeFlowDuration, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_closeFlowDuration, put = __cordl_internal_set_closeFlowDuration)) float_t closeFlowDuration;

  /// @brief Field closeFlowDurationVariace, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_closeFlowDurationVariace, put = __cordl_internal_set_closeFlowDurationVariace)) float_t closeFlowDurationVariace;

  /// @brief Field closeSoundKey, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_closeSoundKey, put = __cordl_internal_set_closeSoundKey))::StringW closeSoundKey;

  /// @brief Field closeThoughtBubbles, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_closeThoughtBubbles,
      put = __cordl_internal_set_closeThoughtBubbles))::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*> closeThoughtBubbles;

  /// @brief Field defaultRecentPatternKeys, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultRecentPatternKeys, put = __cordl_internal_set_defaultRecentPatternKeys))::ArrayW<::StringW, ::Array<::StringW>*> defaultRecentPatternKeys;

  /// @brief Field defaultRecentPatterns, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultRecentPatterns,
                      put = __cordl_internal_set_defaultRecentPatterns))::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* defaultRecentPatterns;

  /// @brief Field imaginationPromptDisplay, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_imaginationPromptDisplay,
                      put = __cordl_internal_set_imaginationPromptDisplay))::UnityW<::GlobalNamespace::ImaginationPromptDisplay> imaginationPromptDisplay;

  /// @brief Field isOpen, offset 0xb0, size 0x1
  __declspec(property(get = __cordl_internal_get_isOpen, put = __cordl_internal_set_isOpen)) bool isOpen;

  /// @brief Field mostRececentThoughtLayouts, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mostRececentThoughtLayouts,
                      put = __cordl_internal_set_mostRececentThoughtLayouts))::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>,
                                                                                      ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*> mostRececentThoughtLayouts;

  /// @brief Field openFlowCurve, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_openFlowCurve, put = __cordl_internal_set_openFlowCurve))::UnityEngine::AnimationCurve* openFlowCurve;

  /// @brief Field openFlowDirections, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_openFlowDirections,
                      put = __cordl_internal_set_openFlowDirections))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> openFlowDirections;

  /// @brief Field openFlowDuration, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_openFlowDuration, put = __cordl_internal_set_openFlowDuration)) float_t openFlowDuration;

  /// @brief Field openFlowDurationVariance, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_openFlowDurationVariance, put = __cordl_internal_set_openFlowDurationVariance)) float_t openFlowDurationVariance;

  /// @brief Field openIndex, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_openIndex, put = __cordl_internal_set_openIndex)) int32_t openIndex;

  /// @brief Field openSoundKey, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_openSoundKey, put = __cordl_internal_set_openSoundKey))::StringW openSoundKey;

  /// @brief Field recentThoughtsLayout, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_recentThoughtsLayout, put = __cordl_internal_set_recentThoughtsLayout))::UnityW<::GlobalNamespace::StackPatternLayout> recentThoughtsLayout;

  /// @brief Field savedMostRecentPatterns, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_savedMostRecentPatterns,
                      put = __cordl_internal_set_savedMostRecentPatterns))::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*,
                                                                                   ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*> savedMostRecentPatterns;

  /// @brief Field savedScrollStates, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_savedScrollStates,
                      put = __cordl_internal_set_savedScrollStates))::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState,
                                                                             ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*> savedScrollStates;

  /// @brief Field stuffedItemDespawnZone, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stuffedItemDespawnZone, put = __cordl_internal_set_stuffedItemDespawnZone))::UnityW<::GlobalNamespace::ItemDespawnZone> stuffedItemDespawnZone;

  /// @brief Method Close, addr 0xf46804, size 0x2ac, virtual false, abstract: false, final false
  inline void Close(bool isSilent);

  static inline ::GlobalNamespace::PlayerImagination* New_ctor();

  /// @brief Method OnCloseThoughtBubbleActivated, addr 0xf46f84, size 0x14, virtual false, abstract: false, final false
  inline void OnCloseThoughtBubbleActivated(::GlobalNamespace::ThoughtBubble* thoughtBubble, int32_t index);

  /// @brief Method OnHeadFirstHoverEnter, addr 0xf47e44, size 0x4, virtual false, abstract: false, final false
  inline void OnHeadFirstHoverEnter();

  /// @brief Method OnHeadFirstHoverExit, addr 0xf47e48, size 0x4, virtual false, abstract: false, final false
  inline void OnHeadFirstHoverExit();

  /// @brief Method OnHeadSelectExit, addr 0xf47e40, size 0x4, virtual false, abstract: false, final false
  inline void OnHeadSelectExit();

  /// @brief Method OnImaginationPatternThoughtBubbleTapped, addr 0xf46ab0, size 0x4, virtual false, abstract: false, final false
  inline void OnImaginationPatternThoughtBubbleTapped(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method OnItemCrafted, addr 0xf464d0, size 0x32c, virtual false, abstract: false, final false
  inline void OnItemCrafted(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method OnMostRecentThoughtBubbleTapped, addr 0xf46ab4, size 0x50, virtual false, abstract: false, final false
  inline void OnMostRecentThoughtBubbleTapped(::GlobalNamespace::ThoughtBubble* thoughtBubble, int32_t index);

  /// @brief Method OnOwnedPatternsUpdated, addr 0xf4542c, size 0xa0, virtual false, abstract: false, final false
  inline void OnOwnedPatternsUpdated();

  /// @brief Method OnPermittedPatternsUpdated, addr 0xf44d74, size 0x5bc, virtual false, abstract: false, final false
  inline void OnPermittedPatternsUpdated(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes);

  /// @brief Method OnStuffedItemDespawned, addr 0xf45330, size 0xfc, virtual false, abstract: false, final false
  inline void OnStuffedItemDespawned(::GlobalNamespace::Item* item);

  /// @brief Method Open, addr 0xf46b04, size 0x480, virtual false, abstract: false, final false
  inline void Open(int32_t index);

  /// @brief Method SetIsOpen, addr 0xf444d8, size 0x28, virtual false, abstract: false, final false
  inline void SetIsOpen(bool newIsOpen);

  /// @brief Method Start, addr 0xf44500, size 0x6bc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout> const& __cordl_internal_get_allThoughtsLayout() const;

  constexpr ::UnityW<::GlobalNamespace::ScrollingPatternLayout>& __cordl_internal_get_allThoughtsLayout();

  constexpr ::UnityW<::GlobalNamespace::AnchoredRotator> const& __cordl_internal_get_anchoredRotator() const;

  constexpr ::UnityW<::GlobalNamespace::AnchoredRotator>& __cordl_internal_get_anchoredRotator();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_closeFlowCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_closeFlowCurve() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_closeFlowDirections() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_closeFlowDirections();

  constexpr float_t const& __cordl_internal_get_closeFlowDuration() const;

  constexpr float_t& __cordl_internal_get_closeFlowDuration();

  constexpr float_t const& __cordl_internal_get_closeFlowDurationVariace() const;

  constexpr float_t& __cordl_internal_get_closeFlowDurationVariace();

  constexpr ::StringW const& __cordl_internal_get_closeSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_closeSoundKey();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*> const& __cordl_internal_get_closeThoughtBubbles() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*>& __cordl_internal_get_closeThoughtBubbles();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_defaultRecentPatternKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_defaultRecentPatternKeys();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*& __cordl_internal_get_defaultRecentPatterns();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*> const& __cordl_internal_get_defaultRecentPatterns() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay> const& __cordl_internal_get_imaginationPromptDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::ImaginationPromptDisplay>& __cordl_internal_get_imaginationPromptDisplay();

  constexpr bool const& __cordl_internal_get_isOpen() const;

  constexpr bool& __cordl_internal_get_isOpen();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>, ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*> const& __cordl_internal_get_mostRececentThoughtLayouts() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>, ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*>& __cordl_internal_get_mostRececentThoughtLayouts();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_openFlowCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_openFlowCurve() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_openFlowDirections() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_openFlowDirections();

  constexpr float_t const& __cordl_internal_get_openFlowDuration() const;

  constexpr float_t& __cordl_internal_get_openFlowDuration();

  constexpr float_t const& __cordl_internal_get_openFlowDurationVariance() const;

  constexpr float_t& __cordl_internal_get_openFlowDurationVariance();

  constexpr int32_t const& __cordl_internal_get_openIndex() const;

  constexpr int32_t& __cordl_internal_get_openIndex();

  constexpr ::StringW const& __cordl_internal_get_openSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_openSoundKey();

  constexpr ::UnityW<::GlobalNamespace::StackPatternLayout> const& __cordl_internal_get_recentThoughtsLayout() const;

  constexpr ::UnityW<::GlobalNamespace::StackPatternLayout>& __cordl_internal_get_recentThoughtsLayout();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*> const&
  __cordl_internal_get_savedMostRecentPatterns() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*>&
  __cordl_internal_get_savedMostRecentPatterns();

  constexpr ::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState, ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*> const& __cordl_internal_get_savedScrollStates() const;

  constexpr ::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState, ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*>& __cordl_internal_get_savedScrollStates();

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone> const& __cordl_internal_get_stuffedItemDespawnZone() const;

  constexpr ::UnityW<::GlobalNamespace::ItemDespawnZone>& __cordl_internal_get_stuffedItemDespawnZone();

  constexpr void __cordl_internal_set_allThoughtsLayout(::UnityW<::GlobalNamespace::ScrollingPatternLayout> value);

  constexpr void __cordl_internal_set_anchoredRotator(::UnityW<::GlobalNamespace::AnchoredRotator> value);

  constexpr void __cordl_internal_set_closeFlowCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_closeFlowDirections(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_closeFlowDuration(float_t value);

  constexpr void __cordl_internal_set_closeFlowDurationVariace(float_t value);

  constexpr void __cordl_internal_set_closeSoundKey(::StringW value);

  constexpr void __cordl_internal_set_closeThoughtBubbles(::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*> value);

  constexpr void __cordl_internal_set_defaultRecentPatternKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_defaultRecentPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* value);

  constexpr void __cordl_internal_set_imaginationPromptDisplay(::UnityW<::GlobalNamespace::ImaginationPromptDisplay> value);

  constexpr void __cordl_internal_set_isOpen(bool value);

  constexpr void __cordl_internal_set_mostRececentThoughtLayouts(::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>, ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*> value);

  constexpr void __cordl_internal_set_openFlowCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_openFlowDirections(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_openFlowDuration(float_t value);

  constexpr void __cordl_internal_set_openFlowDurationVariance(float_t value);

  constexpr void __cordl_internal_set_openIndex(int32_t value);

  constexpr void __cordl_internal_set_openSoundKey(::StringW value);

  constexpr void __cordl_internal_set_recentThoughtsLayout(::UnityW<::GlobalNamespace::StackPatternLayout> value);

  constexpr void __cordl_internal_set_savedMostRecentPatterns(
      ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*> value);

  constexpr void __cordl_internal_set_savedScrollStates(::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState, ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*> value);

  constexpr void __cordl_internal_set_stuffedItemDespawnZone(::UnityW<::GlobalNamespace::ItemDespawnZone> value);

  /// @brief Method .ctor, addr 0xf47e4c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerImagination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerImagination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerImagination(PlayerImagination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerImagination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerImagination(PlayerImagination const&) = delete;

  /// @brief Field anchoredRotator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnchoredRotator> ___anchoredRotator;

  /// @brief Field imaginationPromptDisplay, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ImaginationPromptDisplay> ___imaginationPromptDisplay;

  /// @brief Field stuffedItemDespawnZone, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ItemDespawnZone> ___stuffedItemDespawnZone;

  /// @brief Field allThoughtsLayout, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ScrollingPatternLayout> ___allThoughtsLayout;

  /// @brief Field recentThoughtsLayout, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StackPatternLayout> ___recentThoughtsLayout;

  /// @brief Field mostRececentThoughtLayouts, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::StackPatternLayout>, ::Array<::UnityW<::GlobalNamespace::StackPatternLayout>>*> ___mostRececentThoughtLayouts;

  /// @brief Field closeThoughtBubbles, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::SymbolThoughtBubble>, ::Array<::UnityW<::GlobalNamespace::SymbolThoughtBubble>>*> ___closeThoughtBubbles;

  /// @brief Field savedScrollStates, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__ScrollingPatternLayout__SaveState, ::Array<::GlobalNamespace::__ScrollingPatternLayout__SaveState>*> ___savedScrollStates;

  /// @brief Field savedMostRecentPatterns, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*, ::Array<::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>*>*> ___savedMostRecentPatterns;

  /// @brief Field openFlowDirections, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___openFlowDirections;

  /// @brief Field openFlowCurve, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___openFlowCurve;

  /// @brief Field openFlowDuration, offset: 0x70, size: 0x4, def value: None
  float_t ___openFlowDuration;

  /// @brief Field openFlowDurationVariance, offset: 0x74, size: 0x4, def value: None
  float_t ___openFlowDurationVariance;

  /// @brief Field closeFlowDirections, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___closeFlowDirections;

  /// @brief Field closeFlowCurve, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___closeFlowCurve;

  /// @brief Field closeFlowDuration, offset: 0x88, size: 0x4, def value: None
  float_t ___closeFlowDuration;

  /// @brief Field closeFlowDurationVariace, offset: 0x8c, size: 0x4, def value: None
  float_t ___closeFlowDurationVariace;

  /// @brief Field defaultRecentPatternKeys, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___defaultRecentPatternKeys;

  /// @brief Field defaultRecentPatterns, offset: 0x98, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* ___defaultRecentPatterns;

  /// @brief Field openSoundKey, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___openSoundKey;

  /// @brief Field closeSoundKey, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___closeSoundKey;

  /// @brief Field isOpen, offset: 0xb0, size: 0x1, def value: None
  bool ___isOpen;

  /// @brief Field openIndex, offset: 0xb4, size: 0x4, def value: None
  int32_t ___openIndex;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Imagination: " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerImagination, 0xb8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___anchoredRotator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___imaginationPromptDisplay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___stuffedItemDespawnZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___allThoughtsLayout) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___recentThoughtsLayout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___mostRececentThoughtLayouts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___closeThoughtBubbles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___savedScrollStates) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___savedMostRecentPatterns) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___openFlowDirections) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___openFlowCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___openFlowDuration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___openFlowDurationVariance) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___closeFlowDirections) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___closeFlowCurve) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___closeFlowDuration) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___closeFlowDurationVariace) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___defaultRecentPatternKeys) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___defaultRecentPatterns) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___openSoundKey) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___closeSoundKey) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___isOpen) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerImagination, ___openIndex) == 0xb4, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerImagination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerImagination*, "", "PlayerImagination");
NEED_NO_BOX(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_0*, "", "PlayerImagination/<>c__DisplayClass25_0");
NEED_NO_BOX(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerImagination____c__DisplayClass25_1*, "", "PlayerImagination/<>c__DisplayClass25_1");
NEED_NO_BOX(::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlayerImagination____c__DisplayClass28_0*, "", "PlayerImagination/<>c__DisplayClass28_0");
