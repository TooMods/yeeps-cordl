#pragma once
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_impl.hpp"
#include "UnityEngine/zzzz__Color32_impl.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerMessageBox_def.hpp"
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox.SetWidget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::*)(::UnityEngine::Rendering::__DebugUI__Widget*)>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::SetWidget)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1d96c4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox.OnSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::*)(
    bool, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget*)>(&::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::OnSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d96dc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::*)()>(
    &::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1d96dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Text>& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_nameLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_nameLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameLabel;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::__DebugUI__MessageBox*& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_m_Field() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__MessageBox*> const& UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_get_m_Field() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Field;
}
constexpr void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::__cordl_internal_set_m_Field(::UnityEngine::Rendering::__DebugUI__MessageBox* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Field)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_WarningBackgroundColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_WarningBackgroundColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_WarningBackgroundColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_WarningBackgroundColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_WarningTextColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_WarningTextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>(
      std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_WarningTextColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_WarningTextColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_ErrorBackgroundColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_ErrorBackgroundColor",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>(std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_ErrorBackgroundColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_ErrorBackgroundColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::setStaticF_k_ErrorTextColor(::UnityEngine::Color32 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color32, "k_ErrorTextColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>(
      std::forward<::UnityEngine::Color32>(value));
}
inline ::UnityEngine::Color32 UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::getStaticF_k_ErrorTextColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color32, "k_ErrorTextColor",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get>();
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::SetWidget(::UnityEngine::Rendering::__DebugUI__Widget* widget) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, widget);
}
inline bool UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fromNext, previous);
}
inline ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox* UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>());
}
inline void UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::UI::DebugUIHandlerMessageBox::DebugUIHandlerMessageBox() {}
