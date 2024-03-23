#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene2D_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceGraphicRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__IPokeStateDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__PokeStateData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRPokeLogic_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__IUIInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceEventData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__TrackedDeviceGraphicRaycaster_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::*)(
    ::UnityEngine::UI::Graphic*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, float_t, int32_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2fe33f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData.get_graphic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityW<::UnityEngine::UI::Graphic> (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_graphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                    "get_graphic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData.get_worldHitPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_worldHitPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2fe3410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                    "get_worldHitPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData.get_screenPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::*)()>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_screenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe341c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                    "get_screenPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData.get_distance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                    "get_distance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData.get_displayIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_displayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe342c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                    "get_displayIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::_ctor(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition,
                                                                                                              ::UnityEngine::Vector2 screenPosition, float_t distance, int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graphic, worldHitPosition, screenPosition, distance, displayIndex);
}
inline ::UnityW<::UnityEngine::UI::Graphic> UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_graphic() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                  "get_graphic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_worldHitPosition() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                  "get_worldHitPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_screenPosition() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                  "get_screenPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_distance() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                  "get_distance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::get_displayIndex() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                  "get_displayIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_worldHitPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_displayIndex_k__BackingField", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::__TrackedDeviceGraphicRaycaster__RaycastHitData(
    ::UnityW<::UnityEngine::UI::Graphic> _graphic_k__BackingField, ::UnityEngine::Vector3 _worldHitPosition_k__BackingField, ::UnityEngine::Vector2 _screenPosition_k__BackingField,
    float_t _distance_k__BackingField, int32_t _displayIndex_k__BackingField) noexcept {
  this->_graphic_k__BackingField = _graphic_k__BackingField;
  this->_worldHitPosition_k__BackingField = _worldHitPosition_k__BackingField;
  this->_screenPosition_k__BackingField = _screenPosition_k__BackingField;
  this->_distance_k__BackingField = _distance_k__BackingField;
  this->_displayIndex_k__BackingField = _displayIndex_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData::__TrackedDeviceGraphicRaycaster__RaycastHitData() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::*)(
    ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData, ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::Compare)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2fe3434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*>::get(),
                                    "Compare", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2fe3488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>"
constexpr UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::operator ::System::Collections::Generic::IComparer_1<
    ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*
UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::
    i___System__Collections__Generic__IComparer_1___UnityEngine__XR__Interaction__Toolkit__UI____TrackedDeviceGraphicRaycaster__RaycastHitData_() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>(static_cast<void*>(this));
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::Compare(
    ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData a, ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData b) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*>::get(),
                                  "Compare", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, a, b);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*
UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer::__TrackedDeviceGraphicRaycaster__RaycastHitComparer() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3025f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "get_ignoreReversedGraphics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3025f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_ignoreReversedGraphics",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_checkFor2DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3025f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "get_checkFor2DOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_checkFor2DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3025f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_checkFor2DOcclusion",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_checkFor3DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3025f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "get_checkFor3DOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_checkFor3DOcclusion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(bool)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3025f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_checkFor3DOcclusion",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_blockingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3025f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "get_blockingMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_blockingMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3025fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_blockingMask",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_raycastTriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::QueryTriggerInteraction (
    ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3025fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "get_raycastTriggerInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.set_raycastTriggerInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(
    ::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_raycastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3025fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_raycastTriggerInteraction",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3025fb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Raycast)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x302612c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_canvas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Canvas> (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3026090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "get_canvas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.IsPokeInteractingWithUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::IsPokeInteractingWithUI)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x30268d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                    "IsPokeInteractingWithUI", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.get_pokeStateData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>* (
        ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_pokeStateData)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3026b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "get_pokeStateData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.HasPokeSelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::HasPokeSelect)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3026b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "HasPokeSelect",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.FindClosestHit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RaycastHit (*)(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>, int32_t)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::FindClosestHit)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3026c10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "FindClosestHit",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3026cec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3026f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SetupPoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SetupPoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x3026e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "SetupPoke", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.PerformRaycasts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(
    ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycasts)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x30261c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "PerformRaycasts",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.PerformSpherecast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(
    ::UnityEngine::Vector3, float_t, ::UnityEngine::LayerMask, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformSpherecast)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x3026f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "PerformSpherecast",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.PerformRaycast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::LayerMask, ::UnityEngine::Camera*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycast)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x30272b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "PerformRaycast",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.ProcessSortedHitsResults
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)(
    ::UnityEngine::Ray, float_t, bool, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*,
    ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(&::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ProcessSortedHitsResults)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x3027ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "ProcessSortedHitsResults",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SortedSpherecastGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Vector3, float_t, ::UnityEngine::LayerMask, ::UnityEngine::Camera*,
                         ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*)>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedSpherecastGraphics)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x3027614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "SortedSpherecastGraphics",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SortedRaycastGraphics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Canvas*, ::UnityEngine::Ray, float_t, ::UnityEngine::LayerMask, ::UnityEngine::Camera*,
                         ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*)>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedRaycastGraphics)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x3027fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "SortedRaycastGraphics",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.ShouldTestGraphic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UI::Graphic*, ::UnityEngine::LayerMask)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ShouldTestGraphic)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3028494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "ShouldTestGraphic", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.SphereIntersectsRectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SphereIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x302853c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "SphereIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.RayIntersectsRectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::UnityEngine::Ray, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3028680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "RayIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.RayIntersectsRectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, ::UnityEngine::Plane, ByRef<::UnityEngine::Vector3>, ByRef<float_t>)>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x3028854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "RayIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.GetRectTransformPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Plane (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformPlane)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x302875c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "GetRectTransformPlane",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.GetRectTransformWorldCorners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector4, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
        &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformWorldCorners)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3028abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "GetRectTransformWorldCorners",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster.OnDrawGizmosSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3028ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                                 "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x3028cac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider"
