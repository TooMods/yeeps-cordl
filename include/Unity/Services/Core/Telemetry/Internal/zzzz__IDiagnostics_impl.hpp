#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__IDiagnostics_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::IDiagnostics.SendDiagnostic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::IDiagnostics::*)(
    ::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&::Unity::Services::Core::Telemetry::Internal::IDiagnostics::SendDiagnostic)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>::get(), 0));
    return ___internal_method;
  }
};
/// @param tags: ::System::Collections::Generic::IDictionary_2<::StringW,::StringW>* (default: nullptr)
inline void Unity::Services::Core::Telemetry::Internal::IDiagnostics::SendDiagnostic(::StringW name, ::StringW message, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* tags) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::IDiagnostics*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, message, tags);
}
