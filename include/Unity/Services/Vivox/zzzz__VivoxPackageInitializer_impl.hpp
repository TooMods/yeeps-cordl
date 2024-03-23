#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxPackageInitializer_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreRegistry_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IInitializablePackage_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxPackageInitializer.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Services::Vivox::VivoxPackageInitializer::Register)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1c188f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxPackageInitializer*>::get(),
                                                                               "Register", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxPackageInitializer.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Unity::Services::Vivox::VivoxPackageInitializer::*)(::Unity::Services::Core::Internal::CoreRegistry*)>(&::Unity::Services::Vivox::VivoxPackageInitializer::Initialize)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0x1c18aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxPackageInitializer*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxPackageInitializer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxPackageInitializer::*)()>(
    &::Unity::Services::Vivox::VivoxPackageInitializer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c18aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxPackageInitializer*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr Unity::Services::Vivox::VivoxPackageInitializer::operator ::Unity::Services::Core::Internal::IInitializablePackage*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IInitializablePackage"
constexpr ::Unity::Services::Core::Internal::IInitializablePackage* Unity::Services::Vivox::VivoxPackageInitializer::i___Unity__Services__Core__Internal__IInitializablePackage() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IInitializablePackage*>(static_cast<void*>(this));
}
inline void Unity::Services::Vivox::VivoxPackageInitializer::Register() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxPackageInitializer*>::get(),
                                                                             "Register", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Vivox::VivoxPackageInitializer::Initialize(::Unity::Services::Core::Internal::CoreRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxPackageInitializer*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, registry);
}
inline ::Unity::Services::Vivox::VivoxPackageInitializer* Unity::Services::Vivox::VivoxPackageInitializer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::VivoxPackageInitializer*>());
}
inline void Unity::Services::Vivox::VivoxPackageInitializer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxPackageInitializer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VivoxPackageInitializer::VivoxPackageInitializer() {}
