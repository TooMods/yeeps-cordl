#pragma once
#include "Unity/Services/Core/Internal/zzzz__CoreRegistration_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IPackageRegistry_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::CoreRegistration._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::CoreRegistration::*)(
    ::Unity::Services::Core::Internal::IPackageRegistry*, int32_t)>(&::Unity::Services::Core::Internal::CoreRegistration::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266b29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistration>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IPackageRegistry*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Internal::CoreRegistration::_ctor(::Unity::Services::Core::Internal::IPackageRegistry* registry, int32_t packageHash) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistration>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IPackageRegistry*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, registry, packageHash);
}
template <typename T> inline ::Unity::Services::Core::Internal::CoreRegistration Unity::Services::Core::Internal::CoreRegistration::DependsOn() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistration>::get(), "DependsOn",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreRegistration, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Core::Internal::CoreRegistration Unity::Services::Core::Internal::CoreRegistration::OptionallyDependsOn() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistration>::get(), "OptionallyDependsOn",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreRegistration, false>(this, ___internal_method);
}
template <typename T> inline ::Unity::Services::Core::Internal::CoreRegistration Unity::Services::Core::Internal::CoreRegistration::ProvidesComponent() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::CoreRegistration>::get(), "ProvidesComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::CoreRegistration, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Registry", ty: "::Unity::Services::Core::Internal::IPackageRegistry*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_PackageHash", ty:
// "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Internal::CoreRegistration::CoreRegistration(::Unity::Services::Core::Internal::IPackageRegistry* m_Registry, int32_t m_PackageHash) noexcept {
  this->m_Registry = m_Registry;
  this->m_PackageHash = m_PackageHash;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::CoreRegistration::CoreRegistration() {}
