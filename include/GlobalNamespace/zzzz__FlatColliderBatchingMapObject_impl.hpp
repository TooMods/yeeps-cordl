#pragma once
#include "GlobalNamespace/zzzz__MapObject_impl.hpp"
#include "GlobalNamespace/zzzz__FlatColliderBatchingMapObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlatColliderBatchingMapObject.GetColliderBatchKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FlatColliderBatchingMapObject::*)()>(
    &::GlobalNamespace::FlatColliderBatchingMapObject::GetColliderBatchKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3079cc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatColliderBatchingMapObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatColliderBatchingMapObject*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlatColliderBatchingMapObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlatColliderBatchingMapObject::*)()>(
    &::GlobalNamespace::FlatColliderBatchingMapObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3079ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatColliderBatchingMapObject*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FlatColliderBatchingMapObject::__cordl_internal_get_colliderBatchKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliderBatchKey;
}
constexpr ::StringW const& GlobalNamespace::FlatColliderBatchingMapObject::__cordl_internal_get_colliderBatchKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliderBatchKey;
}
constexpr void GlobalNamespace::FlatColliderBatchingMapObject::__cordl_internal_set_colliderBatchKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colliderBatchKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::FlatColliderBatchingMapObject::GetColliderBatchKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatColliderBatchingMapObject*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FlatColliderBatchingMapObject* GlobalNamespace::FlatColliderBatchingMapObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlatColliderBatchingMapObject*>());
}
inline void GlobalNamespace::FlatColliderBatchingMapObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlatColliderBatchingMapObject*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlatColliderBatchingMapObject::FlatColliderBatchingMapObject() {}
