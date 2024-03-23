#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__DependencyTree_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTree._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTree::*)()>(
    &::Unity::Services::Core::Internal::DependencyTree::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x266b4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTree*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::DependencyTree._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::DependencyTree::*)(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>*, ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*,
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*)>(&::Unity::Services::Core::Internal::DependencyTree::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x266c584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTree*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>*&
Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_PackageTypeHashToInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageTypeHashToInstance;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>*> const&
Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_PackageTypeHashToInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageTypeHashToInstance;
}
constexpr void Unity::Services::Core::Internal::DependencyTree::__cordl_internal_set_PackageTypeHashToInstance(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PackageTypeHashToInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*& Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_ComponentTypeHashToPackageTypeHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ComponentTypeHashToPackageTypeHash;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> const&
Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_ComponentTypeHashToPackageTypeHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ComponentTypeHashToPackageTypeHash;
}
constexpr void Unity::Services::Core::Internal::DependencyTree::__cordl_internal_set_ComponentTypeHashToPackageTypeHash(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ComponentTypeHashToPackageTypeHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*&
Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_PackageTypeHashToComponentTypeHashDependencies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageTypeHashToComponentTypeHashDependencies;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*> const&
Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_PackageTypeHashToComponentTypeHashDependencies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PackageTypeHashToComponentTypeHashDependencies;
}
constexpr void Unity::Services::Core::Internal::DependencyTree::__cordl_internal_set_PackageTypeHashToComponentTypeHashDependencies(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___PackageTypeHashToComponentTypeHashDependencies)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*&
Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_ComponentTypeHashToInstance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ComponentTypeHashToInstance;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*> const&
Unity::Services::Core::Internal::DependencyTree::__cordl_internal_get_ComponentTypeHashToInstance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ComponentTypeHashToInstance;
}
constexpr void Unity::Services::Core::Internal::DependencyTree::__cordl_internal_set_ComponentTypeHashToInstance(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ComponentTypeHashToInstance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::DependencyTree* Unity::Services::Core::Internal::DependencyTree::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::DependencyTree*>());
}
inline void Unity::Services::Core::Internal::DependencyTree::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTree*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Core::Internal::DependencyTree*
Unity::Services::Core::Internal::DependencyTree::New_ctor(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* packageToInstance,
                                                          ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* componentToPackage,
                                                          ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* packageToComponentDependencies,
                                                          ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentToInstance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::DependencyTree*>(packageToInstance, componentToPackage, packageToComponentDependencies, componentToInstance));
}
inline void
Unity::Services::Core::Internal::DependencyTree::_ctor(::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>* packageToInstance,
                                                       ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* componentToPackage,
                                                       ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>* packageToComponentDependencies,
                                                       ::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>* componentToInstance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::DependencyTree*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IInitializablePackage*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<int32_t>*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<int32_t, ::Unity::Services::Core::Internal::IServiceComponent*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packageToInstance, componentToPackage, packageToComponentDependencies, componentToInstance);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::DependencyTree::DependencyTree() {}
