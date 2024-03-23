#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TabViewManager_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TabViewManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/UI/zzzz__ToggleGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent::*)()>(
    &::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1eccbf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent* Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*>());
}
inline void Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent::__TabViewManager__TabChangeEvent() {}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::__TabViewManager__Tab._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::__TabViewManager__Tab::*)()>(
    &::Photon::Pun::UtilityScripts::__TabViewManager__Tab::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1eccc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr ::StringW const& Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_set__cordl_ID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cordl_ID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_get_Toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_get_Toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Toggle;
}
constexpr void Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_set_Toggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_get_View() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___View;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_get_View() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___View;
}
constexpr void Photon::Pun::UtilityScripts::__TabViewManager__Tab::__cordl_internal_set_View(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___View)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Pun::UtilityScripts::__TabViewManager__Tab* Photon::Pun::UtilityScripts::__TabViewManager__Tab::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>());
}
inline void Photon::Pun::UtilityScripts::__TabViewManager__Tab::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__Tab::__TabViewManager__Tab() {}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::*)()>(
    &::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ecca4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0._Start_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::*)(bool)>(
    &::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::_Start_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1eccc90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0*>::get(), "<Start>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*& Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::__cordl_internal_get__tab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tab;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*> const&
Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::__cordl_internal_get__tab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tab;
}
constexpr void Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::__cordl_internal_set__tab(::Photon::Pun::UtilityScripts::__TabViewManager__Tab* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager>& Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> const& Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::__cordl_internal_set___4__this(::UnityW<::Photon::Pun::UtilityScripts::TabViewManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0* Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0*>());
}
inline void Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::_Start_b__0(bool isSelected) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0*>::get(), "<Start>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isSelected);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::__TabViewManager____c__DisplayClass7_0::__TabViewManager____c__DisplayClass7_0() {}
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)()>(&::Photon::Pun::UtilityScripts::TabViewManager::Start)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x1ecc850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager.SelectTab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)(::StringW)>(
    &::Photon::Pun::UtilityScripts::TabViewManager::SelectTab)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1ecca54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), "SelectTab",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager.OnTabSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)(::Photon::Pun::UtilityScripts::__TabViewManager__Tab*)>(
    &::Photon::Pun::UtilityScripts::TabViewManager::OnTabSelected)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1eccaec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), "OnTabSelected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TabViewManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::TabViewManager::*)()>(&::Photon::Pun::UtilityScripts::TabViewManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1eccbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_ToggleGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ToggleGroup;
}
constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_ToggleGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ToggleGroup;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_ToggleGroup(::UnityW<::UnityEngine::UI::ToggleGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ToggleGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*>&
Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tabs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tabs;
}
constexpr ::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> const&
Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tabs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tabs;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_Tabs(
    ::ArrayW<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*, ::Array<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Tabs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_OnTabChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnTabChanged;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent*> const&
Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_OnTabChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnTabChanged;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_OnTabChanged(::Photon::Pun::UtilityScripts::__TabViewManager__TabChangeEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnTabChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_CurrentTab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentTab;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*> const& Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_CurrentTab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CurrentTab;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_CurrentTab(::Photon::Pun::UtilityScripts::__TabViewManager__Tab* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CurrentTab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*&
Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tab_lut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tab_lut;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>*> const&
Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_get_Tab_lut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tab_lut;
}
constexpr void Photon::Pun::UtilityScripts::TabViewManager::__cordl_internal_set_Tab_lut(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::UI::Toggle>, ::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Tab_lut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Photon::Pun::UtilityScripts::TabViewManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::TabViewManager::SelectTab(::StringW id) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), "SelectTab", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void Photon::Pun::UtilityScripts::TabViewManager::OnTabSelected(::Photon::Pun::UtilityScripts::__TabViewManager__Tab* tab) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), "OnTabSelected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::__TabViewManager__Tab*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tab);
}
inline ::Photon::Pun::UtilityScripts::TabViewManager* Photon::Pun::UtilityScripts::TabViewManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::TabViewManager*>());
}
inline void Photon::Pun::UtilityScripts::TabViewManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::TabViewManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TabViewManager::TabViewManager() {}
