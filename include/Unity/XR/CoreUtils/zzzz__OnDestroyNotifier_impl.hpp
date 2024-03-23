#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__OnDestroyNotifier_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier.get_Destroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* (::Unity::XR::CoreUtils::OnDestroyNotifier::*)()>(&::Unity::XR::CoreUtils::OnDestroyNotifier::get_Destroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(),
                                                                               "get_Destroyed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier.set_Destroyed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::OnDestroyNotifier::*)(
    ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*)>(&::Unity::XR::CoreUtils::OnDestroyNotifier::set_Destroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(), "set_Destroyed", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::OnDestroyNotifier::*)()>(&::Unity::XR::CoreUtils::OnDestroyNotifier::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x287d71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::OnDestroyNotifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::XR::CoreUtils::OnDestroyNotifier::*)()>(&::Unity::XR::CoreUtils::OnDestroyNotifier::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x287d73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*& Unity::XR::CoreUtils::OnDestroyNotifier::__cordl_internal_get__Destroyed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Destroyed_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*> const&
Unity::XR::CoreUtils::OnDestroyNotifier::__cordl_internal_get__Destroyed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Destroyed_k__BackingField;
}
constexpr void Unity::XR::CoreUtils::OnDestroyNotifier::__cordl_internal_set__Destroyed_k__BackingField(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Destroyed_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* Unity::XR::CoreUtils::OnDestroyNotifier::get_Destroyed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(), "get_Destroyed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*, false>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::OnDestroyNotifier::set_Destroyed(::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(), "set_Destroyed", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::Unity::XR::CoreUtils::OnDestroyNotifier>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Unity::XR::CoreUtils::OnDestroyNotifier::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::OnDestroyNotifier* Unity::XR::CoreUtils::OnDestroyNotifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::XR::CoreUtils::OnDestroyNotifier*>());
}
inline void Unity::XR::CoreUtils::OnDestroyNotifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::OnDestroyNotifier*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::OnDestroyNotifier::OnDestroyNotifier() {}
