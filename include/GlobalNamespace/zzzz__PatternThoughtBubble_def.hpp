#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ThoughtBubble_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PatternThoughtBubble)
namespace GlobalNamespace {
class Item;
}
namespace GlobalNamespace {
class PatternDetailsDisplayUI;
}
namespace GlobalNamespace {
class Pattern;
}
namespace GlobalNamespace {
class __Item__CustomParameters;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class PatternThoughtBubble;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PatternThoughtBubble);
// Type: ::PatternThoughtBubble
// SizeInfo { instance_size: 496, native_size: -1, calculated_instance_size: 496, calculated_native_size: 489, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PatternThoughtBubble*
class CORDL_TYPE PatternThoughtBubble : public ::GlobalNamespace::ThoughtBubble {
public:
  // Declarations
  /// @brief Field <pattern>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__pattern_k__BackingField, put = __cordl_internal_set__pattern_k__BackingField))::GlobalNamespace::Pattern* _pattern_k__BackingField;

  /// @brief Field canvas, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_canvas, put = __cordl_internal_set_canvas))::UnityW<::UnityEngine::GameObject> canvas;

  /// @brief Field colorKey, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_colorKey, put = __cordl_internal_set_colorKey))::StringW colorKey;

  /// @brief Field failSoundKey, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_failSoundKey, put = __cordl_internal_set_failSoundKey))::StringW failSoundKey;

  /// @brief Field hasPlayedInvalidSound, offset 0x1e0, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPlayedInvalidSound, put = __cordl_internal_set_hasPlayedInvalidSound)) bool hasPlayedInvalidSound;

  /// @brief Field isRegisteredForCallbacks, offset 0x1e8, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForCallbacks, put = __cordl_internal_set_isRegisteredForCallbacks)) bool isRegisteredForCallbacks;

  /// @brief Field itemCustomParameters, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_itemCustomParameters, put = __cordl_internal_set_itemCustomParameters))::GlobalNamespace::__Item__CustomParameters* itemCustomParameters;

  /// @brief Field nextCanPlayInvalidSoundTime, offset 0x1e4, size 0x4
  __declspec(property(get = __cordl_internal_get_nextCanPlayInvalidSoundTime, put = __cordl_internal_set_nextCanPlayInvalidSoundTime)) float_t nextCanPlayInvalidSoundTime;

  __declspec(property(get = get_pattern, put = set_pattern))::GlobalNamespace::Pattern* pattern;

  /// @brief Field patternDetailsDisplay, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_patternDetailsDisplay, put = __cordl_internal_set_patternDetailsDisplay))::UnityW<::GlobalNamespace::PatternDetailsDisplayUI> patternDetailsDisplay;

  /// @brief Method GeneratePreviewObject, addr 0xf4e928, size 0x274, virtual false, abstract: false, final false
  inline void GeneratePreviewObject();

  /// @brief Method GetPattern, addr 0xf467fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::Pattern* GetPattern();

  static inline ::GlobalNamespace::PatternThoughtBubble* New_ctor();

  /// @brief Method OnBubbleInCenterUpdate, addr 0xf4efb0, size 0xc, virtual true, abstract: false, final false
  inline void OnBubbleInCenterUpdate();

  /// @brief Method OnDisableAdditions, addr 0xf4f294, size 0x224, virtual true, abstract: false, final false
  inline void OnDisableAdditions();

  /// @brief Method OnEnableAdditions, addr 0xf4efc8, size 0x248, virtual true, abstract: false, final false
  inline void OnEnableAdditions();

  /// @brief Method OnIsCreativeModeUpdated, addr 0xf4f258, size 0x3c, virtual false, abstract: false, final false
  inline void OnIsCreativeModeUpdated(bool newIsCreativeMode);

  /// @brief Method OnIsHoveredUpdated, addr 0xf4f4b8, size 0x1a0, virtual true, abstract: false, final false
  inline void OnIsHoveredUpdated(bool newHovered);

  /// @brief Method OnLateUpdate, addr 0xf4ec1c, size 0x10c, virtual true, abstract: false, final false
  inline void OnLateUpdate();

  /// @brief Method OnMasterPlayerStuffingCountChanged, addr 0xf4f210, size 0x48, virtual false, abstract: false, final false
  inline void OnMasterPlayerStuffingCountChanged(int32_t newCount);

  /// @brief Method OnNoLongerSelected, addr 0xf4efbc, size 0xc, virtual true, abstract: false, final false
  inline void OnNoLongerSelected();

  /// @brief Method OnPopReform, addr 0xf4eb9c, size 0x80, virtual true, abstract: false, final false
  inline void OnPopReform();

  /// @brief Method SetColorKey, addr 0xf4e89c, size 0x8c, virtual false, abstract: false, final false
  inline void SetColorKey(::StringW newColorKey);

  /// @brief Method SetPattern, addr 0xf48ce4, size 0xe4, virtual false, abstract: false, final false
  inline void SetPattern(::GlobalNamespace::Pattern* pattern);

  /// @brief Method TriggerCraft, addr 0xf4ed28, size 0xe8, virtual true, abstract: false, final false
  inline void TriggerCraft();

