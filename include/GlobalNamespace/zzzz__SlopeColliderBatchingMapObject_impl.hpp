#pragma once
#include "GlobalNamespace/zzzz__MapObject_impl.hpp"
#include "GlobalNamespace/zzzz__SlopeColliderBatchingMapObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SlopeColliderBatchingMapObject.GetColliderBatchKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::SlopeColliderBatchingMapObject::*)()>(
    &::GlobalNamespace::SlopeColliderBatchingMapObject::GetColliderBatchKey)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x3081cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlopeColliderBatchingMapObject.OnColliderBatchIsBakedUpdated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlopeColliderBatchingMapObject::*)(bool)>(
    &::GlobalNamespace::SlopeColliderBatchingMapObject::OnColliderBatchIsBakedUpdated)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3081ee4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SlopeColliderBatchingMapObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SlopeColliderBatchingMapObject::*)()>(
    &::GlobalNamespace::SlopeColliderBatchingMapObject::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3081ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_get_colliderBatchKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliderBatchKey;
}
constexpr ::StringW const& GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_get_colliderBatchKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colliderBatchKey;
}
constexpr void GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_set_colliderBatchKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___colliderBatchKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_get_supportsVerticalColliderBatching() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsVerticalColliderBatching;
}
constexpr bool const& GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_get_supportsVerticalColliderBatching() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___supportsVerticalColliderBatching;
}
constexpr void GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_set_supportsVerticalColliderBatching(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___supportsVerticalColliderBatching = value;
}
constexpr ::StringW& GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_get_verticalColliderBatchKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalColliderBatchKey;
}
constexpr ::StringW const& GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_get_verticalColliderBatchKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___verticalColliderBatchKey;
}
constexpr void GlobalNamespace::SlopeColliderBatchingMapObject::__cordl_internal_set_verticalColliderBatchKey(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___verticalColliderBatchKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::SlopeColliderBatchingMapObject::GetColliderBatchKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::SlopeColliderBatchingMapObject::OnColliderBatchIsBakedUpdated(bool newIsBaked) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIsBaked);
}
inline ::GlobalNamespace::SlopeColliderBatchingMapObject* GlobalNamespace::SlopeColliderBatchingMapObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SlopeColliderBatchingMapObject*>());
}
inline void GlobalNamespace::SlopeColliderBatchingMapObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SlopeColliderBatchingMapObject*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SlopeColliderBatchingMapObject::SlopeColliderBatchingMapObject() {}