constexpr UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__State__IPokeStateDataProvider() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::IPokeStateDataProvider*>(static_cast<void*>(this));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_IgnoreReversedGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_IgnoreReversedGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_IgnoreReversedGraphics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreReversedGraphics = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor2DOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor2DOcclusion;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor2DOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor2DOcclusion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_CheckFor2DOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CheckFor2DOcclusion = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor3DOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor3DOcclusion;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_CheckFor3DOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor3DOcclusion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_CheckFor3DOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CheckFor3DOcclusion = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_BlockingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_BlockingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlockingMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastTriggerInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastTriggerInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_RaycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastTriggerInteraction = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Canvas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_HasWarnedEventCameraNull() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasWarnedEventCameraNull;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_HasWarnedEventCameraNull() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasWarnedEventCameraNull;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_HasWarnedEventCameraNull(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasWarnedEventCameraNull = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits3D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionHits3D;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> const&
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits3D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionHits3D;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_OcclusionHits3D(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OcclusionHits3D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*>&
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits2D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionHits2D;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> const&
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_OcclusionHits2D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OcclusionHits2D;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_OcclusionHits2D(::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OcclusionHits2D)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*&
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastResultsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResultsCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*> const&
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_RaycastResultsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResultsCache;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_RaycastResultsCache(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RaycastResultsCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_PokeLogic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PokeLogic;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic*> const&
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_PokeLogic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PokeLogic;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_PokeLogic(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRPokeLogic* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PokeLogic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalPhysicsScene = value;
}
constexpr ::UnityEngine::PhysicsScene2D& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene2D() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalPhysicsScene2D;
}
constexpr ::UnityEngine::PhysicsScene2D const& UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_get_m_LocalPhysicsScene2D() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LocalPhysicsScene2D;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::__cordl_internal_set_m_LocalPhysicsScene2D(::UnityEngine::PhysicsScene2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LocalPhysicsScene2D = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_RaycastHitComparer(
    ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*, "s_RaycastHitComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_RaycastHitComparer() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitComparer*, "s_RaycastHitComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_Corners(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_Corners",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_Corners() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_Corners",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_SortedGraphics(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*, "s_SortedGraphics",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_SortedGraphics() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*, "s_SortedGraphics",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_InteractorRaycasters(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*
        value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*,
      "s_InteractorRaycasters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*,
                                                                ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_InteractorRaycasters() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*, ::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>>*,
      "s_InteractorRaycasters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::setStaticF_s_PokeHoverRaycasters(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
                                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
                                                                                 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*,
                                    "s_PokeHoverRaycasters", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
                                                                ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
                                                    ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::getStaticF_s_PokeHoverRaycasters() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster>,
                                                                                        ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>*>*,
                                           "s_PokeHoverRaycasters",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_ignoreReversedGraphics() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "get_ignoreReversedGraphics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_ignoreReversedGraphics(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_ignoreReversedGraphics",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor2DOcclusion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "get_checkFor2DOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor2DOcclusion(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_checkFor2DOcclusion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_checkFor3DOcclusion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "get_checkFor3DOcclusion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_checkFor3DOcclusion(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_checkFor3DOcclusion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_blockingMask() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "get_blockingMask", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_blockingMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_blockingMask",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_raycastTriggerInteraction() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "get_raycastTriggerInteraction", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::set_raycastTriggerInteraction(::UnityEngine::QueryTriggerInteraction value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "set_raycastTriggerInteraction",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::QueryTriggerInteraction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_eventCamera() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                                              ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline ::UnityW<::UnityEngine::Canvas> UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_canvas() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "get_canvas",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::IsPokeInteractingWithUI(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "IsPokeInteractingWithUI",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactor);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::get_pokeStateData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "get_pokeStateData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::PokeStateData>*, false>(
      this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::HasPokeSelect(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "HasPokeSelect",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactor);
}
inline ::UnityEngine::RaycastHit UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::FindClosestHit(::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> hits,
                                                                                                                          int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "FindClosestHit",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RaycastHit, false>(nullptr, ___internal_method, hits, count);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SetupPoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "SetupPoke",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycasts(::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* eventData,
                                                                                          ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "PerformRaycasts",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData, resultAppendList);
}
inline bool
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformSpherecast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::LayerMask layerMask,
                                                                                            ::UnityEngine::Camera* currentEventCamera,
                                                                                            ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "PerformSpherecast",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, origin, radius, layerMask, currentEventCamera, resultAppendList);
}
inline bool
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::PerformRaycast(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::LayerMask layerMask,
                                                                                         ::UnityEngine::Camera* currentEventCamera,
                                                                                         ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "PerformRaycast",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, from, to, layerMask, currentEventCamera, resultAppendList);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ProcessSortedHitsResults(
    ::UnityEngine::Ray ray, float_t hitDistance, bool hitSomething,
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* raycastHitDatums,
    ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "ProcessSortedHitsResults",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ray, hitDistance, hitSomething, raycastHitDatums, resultAppendList);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedSpherecastGraphics(
    ::UnityEngine::Canvas* canvas, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Camera* eventCamera,
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "SortedSpherecastGraphics",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canvas, origin, radius, layerMask, eventCamera, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SortedRaycastGraphics(
    ::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray, float_t maxDistance, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Camera* eventCamera,
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "SortedRaycastGraphics",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Canvas*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::UI::__TrackedDeviceGraphicRaycaster__RaycastHitData>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, canvas, ray, maxDistance, layerMask, eventCamera, results);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::ShouldTestGraphic(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::LayerMask layerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "ShouldTestGraphic", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Graphic*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, graphic, layerMask);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::SphereIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 raycastPadding,
                                                                                                                    ::UnityEngine::Vector3 from, ByRef<::UnityEngine::Vector3> worldPosition,
                                                                                                                    ByRef<float_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "SphereIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, raycastPadding, from, worldPosition, distance);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 raycastPadding,
                                                                                                                 ::UnityEngine::Ray ray, ByRef<::UnityEngine::Vector3> worldPosition,
                                                                                                                 ByRef<float_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "RayIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, transform, raycastPadding, ray, worldPosition, distance);
}
inline bool UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::RayIntersectsRectTransform(::UnityEngine::Ray ray, ::UnityEngine::Plane plane,
                                                                                                                 ByRef<::UnityEngine::Vector3> worldPosition, ByRef<float_t> distance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "RayIntersectsRectTransform", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Ray>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Plane>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ray, plane, worldPosition, distance);
}
inline ::UnityEngine::Plane
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformPlane(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 raycastPadding,
                                                                                                ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "GetRectTransformPlane",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane, false>(nullptr, ___internal_method, transform, raycastPadding, fourCornersArray);
}
inline void
UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::GetRectTransformWorldCorners(::UnityEngine::RectTransform* transform, ::UnityEngine::Vector4 offset,
                                                                                                       ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> fourCornersArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), "GetRectTransformWorldCorners",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, transform, offset, fourCornersArray);
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::OnDrawGizmosSelected() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(),
                                               "OnDrawGizmosSelected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster* UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceGraphicRaycaster::TrackedDeviceGraphicRaycaster() {}
