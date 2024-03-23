#pragma once
#include "Unity/Services/Wire/Internal/zzzz__IChannelTokenProvider_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "Unity/Services/Wire/Internal/zzzz__ChannelToken_def.hpp"
//  Writing Method size for method: ::Unity::Services::Wire::Internal::IChannelTokenProvider.GetTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Unity::Services::Wire::Internal::ChannelToken>* (
    ::Unity::Services::Wire::Internal::IChannelTokenProvider::*)()>(&::Unity::Services::Wire::Internal::IChannelTokenProvider::GetTokenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Wire::Internal::IChannelTokenProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Wire::Internal::IChannelTokenProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::Unity::Services::Wire::Internal::ChannelToken>* Unity::Services::Wire::Internal::IChannelTokenProvider::GetTokenAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Wire::Internal::IChannelTokenProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Unity::Services::Wire::Internal::ChannelToken>*, false>(this, ___internal_method);
}
