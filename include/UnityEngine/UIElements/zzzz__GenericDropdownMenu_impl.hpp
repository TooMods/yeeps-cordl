#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__GenericDropdownMenu_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__AttachToPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__DetachFromPanelEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__GenericDropdownMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGenericMenu_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardNavigationOperation_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerUpEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::*)()>(
    &::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cdd9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_element() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_element() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___element;
}
constexpr void UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_set_element(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___element)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_action() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_action() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___action;
}
constexpr void UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_set_action(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___action)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::System::Object*>*& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_actionUserData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionUserData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_get_actionUserData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionUserData;
}
constexpr void UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__cordl_internal_set_actionUserData(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actionUserData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem* UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>());
}
inline void UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem::__GenericDropdownMenu__MenuItem() {}
// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityEngine::UIElements::GenericDropdownMenu*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "selectedIndex", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0::__GenericDropdownMenu____c__DisplayClass27_0(::UnityEngine::UIElements::GenericDropdownMenu* __4__this,
                                                                                                                                int32_t selectedIndex) noexcept {
  this->__4__this = __4__this;
  this->selectedIndex = selectedIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0::__GenericDropdownMenu____c__DisplayClass27_0() {}
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.get_contentContainer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2cdc1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "get_contentContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::_ctor)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x2cd6110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnAttachToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::AttachToPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x2cdc1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnDetachFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2cdc5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Hide
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(&::UnityEngine::UIElements::GenericDropdownMenu::Hide)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2cdc9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Hide",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    ::UnityEngine::UIElements::KeyboardNavigationOperation, ::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cdca88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::KeyboardNavigationOperation)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::Apply)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2cdcac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerDownEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2cdce4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2cdd0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnPointerUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::PointerUpEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2cdd1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnFocusOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::FocusOutEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2cdd308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnFocusOut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnParentResized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnParentResized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cdd450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnParentResized", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.UpdateSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2cdcf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "UpdateSelection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.ChangeSelectedIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2cdd454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "ChangeSelectedIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.GetSelectedIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2cdcc48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "GetSelectedIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, ::System::Action*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cdd588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::AddSeparator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cdd8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddSeparator",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.AddItem
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem* (
    ::UnityEngine::UIElements::GenericDropdownMenu::*)(::StringW, bool, bool, ::System::Object*)>(&::UnityEngine::UIElements::GenericDropdownMenu::AddItem)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2cdd5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.DropDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    ::UnityEngine::Rect, ::UnityEngine::UIElements::VisualElement*, bool)>(&::UnityEngine::UIElements::GenericDropdownMenu::DropDown)> {
  constexpr static std::size_t size = 0x75c;
  constexpr static std::size_t addrs = 0x2cdd9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "DropDown", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnTargetElementDetachFromPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::DetachFromPanelEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cde7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnTargetElementDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.OnContainerGeometryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(
    &::UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cde7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnContainerGeometryChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu.EnsureVisibilityInParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)()>(
    &::UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x2cde104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                               "EnsureVisibilityInParent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionDown_27_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    int32_t, ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0>)>(&::UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_27_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2cdcd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionDown|27_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::GenericDropdownMenu._Apply_g__UpdateSelectionUp_27_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::GenericDropdownMenu::*)(
    int32_t, ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0>)>(&::UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_27_1)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2cdcce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionUp|27_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IGenericMenu"
constexpr UnityEngine::UIElements::GenericDropdownMenu::operator ::UnityEngine::UIElements::IGenericMenu*() noexcept {
  return static_cast<::UnityEngine::UIElements::IGenericMenu*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IGenericMenu"
constexpr ::UnityEngine::UIElements::IGenericMenu* UnityEngine::UIElements::GenericDropdownMenu::i___UnityEngine__UIElements__IGenericMenu() noexcept {
  return static_cast<::UnityEngine::UIElements::IGenericMenu*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_Items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>*> const&
UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_Items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MenuContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MenuContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MenuContainer;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_MenuContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MenuContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_OuterContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OuterContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_OuterContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OuterContainer;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_OuterContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OuterContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::ScrollView*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ScrollView*> const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_ScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_ScrollView(::UnityEngine::UIElements::ScrollView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PanelRootVisualContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelRootVisualContainer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_PanelRootVisualContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelRootVisualContainer;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_PanelRootVisualContainer(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PanelRootVisualContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_TargetElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_TargetElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TargetElement;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_TargetElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TargetElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_DesiredRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_DesiredRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DesiredRect;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_DesiredRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DesiredRect = value;
}
constexpr ::UnityEngine::UIElements::KeyboardNavigationManipulator*& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_NavigationManipulator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::KeyboardNavigationManipulator*> const&
UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_NavigationManipulator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NavigationManipulator;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_NavigationManipulator(::UnityEngine::UIElements::KeyboardNavigationManipulator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NavigationManipulator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MousePosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_get_m_MousePosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MousePosition;
}
constexpr void UnityEngine::UIElements::GenericDropdownMenu::__cordl_internal_set_m_MousePosition(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MousePosition = value;
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_itemUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_itemUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "itemUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_labelUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_labelUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_containerInnerUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerInnerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_containerInnerUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerInnerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_containerOuterUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "containerOuterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_containerOuterUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "containerOuterUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_checkmarkUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_checkmarkUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "checkmarkUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline void UnityEngine::UIElements::GenericDropdownMenu::setStaticF_separatorUssClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "separatorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::GenericDropdownMenu::getStaticF_separatorUssClassName() {
  return ::cordl_internals::getStaticField<::StringW, "separatorUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::GenericDropdownMenu::get_contentContainer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "get_contentContainer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::GenericDropdownMenu* UnityEngine::UIElements::GenericDropdownMenu::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::GenericDropdownMenu*>());
}
inline void UnityEngine::UIElements::GenericDropdownMenu::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnAttachToPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::AttachToPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::Hide() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Hide",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op, ::UnityEngine::UIElements::EventBase* sourceEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, op, sourceEvent);
}
inline bool UnityEngine::UIElements::GenericDropdownMenu::Apply(::UnityEngine::UIElements::KeyboardNavigationOperation op) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "Apply", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyboardNavigationOperation>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, op);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerDown", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerDownEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerMove", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerMoveEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnPointerUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PointerUpEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnFocusOut", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnParentResized(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnParentResized", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::UpdateSelection(::UnityEngine::UIElements::VisualElement* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "UpdateSelection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::ChangeSelectedIndex(int32_t newIndex, int32_t previousIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "ChangeSelectedIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIndex, previousIndex);
}
inline int32_t UnityEngine::UIElements::GenericDropdownMenu::GetSelectedIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "GetSelectedIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, itemName, isChecked, action);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::AddSeparator(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddSeparator",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
/// @param data: ::System::Object* (default: nullptr)
inline ::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem* UnityEngine::UIElements::GenericDropdownMenu::AddItem(::StringW itemName, bool isChecked, bool isEnabled, ::System::Object* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "AddItem", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__GenericDropdownMenu__MenuItem*, false>(this, ___internal_method, itemName, isChecked, isEnabled, data);
}
/// @param targetElement: ::UnityEngine::UIElements::VisualElement* (default: nullptr)
/// @param anchored: bool (default: false)
inline void UnityEngine::UIElements::GenericDropdownMenu::DropDown(::UnityEngine::Rect position, ::UnityEngine::UIElements::VisualElement* targetElement, bool anchored) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "DropDown", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, targetElement, anchored);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnTargetElementDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnTargetElementDetachFromPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DetachFromPanelEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::OnContainerGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "OnContainerGeometryChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::GenericDropdownMenu::EnsureVisibilityInParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(),
                                                                             "EnsureVisibilityInParent", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionDown_27_0(int32_t newIndex,
                                                                                 ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionDown|27_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIndex, _cordl_fixed_empty_name_whitespace);
}
inline void
UnityEngine::UIElements::GenericDropdownMenu::_Apply_g__UpdateSelectionUp_27_1(int32_t newIndex,
                                                                               ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::GenericDropdownMenu*>::get(), "<Apply>g__UpdateSelectionUp|27_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::UIElements::__GenericDropdownMenu____c__DisplayClass27_0>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIndex, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::GenericDropdownMenu::GenericDropdownMenu() {}
