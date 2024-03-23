#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Configuration/zzzz__ConfigurationUtils_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__IConfigurationLoader_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::ConfigurationUtils.get_ConfigurationLoader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Configuration::IConfigurationLoader* (*)()>(
    &::Unity::Services::Core::Configuration::ConfigurationUtils::get_ConfigurationLoader)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x264aa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationUtils*>::get(), "get_ConfigurationLoader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Services::Core::Configuration::ConfigurationUtils::setStaticF__ConfigurationLoader_k__BackingField(::Unity::Services::Core::Configuration::IConfigurationLoader* value) {
  ::cordl_internals::setStaticField<::Unity::Services::Core::Configuration::IConfigurationLoader*, "<ConfigurationLoader>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationUtils*>::get>(
      std::forward<::Unity::Services::Core::Configuration::IConfigurationLoader*>(value));
}
inline ::Unity::Services::Core::Configuration::IConfigurationLoader* Unity::Services::Core::Configuration::ConfigurationUtils::getStaticF__ConfigurationLoader_k__BackingField() {
  return ::cordl_internals::getStaticField<::Unity::Services::Core::Configuration::IConfigurationLoader*, "<ConfigurationLoader>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationUtils*>::get>();
}
inline ::Unity::Services::Core::Configuration::IConfigurationLoader* Unity::Services::Core::Configuration::ConfigurationUtils::get_ConfigurationLoader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::ConfigurationUtils*>::get(),
                                                                             "get_ConfigurationLoader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Configuration::IConfigurationLoader*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Configuration::ConfigurationUtils::ConfigurationUtils() {}
