#pragma once
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialHelperBase_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialInstanceHelper_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2a2f318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(),
                                    "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper.TryGetMaterialInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)(
    ByRef<::UnityEngine::Material*>)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::TryGetMaterialInstance)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2a2f3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(), "TryGetMaterialInstance",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Material*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::Initialize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a2f3c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a2f4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::__cordl_internal_get_m_MaterialInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialInstance;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::__cordl_internal_get_m_MaterialInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaterialInstance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::__cordl_internal_set_m_MaterialInstance(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MaterialInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(),
                                  "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::TryGetMaterialInstance(ByRef<::UnityEngine::Material*> materialInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(), "TryGetMaterialInstance",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Material*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, materialInstance);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*
UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>());
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper::MaterialInstanceHelper() {}
