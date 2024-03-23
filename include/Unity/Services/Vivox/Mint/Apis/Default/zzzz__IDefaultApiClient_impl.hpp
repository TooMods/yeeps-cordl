#pragma once
#include "Unity/Services/Vivox/Mint/Apis/Default/zzzz__IDefaultApiClient_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Vivox/Mint/Default/zzzz__ConnectTokenV1Request_def.hpp"
#include "Unity/Services/Vivox/Mint/Default/zzzz__JoinChannelV1Request_def.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Configuration_def.hpp"
#include "Unity/Services/Vivox/Mint/zzzz__Response_1_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient.ConnectTokenV1Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* (
    ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient::*)(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request*, ::Unity::Services::Vivox::Mint::Configuration*)>(
    &::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient::ConnectTokenV1Async)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient.JoinChannelV1Async
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>* (
    ::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient::*)(::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request*, ::Unity::Services::Vivox::Mint::Configuration*)>(
    &::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient::JoinChannelV1Async)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>::get(), 1));
    return ___internal_method;
  }
};
/// @param operationConfiguration: ::Unity::Services::Vivox::Mint::Configuration* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*
Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient::ConnectTokenV1Async(::Unity::Services::Vivox::Mint::Default::ConnectTokenV1Request* request,
                                                                                    ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*, false>(this, ___internal_method, request,
                                                                                                                                                 operationConfiguration);
}
/// @param operationConfiguration: ::Unity::Services::Vivox::Mint::Configuration* (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*
Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient::JoinChannelV1Async(::Unity::Services::Vivox::Mint::Default::JoinChannelV1Request* request,
                                                                                   ::Unity::Services::Vivox::Mint::Configuration* operationConfiguration) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Apis::Default::IDefaultApiClient*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Vivox::Mint::Response_1<::StringW>*>*, false>(this, ___internal_method, request,
                                                                                                                                                 operationConfiguration);
}
