#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "DitzelGames/FastIK/zzzz__SampleProcedualAnimation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::DitzelGames::FastIK::SampleProcedualAnimation.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DitzelGames::FastIK::SampleProcedualAnimation::*)()>(
    &::DitzelGames::FastIK::SampleProcedualAnimation::LateUpdate)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x1086fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::SampleProcedualAnimation*>::get(),
                                                                               "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DitzelGames::FastIK::SampleProcedualAnimation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::DitzelGames::FastIK::SampleProcedualAnimation::*)()>(
    &::DitzelGames::FastIK::SampleProcedualAnimation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10876a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::SampleProcedualAnimation*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_FootTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FootTarget;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_FootTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FootTarget;
}
constexpr void DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_set_FootTarget(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___FootTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_LookTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LookTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_LookTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___LookTarget;
}
constexpr void DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_set_LookTarget(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___LookTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_HandTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_HandTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandTarget;
}
constexpr void DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_set_HandTarget(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HandTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_HandPole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandPole;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_HandPole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HandPole;
}
constexpr void DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_set_HandPole(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HandPole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_Step() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Step;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_Step() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Step;
}
constexpr void DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_set_Step(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Step)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Transform>& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_Attraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attraction;
}
constexpr ::UnityW<::UnityEngine::Transform> const& DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_get_Attraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Attraction;
}
constexpr void DitzelGames::FastIK::SampleProcedualAnimation::__cordl_internal_set_Attraction(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Attraction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void DitzelGames::FastIK::SampleProcedualAnimation::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::SampleProcedualAnimation*>::get(),
                                                                             "LateUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::DitzelGames::FastIK::SampleProcedualAnimation* DitzelGames::FastIK::SampleProcedualAnimation::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::DitzelGames::FastIK::SampleProcedualAnimation*>());
}
inline void DitzelGames::FastIK::SampleProcedualAnimation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DitzelGames::FastIK::SampleProcedualAnimation*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::DitzelGames::FastIK::SampleProcedualAnimation::SampleProcedualAnimation() {}
