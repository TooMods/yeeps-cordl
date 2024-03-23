#pragma once
#include "GlobalNamespace/zzzz__RoomNavigation_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RoomNavigation_def.hpp"
#include "GlobalNamespace/zzzz__NavigationSignPost_def.hpp"
#include "GlobalNamespace/zzzz__RoomData_def.hpp"
#include "GlobalNamespace/zzzz__RoomMap_def.hpp"
#include "GlobalNamespace/zzzz__RoomNavigationDisplay_def.hpp"
#include "GlobalNamespace/zzzz__RoomNavigation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType::__RoomNavigation__DestinationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType::__RoomNavigation__DestinationType() {}
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType GlobalNamespace::__RoomNavigation__DestinationType::none{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType GlobalNamespace::__RoomNavigation__DestinationType::room{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType GlobalNamespace::__RoomNavigation__DestinationType::player{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType GlobalNamespace::__RoomNavigation__DestinationType::anyOfficialRoom{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType GlobalNamespace::__RoomNavigation__DestinationType::anyWildsRoom{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::GlobalNamespace::__RoomNavigation____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomNavigation____c::*)()>(&::GlobalNamespace::__RoomNavigation____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175e1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomNavigation____c._Refresh_b__36_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomNavigation____c::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::__RoomNavigation____c::_Refresh_b__36_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x175e1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get(), "<Refresh>b__36_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomNavigation____c._Refresh_b__36_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomNavigation____c::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::__RoomNavigation____c::_Refresh_b__36_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x175e1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get(), "<Refresh>b__36_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RoomNavigation____c::setStaticF___9(::GlobalNamespace::__RoomNavigation____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomNavigation____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get>(
      std::forward<::GlobalNamespace::__RoomNavigation____c*>(value));
}
inline ::GlobalNamespace::__RoomNavigation____c* GlobalNamespace::__RoomNavigation____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomNavigation____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get>();
}
inline void GlobalNamespace::__RoomNavigation____c::setStaticF___9__36_0(::GlobalNamespace::__RoomMap__CheckDestination* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomMap__CheckDestination*, "<>9__36_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get>(
      std::forward<::GlobalNamespace::__RoomMap__CheckDestination*>(value));
}
inline ::GlobalNamespace::__RoomMap__CheckDestination* GlobalNamespace::__RoomNavigation____c::getStaticF___9__36_0() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomMap__CheckDestination*, "<>9__36_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get>();
}
inline void GlobalNamespace::__RoomNavigation____c::setStaticF___9__36_1(::GlobalNamespace::__RoomMap__CheckDestination* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RoomMap__CheckDestination*, "<>9__36_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get>(
      std::forward<::GlobalNamespace::__RoomMap__CheckDestination*>(value));
}
inline ::GlobalNamespace::__RoomMap__CheckDestination* GlobalNamespace::__RoomNavigation____c::getStaticF___9__36_1() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RoomMap__CheckDestination*, "<>9__36_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get>();
}
inline ::GlobalNamespace::__RoomNavigation____c* GlobalNamespace::__RoomNavigation____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomNavigation____c*>());
}
inline void GlobalNamespace::__RoomNavigation____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RoomNavigation____c::_Refresh_b__36_0(::GlobalNamespace::__RoomMap__Node* node) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get(), "<Refresh>b__36_0", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool GlobalNamespace::__RoomNavigation____c::_Refresh_b__36_1(::GlobalNamespace::__RoomMap__Node* node) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomNavigation____c*>::get(), "<Refresh>b__36_1", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomNavigation____c::__RoomNavigation____c() {}
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.get_roomMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::RoomMap* (::GlobalNamespace::RoomNavigation::*)()>(
    &::GlobalNamespace::RoomNavigation::get_roomMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_roomMap",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.set_roomMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(::GlobalNamespace::RoomMap*)>(
    &::GlobalNamespace::RoomNavigation::set_roomMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_roomMap", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.get_destinationNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomMap__Node* (::GlobalNamespace::RoomNavigation::*)()>(
    &::GlobalNamespace::RoomNavigation::get_destinationNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationNode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.set_destinationNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::RoomNavigation::set_destinationNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.get_destinationName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::get_destinationName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.set_destinationName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(::StringW)>(&::GlobalNamespace::RoomNavigation::set_destinationName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.get_destinationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomNavigation__DestinationType (::GlobalNamespace::RoomNavigation::*)()>(
    &::GlobalNamespace::RoomNavigation::get_destinationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.set_destinationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(::GlobalNamespace::__RoomNavigation__DestinationType)>(
    &::GlobalNamespace::RoomNavigation::set_destinationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.get_destinationID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::get_destinationID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.set_destinationID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(::StringW)>(&::GlobalNamespace::RoomNavigation::set_destinationID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.get_isDestinationInDifferentRoomMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomNavigation::*)()>(
    &::GlobalNamespace::RoomNavigation::get_isDestinationInDifferentRoomMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_isDestinationInDifferentRoomMap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.set_isDestinationInDifferentRoomMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(bool)>(
    &::GlobalNamespace::RoomNavigation::set_isDestinationInDifferentRoomMap)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x175db74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_isDestinationInDifferentRoomMap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.get_persistant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::get_persistant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x175db80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_persistant",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.set_persistant
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(bool)>(&::GlobalNamespace::RoomNavigation::set_persistant)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x175db88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_persistant",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(
    ::GlobalNamespace::RoomMap*, ::GlobalNamespace::__RoomMap__Node*, ::StringW, ::GlobalNamespace::__RoomNavigation__DestinationType, ::StringW, bool, bool)>(
    &::GlobalNamespace::RoomNavigation::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x175db94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.ChangeDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)(::GlobalNamespace::__RoomMap__Node*, bool)>(
    &::GlobalNamespace::RoomNavigation::ChangeDestination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x175dc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "ChangeDestination", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::Cancel)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x175df1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "Cancel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.OnComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::OnComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x175e100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "OnComplete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.OnInvalidated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::OnInvalidated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x175e104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "OnInvalidated",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::Refresh)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x175dc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "Refresh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.IsAtDestination
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomNavigation::*)(::GlobalNamespace::RoomData*)>(
    &::GlobalNamespace::RoomNavigation::IsAtDestination)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x175e108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "IsAtDestination", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomNavigation.DeleteDisplay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomNavigation::*)()>(&::GlobalNamespace::RoomNavigation::DeleteDisplay)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x175df78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "DeleteDisplay",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RoomMap*& GlobalNamespace::RoomNavigation::__cordl_internal_get__roomMap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomMap_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomMap*> const& GlobalNamespace::RoomNavigation::__cordl_internal_get__roomMap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomMap_k__BackingField;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set__roomMap_k__BackingField(::GlobalNamespace::RoomMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomMap_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationNode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationNode_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationNode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationNode_k__BackingField;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set__destinationNode_k__BackingField(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destinationNode_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationName_k__BackingField;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set__destinationName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destinationName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationType_k__BackingField;
}
constexpr ::GlobalNamespace::__RoomNavigation__DestinationType const& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationType_k__BackingField;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set__destinationType_k__BackingField(::GlobalNamespace::__RoomNavigation__DestinationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destinationType_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationID_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::RoomNavigation::__cordl_internal_get__destinationID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationID_k__BackingField;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set__destinationID_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destinationID_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::RoomNavigation::__cordl_internal_get__isDestinationInDifferentRoomMap_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDestinationInDifferentRoomMap_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomNavigation::__cordl_internal_get__isDestinationInDifferentRoomMap_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDestinationInDifferentRoomMap_k__BackingField;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set__isDestinationInDifferentRoomMap_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDestinationInDifferentRoomMap_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RoomNavigation::__cordl_internal_get__persistant_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____persistant_k__BackingField;
}
constexpr bool const& GlobalNamespace::RoomNavigation::__cordl_internal_get__persistant_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____persistant_k__BackingField;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set__persistant_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____persistant_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::RoomNavigationDisplay>& GlobalNamespace::RoomNavigation::__cordl_internal_get_display() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___display;
}
constexpr ::UnityW<::GlobalNamespace::RoomNavigationDisplay> const& GlobalNamespace::RoomNavigation::__cordl_internal_get_display() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___display;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set_display(::UnityW<::GlobalNamespace::RoomNavigationDisplay> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___display)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NavigationSignPost>& GlobalNamespace::RoomNavigation::__cordl_internal_get_registeredSignPost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredSignPost;
}
constexpr ::UnityW<::GlobalNamespace::NavigationSignPost> const& GlobalNamespace::RoomNavigation::__cordl_internal_get_registeredSignPost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___registeredSignPost;
}
constexpr void GlobalNamespace::RoomNavigation::__cordl_internal_set_registeredSignPost(::UnityW<::GlobalNamespace::NavigationSignPost> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___registeredSignPost)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::RoomMap* GlobalNamespace::RoomNavigation::get_roomMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_roomMap",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RoomMap*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::set_roomMap(::GlobalNamespace::RoomMap* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_roomMap", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__RoomMap__Node* GlobalNamespace::RoomNavigation::get_destinationNode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationNode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomMap__Node*, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::set_destinationNode(::GlobalNamespace::__RoomMap__Node* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RoomNavigation::get_destinationName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::set_destinationName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__RoomNavigation__DestinationType GlobalNamespace::RoomNavigation::get_destinationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomNavigation__DestinationType, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::set_destinationType(::GlobalNamespace::__RoomNavigation__DestinationType value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::RoomNavigation::get_destinationID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_destinationID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::set_destinationID(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_destinationID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomNavigation::get_isDestinationInDifferentRoomMap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_isDestinationInDifferentRoomMap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::set_isDestinationInDifferentRoomMap(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_isDestinationInDifferentRoomMap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RoomNavigation::get_persistant() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "get_persistant",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::set_persistant(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "set_persistant",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::RoomNavigation* GlobalNamespace::RoomNavigation::New_ctor(::GlobalNamespace::RoomMap* roomMap, ::GlobalNamespace::__RoomMap__Node* destinationNode, ::StringW destinationName,
                                                                                    ::GlobalNamespace::__RoomNavigation__DestinationType destinationType, ::StringW destinationID,
                                                                                    bool isDestinationInDifferentRoomMap, bool persistant) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomNavigation*>(roomMap, destinationNode, destinationName, destinationType, destinationID, isDestinationInDifferentRoomMap, persistant));
}
inline void GlobalNamespace::RoomNavigation::_ctor(::GlobalNamespace::RoomMap* roomMap, ::GlobalNamespace::__RoomMap__Node* destinationNode, ::StringW destinationName,
                                                   ::GlobalNamespace::__RoomNavigation__DestinationType destinationType, ::StringW destinationID, bool isDestinationInDifferentRoomMap,
                                                   bool persistant) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomNavigation__DestinationType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomMap, destinationNode, destinationName, destinationType, destinationID, isDestinationInDifferentRoomMap,
                                                          persistant);
}
inline void GlobalNamespace::RoomNavigation::ChangeDestination(::GlobalNamespace::__RoomMap__Node* destinationNode, bool isDestinationInDifferentRoomMap) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "ChangeDestination", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destinationNode, isDestinationInDifferentRoomMap);
}
inline void GlobalNamespace::RoomNavigation::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "Cancel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::OnComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "OnComplete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::OnInvalidated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "OnInvalidated",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomNavigation::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "Refresh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::RoomNavigation::IsAtDestination(::GlobalNamespace::RoomData* curRoomData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "IsAtDestination", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, curRoomData);
}
inline void GlobalNamespace::RoomNavigation::DeleteDisplay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomNavigation*>::get(), "DeleteDisplay",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomNavigation::RoomNavigation() {}
