#pragma once
#include "Unity/Services/Core/Internal/zzzz__DependencyTreeInitializeOrderSorter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTreeInitializeOrderSorter_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTree_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark::__DependencyTreeInitializeOrderSorter__ExplorationMark(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark::__DependencyTreeInitializeOrderSorter__ExplorationMark() {}
constexpr ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark::None{
  static_cast<int32_t>(0x0)
};
constexpr ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark::Viewed{
  static_cast<int32_t>(0x1)
};
constexpr ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark::Sorted{
  static_cast<int32_t>(0x2)
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)(
    ::Unity::Services::Core::Internal::DependencyTree*, ::System::Collections::Generic::ICollection_1<int32_t>*)>(&::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266db88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.SortRegisteredPackagesIntoTarget
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)()>(
    &::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x266db94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                                 "SortRegisteredPackagesIntoTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.RemoveUnprovidedOptionalDependenciesFromTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)()>(
    &::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x266e06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                                 "RemoveUnprovidedOptionalDependenciesFromTree", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.RemoveUnprovidedOptionalDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)(
    ::System::Collections::Generic::IList_1<int32_t>*)>(&::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x266e514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                    "RemoveUnprovidedOptionalDependencies", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.SortTreeThrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)(int32_t)>(
    &::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::SortTreeThrough)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x266e21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "SortTreeThrough",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.SortTreeThrough
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)(
    ::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::SortTreeThrough)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x266e824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "SortTreeThrough",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.MarkPackage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)(
    int32_t, ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark)>(&::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::MarkPackage)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x266e6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "MarkPackage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.GetPackageTypeHashes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<int32_t>* (
    ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)()>(&::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::GetPackageTypeHashes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x266e1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                                 "GetPackageTypeHashes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.GetPackageTypeHashFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)(int32_t)>(
    &::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x266eb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "GetPackageTypeHashFor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter.GetDependencyTypeHashesFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (
    ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::*)(int32_t)>(&::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x266e730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "GetDependencyTypeHashesFor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::_ctor(::Unity::Services::Core::Internal::DependencyTree* tree,
                                                                                        ::System::Collections::Generic::ICollection_1<int32_t>* target) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::ICollection_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, target);
}
inline void Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                               "SortRegisteredPackagesIntoTarget", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                               "RemoveUnprovidedOptionalDependenciesFromTree", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(::System::Collections::Generic::IList_1<int32_t>* dependencyTypeHashes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                               "RemoveUnprovidedOptionalDependencies", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dependencyTypeHashes);
}
inline void Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::SortTreeThrough(int32_t packageTypeHash) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "SortTreeThrough",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packageTypeHash);
}
inline void Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::SortTreeThrough(::System::Collections::Generic::IEnumerable_1<int32_t>* dependencyTypeHashes) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "SortTreeThrough",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dependencyTypeHashes);
}
inline void Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::MarkPackage(int32_t packageTypeHash,
                                                                                              ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark mark) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "MarkPackage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packageTypeHash, mark);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<int32_t>* Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::GetPackageTypeHashes() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(),
                                               "GetPackageTypeHashes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<int32_t>*, false>(this, ___internal_method);
}
inline int32_t Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(int32_t componentTypeHash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "GetPackageTypeHashFor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, componentTypeHash);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(int32_t packageTypeHash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter>::get(), "GetDependencyTypeHashesFor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(this, ___internal_method, packageTypeHash);
}
// Ctor Parameters [CppParam { name: "Tree", ty: "::Unity::Services::Core::Internal::DependencyTree*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Target", ty:
// "::System::Collections::Generic::ICollection_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_PackageTypeHashExplorationHistory", ty:
// "::System::Collections::Generic::Dictionary_2<int32_t,::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::DependencyTreeInitializeOrderSorter(
    ::Unity::Services::Core::Internal::DependencyTree* Tree, ::System::Collections::Generic::ICollection_1<int32_t>* Target,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::__DependencyTreeInitializeOrderSorter__ExplorationMark>* m_PackageTypeHashExplorationHistory) noexcept {
  this->Tree = Tree;
  this->Target = Target;
  this->m_PackageTypeHashExplorationHistory = m_PackageTypeHashExplorationHistory;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::DependencyTreeInitializeOrderSorter::DependencyTreeInitializeOrderSorter() {}
