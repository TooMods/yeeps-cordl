#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__FactoryUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "Unity/Services/Core/Configuration/Internal/zzzz__IProjectConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::FactoryUtils.CreatePackageTags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (*)(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*, ::StringW)>(
        &::Unity::Services::Core::Telemetry::Internal::FactoryUtils::CreatePackageTags)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x270b59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FactoryUtils*>::get(), "CreatePackageTags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*
Unity::Services::Core::Telemetry::Internal::FactoryUtils::CreatePackageTags(::Unity::Services::Core::Configuration::Internal::IProjectConfiguration* projectConfig, ::StringW packageName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FactoryUtils*>::get(), "CreatePackageTags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Configuration::Internal::IProjectConfiguration*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(nullptr, ___internal_method, projectConfig, packageName);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::FactoryUtils::FactoryUtils() {}
