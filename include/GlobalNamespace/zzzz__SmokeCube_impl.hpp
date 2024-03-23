#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SmokeCube_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmokeCube._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmokeCube::*)(::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::SmokeCube::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29c6828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeCube*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SmokeCube::__cordl_internal_get_transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SmokeCube::__cordl_internal_get_transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___transform;
}
constexpr void GlobalNamespace::SmokeCube::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::SmokeCube::__cordl_internal_get_aliveTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliveTimer;
}
constexpr float_t const& GlobalNamespace::SmokeCube::__cordl_internal_get_aliveTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aliveTimer;
}
constexpr void GlobalNamespace::SmokeCube::__cordl_internal_set_aliveTimer(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___aliveTimer = value;
}
constexpr float_t& GlobalNamespace::SmokeCube::__cordl_internal_get_lifetime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lifetime;
}
constexpr float_t const& GlobalNamespace::SmokeCube::__cordl_internal_get_lifetime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lifetime;
}
constexpr void GlobalNamespace::SmokeCube::__cordl_internal_set_lifetime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lifetime = value;
}
inline ::GlobalNamespace::SmokeCube* GlobalNamespace::SmokeCube::New_ctor(::UnityEngine::Transform* transform, float_t lifetime) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SmokeCube*>(transform, lifetime));
}
inline void GlobalNamespace::SmokeCube::_ctor(::UnityEngine::Transform* transform, float_t lifetime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmokeCube*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform, lifetime);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmokeCube::SmokeCube() {}
