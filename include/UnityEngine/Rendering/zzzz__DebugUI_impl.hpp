#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__ListChangedEventArgs_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObservableList_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::__DebugUI__Flags::__DebugUI__Flags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Flags::__DebugUI__Flags() {}
constexpr ::UnityEngine::Rendering::__DebugUI__Flags UnityEngine::Rendering::__DebugUI__Flags::None{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Rendering::__DebugUI__Flags UnityEngine::Rendering::__DebugUI__Flags::EditorOnly{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::__DebugUI__Flags UnityEngine::Rendering::__DebugUI__Flags::RuntimeOnly{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::__DebugUI__Flags UnityEngine::Rendering::__DebugUI__Flags::EditorForceUpdate{ static_cast<int32_t>(0x8) };
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__DebugUI__Panel* (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8b90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.set_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)(::UnityEngine::Rendering::__DebugUI__Panel*)>(
    &::UnityEngine::Rendering::__DebugUI__Widget::set_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8b98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__DebugUI__IContainer* (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8ba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.set_parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)(::UnityEngine::Rendering::__DebugUI__IContainer*)>(
    &::UnityEngine::Rendering::__DebugUI__Widget::set_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8ba8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__DebugUI__Flags (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "get_flags",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.set_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)(::UnityEngine::Rendering::__DebugUI__Flags)>(
    &::UnityEngine::Rendering::__DebugUI__Widget::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_flags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                               "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)(::StringW)>(
    &::UnityEngine::Rendering::__DebugUI__Widget::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_displayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_tooltip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_tooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                               "get_tooltip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.set_tooltip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)(::StringW)>(
    &::UnityEngine::Rendering::__DebugUI__Widget::set_tooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_tooltip",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_queryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_queryPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                               "get_queryPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.set_queryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)(::StringW)>(
    &::UnityEngine::Rendering::__DebugUI__Widget::set_queryPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_queryPath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_isEditorOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_isEditorOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bd8bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                               "get_isEditorOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_isRuntimeOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_isRuntimeOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bd8bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                               "get_isRuntimeOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_isInactiveInEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_isInactiveInEditor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x1bd8c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                               "get_isInactiveInEditor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.get_isHidden
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::get_isHidden)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bd8c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                               "get_isHidden", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.GenerateQueryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::GenerateQueryPath)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1bd8194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Widget::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bd8c54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget.set_nameAndTooltip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip)>(
    &::UnityEngine::Rendering::__DebugUI__Widget::set_nameAndTooltip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_nameAndTooltip", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Widget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Widget::*)()>(&::UnityEngine::Rendering::__DebugUI__Widget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd7e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::__DebugUI__Panel*& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get_m_Panel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__Panel*> const& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get_m_Panel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Panel;
}
constexpr void UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_set_m_Panel(::UnityEngine::Rendering::__DebugUI__Panel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Panel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::__DebugUI__IContainer*& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get_m_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__DebugUI__IContainer*> const& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get_m_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Parent;
}
constexpr void UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_set_m_Parent(::UnityEngine::Rendering::__DebugUI__IContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::__DebugUI__Flags& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__flags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr ::UnityEngine::Rendering::__DebugUI__Flags const& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__flags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::__DebugUI__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__tooltip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tooltip_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__tooltip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tooltip_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_set__tooltip_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tooltip_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__queryPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queryPath_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get__queryPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____queryPath_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_set__queryPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____queryPath_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<bool>*& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get_isHiddenCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHiddenCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_get_isHiddenCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHiddenCallback;
}
constexpr void UnityEngine::Rendering::__DebugUI__Widget::__cordl_internal_set_isHiddenCallback(::System::Func_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___isHiddenCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::__DebugUI__Panel* UnityEngine::Rendering::__DebugUI__Widget::get_panel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Panel*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::set_panel(::UnityEngine::Rendering::__DebugUI__Panel* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__IContainer* UnityEngine::Rendering::__DebugUI__Widget::get_parent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__IContainer*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::set_parent(::UnityEngine::Rendering::__DebugUI__IContainer* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Flags UnityEngine::Rendering::__DebugUI__Widget::get_flags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "get_flags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Flags, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::set_flags(::UnityEngine::Rendering::__DebugUI__Flags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_flags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::__DebugUI__Widget::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                             "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_displayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::__DebugUI__Widget::get_tooltip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "get_tooltip",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::set_tooltip(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_tooltip", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::__DebugUI__Widget::get_queryPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                             "get_queryPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::set_queryPath(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_queryPath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::__DebugUI__Widget::get_isEditorOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                             "get_isEditorOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__Widget::get_isRuntimeOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                             "get_isRuntimeOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__Widget::get_isInactiveInEditor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                             "get_isInactiveInEditor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__Widget::get_isHidden() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(),
                                                                             "get_isHidden", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::GenerateQueryPath() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::__DebugUI__Widget::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Widget::set_nameAndTooltip(::GlobalNamespace::__DebugUI__Widget__NameAndTooltip value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), "set_nameAndTooltip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__DebugUI__Widget__NameAndTooltip>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Widget* UnityEngine::Rendering::__DebugUI__Widget::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Widget*>());
}
inline void UnityEngine::Rendering::__DebugUI__Widget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Widget*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Widget::__DebugUI__Widget() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.get_children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* (
    ::UnityEngine::Rendering::__DebugUI__Container::*)()>(&::UnityEngine::Rendering::__DebugUI__Container::get_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd7a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                                               "get_children", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.set_children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Container::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(&::UnityEngine::Rendering::__DebugUI__Container::set_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd7a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), "set_children", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.get_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__DebugUI__Panel* (::UnityEngine::Rendering::__DebugUI__Container::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Container::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd7a10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.set_panel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Container::*)(::UnityEngine::Rendering::__DebugUI__Panel*)>(
    &::UnityEngine::Rendering::__DebugUI__Container::set_panel)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x1bd7a18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Container::*)()>(&::UnityEngine::Rendering::__DebugUI__Container::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1bd7cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Container::*)(
    ::StringW, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(&::UnityEngine::Rendering::__DebugUI__Container::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1bd7e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.GenerateQueryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Container::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Container::GenerateQueryPath)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x1bd7f04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.OnItemAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Container::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(
    &::UnityEngine::Rendering::__DebugUI__Container::OnItemAdded)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1bd8278;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.OnItemRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Container::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(
    &::UnityEngine::Rendering::__DebugUI__Container::OnItemRemoved)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1bd82e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Container.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__Container::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Container::GetHashCode)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x1bd8350;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IContainer"
constexpr UnityEngine::Rendering::__DebugUI__Container::operator ::UnityEngine::Rendering::__DebugUI__IContainer*() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IContainer"
constexpr ::UnityEngine::Rendering::__DebugUI__IContainer* UnityEngine::Rendering::__DebugUI__Container::i___UnityEngine__Rendering____DebugUI__IContainer() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IContainer*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*& UnityEngine::Rendering::__DebugUI__Container::__cordl_internal_get__children_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*> const&
UnityEngine::Rendering::__DebugUI__Container::__cordl_internal_get__children_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr void
UnityEngine::Rendering::__DebugUI__Container::__cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____children_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* UnityEngine::Rendering::__DebugUI__Container::get_children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(),
                                                                             "get_children", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Container::set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), "set_children", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Panel* UnityEngine::Rendering::__DebugUI__Container::get_panel() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Panel*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Container::set_panel(::UnityEngine::Rendering::__DebugUI__Panel* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Container* UnityEngine::Rendering::__DebugUI__Container::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Container*>());
}
inline void UnityEngine::Rendering::__DebugUI__Container::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::__DebugUI__Container*
UnityEngine::Rendering::__DebugUI__Container::New_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Container*>(displayName, children));
}
inline void UnityEngine::Rendering::__DebugUI__Container::_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, children);
}
inline void UnityEngine::Rendering::__DebugUI__Container::GenerateQueryPath() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Container::OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                                                                      ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::__DebugUI__Container::OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                                                                        ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline int32_t UnityEngine::Rendering::__DebugUI__Container::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Container*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Container::__DebugUI__Container() {}
// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem::__DebugUI__Foldout__ContextMenuItem(::StringW displayName, ::System::Action* action) noexcept {
  this->displayName = displayName;
  this->action = action;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem::__DebugUI__Foldout__ContextMenuItem() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.get_isReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Foldout::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::get_isReadOnly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd860c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                                                               "get_isReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.get_columnLabels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::UnityEngine::Rendering::__DebugUI__Foldout::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::get_columnLabels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                                                               "get_columnLabels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.set_columnLabels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Foldout::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::set_columnLabels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd861c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "set_columnLabels", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.get_columnTooltips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::UnityEngine::Rendering::__DebugUI__Foldout::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::get_columnTooltips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                                                               "get_columnTooltips", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.set_columnTooltips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Foldout::*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::set_columnTooltips)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd862c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "set_columnTooltips", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Foldout::*)()>(&::UnityEngine::Rendering::__DebugUI__Foldout::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1bd8634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Foldout::*)(
    ::StringW, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bd8638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Foldout::*)()>(&::UnityEngine::Rendering::__DebugUI__Foldout::GetValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "GetValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.UnityEngine_Rendering_DebugUI_IValueField_GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Rendering::__DebugUI__Foldout::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::UnityEngine_Rendering_DebugUI_IValueField_GetValue)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1bd8668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                                 "UnityEngine.Rendering.DebugUI.IValueField.GetValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Foldout::*)(::System::Object*)>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::SetValue)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1bd86c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.ValidateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Rendering::__DebugUI__Foldout::*)(::System::Object*)>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::ValidateValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd873c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "ValidateValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Foldout.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Foldout::*)(bool)>(
    &::UnityEngine::Rendering::__DebugUI__Foldout::SetValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bd8744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "SetValue",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IValueField"
