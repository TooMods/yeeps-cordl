#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__NetworkSimulationSet_def.hpp"
#include "ExitGames/Client/Photon/zzzz__PeerBase_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IsSimulationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2776050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_IsSimulationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IsSimulationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(bool)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_IsSimulationEnabled)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x2776058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IsSimulationEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_OutgoingLag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_OutgoingLag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_OutgoingLag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_OutgoingLag",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_OutgoingJitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_OutgoingJitter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_OutgoingJitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_OutgoingJitter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_OutgoingLossPercentage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_OutgoingLossPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_OutgoingLossPercentage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_OutgoingLossPercentage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IncomingLag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_IncomingLag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IncomingLag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IncomingLag",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IncomingJitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_IncomingJitter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IncomingJitter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingJitter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IncomingJitter",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_IncomingLossPercentage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_IncomingLossPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_IncomingLossPercentage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLossPercentage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IncomingLossPercentage",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_LostPackagesOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_LostPackagesOut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_LostPackagesOut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_LostPackagesOut",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.get_LostPackagesIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               "get_LostPackagesIn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.set_LostPackagesIn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)(int32_t)>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesIn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2780d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_LostPackagesIn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::ToString)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2780d98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::NetworkSimulationSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::NetworkSimulationSet::*)()>(
    &::ExitGames::Client::Photon::NetworkSimulationSet::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2781018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_isSimulationEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSimulationEnabled;
}
constexpr bool const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_isSimulationEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isSimulationEnabled;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_isSimulationEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isSimulationEnabled = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingLag;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingLag;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_outgoingLag(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outgoingLag = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingJitter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingJitter;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingJitter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingJitter;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_outgoingJitter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outgoingJitter = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLossPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingLossPercentage;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_outgoingLossPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___outgoingLossPercentage;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_outgoingLossPercentage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___outgoingLossPercentage = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingLag;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingLag;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_incomingLag(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incomingLag = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingJitter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingJitter;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingJitter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingJitter;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_incomingJitter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incomingJitter = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLossPercentage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingLossPercentage;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_incomingLossPercentage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___incomingLossPercentage;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_incomingLossPercentage(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___incomingLossPercentage = value;
}
constexpr ::ExitGames::Client::Photon::PeerBase*& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_peerBase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerBase;
}
constexpr ::cordl_internals::to_const_pointer<::ExitGames::Client::Photon::PeerBase*> const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_peerBase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___peerBase;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_peerBase(::ExitGames::Client::Photon::PeerBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___peerBase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Thread*& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_netSimThread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___netSimThread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Thread*> const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_netSimThread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___netSimThread;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_netSimThread(::System::Threading::Thread* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___netSimThread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ManualResetEvent*& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_NetSimManualResetEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetSimManualResetEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get_NetSimManualResetEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetSimManualResetEvent;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set_NetSimManualResetEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___NetSimManualResetEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesOut_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LostPackagesOut_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesOut_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LostPackagesOut_k__BackingField;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set__LostPackagesOut_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LostPackagesOut_k__BackingField = value;
}
constexpr int32_t& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesIn_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LostPackagesIn_k__BackingField;
}
constexpr int32_t const& ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_get__LostPackagesIn_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LostPackagesIn_k__BackingField;
}
constexpr void ExitGames::Client::Photon::NetworkSimulationSet::__cordl_internal_set__LostPackagesIn_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LostPackagesIn_k__BackingField = value;
}
inline bool ExitGames::Client::Photon::NetworkSimulationSet::get_IsSimulationEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_IsSimulationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IsSimulationEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IsSimulationEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_OutgoingLag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLag(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_OutgoingLag",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingJitter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_OutgoingJitter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingJitter(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_OutgoingJitter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_OutgoingLossPercentage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_OutgoingLossPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_OutgoingLossPercentage(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_OutgoingLossPercentage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_IncomingLag", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLag(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IncomingLag",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingJitter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_IncomingJitter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingJitter(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IncomingJitter",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_IncomingLossPercentage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_IncomingLossPercentage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_IncomingLossPercentage(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_IncomingLossPercentage",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesOut() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_LostPackagesOut", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesOut(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_LostPackagesOut",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t ExitGames::Client::Photon::NetworkSimulationSet::get_LostPackagesIn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(),
                                                                             "get_LostPackagesIn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::set_LostPackagesIn(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), "set_LostPackagesIn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW ExitGames::Client::Photon::NetworkSimulationSet::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::NetworkSimulationSet* ExitGames::Client::Photon::NetworkSimulationSet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::NetworkSimulationSet*>());
}
inline void ExitGames::Client::Photon::NetworkSimulationSet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::NetworkSimulationSet*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::NetworkSimulationSet::NetworkSimulationSet() {}
