#pragma once
#include "GlobalNamespace/zzzz__CurrencyStashMapObject_impl.hpp"
#include "GlobalNamespace/zzzz__ComplexMaterialCurrencyStashMapObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ComplexMaterialCurrencyStashMapObject.SetSharedMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ComplexMaterialCurrencyStashMapObject::*)(
    ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>)>(&::GlobalNamespace::ComplexMaterialCurrencyStashMapObject::SetSharedMaterials)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x307720c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ComplexMaterialCurrencyStashMapObject*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ComplexMaterialCurrencyStashMapObject*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ComplexMaterialCurrencyStashMapObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ComplexMaterialCurrencyStashMapObject::*)()>(
    &::GlobalNamespace::ComplexMaterialCurrencyStashMapObject::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3077544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ComplexMaterialCurrencyStashMapObject*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_get_baseMaterialIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterialIndices;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_get_baseMaterialIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMaterialIndices;
}
constexpr void GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_set_baseMaterialIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___baseMaterialIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_get_compartmentMaterialIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartmentMaterialIndices;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_get_compartmentMaterialIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___compartmentMaterialIndices;
}
constexpr void GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_set_compartmentMaterialIndices(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___compartmentMaterialIndices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_get_buttonMaterialIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonMaterialIndex;
}
constexpr int32_t const& GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_get_buttonMaterialIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonMaterialIndex;
}
constexpr void GlobalNamespace::ComplexMaterialCurrencyStashMapObject::__cordl_internal_set_buttonMaterialIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonMaterialIndex = value;
}
inline void GlobalNamespace::ComplexMaterialCurrencyStashMapObject::SetSharedMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> newMaterials) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ComplexMaterialCurrencyStashMapObject*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newMaterials);
}
inline ::GlobalNamespace::ComplexMaterialCurrencyStashMapObject* GlobalNamespace::ComplexMaterialCurrencyStashMapObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ComplexMaterialCurrencyStashMapObject*>());
}
inline void GlobalNamespace::ComplexMaterialCurrencyStashMapObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ComplexMaterialCurrencyStashMapObject*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ComplexMaterialCurrencyStashMapObject::ComplexMaterialCurrencyStashMapObject() {}
