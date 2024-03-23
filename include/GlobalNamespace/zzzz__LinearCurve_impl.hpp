#pragma once
#include "GlobalNamespace/zzzz__Curve_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LinearCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LinearCurve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LinearCurve::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::LinearCurve::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xf29c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearCurve.GetExactPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LinearCurve::*)(float_t)>(
    &::GlobalNamespace::LinearCurve::GetExactPoint)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xf29da0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearCurve.GetExactHeading
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LinearCurve::*)(float_t)>(
    &::GlobalNamespace::LinearCurve::GetExactHeading)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf29de4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearCurve.GetStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LinearCurve::*)()>(&::GlobalNamespace::LinearCurve::GetStart)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xf29df0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LinearCurve.GetEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::LinearCurve::*)(ByRef<::UnityEngine::Vector3>)>(
    &::GlobalNamespace::LinearCurve::GetEnd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xf29dfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::LinearCurve::__cordl_internal_get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LinearCurve::__cordl_internal_get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___start;
}
constexpr void GlobalNamespace::LinearCurve::__cordl_internal_set_start(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___start = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LinearCurve::__cordl_internal_get_end() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LinearCurve::__cordl_internal_get_end() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___end;
}
constexpr void GlobalNamespace::LinearCurve::__cordl_internal_set_end(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___end = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LinearCurve::__cordl_internal_get_endingDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endingDirection;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LinearCurve::__cordl_internal_get_endingDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endingDirection;
}
constexpr void GlobalNamespace::LinearCurve::__cordl_internal_set_endingDirection(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endingDirection = value;
}
inline ::GlobalNamespace::LinearCurve* GlobalNamespace::LinearCurve::New_ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LinearCurve*>(start, end));
}
inline void GlobalNamespace::LinearCurve::_ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LinearCurve::GetExactPoint(float_t ratio) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, ratio);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LinearCurve::GetExactHeading(float_t ratio) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, ratio);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LinearCurve::GetStart() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::LinearCurve::GetEnd(ByRef<::UnityEngine::Vector3> endingDirection) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LinearCurve*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, endingDirection);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LinearCurve::LinearCurve() {}
