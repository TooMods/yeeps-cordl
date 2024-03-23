#pragma once
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonSSOOIDC_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__GetSsoTokenRequest_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__GetSsoTokenResponse_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC.GetSsoTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC::*)(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest*)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC::GetSsoTokenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>*
Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC::GetSsoTokenAsync(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest* getSsoTokenRequest) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>*, false>(this, ___internal_method, getSsoTokenRequest);
}
