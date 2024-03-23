#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__InitializationOptionsExtensions_def.hpp"
#include "Unity/Services/Core/zzzz__InitializationOptions_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::InitializationOptionsExtensions.SetVivoxCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Unity::Services::Core::InitializationOptions* (*)(::Unity::Services::Core::InitializationOptions*, ::StringW, ::StringW, ::StringW, ::StringW)>(
        &::Unity::Services::Vivox::InitializationOptionsExtensions::SetVivoxCredentials)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1c18294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::InitializationOptionsExtensions*>::get(), "SetVivoxCredentials", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @param tokenKey: ::StringW (default: u"")
inline ::Unity::Services::Core::InitializationOptions* Unity::Services::Vivox::InitializationOptionsExtensions::SetVivoxCredentials(::Unity::Services::Core::InitializationOptions* self,
                                                                                                                                    ::StringW server, ::StringW domain, ::StringW issuer,
                                                                                                                                    ::StringW tokenKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::InitializationOptionsExtensions*>::get(), "SetVivoxCredentials", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::InitializationOptions*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::InitializationOptions*, false>(nullptr, ___internal_method, self, server, domain, issuer, tokenKey);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::InitializationOptionsExtensions::InitializationOptionsExtensions() {}
