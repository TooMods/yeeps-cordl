#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "GlobalNamespace/zzzz__RoomMap_def.hpp"
#include "GlobalNamespace/zzzz__RoomManager_def.hpp"
#include "GlobalNamespace/zzzz__RoomMapNodeData_def.hpp"
#include "GlobalNamespace/zzzz__RoomMap_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.get_isTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::get_isTransition)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1640c28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "get_isTransition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.get_isWilds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::get_isWilds)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x164296c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "get_isWilds",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.get_isOfficial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::get_isOfficial)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x16429c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "get_isOfficial",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__RoomMap__Node::*)(::StringW, ::StringW, ::UnityEngine::Vector2Int, ::GlobalNamespace::RoomMap*, ::StringW)>(&::GlobalNamespace::__RoomMap__Node::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1642000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.SetConnections
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomMap__Node::*)(
    ::GlobalNamespace::__RoomMap__Node*, ::GlobalNamespace::__RoomMap__Node*, ::GlobalNamespace::__RoomMap__Node*, ::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::__RoomMap__Node::SetConnections)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1642050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "SetConnections", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.CanTravelUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::CanTravelUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1632f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.CanTravelRight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::CanTravelRight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1632f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelRight",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.CanTravelDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::CanTravelDown)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1632f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelDown",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.CanTravelLeft
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::CanTravelLeft)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1632f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelLeft",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.GetNeighbor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__RoomMap__Node* (::GlobalNamespace::__RoomMap__Node::*)(::GlobalNamespace::__RoomManager__TravelDirection)>(&::GlobalNamespace::__RoomMap__Node::GetNeighbor)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x1640b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "GetNeighbor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__Node.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__RoomMap__Node::*)()>(&::GlobalNamespace::__RoomMap__Node::ToString)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x1642a2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_roomKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_roomKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKey;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_roomKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_themeKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_themeKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___themeKey;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_themeKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___themeKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector2Int& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector2Int const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_position(::UnityEngine::Vector2Int value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::GlobalNamespace::RoomMap*& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_roomMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomMap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomMap*> const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_roomMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomMap;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_roomMap(::GlobalNamespace::RoomMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_transitionKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionKey;
}
constexpr ::StringW const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_transitionKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionKey;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_transitionKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_upNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_upNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upNode;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_upNode(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_rightNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_rightNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rightNode;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_rightNode(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rightNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_downNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_downNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___downNode;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_downNode(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___downNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_leftNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::__RoomMap__Node::__cordl_internal_get_leftNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___leftNode;
}
constexpr void GlobalNamespace::__RoomMap__Node::__cordl_internal_set_leftNode(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leftNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool GlobalNamespace::__RoomMap__Node::get_isTransition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "get_isTransition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RoomMap__Node::get_isWilds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "get_isWilds",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RoomMap__Node::get_isOfficial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "get_isOfficial",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__RoomMap__Node* GlobalNamespace::__RoomMap__Node::New_ctor(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int position, ::GlobalNamespace::RoomMap* roomMap,
                                                                                      ::StringW transitionKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomMap__Node*>(roomKey, themeKey, position, roomMap, transitionKey));
}
inline void GlobalNamespace::__RoomMap__Node::_ctor(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int position, ::GlobalNamespace::RoomMap* roomMap, ::StringW transitionKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RoomMap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomKey, themeKey, position, roomMap, transitionKey);
}
inline void GlobalNamespace::__RoomMap__Node::SetConnections(::GlobalNamespace::__RoomMap__Node* upNode, ::GlobalNamespace::__RoomMap__Node* rightNode, ::GlobalNamespace::__RoomMap__Node* downNode,
                                                             ::GlobalNamespace::__RoomMap__Node* leftNode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "SetConnections", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, upNode, rightNode, downNode, leftNode);
}
inline bool GlobalNamespace::__RoomMap__Node::CanTravelUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RoomMap__Node::CanTravelRight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelRight",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RoomMap__Node::CanTravelDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelDown",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RoomMap__Node::CanTravelLeft() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "CanTravelLeft",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__RoomMap__Node* GlobalNamespace::__RoomMap__Node::GetNeighbor(::GlobalNamespace::__RoomManager__TravelDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), "GetNeighbor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomManager__TravelDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomMap__Node*, false>(this, ___internal_method, direction);
}
inline ::StringW GlobalNamespace::__RoomMap__Node::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__Node*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomMap__Node::__RoomMap__Node() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__CheckDestination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomMap__CheckDestination::*)(::System::Object*, void*)>(
    &::GlobalNamespace::__RoomMap__CheckDestination::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x16422b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__CheckDestination.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__CheckDestination::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::__RoomMap__CheckDestination::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1642bd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__CheckDestination.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::GlobalNamespace::__RoomMap__CheckDestination::*)(::GlobalNamespace::__RoomMap__Node*, ::System::AsyncCallback*, ::System::Object*)>(
        &::GlobalNamespace::__RoomMap__CheckDestination::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1642be8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap__CheckDestination.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap__CheckDestination::*)(::System::IAsyncResult*)>(
    &::GlobalNamespace::__RoomMap__CheckDestination::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1642c08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__RoomMap__CheckDestination* GlobalNamespace::__RoomMap__CheckDestination::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomMap__CheckDestination*>(object, method));
}
inline void GlobalNamespace::__RoomMap__CheckDestination::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool GlobalNamespace::__RoomMap__CheckDestination::Invoke(::GlobalNamespace::__RoomMap__Node* node) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline ::System::IAsyncResult* GlobalNamespace::__RoomMap__CheckDestination::BeginInvoke(::GlobalNamespace::__RoomMap__Node* node, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, node, callback, object);
}
inline bool GlobalNamespace::__RoomMap__CheckDestination::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap__CheckDestination*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomMap__CheckDestination::__RoomMap__CheckDestination() {}
//  Writing Method size for method: ::GlobalNamespace::__RoomMap____c__DisplayClass15_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RoomMap____c__DisplayClass15_0::*)()>(
    &::GlobalNamespace::__RoomMap____c__DisplayClass15_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16422b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap____c__DisplayClass15_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RoomMap____c__DisplayClass15_0._GetTravelDirectionToNode_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RoomMap____c__DisplayClass15_0::*)(::GlobalNamespace::__RoomMap__Node*)>(
    &::GlobalNamespace::__RoomMap____c__DisplayClass15_0::_GetTravelDirectionToNode_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1642c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap____c__DisplayClass15_0*>::get(), "<GetTravelDirectionToNode>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::__RoomMap____c__DisplayClass15_0::__cordl_internal_get_destination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::__RoomMap____c__DisplayClass15_0::__cordl_internal_get_destination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___destination;
}
constexpr void GlobalNamespace::__RoomMap____c__DisplayClass15_0::__cordl_internal_set_destination(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___destination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__RoomMap____c__DisplayClass15_0* GlobalNamespace::__RoomMap____c__DisplayClass15_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RoomMap____c__DisplayClass15_0*>());
}
inline void GlobalNamespace::__RoomMap____c__DisplayClass15_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap____c__DisplayClass15_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RoomMap____c__DisplayClass15_0::_GetTravelDirectionToNode_b__0(::GlobalNamespace::__RoomMap__Node* node) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RoomMap____c__DisplayClass15_0*>::get(), "<GetTravelDirectionToNode>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RoomMap____c__DisplayClass15_0::__RoomMap____c__DisplayClass15_0() {}
//  Writing Method size for method: ::GlobalNamespace::RoomMap.get_roomMapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomMap::*)()>(&::GlobalNamespace::RoomMap::get_roomMapKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164156c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "get_roomMapKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.set_roomMapKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RoomMap::*)(::StringW)>(&::GlobalNamespace::RoomMap::set_roomMapKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1641574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "set_roomMapKey", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::RoomMap::*)(::StringW, ::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*>)>(&::GlobalNamespace::RoomMap::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x164157c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.UpdateRoomMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::RoomMap::*)(::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*>, bool)>(&::GlobalNamespace::RoomMap::UpdateRoomMap)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x1641660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "UpdateRoomMap", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.TryGetNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMap::*)(::UnityEngine::Vector2Int, ByRef<::GlobalNamespace::__RoomMap__Node*>)>(
    &::GlobalNamespace::RoomMap::TryGetNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x164205c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.TryGetNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMap::*)(::StringW, ByRef<::GlobalNamespace::__RoomMap__Node*>)>(
    &::GlobalNamespace::RoomMap::TryGetNode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x16420c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetNode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.TryGetNodeBeforeTransitionNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMap::*)(ByRef<::GlobalNamespace::__RoomMap__Node*>)>(
    &::GlobalNamespace::RoomMap::TryGetNodeBeforeTransitionNode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x164212c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetNodeBeforeTransitionNode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.TryGetTransitionNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::RoomMap::*)(ByRef<::GlobalNamespace::__RoomMap__Node*>)>(
    &::GlobalNamespace::RoomMap::TryGetTransitionNode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1642178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetTransitionNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.GetNumNonTransitionNodes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::RoomMap::*)()>(&::GlobalNamespace::RoomMap::GetNumNonTransitionNodes)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x164218c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "GetNumNonTransitionNodes",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.GetTravelDirectionToNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomManager__TravelDirection (::GlobalNamespace::RoomMap::*)(
    ::GlobalNamespace::__RoomMap__Node*, ::GlobalNamespace::__RoomMap__Node*, ByRef<int32_t>)>(&::GlobalNamespace::RoomMap::GetTravelDirectionToNode)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x16421f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "GetTravelDirectionToNode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.GetTravelDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__RoomManager__TravelDirection (::GlobalNamespace::RoomMap::*)(
    ::GlobalNamespace::__RoomMap__Node*, ::GlobalNamespace::__RoomMap__CheckDestination*, ByRef<int32_t>)>(&::GlobalNamespace::RoomMap::GetTravelDirection)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x16423e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "GetTravelDirection", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__CheckDestination*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RoomMap.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::RoomMap::*)()>(&::GlobalNamespace::RoomMap::ToString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16428c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RoomMap::__cordl_internal_get__roomMapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomMapKey_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::RoomMap::__cordl_internal_get__roomMapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roomMapKey_k__BackingField;
}
constexpr void GlobalNamespace::RoomMap::__cordl_internal_set__roomMapKey_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____roomMapKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>*& GlobalNamespace::RoomMap::__cordl_internal_get_nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>*> const&
GlobalNamespace::RoomMap::__cordl_internal_get_nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodes;
}
constexpr void GlobalNamespace::RoomMap::__cordl_internal_set_nodes(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>*& GlobalNamespace::RoomMap::__cordl_internal_get_roomKeyToNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKeyToNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>*> const&
GlobalNamespace::RoomMap::__cordl_internal_get_roomKeyToNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___roomKeyToNode;
}
constexpr void GlobalNamespace::RoomMap::__cordl_internal_set_roomKeyToNode(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___roomKeyToNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__RoomMap__Node*& GlobalNamespace::RoomMap::__cordl_internal_get_transitionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionNode;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& GlobalNamespace::RoomMap::__cordl_internal_get_transitionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transitionNode;
}
constexpr void GlobalNamespace::RoomMap::__cordl_internal_set_transitionNode(::GlobalNamespace::__RoomMap__Node* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transitionNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::RoomMap::get_roomMapKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "get_roomMapKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::RoomMap::set_roomMapKey(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "set_roomMapKey", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::RoomMap* GlobalNamespace::RoomMap::New_ctor(::StringW roomMapKey, ::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*> nodeDatas) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RoomMap*>(roomMapKey, nodeDatas));
}
inline void GlobalNamespace::RoomMap::_ctor(::StringW roomMapKey, ::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*> nodeDatas) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, roomMapKey, nodeDatas);
}
inline void GlobalNamespace::RoomMap::UpdateRoomMap(::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*> nodeDatas, bool isInitial) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "UpdateRoomMap", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeDatas, isInitial);
}
inline bool GlobalNamespace::RoomMap::TryGetNode(::UnityEngine::Vector2Int gridPosition, ByRef<::GlobalNamespace::__RoomMap__Node*> node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2Int>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, gridPosition, node);
}
inline bool GlobalNamespace::RoomMap::TryGetNode(::StringW roomKey, ByRef<::GlobalNamespace::__RoomMap__Node*> node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetNode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, roomKey, node);
}
inline bool GlobalNamespace::RoomMap::TryGetNodeBeforeTransitionNode(ByRef<::GlobalNamespace::__RoomMap__Node*> node) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetNodeBeforeTransitionNode", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool GlobalNamespace::RoomMap::TryGetTransitionNode(ByRef<::GlobalNamespace::__RoomMap__Node*> node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "TryGetTransitionNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::__RoomMap__Node*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline int32_t GlobalNamespace::RoomMap::GetNumNonTransitionNodes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "GetNumNonTransitionNodes",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::RoomMap::GetTravelDirectionToNode(::GlobalNamespace::__RoomMap__Node* origin, ::GlobalNamespace::__RoomMap__Node* destination,
                                                                                                            ByRef<int32_t> distance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "GetTravelDirectionToNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomManager__TravelDirection, false>(this, ___internal_method, origin, destination, distance);
}
inline ::GlobalNamespace::__RoomManager__TravelDirection GlobalNamespace::RoomMap::GetTravelDirection(::GlobalNamespace::__RoomMap__Node* origin,
                                                                                                      ::GlobalNamespace::__RoomMap__CheckDestination* checkDestination, ByRef<int32_t> distance) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), "GetTravelDirection", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__Node*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__RoomMap__CheckDestination*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__RoomManager__TravelDirection, false>(this, ___internal_method, origin, checkDestination, distance);
}
inline ::StringW GlobalNamespace::RoomMap::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RoomMap*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RoomMap::RoomMap() {}