  /// @brief Method TryCraftItem, addr 0xf4ee10, size 0x1a0, virtual false, abstract: false, final false
  inline bool TryCraftItem(bool isRightHandGrab, ByRef<::GlobalNamespace::Item*> craftedItem);

  constexpr ::GlobalNamespace::Pattern*& __cordl_internal_get__pattern_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Pattern*> const& __cordl_internal_get__pattern_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_canvas() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_canvas();

  constexpr ::StringW const& __cordl_internal_get_colorKey() const;

  constexpr ::StringW& __cordl_internal_get_colorKey();

  constexpr ::StringW const& __cordl_internal_get_failSoundKey() const;

  constexpr ::StringW& __cordl_internal_get_failSoundKey();

  constexpr bool const& __cordl_internal_get_hasPlayedInvalidSound() const;

  constexpr bool& __cordl_internal_get_hasPlayedInvalidSound();

  constexpr bool const& __cordl_internal_get_isRegisteredForCallbacks() const;

  constexpr bool& __cordl_internal_get_isRegisteredForCallbacks();

  constexpr ::GlobalNamespace::__Item__CustomParameters*& __cordl_internal_get_itemCustomParameters();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__Item__CustomParameters*> const& __cordl_internal_get_itemCustomParameters() const;

  constexpr float_t const& __cordl_internal_get_nextCanPlayInvalidSoundTime() const;

  constexpr float_t& __cordl_internal_get_nextCanPlayInvalidSoundTime();

  constexpr ::UnityW<::GlobalNamespace::PatternDetailsDisplayUI> const& __cordl_internal_get_patternDetailsDisplay() const;

  constexpr ::UnityW<::GlobalNamespace::PatternDetailsDisplayUI>& __cordl_internal_get_patternDetailsDisplay();

  constexpr void __cordl_internal_set__pattern_k__BackingField(::GlobalNamespace::Pattern* value);

  constexpr void __cordl_internal_set_canvas(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_colorKey(::StringW value);

  constexpr void __cordl_internal_set_failSoundKey(::StringW value);

  constexpr void __cordl_internal_set_hasPlayedInvalidSound(bool value);

  constexpr void __cordl_internal_set_isRegisteredForCallbacks(bool value);

  constexpr void __cordl_internal_set_itemCustomParameters(::GlobalNamespace::__Item__CustomParameters* value);

  constexpr void __cordl_internal_set_nextCanPlayInvalidSoundTime(float_t value);

  constexpr void __cordl_internal_set_patternDetailsDisplay(::UnityW<::GlobalNamespace::PatternDetailsDisplayUI> value);

  /// @brief Method .ctor, addr 0xf4f658, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pattern, addr 0xf4e88c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::Pattern* get_pattern();

  /// @brief Method set_pattern, addr 0xf4e894, size 0x8, virtual false, abstract: false, final false
  inline void set_pattern(::GlobalNamespace::Pattern* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PatternThoughtBubble();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PatternThoughtBubble", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PatternThoughtBubble(PatternThoughtBubble&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PatternThoughtBubble", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PatternThoughtBubble(PatternThoughtBubble const&) = delete;

  /// @brief Field canvas, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___canvas;

  /// @brief Field patternDetailsDisplay, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PatternDetailsDisplayUI> ___patternDetailsDisplay;

  /// @brief Field failSoundKey, offset: 0x1c0, size: 0x8, def value: None
  ::StringW ___failSoundKey;

  /// @brief Field <pattern>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::GlobalNamespace::Pattern* ____pattern_k__BackingField;

  /// @brief Field itemCustomParameters, offset: 0x1d0, size: 0x8, def value: None
  ::GlobalNamespace::__Item__CustomParameters* ___itemCustomParameters;

  /// @brief Field colorKey, offset: 0x1d8, size: 0x8, def value: None
  ::StringW ___colorKey;

  /// @brief Field hasPlayedInvalidSound, offset: 0x1e0, size: 0x1, def value: None
  bool ___hasPlayedInvalidSound;

  /// @brief Field nextCanPlayInvalidSoundTime, offset: 0x1e4, size: 0x4, def value: None
  float_t ___nextCanPlayInvalidSoundTime;

  /// @brief Field isRegisteredForCallbacks, offset: 0x1e8, size: 0x1, def value: None
  bool ___isRegisteredForCallbacks;

  /// @brief Field INVALID_SOUND_PLAY_DELAY offset 0xffffffff size 0x4
  static constexpr float_t INVALID_SOUND_PLAY_DELAY{ 0.3 };

  /// @brief Field previewObjectRotationSpeed offset 0xffffffff size 0x4
  static constexpr float_t previewObjectRotationSpeed{ 45.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PatternThoughtBubble, 0x1f0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___canvas) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___patternDetailsDisplay) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___failSoundKey) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ____pattern_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___itemCustomParameters) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___colorKey) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___hasPlayedInvalidSound) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___nextCanPlayInvalidSoundTime) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PatternThoughtBubble, ___isRegisteredForCallbacks) == 0x1e8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PatternThoughtBubble);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PatternThoughtBubble*, "", "PatternThoughtBubble");
