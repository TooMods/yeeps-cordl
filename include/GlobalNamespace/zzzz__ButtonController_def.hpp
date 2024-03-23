#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ButtonController)
namespace GlobalNamespace {
class __ButtonController__OnInteractableUpdated;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class ButtonController;
}
namespace GlobalNamespace {
class __ButtonController__OnInteractableUpdated;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ButtonController);
MARK_REF_PTR_T(::GlobalNamespace::__ButtonController__OnInteractableUpdated);
// Type: ::OnInteractableUpdated
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ButtonController::OnInteractableUpdated*
class CORDL_TYPE __ButtonController__OnInteractableUpdated : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x29d64c8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool newInteractable, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x29d6550, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x29d64b0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool newInteractable);

  static inline ::GlobalNamespace::__ButtonController__OnInteractableUpdated* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x29d63ec, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ButtonController__OnInteractableUpdated();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ButtonController__OnInteractableUpdated", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ButtonController__OnInteractableUpdated(__ButtonController__OnInteractableUpdated&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ButtonController__OnInteractableUpdated", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ButtonController__OnInteractableUpdated(__ButtonController__OnInteractableUpdated const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ButtonController__OnInteractableUpdated, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ButtonController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ButtonController*
class CORDL_TYPE ButtonController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using OnInteractableUpdated = ::GlobalNamespace::__ButtonController__OnInteractableUpdated;

  /// @brief Field <isHovered>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__isHovered_k__BackingField, put = __cordl_internal_set__isHovered_k__BackingField)) bool _isHovered_k__BackingField;

  /// @brief Field <isInteractable>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isInteractable_k__BackingField, put = __cordl_internal_set__isInteractable_k__BackingField)) bool _isInteractable_k__BackingField;

  /// @brief Field <isPressed>k__BackingField, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__isPressed_k__BackingField, put = __cordl_internal_set__isPressed_k__BackingField)) bool _isPressed_k__BackingField;

  __declspec(property(get = get_isHovered, put = set_isHovered)) bool isHovered;

  __declspec(property(get = get_isInteractable, put = set_isInteractable)) bool isInteractable;

  __declspec(property(get = get_isPressed, put = set_isPressed)) bool isPressed;

  /// @brief Field onButtonPressed, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_onButtonPressed, put = __cordl_internal_set_onButtonPressed))::UnityEngine::Events::UnityEvent* onButtonPressed;

  /// @brief Field onButtonReleased, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_onButtonReleased, put = __cordl_internal_set_onButtonReleased))::UnityEngine::Events::UnityEvent* onButtonReleased;

  /// @brief Field onInteractableUpdatedCallbacks, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onInteractableUpdatedCallbacks,
                      put = __cordl_internal_set_onInteractableUpdatedCallbacks))::GlobalNamespace::__ButtonController__OnInteractableUpdated* onInteractableUpdatedCallbacks;

  static inline ::GlobalNamespace::ButtonController* New_ctor();

  /// @brief Method OnHoverEntered, addr 0x29d63c8, size 0xc, virtual true, abstract: false, final false
  inline void OnHoverEntered();

  /// @brief Method OnHoverExited, addr 0x29d63d4, size 0x8, virtual true, abstract: false, final false
  inline void OnHoverExited();

  /// @brief Method OnPressEntered, addr 0x29d6380, size 0x24, virtual true, abstract: false, final false
  inline void OnPressEntered();

  /// @brief Method OnPressExited, addr 0x29d63a4, size 0x24, virtual true, abstract: false, final false
  inline void OnPressExited();

  /// @brief Method SetIcon, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetIcon(::UnityEngine::Sprite* newIcon);

  /// @brief Method SetInteractable, addr 0x29d6284, size 0xfc, virtual true, abstract: false, final false
  inline void SetInteractable(bool newInteractable);

  /// @brief Method SetMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetMessage(::StringW newMessage);

  constexpr bool const& __cordl_internal_get__isHovered_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isHovered_k__BackingField();

  constexpr bool const& __cordl_internal_get__isInteractable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInteractable_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPressed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPressed_k__BackingField();

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onButtonPressed();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_onButtonPressed() const;

  constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onButtonReleased();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityEvent*> const& __cordl_internal_get_onButtonReleased() const;

  constexpr ::GlobalNamespace::__ButtonController__OnInteractableUpdated*& __cordl_internal_get_onInteractableUpdatedCallbacks();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ButtonController__OnInteractableUpdated*> const& __cordl_internal_get_onInteractableUpdatedCallbacks() const;

  constexpr void __cordl_internal_set__isHovered_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isInteractable_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isPressed_k__BackingField(bool value);

  constexpr void __cordl_internal_set_onButtonPressed(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_onButtonReleased(::UnityEngine::Events::UnityEvent* value);

  constexpr void __cordl_internal_set_onInteractableUpdatedCallbacks(::GlobalNamespace::__ButtonController__OnInteractableUpdated* value);

  /// @brief Method .ctor, addr 0x29d63dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isHovered, addr 0x29d625c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isHovered();

  /// @brief Method get_isInteractable, addr 0x29d6248, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInteractable();

  /// @brief Method get_isPressed, addr 0x29d6270, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPressed();

  /// @brief Method set_isHovered, addr 0x29d6264, size 0xc, virtual false, abstract: false, final false
  inline void set_isHovered(bool value);

  /// @brief Method set_isInteractable, addr 0x29d6250, size 0xc, virtual false, abstract: false, final false
  inline void set_isInteractable(bool value);

  /// @brief Method set_isPressed, addr 0x29d6278, size 0xc, virtual false, abstract: false, final false
  inline void set_isPressed(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonController(ButtonController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonController(ButtonController const&) = delete;

  /// @brief Field onButtonPressed, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___onButtonPressed;

  /// @brief Field onButtonReleased, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Events::UnityEvent* ___onButtonReleased;

  /// @brief Field <isInteractable>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____isInteractable_k__BackingField;

  /// @brief Field <isHovered>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____isHovered_k__BackingField;

  /// @brief Field <isPressed>k__BackingField, offset: 0x2a, size: 0x1, def value: None
  bool ____isPressed_k__BackingField;

  /// @brief Field onInteractableUpdatedCallbacks, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__ButtonController__OnInteractableUpdated* ___onInteractableUpdatedCallbacks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ButtonController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonController, ___onButtonPressed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonController, ___onButtonReleased) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonController, ____isInteractable_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonController, ____isHovered_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonController, ____isPressed_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ButtonController, ___onInteractableUpdatedCallbacks) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ButtonController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ButtonController*, "", "ButtonController");
NEED_NO_BOX(::GlobalNamespace::__ButtonController__OnInteractableUpdated);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ButtonController__OnInteractableUpdated*, "", "ButtonController/OnInteractableUpdated");
