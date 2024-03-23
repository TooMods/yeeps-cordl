#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__ReflectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils.GetCachedAssemblies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> (*)()>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::GetCachedAssemblies)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x301faa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get(),
                                                 "GetCachedAssemblies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils.ForEachAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Reflection::Assembly*>*)>(
    &::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::ForEachAssembly)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x301fb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get(), "ForEachAssembly",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Reflection::Assembly*>*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::setStaticF_s_Assemblies(::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, "s_Assemblies",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get>(
      std::forward<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>>(value));
}
inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::getStaticF_s_Assemblies() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, "s_Assemblies",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get>();
}
inline void
UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::setStaticF_s_TypesPerAssembly(::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "s_TypesPerAssembly",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get>(
      std::forward<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*>(value));
}
inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*
UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::getStaticF_s_TypesPerAssembly() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "s_TypesPerAssembly",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get>();
}
inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::GetCachedAssemblies() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get(),
                                               "GetCachedAssemblies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::ForEachAssembly(::System::Action_1<::System::Reflection::Assembly*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils*>::get(), "ForEachAssembly", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Reflection::Assembly*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ReflectionUtils::ReflectionUtils() {}
