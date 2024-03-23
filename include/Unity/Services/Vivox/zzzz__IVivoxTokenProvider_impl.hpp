#pragma once
#include "Unity/Services/Vivox/zzzz__IVivoxTokenProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::IVivoxTokenProvider.GetTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::Unity::Services::Vivox::IVivoxTokenProvider::*)(::StringW, ::System::Nullable_1<::System::TimeSpan>, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(
    &::Unity::Services::Vivox::IVivoxTokenProvider::GetTokenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IVivoxTokenProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IVivoxTokenProvider*>::get(), 0));
    return ___internal_method;
  }
};
/// @param issuer: ::StringW (default: nullptr)
/// @param expiration: ::System::Nullable_1<::System::TimeSpan> (default: {})
/// @param targetUserUri: ::StringW (default: nullptr)
/// @param action: ::StringW (default: nullptr)
/// @param channelUri: ::StringW (default: nullptr)
/// @param fromUserUri: ::StringW (default: nullptr)
/// @param realm: ::StringW (default: nullptr)
inline ::System::Threading::Tasks::Task_1<::StringW>* Unity::Services::Vivox::IVivoxTokenProvider::GetTokenAsync(::StringW issuer, ::System::Nullable_1<::System::TimeSpan> expiration,
                                                                                                                 ::StringW targetUserUri, ::StringW action, ::StringW channelUri, ::StringW fromUserUri,
                                                                                                                 ::StringW realm) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::IVivoxTokenProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, issuer, expiration, targetUserUri, action, channelUri, fromUserUri,
                                                                                                    realm);
}
