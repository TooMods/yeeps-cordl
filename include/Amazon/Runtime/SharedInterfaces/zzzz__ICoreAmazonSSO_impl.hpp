#pragma once
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonSSO_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO.CredentialsFromSsoAccessTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO::*)(::StringW, ::StringW, ::StringW, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO::CredentialsFromSsoAccessTokenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>*
Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO::CredentialsFromSsoAccessTokenAsync(::StringW accountId, ::StringW roleName, ::StringW accessToken,
                                                                                      ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>*, false>(this, ___internal_method, accountId, roleName, accessToken,
                                                                                                                                   additionalProperties);
}
