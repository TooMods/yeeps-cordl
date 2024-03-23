#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__MeshUtils_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PQHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_impl.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__MeshUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__MeshUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Tess_def.hpp"
template <typename T> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::setStaticF__stack(::System::Collections::Generic::Stack_1<T>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<T>*, "_stack",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>::get>(
      std::forward<::System::Collections::Generic::Stack_1<T>*>(value));
}
template <typename T> inline ::System::Collections::Generic::Stack_1<T>* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::getStaticF__stack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<T>*, "_stack",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>::get>();
}
template <typename T> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::Reset() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::OnFree() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::Free() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>::get(), "Free",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>());
}
template <typename T> inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>::__MeshUtils__Pooled_1() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::Reset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2892ac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2892b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__prev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__anEdge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anEdge;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__anEdge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anEdge;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__anEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anEdge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__coords() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coords;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__coords() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coords;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__coords(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coords = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____s = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__t() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr float_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__t() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____t;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__t(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____t = value;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__pqHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pqHandle;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__pqHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pqHandle;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__pqHandle(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pqHandle = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__n(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____n = value;
}
constexpr ::System::Object*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__cordl_internal_set__data(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>());
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex::__MeshUtils__Vertex() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face.get_VertsCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::get_VertsCount)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x28925ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(),
                                                 "get_VertsCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2892b8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2892b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prev;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_set__prev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__anEdge() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anEdge;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__anEdge() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anEdge;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_set__anEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anEdge)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__trail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trail;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__trail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trail;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_set__trail(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trail)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____n;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_set__n(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____n = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__marked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marked;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__marked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____marked;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_set__marked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____marked = value;
}
constexpr bool& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__inside() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inside;
}
constexpr bool const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_get__inside() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inside;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__cordl_internal_set__inside(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inside = value;
}
inline int32_t UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::get_VertsCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(), "get_VertsCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>());
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face::__MeshUtils__Face() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair (*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair::Create)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2891a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair>::get(), "Create",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2892be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair>::get(), "Reset",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair::Create() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair>::get(), "Create",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_e", ty: "::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_eSym", ty:
// "::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair::__MeshUtils__EdgePair(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _e,
                                                                                                           ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _eSym) noexcept {
  this->_e = _e;
  this->_eSym = _eSym;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair::__MeshUtils__EdgePair() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Rface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Rface)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Rface",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Rface
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Rface)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892280;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Rface", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Dst
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Dst)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2891450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Dst",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Dst
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Dst)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Dst", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Oprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Oprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x28920b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Oprev",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Oprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Oprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Oprev", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Lprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Lprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Lprev",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Lprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Lprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Lprev", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Dprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Dprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892c24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Dprev",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Dprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Dprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Dprev", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Rprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Rprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Rprev",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Rprev
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Rprev)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2892c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Rprev", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Dnext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Dnext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2892c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Dnext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Dnext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Dnext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2892cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Dnext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.get__Rnext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Rnext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2892cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Rnext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.set__Rnext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)(
    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(&::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Rnext)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2892d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Rnext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.EnsureFirst
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::EnsureFirst)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2892a3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "EnsureFirst", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::Reset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2892d24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::*)()>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2892d38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__pair() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pair;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__pair() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pair;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__pair(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pair = value;
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Sym() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Sym;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Sym() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Sym;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__Sym(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Sym)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Onext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Onext;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Onext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Onext;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__Onext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Onext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Lnext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lnext;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Lnext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lnext;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__Lnext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Lnext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Org() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Org;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Org() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Org;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__Org(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Org)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Lface() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lface;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__Lface() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Lface;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__Lface(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Lface)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__activeRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeRegion;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*> const&
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__activeRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeRegion;
}
constexpr void
UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__activeRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeRegion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__winding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____winding;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_get__winding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____winding;
}
constexpr void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__cordl_internal_set__winding(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____winding = value;
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Rface() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Rface",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Rface(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Rface", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Dst() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Dst",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Dst(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Dst", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Oprev() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Oprev",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Oprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Oprev", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Lprev() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Lprev",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Lprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Lprev", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Dprev() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Dprev",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Dprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Dprev", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Rprev() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Rprev",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Rprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Rprev", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Dnext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Dnext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Dnext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Dnext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::get__Rnext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "get__Rnext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::set__Rnext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "set__Rnext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::EnsureFirst(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), "EnsureFirst", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::Reset() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>());
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge::__MeshUtils__Edge() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.MakeEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(
        &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::MakeEdge)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2891bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "MakeEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.Splice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(
        &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Splice)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2891f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "Splice", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.MakeVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*)>(
        &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::MakeVertex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2891c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "MakeVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.MakeFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*)>(
        &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::MakeFace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2891cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "MakeFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.KillEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::KillEdge)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x28920d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "KillEdge", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.KillVertex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*)>(
        &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::KillVertex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2891e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "KillVertex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.KillFace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*)>(
        &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::KillFace)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2891ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "KillFace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils.FaceArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*)>(
    &::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::FaceArea)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2892a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "FaceArea", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*
UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::MakeEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eNext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "MakeEdge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, false>(nullptr, ___internal_method, eNext);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::Splice(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* a,
                                                                                ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "Splice", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::MakeVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrig,
                                                                                    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vNext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "MakeVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eOrig, vNext);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::MakeFace(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrig,
                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* fNext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "MakeFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eOrig, fNext);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::KillEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eDel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "KillEdge", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eDel);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::KillVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vDel,
                                                                                    ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* newOrg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "KillVertex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vDel, newOrg);
}
inline void UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::KillFace(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* fDel,
                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* newLFace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "KillFace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fDel, newLFace);
}
inline float_t UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::FaceArea(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* f) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*>::get(), "FaceArea", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, f);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils::MeshUtils() {}
