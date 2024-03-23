#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsComponentProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnosticsFactory_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider.CreateDiagnosticsComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>* (
    ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider::*)()>(&::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider::CreateDiagnosticsComponents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider.GetSerializedProjectConfigurationAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider::*)()>(
        &::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider::GetSerializedProjectConfigurationAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get(), 1));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>*
Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider::CreateDiagnosticsComponents() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsFactory*>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider::GetSerializedProjectConfigurationAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnosticsComponentProvider*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
