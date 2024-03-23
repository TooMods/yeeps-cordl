#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_impl.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimatorOverrideController_def.hpp"
//  Writing Method size for method: ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::*)(::System::Object*, void*)>(
    &::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x19f9b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::*)()>(
    &::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x19f9bf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback* UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::New_ctor(::System::Object* object,
                                                                                                                                                                              void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*>(object, method));
}
inline void UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::Invoke() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback::__AnimatorOverrideController__OnOverrideControllerDirtyCallback() {}
//  Writing Method size for method: ::UnityEngine::AnimatorOverrideController.OnInvalidateOverrideController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AnimatorOverrideController*)>(
    &::UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x19f9b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "OnInvalidateOverrideController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*& UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnOverrideControllerDirty;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback*> const&
UnityEngine::AnimatorOverrideController::__cordl_internal_get_OnOverrideControllerDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OnOverrideControllerDirty;
}
constexpr void UnityEngine::AnimatorOverrideController::__cordl_internal_set_OnOverrideControllerDirty(::UnityEngine::__AnimatorOverrideController__OnOverrideControllerDirtyCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OnOverrideControllerDirty)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::AnimatorOverrideController::OnInvalidateOverrideController(::UnityEngine::AnimatorOverrideController* controller) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AnimatorOverrideController*>::get(), "OnInvalidateOverrideController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimatorOverrideController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, controller);
}
// Ctor Parameters []
constexpr ::UnityEngine::AnimatorOverrideController::AnimatorOverrideController() {}
