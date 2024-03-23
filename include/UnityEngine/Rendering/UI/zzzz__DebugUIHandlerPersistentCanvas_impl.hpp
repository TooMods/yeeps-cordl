#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerPersistentCanvas_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerPersistentCanvas_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerValue_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::*)()>(
    &::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d9740c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0._Toggle_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::*)(
    ::UnityEngine::Rendering::UI::DebugUIHandlerValue*)>(&::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::_Toggle_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1d97648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0*>::get(),
                                    "<Toggle>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UI::DebugUIHandlerValue*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::__DebugUI__Value*& UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::__cordl_internal_get_widget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___widget;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__Value*> const&
UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::__cordl_internal_get_widget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___widget;
}
constexpr void UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::__cordl_internal_set_widget(::UnityEngine::Rendering::__DebugUI__Value* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___widget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0* UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0*>());
}
inline void UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::_Toggle_b__0(::UnityEngine::Rendering::UI::DebugUIHandlerValue* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0*>::get(), "<Toggle>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::UI::DebugUIHandlerValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0::__DebugUIHandlerPersistentCanvas____c__DisplayClass3_0() {}
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas.Toggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::*)(::UnityEngine::Rendering::__DebugUI__Value*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::Toggle)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x1d97158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*>::get(), "Toggle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Value*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::Clear)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1d97414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*>::get(), "Clear",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1d975cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_get_panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_get_panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_set_panel(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::RectTransform>& UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_get_valuePrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valuePrefab;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_get_valuePrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___valuePrefab;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_set_valuePrefab(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___valuePrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>*&
UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_get_m_Items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>*> const&
UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_get_m_Items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Items;
}
constexpr void
UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::__cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerValue>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::Toggle(::UnityEngine::Rendering::__DebugUI__Value* widget) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*>::get(), "Toggle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Value*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widget);
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas* UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*>());
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerPersistentCanvas::DebugUIHandlerPersistentCanvas() {}
