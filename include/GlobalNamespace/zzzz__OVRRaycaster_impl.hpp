#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__GraphicRaycaster_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "GlobalNamespace/zzzz__OVRRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "graphic", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "worldPos", ty: "::UnityEngine::Vector3",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "fromMouse", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRRaycaster__RaycastHit::__OVRRaycaster__RaycastHit(::UnityW<::UnityEngine::UI::Graphic> graphic, ::UnityEngine::Vector3 worldPos, bool fromMouse) noexcept {
  this->graphic = graphic;
  this->worldPos = worldPos;
  this->fromMouse = fromMouse;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRRaycaster__RaycastHit::__OVRRaycaster__RaycastHit() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRRaycaster____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRRaycaster____c::*)()>(&::GlobalNamespace::__OVRRaycaster____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fb7fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRRaycaster____c._GraphicRaycast_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRRaycaster____c::*)(
    ::GlobalNamespace::__OVRRaycaster__RaycastHit, ::GlobalNamespace::__OVRRaycaster__RaycastHit)>(&::GlobalNamespace::__OVRRaycaster____c::_GraphicRaycast_b__16_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x16fb804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get(), "<GraphicRaycast>b__16_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRRaycaster__RaycastHit>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRRaycaster__RaycastHit>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__OVRRaycaster____c::setStaticF___9(::GlobalNamespace::__OVRRaycaster____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRRaycaster____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get>(
      std::forward<::GlobalNamespace::__OVRRaycaster____c*>(value));
}
inline ::GlobalNamespace::__OVRRaycaster____c* GlobalNamespace::__OVRRaycaster____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRRaycaster____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get>();
}
inline void GlobalNamespace::__OVRRaycaster____c::setStaticF___9__16_0(::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*, "<>9__16_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get>(
      std::forward<::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* GlobalNamespace::__OVRRaycaster____c::getStaticF___9__16_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*, "<>9__16_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get>();
}
inline ::GlobalNamespace::__OVRRaycaster____c* GlobalNamespace::__OVRRaycaster____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OVRRaycaster____c*>());
}
inline void GlobalNamespace::__OVRRaycaster____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::__OVRRaycaster____c::_GraphicRaycast_b__16_0(::GlobalNamespace::__OVRRaycaster__RaycastHit g1, ::GlobalNamespace::__OVRRaycaster__RaycastHit g2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRRaycaster____c*>::get(), "<GraphicRaycast>b__16_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRRaycaster__RaycastHit>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRRaycaster__RaycastHit>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, g1, g2);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRRaycaster____c::__OVRRaycaster____c() {}
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x16f9fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_canvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Canvas> (::GlobalNamespace::OVRRaycaster::*)()>(
    &::GlobalNamespace::OVRRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x16fa044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "get_canvas",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::GlobalNamespace::OVRRaycaster::*)()>(
    &::GlobalNamespace::OVRRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x16fa0d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.get_sortOrderPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::get_sortOrderPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16fa0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::Start)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x16fa0fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, ::UnityEngine::Ray, bool)>(
    &::GlobalNamespace::OVRRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x6d8;
  constexpr static std::size_t addrs = 0x16fa24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::GlobalNamespace::OVRRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x16fafc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.RaycastPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::GlobalNamespace::OVRRaycaster::RaycastPointer)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x16fb02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "RaycastPointer", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.GraphicRaycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(
    ::UnityEngine::Canvas*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*)>(&::GlobalNamespace::OVRRaycaster::GraphicRaycast)> {
  constexpr static std::size_t size = 0x69c;
  constexpr static std::size_t addrs = 0x16fa924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "GraphicRaycast", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.GetScreenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::RaycastResult)>(
    &::GlobalNamespace::OVRRaycaster::GetScreenPosition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x16fb4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "GetScreenPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.RayIntersectsRectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Ray, ByRef<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x16fb27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "RayIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.IsFocussed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRRaycaster::*)()>(&::GlobalNamespace::OVRRaycaster::IsFocussed)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x16fb4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "IsFocussed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRRaycaster.OnPointerEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRRaycaster::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::GlobalNamespace::OVRRaycaster::OnPointerEnter)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x16fb608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr GlobalNamespace::OVRRaycaster::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* GlobalNamespace::OVRRaycaster::i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr GlobalNamespace::OVRRaycaster::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* GlobalNamespace::OVRRaycaster::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
  return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRRaycaster::__cordl_internal_get_pointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_pointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pointer;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_pointer(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pointer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::OVRRaycaster::__cordl_internal_get_sortOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr int32_t const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_sortOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sortOrder;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_sortOrder(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sortOrder = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*& GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_RaycastResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*> const&
GlobalNamespace::OVRRaycaster::__cordl_internal_get_m_RaycastResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResults;
}
constexpr void GlobalNamespace::OVRRaycaster::__cordl_internal_set_m_RaycastResults(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RaycastResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRRaycaster::setStaticF_s_SortedGraphics(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*, "s_SortedGraphics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* GlobalNamespace::OVRRaycaster::getStaticF_s_SortedGraphics() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*, "s_SortedGraphics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get>();
}
inline ::GlobalNamespace::OVRRaycaster* GlobalNamespace::OVRRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRRaycaster*>());
}
inline void GlobalNamespace::OVRRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Canvas> GlobalNamespace::OVRRaycaster::get_canvas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "get_canvas",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Camera> GlobalNamespace::OVRRaycaster::get_eventCamera() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::OVRRaycaster::get_sortOrderPriority() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRaycaster::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList, ::UnityEngine::Ray ray,
                                                   bool checkForBlocking) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "Raycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList, ray, checkForBlocking);
}
inline void GlobalNamespace::OVRRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                   ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline void GlobalNamespace::OVRRaycaster::RaycastPointer(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                          ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "RaycastPointer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline void GlobalNamespace::OVRRaycaster::GraphicRaycast(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray,
                                                          ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "GraphicRaycast", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRRaycaster__RaycastHit>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canvas, ray, results);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRRaycaster::GetScreenPosition(::UnityEngine::EventSystems::RaycastResult raycastResult) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "GetScreenPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, raycastResult);
}
inline bool GlobalNamespace::OVRRaycaster::RayIntersectsRectTransform(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "RayIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rectTransform, ray, worldPos);
}
inline bool GlobalNamespace::OVRRaycaster::IsFocussed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "IsFocussed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRRaycaster::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* e) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRRaycaster*>::get(), "OnPointerEnter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRRaycaster::OVRRaycaster() {}
