#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TeleportationMonitor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TeleportationMonitor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionSystem_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__TeleportationProvider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3020db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c.__cctor_b__16_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>* (
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::__cctor_b__16_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3020dc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get(),
                                                 "<.cctor>b__16_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c.__cctor_b__16_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>* (
        ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::__cctor_b__16_1)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3020e30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get(),
                                                 "<.cctor>b__16_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c* UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c* UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*
UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::__cctor_b__16_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get(),
                                               "<.cctor>b__16_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                                                          ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*,
                                             false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*
UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::__cctor_b__16_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c*>::get(),
                                               "<.cctor>b__16_1", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*, false>(
      this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::__TeleportationMonitor____c::__TeleportationMonitor____c() {}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.add_teleported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(
    ::System::Action_1<::UnityEngine::Pose>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::add_teleported)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x301fc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "add_teleported",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Pose>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.remove_teleported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(
    ::System::Action_1<::UnityEngine::Pose>*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::remove_teleported)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x301fd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "remove_teleported",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Pose>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.AddInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::AddInteractor)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x301fdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "AddInteractor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.RemoveInteractor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::RemoveInteractor)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x302039c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "RemoveInteractor",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.TryGetOriginTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*, ByRef<::UnityEngine::Transform*>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x30202dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "TryGetOriginTransform",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.TryGetOriginTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*, ByRef<::UnityEngine::Transform*>)>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3020784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "TryGetOriginTransform",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.FindTeleportationProviders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::FindTeleportationProviders)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x30201e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(),
                                                 "FindTeleportationProviders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.OnBeginTeleportation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnBeginTeleportation)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x302084c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "OnBeginTeleportation",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor.OnEndTeleportation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)(
    ::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnEndTeleportation)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x3020970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "OnEndTeleportation",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3020b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityEngine::Pose>*& UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_teleported() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teleported;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::Pose>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_teleported() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___teleported;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_set_teleported(::System::Action_1<::UnityEngine::Pose>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___teleported)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                       ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*&
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_TeleportInteractors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportInteractors;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                                                           ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_TeleportInteractors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TeleportInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_set_m_TeleportInteractors(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>,
                                                 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TeleportInteractors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*&
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_OriginPosesBeforeTeleport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginPosesBeforeTeleport;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*> const&
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_get_m_OriginPosesBeforeTeleport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OriginPosesBeforeTeleport;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::__cordl_internal_set_m_OriginPosesBeforeTeleport(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OriginPosesBeforeTeleport)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::setStaticF_s_TeleportInteractorsPool(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<
        ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<
          ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>*,
      "s_TeleportInteractorsPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<
          ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<
    ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>*
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::getStaticF_s_TeleportInteractorsPool() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::Dictionary_2<
          ::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*>*>*,
      "s_TeleportInteractorsPool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::setStaticF_s_OriginPosesBeforeTeleportPool(
    ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
        ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
                                        ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>*,
                                    "s_OriginPosesBeforeTeleportPool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get>(
      std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
          ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
    ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>*
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::getStaticF_s_OriginPosesBeforeTeleportPool() {
  return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
                                               ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>, ::UnityEngine::Pose>*>*,
                                           "s_OriginPosesBeforeTeleportPool",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::setStaticF_s_TeleportationProvidersCache(
    ::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*> value) {
  ::cordl_internals::setStaticField<
      ::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*>,
      "s_TeleportationProvidersCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get>(
      std::forward<::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*>
UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::getStaticF_s_TeleportationProvidersCache() {
  return ::cordl_internals::getStaticField<
      ::ArrayW<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>, ::Array<::UnityW<::UnityEngine::XR::Interaction::Toolkit::TeleportationProvider>>*>,
      "s_TeleportationProvidersCache", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::add_teleported(::System::Action_1<::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "add_teleported",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Pose>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::remove_teleported(::System::Action_1<::UnityEngine::Pose>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "remove_teleported",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::Pose>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::AddInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "AddInteractor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::RemoveInteractor(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "RemoveInteractor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider* locomotionProvider,
                                                                                                          ByRef<::UnityEngine::Transform*> originTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "TryGetOriginTransform",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, locomotionProvider, originTransform);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TryGetOriginTransform(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* system,
                                                                                                          ByRef<::UnityEngine::Transform*> originTransform) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "TryGetOriginTransform",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Transform*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, system, originTransform);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::FindTeleportationProviders() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(),
                                               "FindTeleportationProviders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnBeginTeleportation(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* locomotionSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "OnBeginTeleportation",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, locomotionSystem);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::OnEndTeleportation(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem* locomotionSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), "OnEndTeleportation",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, locomotionSystem);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor::TeleportationMonitor() {}
