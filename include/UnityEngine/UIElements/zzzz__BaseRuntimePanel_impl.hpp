#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::__BaseRuntimePanel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__BaseRuntimePanel____c::*)()>(
    &::UnityEngine::UIElements::__BaseRuntimePanel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c9c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseRuntimePanel____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__BaseRuntimePanel____c.__cctor_b__44_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::__BaseRuntimePanel____c::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::__BaseRuntimePanel____c::__cctor_b__44_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27c9c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseRuntimePanel____c*>::get(), "<.cctor>b__44_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__BaseRuntimePanel____c::setStaticF___9(::UnityEngine::UIElements::__BaseRuntimePanel____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::__BaseRuntimePanel____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseRuntimePanel____c*>::get>(
      std::forward<::UnityEngine::UIElements::__BaseRuntimePanel____c*>(value));
}
inline ::UnityEngine::UIElements::__BaseRuntimePanel____c* UnityEngine::UIElements::__BaseRuntimePanel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__BaseRuntimePanel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseRuntimePanel____c*>::get>();
}
inline ::UnityEngine::UIElements::__BaseRuntimePanel____c* UnityEngine::UIElements::__BaseRuntimePanel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__BaseRuntimePanel____c*>());
}
inline void UnityEngine::UIElements::__BaseRuntimePanel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseRuntimePanel____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__BaseRuntimePanel____c::__cctor_b__44_0(::UnityEngine::Vector2 p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__BaseRuntimePanel____c*>::get(), "<.cctor>b__44_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__BaseRuntimePanel____c::__BaseRuntimePanel____c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_selectableGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c8b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                               "get_selectableGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_selectableGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::GameObject*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::set_selectableGameObject)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x27c8ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_selectableGameObject", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_sortingPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_sortingPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c8f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                               "get_sortingPriority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_sortingPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(float_t)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::set_sortingPriority)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x27c8f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_sortingPriority",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.add_destroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::add_destroyed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27c90c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "add_destroyed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.remove_destroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::System::Action*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::remove_destroyed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27c9168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "remove_destroyed",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(
    ::UnityEngine::ScriptableObject*, ::UnityEngine::UIElements::EventDispatcher*)>(&::UnityEngine::UIElements::BaseRuntimePanel::_ctor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x27c9208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(bool)>(&::UnityEngine::UIElements::BaseRuntimePanel::Dispose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27c9318;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_standardWorldSpaceShader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Shader> (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_standardWorldSpaceShader)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c9370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), 47));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_drawToCameras
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_drawToCameras)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c9378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                               "get_drawToCameras", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_drawToCameras
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(bool)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::set_drawToCameras)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x27c9380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_drawToCameras",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_targetDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_targetDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c9430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                               "get_targetDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_targetDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(int32_t)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::set_targetDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c9438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_targetDisplay",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_screenRenderingWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingWidth)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27c9440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                               "get_screenRenderingWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_screenRenderingHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingHeight)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x27c950c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                               "get_screenRenderingHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.Repaint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::Event*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::Repaint)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x27c95d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.get_screenToPanelSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* (::UnityEngine::UIElements::BaseRuntimePanel::*)()>(
    &::UnityEngine::UIElements::BaseRuntimePanel::get_screenToPanelSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27c97c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                               "get_screenToPanelSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.set_screenToPanelSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(
    ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*)>(&::UnityEngine::UIElements::BaseRuntimePanel::set_screenToPanelSpace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27c97c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_screenToPanelSpace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.ScreenToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27c9840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "ScreenToPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.ScreenToPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseRuntimePanel::*)(
    ::UnityEngine::Vector2, ::UnityEngine::Vector2, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector2>, bool)>(&::UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x27c9894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "ScreenToPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.AssignPanelToComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::AssignPanelToComponents)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x27c8c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "AssignPanelToComponents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.PointerLeavesPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::PointerLeavesPanel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x27c9998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "PointerLeavesPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseRuntimePanel.PointerEntersPanel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseRuntimePanel::*)(int32_t, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::BaseRuntimePanel::PointerEntersPanel)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27c9a58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "PointerEntersPanel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SelectableGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectableGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SelectableGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SelectableGameObject;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_SelectableGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SelectableGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_RuntimePanelCreationIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimePanelCreationIndex;
}
constexpr int32_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_RuntimePanelCreationIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimePanelCreationIndex;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_RuntimePanelCreationIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RuntimePanelCreationIndex = value;
}
constexpr float_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SortingPriority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingPriority;
}
constexpr float_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_SortingPriority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingPriority;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_SortingPriority(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingPriority = value;
}
constexpr ::System::Action*& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_destroyed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroyed;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_destroyed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destroyed;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_destroyed(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destroyed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Shader>& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_StandardWorldSpaceShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StandardWorldSpaceShader;
}
constexpr ::UnityW<::UnityEngine::Shader> const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_StandardWorldSpaceShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StandardWorldSpaceShader;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_StandardWorldSpaceShader(::UnityW<::UnityEngine::Shader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StandardWorldSpaceShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_DrawToCameras() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawToCameras;
}
constexpr bool const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_DrawToCameras() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DrawToCameras;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_DrawToCameras(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DrawToCameras = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_targetTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_targetTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetTexture;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___targetTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_panelToWorld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelToWorld;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_panelToWorld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___panelToWorld;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_panelToWorld(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___panelToWorld = value;
}
constexpr int32_t& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get__targetDisplay_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetDisplay_k__BackingField;
}
constexpr int32_t const& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get__targetDisplay_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetDisplay_k__BackingField;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set__targetDisplay_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetDisplay_k__BackingField = value;
}
constexpr ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*& UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_ScreenToPanelSpace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToPanelSpace;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*> const&
UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_get_m_ScreenToPanelSpace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScreenToPanelSpace;
}
constexpr void UnityEngine::UIElements::BaseRuntimePanel::__cordl_internal_set_m_ScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScreenToPanelSpace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UIElements::BaseRuntimePanel::setStaticF_s_CurrentRuntimePanelCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CurrentRuntimePanelCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::getStaticF_s_CurrentRuntimePanelCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_CurrentRuntimePanelCounter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get>();
}
inline void UnityEngine::UIElements::BaseRuntimePanel::setStaticF_DefaultScreenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*, "DefaultScreenToPanelSpace",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get>(
      std::forward<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*>(value));
}
inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* UnityEngine::UIElements::BaseRuntimePanel::getStaticF_DefaultScreenToPanelSpace() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*, "DefaultScreenToPanelSpace",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get>();
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::UIElements::BaseRuntimePanel::get_selectableGameObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                             "get_selectableGameObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_selectableGameObject(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_selectableGameObject", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseRuntimePanel::get_sortingPriority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                             "get_sortingPriority", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_sortingPriority(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_sortingPriority",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::add_destroyed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "add_destroyed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::remove_destroyed(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "remove_destroyed",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param dispatcher: ::UnityEngine::UIElements::EventDispatcher* (default: nullptr)
inline ::UnityEngine::UIElements::BaseRuntimePanel* UnityEngine::UIElements::BaseRuntimePanel::New_ctor(::UnityEngine::ScriptableObject* ownerObject,
                                                                                                        ::UnityEngine::UIElements::EventDispatcher* dispatcher) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::BaseRuntimePanel*>(ownerObject, dispatcher));
}
/// @param dispatcher: ::UnityEngine::UIElements::EventDispatcher* (default: nullptr)
inline void UnityEngine::UIElements::BaseRuntimePanel::_ctor(::UnityEngine::ScriptableObject* ownerObject, ::UnityEngine::UIElements::EventDispatcher* dispatcher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventDispatcher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownerObject, dispatcher);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::UnityW<::UnityEngine::Shader> UnityEngine::UIElements::BaseRuntimePanel::get_standardWorldSpaceShader() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), 47)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Shader>, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseRuntimePanel::get_drawToCameras() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                             "get_drawToCameras", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_drawToCameras(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_drawToCameras",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::get_targetDisplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                             "get_targetDisplay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_targetDisplay(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_targetDisplay",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                             "get_screenRenderingWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::BaseRuntimePanel::get_screenRenderingHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                             "get_screenRenderingHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::Repaint(::UnityEngine::Event* e) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline ::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* UnityEngine::UIElements::BaseRuntimePanel::get_screenToPanelSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(),
                                                                             "get_screenToPanelSpace", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::set_screenToPanelSpace(::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "set_screenToPanelSpace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::Vector2, ::UnityEngine::Vector2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel(::UnityEngine::Vector2 screen) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "ScreenToPanel", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, screen);
}
/// @param allowOutside: bool (default: false)
inline bool UnityEngine::UIElements::BaseRuntimePanel::ScreenToPanel(::UnityEngine::Vector2 screenPosition, ::UnityEngine::Vector2 screenDelta, ByRef<::UnityEngine::Vector2> panelPosition,
                                                                     ByRef<::UnityEngine::Vector2> panelDelta, bool allowOutside) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "ScreenToPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, screenPosition, screenDelta, panelPosition, panelDelta, allowOutside);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::AssignPanelToComponents(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "AssignPanelToComponents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::PointerLeavesPanel(int32_t pointerId, ::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "PointerLeavesPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerId, position);
}
inline void UnityEngine::UIElements::BaseRuntimePanel::PointerEntersPanel(int32_t pointerId, ::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseRuntimePanel*>::get(), "PointerEntersPanel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerId, position);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::BaseRuntimePanel::BaseRuntimePanel() {}
