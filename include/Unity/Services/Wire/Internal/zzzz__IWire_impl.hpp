#pragma once
#include "Unity/Services/Wire/Internal/zzzz__IWire_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IServiceComponent_def.hpp"
#include "Unity/Services/Wire/Internal/zzzz__IChannelTokenProvider_def.hpp"
#include "Unity/Services/Wire/Internal/zzzz__IChannel_def.hpp"
//  Writing Method size for method: ::Unity::Services::Wire::Internal::IWire.CreateChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Wire::Internal::IChannel* (
    ::Unity::Services::Wire::Internal::IWire::*)(::Unity::Services::Wire::Internal::IChannelTokenProvider*)>(&::Unity::Services::Wire::Internal::IWire::CreateChannel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Wire::Internal::IWire*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Wire::Internal::IWire*>::get(), 0));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr Unity::Services::Wire::Internal::IWire::operator ::Unity::Services::Core::Internal::IServiceComponent*() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IServiceComponent"
constexpr ::Unity::Services::Core::Internal::IServiceComponent* Unity::Services::Wire::Internal::IWire::i___Unity__Services__Core__Internal__IServiceComponent() noexcept {
  return static_cast<::Unity::Services::Core::Internal::IServiceComponent*>(static_cast<void*>(this));
}
inline ::Unity::Services::Wire::Internal::IChannel* Unity::Services::Wire::Internal::IWire::CreateChannel(::Unity::Services::Wire::Internal::IChannelTokenProvider* tokenProvider) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Wire::Internal::IWire*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Wire::Internal::IChannel*, false>(this, ___internal_method, tokenProvider);
}
