#pragma once
#include "Amazon/Runtime/CredentialManagement/zzzz__ICredentialProfileSource_def.hpp"
#include "Amazon/Runtime/CredentialManagement/zzzz__CredentialProfile_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::CredentialManagement::ICredentialProfileSource.TryGetProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::CredentialManagement::ICredentialProfileSource::*)(
    ::StringW, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*>)>(&::Amazon::Runtime::CredentialManagement::ICredentialProfileSource::TryGetProfile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(), 0));
    return ___internal_method;
  }
};
inline bool Amazon::Runtime::CredentialManagement::ICredentialProfileSource::TryGetProfile(::StringW profileName, ByRef<::Amazon::Runtime::CredentialManagement::CredentialProfile*> profile) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::CredentialManagement::ICredentialProfileSource*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, profileName, profile);
}