constexpr UnityEngine::Rendering::__DebugUI__Foldout::operator ::UnityEngine::Rendering::__DebugUI__IValueField*() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IValueField*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IValueField"
constexpr ::UnityEngine::Rendering::__DebugUI__IValueField* UnityEngine::Rendering::__DebugUI__Foldout::i___UnityEngine__Rendering____DebugUI__IValueField() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IValueField*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get_opened() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opened;
}
constexpr bool const& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get_opened() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___opened;
}
constexpr void UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_set_opened(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___opened = value;
}
constexpr bool& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get_isHeader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeader;
}
constexpr bool const& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get_isHeader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isHeader;
}
constexpr void UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_set_isHeader(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isHeader = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>*& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get_contextMenuItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextMenuItems;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>*> const&
UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get_contextMenuItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contextMenuItems;
}
constexpr void
UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_set_contextMenuItems(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugUI__Foldout__ContextMenuItem>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contextMenuItems)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get__columnLabels_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLabels_k__BackingField;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get__columnLabels_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnLabels_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_set__columnLabels_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnLabels_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get__columnTooltips_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnTooltips_k__BackingField;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_get__columnTooltips_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____columnTooltips_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Foldout::__cordl_internal_set__columnTooltips_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnTooltips_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Rendering::__DebugUI__Foldout::get_isReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                                                             "get_isReadOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::__DebugUI__Foldout::get_columnLabels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                                                             "get_columnLabels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Foldout::set_columnLabels(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "set_columnLabels", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> UnityEngine::Rendering::__DebugUI__Foldout::get_columnTooltips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                                                             "get_columnTooltips", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Foldout::set_columnTooltips(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "set_columnTooltips", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Foldout* UnityEngine::Rendering::__DebugUI__Foldout::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Foldout*>());
}
inline void UnityEngine::Rendering::__DebugUI__Foldout::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param columnLabels: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
/// @param columnTooltips: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
inline ::UnityEngine::Rendering::__DebugUI__Foldout*
UnityEngine::Rendering::__DebugUI__Foldout::New_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children,
                                                     ::ArrayW<::StringW, ::Array<::StringW>*> columnLabels, ::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Foldout*>(displayName, children, columnLabels, columnTooltips));
}
/// @param columnLabels: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
/// @param columnTooltips: ::ArrayW<::StringW,::Array<::StringW>*> (default: nullptr)
inline void UnityEngine::Rendering::__DebugUI__Foldout::_ctor(::StringW displayName, ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* children,
                                                              ::ArrayW<::StringW, ::Array<::StringW>*> columnLabels, ::ArrayW<::StringW, ::Array<::StringW>*> columnTooltips) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, displayName, children, columnLabels, columnTooltips);
}
inline bool UnityEngine::Rendering::__DebugUI__Foldout::GetValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "GetValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::__DebugUI__Foldout::UnityEngine_Rendering_DebugUI_IValueField_GetValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(),
                                               "UnityEngine.Rendering.DebugUI.IValueField.GetValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Foldout::SetValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::Rendering::__DebugUI__Foldout::ValidateValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "ValidateValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::__DebugUI__Foldout::SetValue(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Foldout*>::get(), "SetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Foldout::__DebugUI__Foldout() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__HBox::*)()>(&::UnityEngine::Rendering::__DebugUI__HBox::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1bd8750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HBox*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::__DebugUI__HBox* UnityEngine::Rendering::__DebugUI__HBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__HBox*>());
}
inline void UnityEngine::Rendering::__DebugUI__HBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HBox*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__HBox::__DebugUI__HBox() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__VBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__VBox::*)()>(&::UnityEngine::Rendering::__DebugUI__VBox::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1bd87a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__VBox*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::__DebugUI__VBox* UnityEngine::Rendering::__DebugUI__VBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__VBox*>());
}
inline void UnityEngine::Rendering::__DebugUI__VBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__VBox*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__VBox::__DebugUI__VBox() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugUI__Table__Row._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugUI__Table__Row::*)()>(&::GlobalNamespace::__DebugUI__Table__Row::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1bd8b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Table__Row*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__DebugUI__Table__Row* GlobalNamespace::__DebugUI__Table__Row::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugUI__Table__Row*>());
}
inline void GlobalNamespace::__DebugUI__Table__Row::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Table__Row*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugUI__Table__Row::__DebugUI__Table__Row() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Table._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Table::*)()>(&::UnityEngine::Rendering::__DebugUI__Table::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1bd87f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Table.SetColumnVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Table::*)(int32_t, bool)>(
    &::UnityEngine::Rendering::__DebugUI__Table::SetColumnVisibility)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1bd8840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), "SetColumnVisibility", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Table.GetColumnVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Table::*)(int32_t)>(
    &::UnityEngine::Rendering::__DebugUI__Table::GetColumnVisibility)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1bd8ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), "GetColumnVisibility",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Table.get_VisibleColumns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<bool, ::Array<bool>*> (::UnityEngine::Rendering::__DebugUI__Table::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Table::get_VisibleColumns)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x1bd888c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(),
                                                                               "get_VisibleColumns", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Table.OnItemAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Table::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(
    &::UnityEngine::Rendering::__DebugUI__Table::OnItemAdded)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1bd8b10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Table.OnItemRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Table::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(
    &::UnityEngine::Rendering::__DebugUI__Table::OnItemRemoved)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1bd8b28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), 17));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::__DebugUI__Table::__cordl_internal_get_isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr bool const& UnityEngine::Rendering::__DebugUI__Table::__cordl_internal_get_isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isReadOnly;
}
constexpr void UnityEngine::Rendering::__DebugUI__Table::__cordl_internal_set_isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isReadOnly = value;
}
constexpr ::ArrayW<bool, ::Array<bool>*>& UnityEngine::Rendering::__DebugUI__Table::__cordl_internal_get_m_Header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr ::ArrayW<bool, ::Array<bool>*> const& UnityEngine::Rendering::__DebugUI__Table::__cordl_internal_get_m_Header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Header;
}
constexpr void UnityEngine::Rendering::__DebugUI__Table::__cordl_internal_set_m_Header(::ArrayW<bool, ::Array<bool>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Header)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::__DebugUI__Table* UnityEngine::Rendering::__DebugUI__Table::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Table*>());
}
inline void UnityEngine::Rendering::__DebugUI__Table::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Table::SetColumnVisibility(int32_t index, bool visible) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), "SetColumnVisibility", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, visible);
}
inline bool UnityEngine::Rendering::__DebugUI__Table::GetColumnVisibility(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), "GetColumnVisibility",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, index);
}
inline ::ArrayW<bool, ::Array<bool>*> UnityEngine::Rendering::__DebugUI__Table::get_VisibleColumns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(),
                                                                             "get_VisibleColumns", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<bool, ::Array<bool>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Table::OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                                                                  ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::__DebugUI__Table::OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                                                                    ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Table*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Table::__DebugUI__Table() {}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "tooltip", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip::__DebugUI__Widget__NameAndTooltip(::StringW name, ::StringW tooltip) noexcept {
  this->name = name;
  this->tooltip = tooltip;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugUI__Widget__NameAndTooltip::__DebugUI__Widget__NameAndTooltip() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IContainer.get_children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* (
    ::UnityEngine::Rendering::__DebugUI__IContainer::*)()>(&::UnityEngine::Rendering::__DebugUI__IContainer::get_children)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IContainer.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::__DebugUI__IContainer::*)()>(
    &::UnityEngine::Rendering::__DebugUI__IContainer::get_displayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IContainer.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__IContainer::*)(::StringW)>(
    &::UnityEngine::Rendering::__DebugUI__IContainer::set_displayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IContainer.get_queryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::__DebugUI__IContainer::*)()>(
    &::UnityEngine::Rendering::__DebugUI__IContainer::get_queryPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 3));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* UnityEngine::Rendering::__DebugUI__IContainer::get_children() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::__DebugUI__IContainer::get_displayName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__IContainer::set_displayName(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::__DebugUI__IContainer::get_queryPath() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IContainer*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IValueField.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Rendering::__DebugUI__IValueField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__IValueField::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IValueField.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__IValueField::*)(::System::Object*)>(
    &::UnityEngine::Rendering::__DebugUI__IValueField::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IValueField.ValidateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Rendering::__DebugUI__IValueField::*)(::System::Object*)>(
    &::UnityEngine::Rendering::__DebugUI__IValueField::ValidateValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Object* UnityEngine::Rendering::__DebugUI__IValueField::GetValue() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__IValueField::SetValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::Rendering::__DebugUI__IValueField::ValidateValue(::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IValueField*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value);
}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Button.get_action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::UnityEngine::Rendering::__DebugUI__Button::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Button::get_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Button*>::get(),
                                                                               "get_action", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Button.set_action
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Button::*)(::System::Action*)>(
    &::UnityEngine::Rendering::__DebugUI__Button::set_action)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Button*>::get(), "set_action", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Button._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Button::*)()>(&::UnityEngine::Rendering::__DebugUI__Button::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Button*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action*& UnityEngine::Rendering::__DebugUI__Button::__cordl_internal_get__action_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::Rendering::__DebugUI__Button::__cordl_internal_get__action_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____action_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Button::__cordl_internal_set__action_k__BackingField(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____action_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Action* UnityEngine::Rendering::__DebugUI__Button::get_action() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Button*>::get(), "get_action",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Button::set_action(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Button*>::get(), "set_action", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Button* UnityEngine::Rendering::__DebugUI__Button::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Button*>());
}
inline void UnityEngine::Rendering::__DebugUI__Button::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Button*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Button::__DebugUI__Button() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Value.get_getter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<::System::Object*>* (::UnityEngine::Rendering::__DebugUI__Value::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Value::get_getter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), "get_getter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Value.set_getter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Value::*)(::System::Func_1<::System::Object*>*)>(
    &::UnityEngine::Rendering::__DebugUI__Value::set_getter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8c9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), "set_getter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Object*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Value._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Value::*)()>(&::UnityEngine::Rendering::__DebugUI__Value::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1bd8ca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Value.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Rendering::__DebugUI__Value::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Value::GetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1bd8d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), "GetValue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<::System::Object*>*& UnityEngine::Rendering::__DebugUI__Value::__cordl_internal_get__getter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& UnityEngine::Rendering::__DebugUI__Value::__cordl_internal_get__getter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Value::__cordl_internal_set__getter_k__BackingField(::System::Func_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__Value::__cordl_internal_get_refreshRate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshRate;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__Value::__cordl_internal_get_refreshRate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refreshRate;
}
constexpr void UnityEngine::Rendering::__DebugUI__Value::__cordl_internal_set_refreshRate(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refreshRate = value;
}
inline ::System::Func_1<::System::Object*>* UnityEngine::Rendering::__DebugUI__Value::get_getter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), "get_getter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<::System::Object*>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Value::set_getter(::System::Func_1<::System::Object*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), "set_getter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Object*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Value* UnityEngine::Rendering::__DebugUI__Value::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Value*>());
}
inline void UnityEngine::Rendering::__DebugUI__Value::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Rendering::__DebugUI__Value::GetValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Value*>::get(), "GetValue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Value::__DebugUI__Value() {}
/// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IValueField"
template <typename T> constexpr UnityEngine::Rendering::__DebugUI__Field_1<T>::operator ::UnityEngine::Rendering::__DebugUI__IValueField*() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IValueField*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IValueField"
template <typename T> constexpr ::UnityEngine::Rendering::__DebugUI__IValueField* UnityEngine::Rendering::__DebugUI__Field_1<T>::i___UnityEngine__Rendering____DebugUI__IValueField() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IValueField*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Func_1<T>*& UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_get__getter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_get__getter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getter_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_set__getter_k__BackingField(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_get__setter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setter_k__BackingField;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_get__setter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setter_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_set__setter_k__BackingField(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>*& UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_get_onValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValueChanged;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>*> const&
UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_get_onValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onValueChanged;
}
template <typename T>
constexpr void UnityEngine::Rendering::__DebugUI__Field_1<T>::__cordl_internal_set_onValueChanged(::System::Action_2<::UnityEngine::Rendering::__DebugUI__Field_1<T>*, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Func_1<T>* UnityEngine::Rendering::__DebugUI__Field_1<T>::get_getter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(),
                                                                             "get_getter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::__DebugUI__Field_1<T>::set_getter(::System::Func_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(), "set_getter",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Action_1<T>* UnityEngine::Rendering::__DebugUI__Field_1<T>::get_setter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(),
                                                                             "get_setter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::__DebugUI__Field_1<T>::set_setter(::System::Action_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(), "set_setter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* UnityEngine::Rendering::__DebugUI__Field_1<T>::UnityEngine_Rendering_DebugUI_IValueField_ValidateValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(),
                                                                             "UnityEngine.Rendering.DebugUI.IValueField.ValidateValue", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::Rendering::__DebugUI__Field_1<T>::ValidateValue(T value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Object* UnityEngine::Rendering::__DebugUI__Field_1<T>::UnityEngine_Rendering_DebugUI_IValueField_GetValue() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(),
                                               "UnityEngine.Rendering.DebugUI.IValueField.GetValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::__DebugUI__Field_1<T>::GetValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(),
                                                                             "GetValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::__DebugUI__Field_1<T>::SetValue(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(), "SetValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::__DebugUI__Field_1<T>::SetValue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(), "SetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::UnityEngine::Rendering::__DebugUI__Field_1<T>* UnityEngine::Rendering::__DebugUI__Field_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>());
}
template <typename T> inline void UnityEngine::Rendering::__DebugUI__Field_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Field_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::__DebugUI__Field_1<T>::__DebugUI__Field_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BoolField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__BoolField::*)()>(&::UnityEngine::Rendering::__DebugUI__BoolField::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1bd8d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BoolField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::__DebugUI__BoolField* UnityEngine::Rendering::__DebugUI__BoolField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__BoolField*>());
}
inline void UnityEngine::Rendering::__DebugUI__BoolField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BoolField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__BoolField::__DebugUI__BoolField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryBoolField.get_historyGetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> (
    ::UnityEngine::Rendering::__DebugUI__HistoryBoolField::*)()>(&::UnityEngine::Rendering::__DebugUI__HistoryBoolField::get_historyGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(),
                                                                               "get_historyGetter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryBoolField.set_historyGetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__HistoryBoolField::*)(
    ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>)>(&::UnityEngine::Rendering::__DebugUI__HistoryBoolField::set_historyGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd8d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(), "set_historyGetter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryBoolField.get_historyDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__HistoryBoolField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__HistoryBoolField::get_historyDepth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1bd8d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(),
                                                                               "get_historyDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryBoolField.GetHistoryValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__HistoryBoolField::*)(int32_t)>(
    &::UnityEngine::Rendering::__DebugUI__HistoryBoolField::GetHistoryValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1bd8d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(), "GetHistoryValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryBoolField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__HistoryBoolField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__HistoryBoolField::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1bd8dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>& UnityEngine::Rendering::__DebugUI__HistoryBoolField::__cordl_internal_get__historyGetter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyGetter_k__BackingField;
}
constexpr ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> const& UnityEngine::Rendering::__DebugUI__HistoryBoolField::__cordl_internal_get__historyGetter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyGetter_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__HistoryBoolField::__cordl_internal_set__historyGetter_k__BackingField(::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____historyGetter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> UnityEngine::Rendering::__DebugUI__HistoryBoolField::get_historyGetter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(),
                                                                             "get_historyGetter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__HistoryBoolField::set_historyGetter(::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(), "set_historyGetter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Func_1<bool>*, ::Array<::System::Func_1<bool>*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::__DebugUI__HistoryBoolField::get_historyDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(),
                                                                             "get_historyDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__HistoryBoolField::GetHistoryValue(int32_t historyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(), "GetHistoryValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, historyIndex);
}
inline ::UnityEngine::Rendering::__DebugUI__HistoryBoolField* UnityEngine::Rendering::__DebugUI__HistoryBoolField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>());
}
inline void UnityEngine::Rendering::__DebugUI__HistoryBoolField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryBoolField*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__HistoryBoolField::__DebugUI__HistoryBoolField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IntField.ValidateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__IntField::*)(int32_t)>(
    &::UnityEngine::Rendering::__DebugUI__IntField::ValidateValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1bd8ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IntField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IntField*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__IntField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__IntField::*)()>(&::UnityEngine::Rendering::__DebugUI__IntField::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1bd8e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IntField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<int32_t>*& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<int32_t>*> const& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_set_min(::System::Func_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___min)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<int32_t>*& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<int32_t>*> const& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_set_max(::System::Func_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___max)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_set_incStep(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_intStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_get_intStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr void UnityEngine::Rendering::__DebugUI__IntField::__cordl_internal_set_intStepMult(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intStepMult = value;
}
inline int32_t UnityEngine::Rendering::__DebugUI__IntField::ValidateValue(int32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IntField*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__IntField* UnityEngine::Rendering::__DebugUI__IntField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__IntField*>());
}
inline void UnityEngine::Rendering::__DebugUI__IntField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__IntField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__IntField::__DebugUI__IntField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__UIntField.ValidateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::Rendering::__DebugUI__UIntField::*)(uint32_t)>(
    &::UnityEngine::Rendering::__DebugUI__UIntField::ValidateValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1bd8e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__UIntField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__UIntField*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__UIntField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__UIntField::*)()>(&::UnityEngine::Rendering::__DebugUI__UIntField::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1bd8ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__UIntField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<uint32_t>*& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<uint32_t>*> const& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_set_min(::System::Func_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___min)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<uint32_t>*& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<uint32_t>*> const& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_set_max(::System::Func_1<uint32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___max)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr uint32_t const& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_set_incStep(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr uint32_t& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_intStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr uint32_t const& UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_get_intStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___intStepMult;
}
constexpr void UnityEngine::Rendering::__DebugUI__UIntField::__cordl_internal_set_intStepMult(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___intStepMult = value;
}
inline uint32_t UnityEngine::Rendering::__DebugUI__UIntField::ValidateValue(uint32_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__UIntField*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__UIntField* UnityEngine::Rendering::__DebugUI__UIntField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__UIntField*>());
}
inline void UnityEngine::Rendering::__DebugUI__UIntField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__UIntField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__UIntField::__DebugUI__UIntField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__FloatField.ValidateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Rendering::__DebugUI__FloatField::*)(float_t)>(
    &::UnityEngine::Rendering::__DebugUI__FloatField::ValidateValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1bd8f44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__FloatField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__FloatField*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__FloatField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__FloatField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__FloatField::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1bd8fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__FloatField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Func_1<float_t>*& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_set_min(::System::Func_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___min)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<float_t>*& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<float_t>*> const& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_set_max(::System::Func_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___max)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::__DebugUI__FloatField::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline float_t UnityEngine::Rendering::__DebugUI__FloatField::ValidateValue(float_t value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__FloatField*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__FloatField* UnityEngine::Rendering::__DebugUI__FloatField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__FloatField*>());
}
inline void UnityEngine::Rendering::__DebugUI__FloatField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__FloatField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__FloatField::__DebugUI__FloatField() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugUI__EnumUtility____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugUI__EnumUtility____c::*)()>(&::GlobalNamespace::__DebugUI__EnumUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fb610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugUI__EnumUtility____c._MakeEnumNames_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIContent* (::GlobalNamespace::__DebugUI__EnumUtility____c::*)(::System::Reflection::FieldInfo*)>(
    &::GlobalNamespace::__DebugUI__EnumUtility____c::_MakeEnumNames_b__0_0)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x19fb618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get(), "<MakeEnumNames>b__0_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__DebugUI__EnumUtility____c::setStaticF___9(::GlobalNamespace::__DebugUI__EnumUtility____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__EnumUtility____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__EnumUtility____c*>(value));
}
inline ::GlobalNamespace::__DebugUI__EnumUtility____c* GlobalNamespace::__DebugUI__EnumUtility____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__EnumUtility____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get>();
}
inline void GlobalNamespace::__DebugUI__EnumUtility____c::setStaticF___9__0_0(::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get>(
      std::forward<::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>*>(value));
}
inline ::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>* GlobalNamespace::__DebugUI__EnumUtility____c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::FieldInfo*, ::UnityEngine::GUIContent*>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get>();
}
inline ::GlobalNamespace::__DebugUI__EnumUtility____c* GlobalNamespace::__DebugUI__EnumUtility____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugUI__EnumUtility____c*>());
}
inline void GlobalNamespace::__DebugUI__EnumUtility____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::GUIContent* GlobalNamespace::__DebugUI__EnumUtility____c::_MakeEnumNames_b__0_0(::System::Reflection::FieldInfo* fieldInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumUtility____c*>::get(), "<MakeEnumNames>b__0_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIContent*, false>(this, ___internal_method, fieldInfo);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugUI__EnumUtility____c::__DebugUI__EnumUtility____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumUtility.MakeEnumNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> (*)(::System::Type*)>(
    &::UnityEngine::Rendering::__DebugUI__EnumUtility::MakeEnumNames)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1bd9000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumUtility*>::get(), "MakeEnumNames",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumUtility.MakeEnumValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::System::Type*)>(
    &::UnityEngine::Rendering::__DebugUI__EnumUtility::MakeEnumValues)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x1bd913c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumUtility*>::get(), "MakeEnumValues",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> UnityEngine::Rendering::__DebugUI__EnumUtility::MakeEnumNames(::System::Type* enumType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumUtility*>::get(), "MakeEnumNames",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>, false>(nullptr, ___internal_method, enumType);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::__DebugUI__EnumUtility::MakeEnumValues(::System::Type* enumType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumUtility*>::get(), "MakeEnumValues",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, enumType);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__EnumUtility::__DebugUI__EnumUtility() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugUI__EnumField____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugUI__EnumField____c::*)()>(&::GlobalNamespace::__DebugUI__EnumField____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugUI__EnumField____c._InitQuickSeparators_b__17_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__DebugUI__EnumField____c::*)(::UnityEngine::GUIContent*)>(
    &::GlobalNamespace::__DebugUI__EnumField____c::_InitQuickSeparators_b__17_0)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x19fbc24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get(), "<InitQuickSeparators>b__17_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIContent*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__DebugUI__EnumField____c::setStaticF___9(::GlobalNamespace::__DebugUI__EnumField____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__EnumField____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__EnumField____c*>(value));
}
inline ::GlobalNamespace::__DebugUI__EnumField____c* GlobalNamespace::__DebugUI__EnumField____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__EnumField____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get>();
}
inline void GlobalNamespace::__DebugUI__EnumField____c::setStaticF___9__17_0(::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::GUIContent*, ::StringW>*, "<>9__17_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::GUIContent*, ::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::GUIContent*, ::StringW>* GlobalNamespace::__DebugUI__EnumField____c::getStaticF___9__17_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::GUIContent*, ::StringW>*, "<>9__17_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get>();
}
inline ::GlobalNamespace::__DebugUI__EnumField____c* GlobalNamespace::__DebugUI__EnumField____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugUI__EnumField____c*>());
}
inline void GlobalNamespace::__DebugUI__EnumField____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__DebugUI__EnumField____c::_InitQuickSeparators_b__17_0(::UnityEngine::GUIContent* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__EnumField____c*>::get(), "<InitQuickSeparators>b__17_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIContent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugUI__EnumField____c::__DebugUI__EnumField____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.get_getIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_1<int32_t>* (::UnityEngine::Rendering::__DebugUI__EnumField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::get_getIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fb7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                               "get_getIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.set_getIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__EnumField::*)(::System::Func_1<int32_t>*)>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::set_getIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fb7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_getIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.get_setIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<int32_t>* (::UnityEngine::Rendering::__DebugUI__EnumField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::get_setIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fb7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                               "get_setIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.set_setIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__EnumField::*)(::System::Action_1<int32_t>*)>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::set_setIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fb800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_setIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.get_currentIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__EnumField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::get_currentIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x19fb808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                               "get_currentIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.set_currentIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__EnumField::*)(int32_t)>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::set_currentIndex)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x19fb82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_currentIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.set_autoEnum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__EnumField::*)(::System::Type*)>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::set_autoEnum)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x19fb850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_autoEnum",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.InitQuickSeparators
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__EnumField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::InitQuickSeparators)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x19fb968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                               "InitQuickSeparators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField.InitIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__EnumField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__EnumField::InitIndexes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x19fb898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                               "InitIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__EnumField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__EnumField::*)()>(&::UnityEngine::Rendering::__DebugUI__EnumField::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x19fbb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_enumNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumNames;
}
constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_enumNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumNames;
}
constexpr void UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_set_enumNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_enumValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumValues;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_enumValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___enumValues;
}
constexpr void UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_set_enumValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_quickSeparators() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickSeparators;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_quickSeparators() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___quickSeparators;
}
constexpr void UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_set_quickSeparators(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___quickSeparators)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_indexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexes;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get_indexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indexes;
}
constexpr void UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_set_indexes(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___indexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_1<int32_t>*& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get__getIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getIndex_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<int32_t>*> const& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get__getIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____getIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_set__getIndex_k__BackingField(::System::Func_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getIndex_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<int32_t>*& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get__setIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setIndex_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_get__setIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__EnumField::__cordl_internal_set__setIndex_k__BackingField(::System::Action_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____setIndex_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Func_1<int32_t>* UnityEngine::Rendering::__DebugUI__EnumField::get_getIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                             "get_getIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_1<int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__EnumField::set_getIndex(::System::Func_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_getIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Action_1<int32_t>* UnityEngine::Rendering::__DebugUI__EnumField::get_setIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                             "get_setIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<int32_t>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__EnumField::set_setIndex(::System::Action_1<int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_setIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::__DebugUI__EnumField::get_currentIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                             "get_currentIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__EnumField::set_currentIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_currentIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::__DebugUI__EnumField::set_autoEnum(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), "set_autoEnum",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::__DebugUI__EnumField::InitQuickSeparators() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                             "InitQuickSeparators", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__EnumField::InitIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(),
                                                                             "InitIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::__DebugUI__EnumField* UnityEngine::Rendering::__DebugUI__EnumField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__EnumField*>());
}
inline void UnityEngine::Rendering::__DebugUI__EnumField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__EnumField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__EnumField::__DebugUI__EnumField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryEnumField.get_historyIndexGetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> (
    ::UnityEngine::Rendering::__DebugUI__HistoryEnumField::*)()>(&::UnityEngine::Rendering::__DebugUI__HistoryEnumField::get_historyIndexGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(),
                                                                               "get_historyIndexGetter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryEnumField.set_historyIndexGetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__HistoryEnumField::*)(
    ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>)>(&::UnityEngine::Rendering::__DebugUI__HistoryEnumField::set_historyIndexGetter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbcb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(), "set_historyIndexGetter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryEnumField.get_historyDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__HistoryEnumField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__HistoryEnumField::get_historyDepth)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x19fbcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(),
                                                                               "get_historyDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryEnumField.GetHistoryValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__HistoryEnumField::*)(int32_t)>(
    &::UnityEngine::Rendering::__DebugUI__HistoryEnumField::GetHistoryValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x19fbcd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(), "GetHistoryValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__HistoryEnumField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__HistoryEnumField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__HistoryEnumField::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x19fbd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>& UnityEngine::Rendering::__DebugUI__HistoryEnumField::__cordl_internal_get__historyIndexGetter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyIndexGetter_k__BackingField;
}
constexpr ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> const&
UnityEngine::Rendering::__DebugUI__HistoryEnumField::__cordl_internal_get__historyIndexGetter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____historyIndexGetter_k__BackingField;
}
constexpr void
UnityEngine::Rendering::__DebugUI__HistoryEnumField::__cordl_internal_set__historyIndexGetter_k__BackingField(::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____historyIndexGetter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> UnityEngine::Rendering::__DebugUI__HistoryEnumField::get_historyIndexGetter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(),
                                                                             "get_historyIndexGetter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__HistoryEnumField::set_historyIndexGetter(::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(), "set_historyIndexGetter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Func_1<int32_t>*, ::Array<::System::Func_1<int32_t>*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::__DebugUI__HistoryEnumField::get_historyDepth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(),
                                                                             "get_historyDepth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::__DebugUI__HistoryEnumField::GetHistoryValue(int32_t historyIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(), "GetHistoryValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, historyIndex);
}
inline ::UnityEngine::Rendering::__DebugUI__HistoryEnumField* UnityEngine::Rendering::__DebugUI__HistoryEnumField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>());
}
inline void UnityEngine::Rendering::__DebugUI__HistoryEnumField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__HistoryEnumField*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__HistoryEnumField::__DebugUI__HistoryEnumField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BitField.get_enumNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> (
    ::UnityEngine::Rendering::__DebugUI__BitField::*)()>(&::UnityEngine::Rendering::__DebugUI__BitField::get_enumNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(),
                                                                               "get_enumNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BitField.set_enumNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__BitField::*)(
    ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>)>(&::UnityEngine::Rendering::__DebugUI__BitField::set_enumNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbd24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), "set_enumNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BitField.get_enumValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (::UnityEngine::Rendering::__DebugUI__BitField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__BitField::get_enumValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbd2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(),
                                                                               "get_enumValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BitField.set_enumValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__BitField::*)(::ArrayW<int32_t, ::Array<int32_t>*>)>(
    &::UnityEngine::Rendering::__DebugUI__BitField::set_enumValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), "set_enumValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BitField.get_enumType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::UnityEngine::Rendering::__DebugUI__BitField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__BitField::get_enumType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(),
                                                                               "get_enumType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BitField.set_enumType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__BitField::*)(::System::Type*)>(
    &::UnityEngine::Rendering::__DebugUI__BitField::set_enumType)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x19fbd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), "set_enumType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__BitField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__BitField::*)()>(&::UnityEngine::Rendering::__DebugUI__BitField::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x19fbd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_get__enumNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumNames_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_get__enumNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumNames_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_set__enumNames_k__BackingField(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enumNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_get__enumValues_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumValues_k__BackingField;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_get__enumValues_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumValues_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_set__enumValues_k__BackingField(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____enumValues_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_get_m_EnumType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_get_m_EnumType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnumType;
}
constexpr void UnityEngine::Rendering::__DebugUI__BitField::__cordl_internal_set_m_EnumType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EnumType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> UnityEngine::Rendering::__DebugUI__BitField::get_enumNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(),
                                                                             "get_enumNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__BitField::set_enumNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), "set_enumNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::Rendering::__DebugUI__BitField::get_enumValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(),
                                                                             "get_enumValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__BitField::set_enumValues(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), "set_enumValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* UnityEngine::Rendering::__DebugUI__BitField::get_enumType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(),
                                                                             "get_enumType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__BitField::set_enumType(::System::Type* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), "set_enumType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__BitField* UnityEngine::Rendering::__DebugUI__BitField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__BitField*>());
}
inline void UnityEngine::Rendering::__DebugUI__BitField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__BitField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__BitField::__DebugUI__BitField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__ColorField.ValidateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Rendering::__DebugUI__ColorField::*)(::UnityEngine::Color)>(
    &::UnityEngine::Rendering::__DebugUI__ColorField::ValidateValue)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x19fbdcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__ColorField*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__ColorField*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__ColorField._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__ColorField::*)()>(
    &::UnityEngine::Rendering::__DebugUI__ColorField::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x19fbe1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__ColorField*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr bool const& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hdr;
}
constexpr void UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_set_hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hdr = value;
}
constexpr bool& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_showAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr bool const& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_showAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showAlpha;
}
constexpr void UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_set_showAlpha(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showAlpha = value;
}
constexpr bool& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_showPicker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showPicker;
}
constexpr bool const& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_showPicker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___showPicker;
}
constexpr void UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_set_showPicker(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___showPicker = value;
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::__DebugUI__ColorField::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline ::UnityEngine::Color UnityEngine::Rendering::__DebugUI__ColorField::ValidateValue(::UnityEngine::Color value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__ColorField*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__ColorField* UnityEngine::Rendering::__DebugUI__ColorField::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__ColorField*>());
}
inline void UnityEngine::Rendering::__DebugUI__ColorField::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__ColorField*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__ColorField::__DebugUI__ColorField() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Vector2Field._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Vector2Field::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Vector2Field::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x19fbe80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Vector2Field*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector2Field::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline ::UnityEngine::Rendering::__DebugUI__Vector2Field* UnityEngine::Rendering::__DebugUI__Vector2Field::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Vector2Field*>());
}
inline void UnityEngine::Rendering::__DebugUI__Vector2Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Vector2Field*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Vector2Field::__DebugUI__Vector2Field() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Vector3Field._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Vector3Field::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Vector3Field::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x19fbedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Vector3Field*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector3Field::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline ::UnityEngine::Rendering::__DebugUI__Vector3Field* UnityEngine::Rendering::__DebugUI__Vector3Field::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Vector3Field*>());
}
inline void UnityEngine::Rendering::__DebugUI__Vector3Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Vector3Field*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Vector3Field::__DebugUI__Vector3Field() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Vector4Field._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Vector4Field::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Vector4Field::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x19fbf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Vector4Field*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_get_incStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_get_incStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStep;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_set_incStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStep = value;
}
constexpr float_t& UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_get_incStepMult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr float_t const& UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_get_incStepMult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incStepMult;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_set_incStepMult(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incStepMult = value;
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_get_decimals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_get_decimals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decimals;
}
constexpr void UnityEngine::Rendering::__DebugUI__Vector4Field::__cordl_internal_set_decimals(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___decimals = value;
}
inline ::UnityEngine::Rendering::__DebugUI__Vector4Field* UnityEngine::Rendering::__DebugUI__Vector4Field::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Vector4Field*>());
}
inline void UnityEngine::Rendering::__DebugUI__Vector4Field::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Vector4Field*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Vector4Field::__DebugUI__Vector4Field() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style::__DebugUI__MessageBox__Style(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style::__DebugUI__MessageBox__Style() {}
constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style GlobalNamespace::__DebugUI__MessageBox__Style::Info{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style GlobalNamespace::__DebugUI__MessageBox__Style::Warning{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style GlobalNamespace::__DebugUI__MessageBox__Style::Error{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__MessageBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__MessageBox::*)()>(
    &::UnityEngine::Rendering::__DebugUI__MessageBox::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbf94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__MessageBox*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style& UnityEngine::Rendering::__DebugUI__MessageBox::__cordl_internal_get_style() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr ::GlobalNamespace::__DebugUI__MessageBox__Style const& UnityEngine::Rendering::__DebugUI__MessageBox::__cordl_internal_get_style() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___style;
}
constexpr void UnityEngine::Rendering::__DebugUI__MessageBox::__cordl_internal_set_style(::GlobalNamespace::__DebugUI__MessageBox__Style value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___style = value;
}
inline ::UnityEngine::Rendering::__DebugUI__MessageBox* UnityEngine::Rendering::__DebugUI__MessageBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__MessageBox*>());
}
inline void UnityEngine::Rendering::__DebugUI__MessageBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__MessageBox*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__MessageBox::__DebugUI__MessageBox() {}
//  Writing Method size for method: ::GlobalNamespace::__DebugUI__Panel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugUI__Panel____c::*)()>(&::GlobalNamespace::__DebugUI__Panel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fca10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__DebugUI__Panel____c.__ctor_b__29_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__DebugUI__Panel____c::*)(::UnityEngine::Rendering::__DebugUI__Panel*)>(
    &::GlobalNamespace::__DebugUI__Panel____c::__ctor_b__29_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x19fca18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get(), "<.ctor>b__29_0", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Panel*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__DebugUI__Panel____c::setStaticF___9(::GlobalNamespace::__DebugUI__Panel____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__DebugUI__Panel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get>(
      std::forward<::GlobalNamespace::__DebugUI__Panel____c*>(value));
}
inline ::GlobalNamespace::__DebugUI__Panel____c* GlobalNamespace::__DebugUI__Panel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__DebugUI__Panel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get>();
}
inline void GlobalNamespace::__DebugUI__Panel____c::setStaticF___9__29_0(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*, "<>9__29_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get>(
      std::forward<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*>(value));
}
inline ::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* GlobalNamespace::__DebugUI__Panel____c::getStaticF___9__29_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*, "<>9__29_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get>();
}
inline ::GlobalNamespace::__DebugUI__Panel____c* GlobalNamespace::__DebugUI__Panel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__DebugUI__Panel____c*>());
}
inline void GlobalNamespace::__DebugUI__Panel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__DebugUI__Panel____c::__ctor_b__29_0(::UnityEngine::Rendering::__DebugUI__Panel* _p0_) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__DebugUI__Panel____c*>::get(), "<.ctor>b__29_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Panel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _p0_);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__DebugUI__Panel____c::__DebugUI__Panel____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__DebugUI__Flags (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbf9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "get_flags",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.set_flags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(::UnityEngine::Rendering::__DebugUI__Flags)>(
    &::UnityEngine::Rendering::__DebugUI__Panel::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_flags", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Flags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(::StringW)>(
    &::UnityEngine::Rendering::__DebugUI__Panel::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbfb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_displayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_groupIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_groupIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbfbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_groupIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.set_groupIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(int32_t)>(
    &::UnityEngine::Rendering::__DebugUI__Panel::set_groupIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_groupIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_queryPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_queryPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fbfcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_queryPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_isEditorOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_isEditorOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x19fbfd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_isEditorOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_isRuntimeOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_isRuntimeOnly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x19fbfe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_isRuntimeOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_isInactiveInEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_isInactiveInEditor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x19fbfec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_isInactiveInEditor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_editorForceUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::get_editorForceUpdate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x19fc018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_editorForceUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.get_children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* (
    ::UnityEngine::Rendering::__DebugUI__Panel::*)()>(&::UnityEngine::Rendering::__DebugUI__Panel::get_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fc024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                               "get_children", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.set_children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(&::UnityEngine::Rendering::__DebugUI__Panel::set_children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x19fc02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_children", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.add_onSetDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*)>(&::UnityEngine::Rendering::__DebugUI__Panel::add_onSetDirty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x19fc034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "add_onSetDirty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.remove_onSetDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(
    ::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*)>(&::UnityEngine::Rendering::__DebugUI__Panel::remove_onSetDirty)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x19fc0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "remove_onSetDirty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(&::UnityEngine::Rendering::__DebugUI__Panel::_ctor)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x19fc194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.OnItemAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(
    &::UnityEngine::Rendering::__DebugUI__Panel::OnItemAdded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x19fc36c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.OnItemRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)(
    ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>*)>(
    &::UnityEngine::Rendering::__DebugUI__Panel::OnItemRemoved)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x19fc664;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.SetDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(&::UnityEngine::Rendering::__DebugUI__Panel::SetDirty)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x19fc3c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "SetDirty",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__Panel::*)()>(
    &::UnityEngine::Rendering::__DebugUI__Panel::GetHashCode)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x19fc6bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__DebugUI__Panel.System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::__DebugUI__Panel::*)(::UnityEngine::Rendering::__DebugUI__Panel*)>(
    &::UnityEngine::Rendering::__DebugUI__Panel::System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x19fc978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Panel*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::Rendering::__DebugUI__IContainer"
constexpr UnityEngine::Rendering::__DebugUI__Panel::operator ::UnityEngine::Rendering::__DebugUI__IContainer*() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IContainer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Rendering::__DebugUI__IContainer"
constexpr ::UnityEngine::Rendering::__DebugUI__IContainer* UnityEngine::Rendering::__DebugUI__Panel::i___UnityEngine__Rendering____DebugUI__IContainer() noexcept {
  return static_cast<::UnityEngine::Rendering::__DebugUI__IContainer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>"
constexpr UnityEngine::Rendering::__DebugUI__Panel::operator ::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>*() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>*
UnityEngine::Rendering::__DebugUI__Panel::i___System__IComparable_1___UnityEngine__Rendering____DebugUI__Panel__() noexcept {
  return static_cast<::System::IComparable_1<::UnityEngine::Rendering::__DebugUI__Panel*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Rendering::__DebugUI__Flags& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__flags_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr ::UnityEngine::Rendering::__DebugUI__Flags const& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__flags_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flags_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_set__flags_k__BackingField(::UnityEngine::Rendering::__DebugUI__Flags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flags_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__groupIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__groupIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____groupIndex_k__BackingField;
}
constexpr void UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_set__groupIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____groupIndex_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__children_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*> const&
UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get__children_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____children_k__BackingField;
}
constexpr void
UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_set__children_k__BackingField(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____children_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*& UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get_onSetDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSetDirty;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*> const&
UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_get_onSetDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onSetDirty;
}
constexpr void UnityEngine::Rendering::__DebugUI__Panel::__cordl_internal_set_onSetDirty(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onSetDirty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::__DebugUI__Flags UnityEngine::Rendering::__DebugUI__Panel::get_flags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "get_flags",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__DebugUI__Flags, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::set_flags(::UnityEngine::Rendering::__DebugUI__Flags value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_flags", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Flags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::__DebugUI__Panel::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                             "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_displayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Rendering::__DebugUI__Panel::get_groupIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                             "get_groupIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::set_groupIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_groupIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Rendering::__DebugUI__Panel::get_queryPath() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                             "get_queryPath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__Panel::get_isEditorOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                             "get_isEditorOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__Panel::get_isRuntimeOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                             "get_isRuntimeOnly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__Panel::get_isInactiveInEditor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                             "get_isInactiveInEditor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::__DebugUI__Panel::get_editorForceUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(),
                                                                             "get_editorForceUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* UnityEngine::Rendering::__DebugUI__Panel::get_children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "get_children",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::set_children(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "set_children", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::add_onSetDirty(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "add_onSetDirty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::remove_onSetDirty(::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "remove_onSetDirty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Rendering::__DebugUI__Panel*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::__DebugUI__Panel* UnityEngine::Rendering::__DebugUI__Panel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__DebugUI__Panel*>());
}
inline void UnityEngine::Rendering::__DebugUI__Panel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::OnItemAdded(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                                                                  ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::OnItemRemoved(::UnityEngine::Rendering::ObservableList_1<::UnityEngine::Rendering::__DebugUI__Widget*>* sender,
                                                                    ::UnityEngine::Rendering::ListChangedEventArgs_1<::UnityEngine::Rendering::__DebugUI__Widget*>* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sender, e);
}
inline void UnityEngine::Rendering::__DebugUI__Panel::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "SetDirty",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::__DebugUI__Panel::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::__DebugUI__Panel::System_IComparable_UnityEngine_Rendering_DebugUI_Panel__CompareTo(::UnityEngine::Rendering::__DebugUI__Panel* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__DebugUI__Panel*>::get(), "System.IComparable<UnityEngine.Rendering.DebugUI.Panel>.CompareTo",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Panel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__DebugUI__Panel::__DebugUI__Panel() {}
//  Writing Method size for method: ::UnityEngine::Rendering::DebugUI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugUI::*)()>(&::UnityEngine::Rendering::DebugUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bd79f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugUI*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::DebugUI* UnityEngine::Rendering::DebugUI::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugUI*>());
}
inline void UnityEngine::Rendering::DebugUI::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugUI*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugUI::DebugUI() {}
