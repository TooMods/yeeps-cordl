#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AtlasAllocator_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AtlasAllocator_def.hpp"
#include "UnityEngine/Rendering/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* (
    ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode::*)(ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>, int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::__AtlasAllocator__AtlasNode::Allocate)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x1a0b7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__AtlasAllocator__AtlasNode::*)(
    ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>)>(&::UnityEngine::Rendering::__AtlasAllocator__AtlasNode::Release)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1a0b9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__AtlasAllocator__AtlasNode::*)()>(
    &::UnityEngine::Rendering::__AtlasAllocator__AtlasNode::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1a0b734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*& UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_get_m_RightChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightChild;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*> const&
UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_get_m_RightChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RightChild;
}
constexpr void UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_set_m_RightChild(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RightChild)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*& UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_get_m_BottomChild() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottomChild;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*> const&
UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_get_m_BottomChild() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BottomChild;
}
constexpr void UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_set_m_BottomChild(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BottomChild)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Vector4& UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_get_m_Rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr ::UnityEngine::Vector4 const& UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_get_m_Rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Rect;
}
constexpr void UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__cordl_internal_set_m_Rect(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Rect = value;
}
inline ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*
UnityEngine::Rendering::__AtlasAllocator__AtlasNode::Allocate(ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*> pool, int32_t width,
                                                              int32_t height, bool powerOfTwoPadding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*, false>(this, ___internal_method, pool, width, height, powerOfTwoPadding);
}
inline void UnityEngine::Rendering::__AtlasAllocator__AtlasNode::Release(ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*> pool) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get(), "Release", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pool);
}
inline ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* UnityEngine::Rendering::__AtlasAllocator__AtlasNode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>());
}
inline void UnityEngine::Rendering::__AtlasAllocator__AtlasNode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode::__AtlasAllocator__AtlasNode() {}
//  Writing Method size for method: ::UnityEngine::Rendering::__AtlasAllocator____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__AtlasAllocator____c::*)()>(
    &::UnityEngine::Rendering::__AtlasAllocator____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1a0bb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__AtlasAllocator____c.__ctor_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__AtlasAllocator____c::*)(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*)>(
    &::UnityEngine::Rendering::__AtlasAllocator____c::__ctor_b__6_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1a0bb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get(), "<.ctor>b__6_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::__AtlasAllocator____c.__ctor_b__6_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::__AtlasAllocator____c::*)(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*)>(
    &::UnityEngine::Rendering::__AtlasAllocator____c::__ctor_b__6_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1a0bb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get(), "<.ctor>b__6_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::__AtlasAllocator____c::setStaticF___9(::UnityEngine::Rendering::__AtlasAllocator____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::__AtlasAllocator____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get>(
      std::forward<::UnityEngine::Rendering::__AtlasAllocator____c*>(value));
}
inline ::UnityEngine::Rendering::__AtlasAllocator____c* UnityEngine::Rendering::__AtlasAllocator____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::__AtlasAllocator____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get>();
}
inline void UnityEngine::Rendering::__AtlasAllocator____c::setStaticF___9__6_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* UnityEngine::Rendering::__AtlasAllocator____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get>();
}
inline void UnityEngine::Rendering::__AtlasAllocator____c::setStaticF___9__6_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*, "<>9__6_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get>(
      std::forward<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*>(value));
}
inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* UnityEngine::Rendering::__AtlasAllocator____c::getStaticF___9__6_1() {
  return ::cordl_internals::getStaticField<::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*, "<>9__6_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get>();
}
inline ::UnityEngine::Rendering::__AtlasAllocator____c* UnityEngine::Rendering::__AtlasAllocator____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::__AtlasAllocator____c*>());
}
inline void UnityEngine::Rendering::__AtlasAllocator____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::__AtlasAllocator____c::__ctor_b__6_0(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get(), "<.ctor>b__6_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
inline void UnityEngine::Rendering::__AtlasAllocator____c::__ctor_b__6_1(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::__AtlasAllocator____c*>::get(), "<.ctor>b__6_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::__AtlasAllocator____c::__AtlasAllocator____c() {}
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator::*)(int32_t, int32_t, bool)>(
    &::UnityEngine::Rendering::AtlasAllocator::_ctor)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x1a0b528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AtlasAllocator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::AtlasAllocator::*)(ByRef<::UnityEngine::Vector4>, int32_t, int32_t)>(
    &::UnityEngine::Rendering::AtlasAllocator::Allocate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1a0b740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AtlasAllocator*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::AtlasAllocator.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::AtlasAllocator::*)()>(&::UnityEngine::Rendering::AtlasAllocator::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1a0b9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AtlasAllocator*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Root() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*> const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Root() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Root;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_Root(::UnityEngine::Rendering::__AtlasAllocator__AtlasNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Width() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr int32_t const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Width() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Width;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_Width(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Width = value;
}
constexpr int32_t& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Height() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr int32_t const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_Height() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Height;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_Height(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Height = value;
}
constexpr bool& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_powerOfTwoPadding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___powerOfTwoPadding;
}
constexpr bool const& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_powerOfTwoPadding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___powerOfTwoPadding;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_powerOfTwoPadding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___powerOfTwoPadding = value;
}
constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*& UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_NodePool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodePool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>*> const&
UnityEngine::Rendering::AtlasAllocator::__cordl_internal_get_m_NodePool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_NodePool;
}
constexpr void UnityEngine::Rendering::AtlasAllocator::__cordl_internal_set_m_NodePool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::__AtlasAllocator__AtlasNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_NodePool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Rendering::AtlasAllocator* UnityEngine::Rendering::AtlasAllocator::New_ctor(int32_t width, int32_t height, bool potPadding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::AtlasAllocator*>(width, height, potPadding));
}
inline void UnityEngine::Rendering::AtlasAllocator::_ctor(int32_t width, int32_t height, bool potPadding) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AtlasAllocator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, width, height, potPadding);
}
inline bool UnityEngine::Rendering::AtlasAllocator::Allocate(ByRef<::UnityEngine::Vector4> result, int32_t width, int32_t height) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AtlasAllocator*>::get(), "Allocate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result, width, height);
}
inline void UnityEngine::Rendering::AtlasAllocator::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::AtlasAllocator*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::AtlasAllocator::AtlasAllocator() {}
