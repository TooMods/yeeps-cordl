#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ImaginationPrompt_def.hpp"
#include "GlobalNamespace/zzzz__PromptDisplay_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MobilePromptDisplay)
namespace GlobalNamespace {
class ButtonController;
}
namespace GlobalNamespace {
struct __ImaginationPrompt__ActionType;
}
namespace GlobalNamespace {
class __MobilePromptDisplay____c__DisplayClass6_0;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MobilePromptDisplay;
}
namespace GlobalNamespace {
class __MobilePromptDisplay____c__DisplayClass6_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MobilePromptDisplay);
MARK_REF_PTR_T(::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0);
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobilePromptDisplay::<>c__DisplayClass6_0*
class CORDL_TYPE __MobilePromptDisplay____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MobilePromptDisplay> __4__this;

  /// @brief Field actionType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_actionType, put = __cordl_internal_set_actionType))::GlobalNamespace::__ImaginationPrompt__ActionType actionType;

  static inline ::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0* New_ctor();

  /// @brief Method <Initialize>b__0, addr 0x2dffc18, size 0x24, virtual false, abstract: false, final false
  inline void _Initialize_b__0();

  constexpr ::UnityW<::GlobalNamespace::MobilePromptDisplay> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MobilePromptDisplay>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType const& __cordl_internal_get_actionType() const;

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType& __cordl_internal_get_actionType();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MobilePromptDisplay> value);

  constexpr void __cordl_internal_set_actionType(::GlobalNamespace::__ImaginationPrompt__ActionType value);

  /// @brief Method .ctor, addr 0x2dffa40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobilePromptDisplay____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MobilePromptDisplay____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MobilePromptDisplay____c__DisplayClass6_0(__MobilePromptDisplay____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MobilePromptDisplay____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MobilePromptDisplay____c__DisplayClass6_0(__MobilePromptDisplay____c__DisplayClass6_0 const&) = delete;

  /// @brief Field actionType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__ImaginationPrompt__ActionType ___actionType;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MobilePromptDisplay> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0, ___actionType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0, _____4__this) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobilePromptDisplay
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobilePromptDisplay*
class CORDL_TYPE MobilePromptDisplay : public ::GlobalNamespace::PromptDisplay {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0;

  /// @brief Field actionButtons, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_actionButtons,
                      put = __cordl_internal_set_actionButtons))::ArrayW<::UnityW<::GlobalNamespace::ButtonController>, ::Array<::UnityW<::GlobalNamespace::ButtonController>>*> actionButtons;

  /// @brief Field actionTypeReference, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get_actionTypeReference, put = __cordl_internal_set_actionTypeReference))::GlobalNamespace::__ImaginationPrompt__ActionType actionTypeReference;

  /// @brief Field autoDismissProgressRect, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_autoDismissProgressRect, put = __cordl_internal_set_autoDismissProgressRect))::UnityW<::UnityEngine::RectTransform> autoDismissProgressRect;

  /// @brief Field dismissActionContainer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_dismissActionContainer, put = __cordl_internal_set_dismissActionContainer))::UnityW<::UnityEngine::GameObject> dismissActionContainer;

  /// @brief Field scaleContainer, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleContainer, put = __cordl_internal_set_scaleContainer))::UnityW<::UnityEngine::Transform> scaleContainer;

  /// @brief Field voteActionsContainer, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_voteActionsContainer, put = __cordl_internal_set_voteActionsContainer))::UnityW<::UnityEngine::GameObject> voteActionsContainer;

  /// @brief Method Initialize, addr 0x2dff8dc, size 0x164, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::MobilePromptDisplay* New_ctor();

  /// @brief Method SetAutoDismissProgress, addr 0x2dffb70, size 0x20, virtual true, abstract: false, final false
  inline void SetAutoDismissProgress(float_t progress);

  /// @brief Method SetShifted, addr 0x2dffc0c, size 0x4, virtual true, abstract: false, final false
  inline void SetShifted(bool newIsShifted, bool instant);

  /// @brief Method SetSize, addr 0x2dffb90, size 0x7c, virtual true, abstract: false, final false
  inline void SetSize(float_t size);

  /// @brief Method SetupActionActiveStates, addr 0x2dffa4c, size 0x124, virtual true, abstract: false, final false
  inline void SetupActionActiveStates(bool open, ::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions, bool instant);

  /// @brief Method SetupActionPositions, addr 0x2dffa48, size 0x4, virtual true, abstract: false, final false
  inline void SetupActionPositions(::ArrayW<::GlobalNamespace::__ImaginationPrompt__ActionType, ::Array<::GlobalNamespace::__ImaginationPrompt__ActionType>*> actions);

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ButtonController>, ::Array<::UnityW<::GlobalNamespace::ButtonController>>*> const& __cordl_internal_get_actionButtons() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::ButtonController>, ::Array<::UnityW<::GlobalNamespace::ButtonController>>*>& __cordl_internal_get_actionButtons();

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType const& __cordl_internal_get_actionTypeReference() const;

  constexpr ::GlobalNamespace::__ImaginationPrompt__ActionType& __cordl_internal_get_actionTypeReference();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_autoDismissProgressRect() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_autoDismissProgressRect();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dismissActionContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dismissActionContainer();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleContainer();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_voteActionsContainer() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_voteActionsContainer();

  constexpr void __cordl_internal_set_actionButtons(::ArrayW<::UnityW<::GlobalNamespace::ButtonController>, ::Array<::UnityW<::GlobalNamespace::ButtonController>>*> value);

  constexpr void __cordl_internal_set_actionTypeReference(::GlobalNamespace::__ImaginationPrompt__ActionType value);

  constexpr void __cordl_internal_set_autoDismissProgressRect(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set_dismissActionContainer(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_scaleContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_voteActionsContainer(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x2dffc10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobilePromptDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobilePromptDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobilePromptDisplay(MobilePromptDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobilePromptDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobilePromptDisplay(MobilePromptDisplay const&) = delete;

  /// @brief Field scaleContainer, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___scaleContainer;

  /// @brief Field autoDismissProgressRect, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ___autoDismissProgressRect;

  /// @brief Field actionTypeReference, offset: 0xa8, size: 0x4, def value: None
  ::GlobalNamespace::__ImaginationPrompt__ActionType ___actionTypeReference;

  /// @brief Field actionButtons, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::ButtonController>, ::Array<::UnityW<::GlobalNamespace::ButtonController>>*> ___actionButtons;

  /// @brief Field dismissActionContainer, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___dismissActionContainer;

  /// @brief Field voteActionsContainer, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___voteActionsContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobilePromptDisplay, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePromptDisplay, ___scaleContainer) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePromptDisplay, ___autoDismissProgressRect) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePromptDisplay, ___actionTypeReference) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePromptDisplay, ___actionButtons) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePromptDisplay, ___dismissActionContainer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobilePromptDisplay, ___voteActionsContainer) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MobilePromptDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobilePromptDisplay*, "", "MobilePromptDisplay");
NEED_NO_BOX(::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobilePromptDisplay____c__DisplayClass6_0*, "", "MobilePromptDisplay/<>c__DisplayClass6_0");
