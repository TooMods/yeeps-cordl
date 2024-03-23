#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ReflectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.GetCachedAssemblies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> (*)()>(
    &::Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblies)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x287d744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                               "GetCachedAssemblies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.GetCachedTypesPerAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* (*)()>(
    &::Unity::XR::CoreUtils::ReflectionUtils::GetCachedTypesPerAssembly)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x287d7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                               "GetCachedTypesPerAssembly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.GetCachedAssemblyTypeMaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* (*)()>(&::Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblyTypeMaps)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x287d9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                               "GetCachedAssemblyTypeMaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.PreWarmTypeCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::XR::CoreUtils::ReflectionUtils::PreWarmTypeCache)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x287ddcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                               "PreWarmTypeCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.ForEachAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Reflection::Assembly*>*)>(
    &::Unity::XR::CoreUtils::ReflectionUtils::ForEachAssembly)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x287ddd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "ForEachAssembly", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Reflection::Assembly*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.ForEachType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::ForEachType)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x28754e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "ForEachType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Func_2<::System::Type*, bool>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindType)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x287ded8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*, bool>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypeByFullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindTypeByFullName)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x287e0ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypeByFullName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypesBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*, ::System::Collections::Generic::List_1<::System::Type*>*)>(
        &::Unity::XR::CoreUtils::ReflectionUtils::FindTypesBatch)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x287e248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypesBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypesByFullNameBatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindTypesByFullNameBatch)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x287e4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypesByFullNameBatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.FindTypeInAssemblyByFullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW, ::StringW)>(&::Unity::XR::CoreUtils::ReflectionUtils::FindTypeInAssemblyByFullName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x287e8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypeInAssemblyByFullName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::ReflectionUtils.NicifyVariableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Unity::XR::CoreUtils::ReflectionUtils::NicifyVariableName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x287e9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "NicifyVariableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::ReflectionUtils::setStaticF_s_Assemblies(::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, "s_Assemblies",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get>(
      std::forward<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>>(value));
}
inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> Unity::XR::CoreUtils::ReflectionUtils::getStaticF_s_Assemblies() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, "s_Assemblies",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get>();
}
inline void Unity::XR::CoreUtils::ReflectionUtils::setStaticF_s_TypesPerAssembly(::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "s_TypesPerAssembly",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get>(
      std::forward<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*>(value));
}
inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* Unity::XR::CoreUtils::ReflectionUtils::getStaticF_s_TypesPerAssembly() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, "s_TypesPerAssembly",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get>();
}
inline void
Unity::XR::CoreUtils::ReflectionUtils::setStaticF_s_AssemblyTypeMaps(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>*, "s_AssemblyTypeMaps",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get>(
      std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* Unity::XR::CoreUtils::ReflectionUtils::getStaticF_s_AssemblyTypeMaps() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>*, "s_AssemblyTypeMaps",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get>();
}
inline ::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblies() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                             "GetCachedAssemblies", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*>, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* Unity::XR::CoreUtils::ReflectionUtils::GetCachedTypesPerAssembly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                             "GetCachedTypesPerAssembly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>* Unity::XR::CoreUtils::ReflectionUtils::GetCachedAssemblyTypeMaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                             "GetCachedAssemblyTypeMaps", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Type*>*>*, false>(nullptr, ___internal_method);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::PreWarmTypeCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(),
                                                                             "PreWarmTypeCache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::ForEachAssembly(::System::Action_1<::System::Reflection::Assembly*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "ForEachAssembly", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Reflection::Assembly*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::ForEachType(::System::Action_1<::System::Type*>* callback) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "ForEachType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, callback);
}
inline ::System::Type* Unity::XR::CoreUtils::ReflectionUtils::FindType(::System::Func_2<::System::Type*, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::System::Type*, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, predicate);
}
inline ::System::Type* Unity::XR::CoreUtils::ReflectionUtils::FindTypeByFullName(::StringW fullName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypeByFullName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, fullName);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::FindTypesBatch(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* predicates,
                                                                  ::System::Collections::Generic::List_1<::System::Type*>* resultList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypesBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, predicates, resultList);
}
inline void Unity::XR::CoreUtils::ReflectionUtils::FindTypesByFullNameBatch(::System::Collections::Generic::List_1<::StringW>* typeNames,
                                                                            ::System::Collections::Generic::List_1<::System::Type*>* resultList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypesByFullNameBatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Type*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, typeNames, resultList);
}
inline ::System::Type* Unity::XR::CoreUtils::ReflectionUtils::FindTypeInAssemblyByFullName(::StringW assemblyName, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "FindTypeInAssemblyByFullName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, assemblyName, typeName);
}
inline ::StringW Unity::XR::CoreUtils::ReflectionUtils::NicifyVariableName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::XR::CoreUtils::ReflectionUtils*>::get(), "NicifyVariableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ReflectionUtils::ReflectionUtils() {}
