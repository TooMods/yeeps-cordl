#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StackPatternLayout)
namespace GlobalNamespace {
class PatternThoughtBubble;
}
namespace GlobalNamespace {
class Pattern;
}
namespace GlobalNamespace {
class ThoughtBubble;
}
namespace GlobalNamespace {
struct __Pattern__Type;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnItemPulledFromBubble;
}
namespace GlobalNamespace {
class __ThoughtBubble__OnTapped;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class StackPatternLayout;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StackPatternLayout);
// Type: ::StackPatternLayout
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StackPatternLayout*
class CORDL_TYPE StackPatternLayout : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <isOpen>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isOpen_k__BackingField, put = __cordl_internal_set__isOpen_k__BackingField)) bool _isOpen_k__BackingField;

  /// @brief Field container, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::UnityW<::UnityEngine::Transform> container;

  __declspec(property(get = get_isOpen, put = set_isOpen)) bool isOpen;

  /// @brief Field isQuickCraft, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_isQuickCraft, put = __cordl_internal_set_isQuickCraft)) bool isQuickCraft;

  /// @brief Field layoutDirection, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_layoutDirection, put = __cordl_internal_set_layoutDirection))::UnityEngine::Vector3 layoutDirection;

  /// @brief Field layoutSpacing, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_layoutSpacing, put = __cordl_internal_set_layoutSpacing)) float_t layoutSpacing;

  /// @brief Field maxCount, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_maxCount, put = __cordl_internal_set_maxCount)) int32_t maxCount;

  /// @brief Field moveCurve, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_moveCurve, put = __cordl_internal_set_moveCurve))::UnityEngine::AnimationCurve* moveCurve;

  /// @brief Field onItemPulledFromBubbleCallback, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_onItemPulledFromBubbleCallback,
                      put = __cordl_internal_set_onItemPulledFromBubbleCallback))::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemPulledFromBubbleCallback;

  /// @brief Field onTappedCallback, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_onTappedCallback, put = __cordl_internal_set_onTappedCallback))::GlobalNamespace::__ThoughtBubble__OnTapped* onTappedCallback;

  /// @brief Field patternThoughtBubbles, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_patternThoughtBubbles,
                      put = __cordl_internal_set_patternThoughtBubbles))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>* patternThoughtBubbles;

  /// @brief Field thoughtBubblePrefab, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_thoughtBubblePrefab, put = __cordl_internal_set_thoughtBubblePrefab))::UnityW<::UnityEngine::GameObject> thoughtBubblePrefab;

  /// @brief Method AddPattern, addr 0xf45e50, size 0x460, virtual false, abstract: false, final false
  inline void AddPattern(::GlobalNamespace::Pattern* pattern, bool addToEnd);

  /// @brief Method AddPatterns, addr 0xf45c94, size 0x1bc, virtual false, abstract: false, final false
  inline void AddPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* patterns, bool addToEnd);

  /// @brief Method Clear, addr 0xf4a340, size 0x1bc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearNonPermittedPatterns, addr 0xf45834, size 0x460, virtual false, abstract: false, final false
  inline void ClearNonPermittedPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::__Pattern__Type>* permittedTypes);

  /// @brief Method Close, addr 0xf4578c, size 0xa0, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method Close, addr 0xf47ce4, size 0x15c, virtual false, abstract: false, final false
  inline void Close(::UnityEngine::Vector3 flowPosition, ::UnityEngine::Vector3 flowVector, ::UnityEngine::AnimationCurve* flowCurve, float_t flowDuration, float_t durationVariance);

  /// @brief Method GetDisplayedPatterns, addr 0xf462b0, size 0x220, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* GetDisplayedPatterns();

  /// @brief Method GetLayoutPosition, addr 0xf4a320, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLayoutPosition(int32_t index);

  /// @brief Method Initialize, addr 0xf44cb8, size 0x8, virtual false, abstract: false, final false
  inline void Initialize(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* onItemCraftedCallback, ::GlobalNamespace::__ThoughtBubble__OnTapped* onTappedCallback);

  static inline ::GlobalNamespace::StackPatternLayout* New_ctor();

  /// @brief Method OnItemPulledFromBubble, addr 0xf4a4fc, size 0x1c, virtual false, abstract: false, final false
  inline void OnItemPulledFromBubble(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method OnThoughtBubbleTapped, addr 0xf4a518, size 0x1c, virtual false, abstract: false, final false
  inline void OnThoughtBubbleTapped(::GlobalNamespace::ThoughtBubble* thoughtBubble);

  /// @brief Method Open, addr 0xf44cc8, size 0xa4, virtual false, abstract: false, final false
  inline void Open();

  /// @brief Method Open, addr 0xf478a8, size 0x1c4, virtual false, abstract: false, final false
  inline void Open(::UnityEngine::Vector3 flowPosition, ::UnityEngine::Vector3 flowVector, ::UnityEngine::AnimationCurve* flowCurve, float_t flowDuration, float_t flowDurationVariance);

  /// @brief Method SetPatterns, addr 0xf4786c, size 0x3c, virtual false, abstract: false, final false
  inline void SetPatterns(::System::Collections::Generic::List_1<::GlobalNamespace::Pattern*>* patterns);

  constexpr bool const& __cordl_internal_get__isOpen_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isOpen_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_container() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_container();

  constexpr bool const& __cordl_internal_get_isQuickCraft() const;

  constexpr bool& __cordl_internal_get_isQuickCraft();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_layoutDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_layoutDirection();

  constexpr float_t const& __cordl_internal_get_layoutSpacing() const;

  constexpr float_t& __cordl_internal_get_layoutSpacing();

  constexpr int32_t const& __cordl_internal_get_maxCount() const;

  constexpr int32_t& __cordl_internal_get_maxCount();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_moveCurve();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_moveCurve() const;

  constexpr ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*& __cordl_internal_get_onItemPulledFromBubbleCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble*> const& __cordl_internal_get_onItemPulledFromBubbleCallback() const;

  constexpr ::GlobalNamespace::__ThoughtBubble__OnTapped*& __cordl_internal_get_onTappedCallback();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ThoughtBubble__OnTapped*> const& __cordl_internal_get_onTappedCallback() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>*& __cordl_internal_get_patternThoughtBubbles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>*> const& __cordl_internal_get_patternThoughtBubbles() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_thoughtBubblePrefab() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_thoughtBubblePrefab();

  constexpr void __cordl_internal_set__isOpen_k__BackingField(bool value);

  constexpr void __cordl_internal_set_container(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_isQuickCraft(bool value);

  constexpr void __cordl_internal_set_layoutDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_layoutSpacing(float_t value);

  constexpr void __cordl_internal_set_maxCount(int32_t value);

  constexpr void __cordl_internal_set_moveCurve(::UnityEngine::AnimationCurve* value);

  constexpr void __cordl_internal_set_onItemPulledFromBubbleCallback(::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* value);

  constexpr void __cordl_internal_set_onTappedCallback(::GlobalNamespace::__ThoughtBubble__OnTapped* value);

  constexpr void __cordl_internal_set_patternThoughtBubbles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>* value);

  constexpr void __cordl_internal_set_thoughtBubblePrefab(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0xf4a534, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isOpen, addr 0xf4a30c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOpen();

  /// @brief Method set_isOpen, addr 0xf4a314, size 0xc, virtual false, abstract: false, final false
  inline void set_isOpen(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StackPatternLayout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StackPatternLayout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StackPatternLayout(StackPatternLayout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StackPatternLayout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StackPatternLayout(StackPatternLayout const&) = delete;

  /// @brief Field thoughtBubblePrefab, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___thoughtBubblePrefab;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___container;

  /// @brief Field layoutDirection, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___layoutDirection;

  /// @brief Field layoutSpacing, offset: 0x34, size: 0x4, def value: None
  float_t ___layoutSpacing;

  /// @brief Field moveCurve, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___moveCurve;

  /// @brief Field isQuickCraft, offset: 0x40, size: 0x1, def value: None
  bool ___isQuickCraft;

  /// @brief Field maxCount, offset: 0x44, size: 0x4, def value: None
  int32_t ___maxCount;

  /// @brief Field <isOpen>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____isOpen_k__BackingField;

  /// @brief Field patternThoughtBubbles, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PatternThoughtBubble>>* ___patternThoughtBubbles;

  /// @brief Field onItemPulledFromBubbleCallback, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::__ThoughtBubble__OnItemPulledFromBubble* ___onItemPulledFromBubbleCallback;

  /// @brief Field onTappedCallback, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::__ThoughtBubble__OnTapped* ___onTappedCallback;

  /// @brief Field debugPreface offset 0xffffffff size 0x8
  static constexpr ::ConstString debugPreface{ u"Stack Pattern Layout: " };

  /// @brief Field moveDuration offset 0xffffffff size 0x4
  static constexpr float_t moveDuration{ 0.4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StackPatternLayout, 0x68>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___thoughtBubblePrefab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___layoutDirection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___layoutSpacing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___moveCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___isQuickCraft) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___maxCount) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ____isOpen_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___patternThoughtBubbles) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___onItemPulledFromBubbleCallback) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StackPatternLayout, ___onTappedCallback) == 0x60, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StackPatternLayout);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StackPatternLayout*, "", "StackPatternLayout");
