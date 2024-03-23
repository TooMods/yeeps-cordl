#pragma once
#include "Unity/Services/Core/Configuration/zzzz__IConfigurationLoader_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Core/Configuration/zzzz__SerializableProjectConfiguration_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Configuration::IConfigurationLoader.GetConfigAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* (
    ::Unity::Services::Core::Configuration::IConfigurationLoader::*)()>(&::Unity::Services::Core::Configuration::IConfigurationLoader::GetConfigAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::IConfigurationLoader*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::IConfigurationLoader*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>* Unity::Services::Core::Configuration::IConfigurationLoader::GetConfigAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Configuration::IConfigurationLoader*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Configuration::SerializableProjectConfiguration>*, false>(this, ___internal_method);
}
