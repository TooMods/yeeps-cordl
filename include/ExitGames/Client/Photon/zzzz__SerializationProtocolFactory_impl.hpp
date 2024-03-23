#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocolFactory_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SerializationProtocol_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::SerializationProtocolFactory.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ExitGames::Client::Photon::IProtocol* (*)(::ExitGames::Client::Photon::SerializationProtocol)>(
    &::ExitGames::Client::Photon::SerializationProtocolFactory::Create)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x277fda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SerializationProtocolFactory*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializationProtocol>::get() })));
    return ___internal_method;
  }
};
inline ::ExitGames::Client::Photon::IProtocol* ExitGames::Client::Photon::SerializationProtocolFactory::Create(::ExitGames::Client::Photon::SerializationProtocol serializationProtocol) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::SerializationProtocolFactory*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ExitGames::Client::Photon::SerializationProtocol>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::IProtocol*, false>(nullptr, ___internal_method, serializationProtocol);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::SerializationProtocolFactory::SerializationProtocolFactory() {}
