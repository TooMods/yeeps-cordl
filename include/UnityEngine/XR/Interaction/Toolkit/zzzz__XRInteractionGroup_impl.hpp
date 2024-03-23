#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionGroup_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__RegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRGroupMember_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractionGroup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionGroupUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.add_registered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::add_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cf07f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "add_registered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.remove_registered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::remove_registered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cf08a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "remove_registered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.add_unregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::add_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cf0954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "add_unregistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.remove_unregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::remove_unregistered)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2cf0a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "remove_unregistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.get_interactionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf0ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "get_interactionManager",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.set_interactionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_interactionManager)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2cf0abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_interactionManager", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.get_containingGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* (
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_containingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf0bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "get_containingGroup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.set_containingGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_containingGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf0bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_containingGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.get_startingGroupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* (
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_startingGroupMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf0bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                 "get_startingGroupMembers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.set_startingGroupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_startingGroupMembers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf0bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_startingGroupMembers",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.get_activeInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* (
    ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_activeInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf0be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "get_activeInteractor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.set_activeInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_activeInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf0bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_activeInteractor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cf0bf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::Awake)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x2cf0bf8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2cf14e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cf14fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2cf1590;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnRegistered)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x2cf1630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnRegistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnBeforeUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnBeforeUnregistered)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x2cf1a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnBeforeUnregistered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnUnregistered)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2cf1d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnUnregistered", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.AddGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::AddGroupMember)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2cf1398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "AddGroupMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.MoveGroupMemberTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::MoveGroupMemberTo)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2cf11a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "MoveGroupMemberTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.ValidateAddGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ValidateAddGroupMember)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2cf1e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ValidateAddGroupMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.RemoveGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RemoveGroupMember)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2cf20c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "RemoveGroupMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.ClearGroupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ClearGroupMembers)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2cf1594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ClearGroupMembers",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.ContainsGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ContainsGroupMember)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2cf2114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ContainsGroupMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.GetGroupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::GetGroupMembers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2cf2134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "GetGroupMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.HasDependencyOnGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::HasDependencyOnGroup)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x2cf21a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "HasDependencyOnGroup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.FindCreateInteractionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::FindCreateInteractionManager)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x2cf0eec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                 "FindCreateInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.RegisterWithInteractionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RegisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2cf0af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                 "RegisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnregisterWithInteractionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnregisterWithInteractionManager)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2cf1500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                                 "UnregisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.RegisterAsGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RegisterAsGroupMember)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2cf1968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "RegisterAsGroupMember", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.RegisterAsNonGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RegisterAsNonGroupMember)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2cf1c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "RegisterAsNonGroupMember",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.ReRegisterGroupMemberWithInteractionManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ReRegisterGroupMemberWithInteractionManager)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2cf23a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                    "ReRegisterGroupMemberWithInteractionManager", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_PreprocessGroupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_PreprocessGroupMembers)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x2cf25d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.PreprocessGroupMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_ProcessGroupMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_ProcessGroupMembers)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2cf2918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.ProcessGroupMembers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2cf2c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.UpdateGroupMemberInteractions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.CanStartOrContinueAnySelect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::CanStartOrContinueAnySelect)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x2cf2d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "CanStartOrContinueAnySelect",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>)>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x2cf34ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.UpdateGroupMemberInteractions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UpdateInteractorInteractions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, bool, ByRef<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UpdateInteractorInteractions)> {
  constexpr static std::size_t size = 0x9d8;
  constexpr static std::size_t addrs = 0x2cf37d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "UpdateInteractorInteractions",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.ClearAllInteractorSelections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ClearAllInteractorSelections)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2cf41b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ClearAllInteractorSelections",
                                   std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.ClearAllInteractorHovers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ClearAllInteractorHovers)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x2cf44b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ClearAllInteractorHovers",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*)>(
        &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsGroupMember)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2cf4b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                   "UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsGroupMember", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup.UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsNonGroupMember
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsNonGroupMember)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cf4ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
        "UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsNonGroupMember", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2cf4cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup"
