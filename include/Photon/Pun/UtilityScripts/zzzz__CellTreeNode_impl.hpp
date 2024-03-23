#pragma once
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType::__CellTreeNode__ENodeType(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType::__CellTreeNode__ENodeType() {}
constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType::Root{ static_cast<uint8_t>(0x0u) };
constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType::Node{ static_cast<uint8_t>(0x1u) };
constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType::Leaf{ static_cast<uint8_t>(0x2u) };
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)()>(&::Photon::Pun::UtilityScripts::CellTreeNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ebe728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)(
    uint8_t, ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType, ::Photon::Pun::UtilityScripts::CellTreeNode*)>(&::Photon::Pun::UtilityScripts::CellTreeNode::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1ebde30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::CellTreeNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.AddChild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)(::Photon::Pun::UtilityScripts::CellTreeNode*)>(
    &::Photon::Pun::UtilityScripts::CellTreeNode::AddChild)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1ebe110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "AddChild", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::CellTreeNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.Draw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)()>(&::Photon::Pun::UtilityScripts::CellTreeNode::Draw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1ebe204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "Draw",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.GetActiveCells
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Photon::Pun::UtilityScripts::CellTreeNode::*)(
    ::System::Collections::Generic::List_1<uint8_t>*, bool, ::UnityEngine::Vector3)>(&::Photon::Pun::UtilityScripts::CellTreeNode::GetActiveCells)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x1ebe348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "GetActiveCells", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint8_t>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.IsPointInsideCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::CellTreeNode::*)(bool, ::UnityEngine::Vector3)>(
    &::Photon::Pun::UtilityScripts::CellTreeNode::IsPointInsideCell)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1ebe790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "IsPointInsideCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::CellTreeNode.IsPointNearCell
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Photon::Pun::UtilityScripts::CellTreeNode::*)(bool, ::UnityEngine::Vector3)>(
    &::Photon::Pun::UtilityScripts::CellTreeNode::IsPointNearCell)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1ebe730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "IsPointNearCell", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
constexpr uint8_t& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr uint8_t const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Id(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Center() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Center() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Center;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Center(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Center = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Size(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_TopLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TopLeft;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_TopLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TopLeft;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_TopLeft(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TopLeft = value;
}
constexpr ::UnityEngine::Vector3& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_BottomRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BottomRight;
}
constexpr ::UnityEngine::Vector3 const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_BottomRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___BottomRight;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_BottomRight(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___BottomRight = value;
}
constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_NodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NodeType;
}
constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_NodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NodeType;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_NodeType(::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NodeType = value;
}
constexpr ::Photon::Pun::UtilityScripts::CellTreeNode*& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parent;
}
constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::CellTreeNode*> const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Parent;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Parent(::Photon::Pun::UtilityScripts::CellTreeNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Childs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Childs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*> const&
Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_Childs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Childs;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_Childs(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Childs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_maxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDistance;
}
constexpr float_t const& Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_get_maxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxDistance;
}
constexpr void Photon::Pun::UtilityScripts::CellTreeNode::__cordl_internal_set_maxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxDistance = value;
}
inline ::Photon::Pun::UtilityScripts::CellTreeNode* Photon::Pun::UtilityScripts::CellTreeNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::CellTreeNode*>());
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::CellTreeNode* Photon::Pun::UtilityScripts::CellTreeNode::New_ctor(uint8_t id, ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType nodeType,
                                                                                                        ::Photon::Pun::UtilityScripts::CellTreeNode* parent) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Photon::Pun::UtilityScripts::CellTreeNode*>(id, nodeType, parent));
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::_ctor(uint8_t id, ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType nodeType, ::Photon::Pun::UtilityScripts::CellTreeNode* parent) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::CellTreeNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, nodeType, parent);
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::AddChild(::Photon::Pun::UtilityScripts::CellTreeNode* child) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "AddChild", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Photon::Pun::UtilityScripts::CellTreeNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, child);
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::Draw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "Draw",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::CellTreeNode::GetActiveCells(::System::Collections::Generic::List_1<uint8_t>* activeCells, bool yIsUpAxis, ::UnityEngine::Vector3 position) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "GetActiveCells", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint8_t>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, activeCells, yIsUpAxis, position);
}
inline bool Photon::Pun::UtilityScripts::CellTreeNode::IsPointInsideCell(bool yIsUpAxis, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "IsPointInsideCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, yIsUpAxis, point);
}
inline bool Photon::Pun::UtilityScripts::CellTreeNode::IsPointNearCell(bool yIsUpAxis, ::UnityEngine::Vector3 point) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Photon::Pun::UtilityScripts::CellTreeNode*>::get(), "IsPointNearCell", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, yIsUpAxis, point);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::CellTreeNode::CellTreeNode() {}
