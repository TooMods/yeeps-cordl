#pragma once
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/zzzz__PemObjectGenerator_def.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/zzzz__PemObject_def.hpp"
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator.Generate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* (
    ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::*)()>(&::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::Generate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>::get(), 0));
    return ___internal_method;
  }
};
inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator::Generate() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObjectGenerator*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemObject*, false>(this, ___internal_method);
}