constexpr UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::operator ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::i___UnityEngine__XR__Interaction__Toolkit__IXRInteractionGroup() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember"
constexpr UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::operator ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember"
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::i___UnityEngine__XR__Interaction__Toolkit__IXRGroupMember() noexcept {
  return static_cast<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_registered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registered;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_registered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registered;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_unregistered() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_unregistered() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unregistered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_unregistered(
    ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unregistered)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_InteractionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_InteractionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InteractionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_RegisteredInteractionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredInteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_RegisteredInteractionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RegisteredInteractionManager;
}
constexpr void
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RegisteredInteractionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get__containingGroup_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containingGroup_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get__containingGroup_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____containingGroup_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set__containingGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____containingGroup_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_StartingGroupMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingGroupMembers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_StartingGroupMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_StartingGroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_StartingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_StartingGroupMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get__activeInteractor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeInteractor_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get__activeInteractor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeInteractor_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set__activeInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeInteractor_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_GroupMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupMembers;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_GroupMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_GroupMembers(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_GroupMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_TempGroupMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempGroupMembers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_TempGroupMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempGroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_TempGroupMembers(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TempGroupMembers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_IsProcessingGroupMembers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsProcessingGroupMembers;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_IsProcessingGroupMembers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsProcessingGroupMembers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_IsProcessingGroupMembers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsProcessingGroupMembers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_ValidTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidTargets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_ValidTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_ValidTargets(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ValidTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_DeprecatedValidTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeprecatedValidTargets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>*> const&
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_get_m_DeprecatedValidTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeprecatedValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::__cordl_internal_set_m_DeprecatedValidTargets(
    ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeprecatedValidTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::setStaticF_s_InteractionManagerCache(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>, "s_InteractionManagerCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get>(
      std::forward<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(value));
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::getStaticF_s_InteractionManagerCache() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>, "s_InteractionManagerCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::setStaticF_s_InteractablesSelected(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*, "s_InteractablesSelected",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::getStaticF_s_InteractablesSelected() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractable*>*, "s_InteractablesSelected",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::setStaticF_s_InteractablesHovered(
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*, "s_InteractablesHovered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*
UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::getStaticF_s_InteractablesHovered() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*>*, "s_InteractablesHovered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "add_registered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "remove_registered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "add_unregistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "remove_unregistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_interactionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "get_interactionManager",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_interactionManager", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_containingGroup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "get_containingGroup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_containingGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_containingGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_startingGroupMembers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "get_startingGroupMembers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_startingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_startingGroupMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::get_activeInteractor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "get_activeInteractor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::set_activeInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "set_activeInteractor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::Awake() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::OnDestroy() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnRegistered(
    ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
      "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnRegistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnBeforeUnregistered() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnBeforeUnregistered", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_OnUnregistered(
    ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
      "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.OnUnregistered", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::AddGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "AddGroupMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::MoveGroupMemberTo(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember, int32_t newIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "MoveGroupMemberTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupMember, newIndex);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ValidateAddGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ValidateAddGroupMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, groupMember);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RemoveGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "RemoveGroupMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ClearGroupMembers() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ClearGroupMembers",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ContainsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ContainsGroupMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::GetGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>* results) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "GetGroupMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, results);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::HasDependencyOnGroup(::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* group) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "HasDependencyOnGroup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, group);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::FindCreateInteractionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                               "FindCreateInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RegisterWithInteractionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                               "RegisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnregisterWithInteractionManager() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                               "UnregisterWithInteractionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RegisterAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "RegisterAsGroupMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::RegisterAsNonGroupMember(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "RegisterAsNonGroupMember", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ReRegisterGroupMemberWithInteractionManager(::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember* groupMember) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                  "ReRegisterGroupMemberWithInteractionManager", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRGroupMember*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupMember);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_PreprocessGroupMembers(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
      "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.PreprocessGroupMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_ProcessGroupMembers(
    ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
      "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.ProcessGroupMembers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
      "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.UpdateGroupMemberInteractions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::CanStartOrContinueAnySelect(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* selectInteractor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "CanStartOrContinueAnySelect",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, selectInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRInteractionGroup_UpdateGroupMemberInteractions(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* prePrioritizedInteractor, ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*> interactorThatPerformedInteraction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRInteractionGroup.UpdateGroupMemberInteractions", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prePrioritizedInteractor, interactorThatPerformedInteraction);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UpdateInteractorInteractions(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, bool preventInteraction,
                                                                                                    ByRef<bool> performedInteraction) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "UpdateInteractorInteractions",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor, preventInteraction, performedInteraction);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ClearAllInteractorSelections(::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor* selectInteractor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ClearAllInteractorSelections",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRSelectInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::ClearAllInteractorHovers(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* hoverInteractor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), "ClearAllInteractorHovers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hoverInteractor);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsGroupMember(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup* group) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
                                  "UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsGroupMember", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractionGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, group);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::UnityEngine_XR_Interaction_Toolkit_IXRGroupMember_OnRegisteringAsNonGroupMember() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(),
      "UnityEngine.XR.Interaction.Toolkit.IXRGroupMember.OnRegisteringAsNonGroupMember", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup* UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRInteractionGroup::XRInteractionGroup() {}
