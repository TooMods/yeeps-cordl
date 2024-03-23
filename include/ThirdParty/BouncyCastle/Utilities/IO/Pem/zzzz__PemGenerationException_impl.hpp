#pragma once
#include "System/zzzz__Exception_impl.hpp"
#include "ThirdParty/BouncyCastle/Utilities/IO/Pem/zzzz__PemGenerationException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::*)()>(
    &::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x14b64e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::*)(::StringW)>(
    &::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x14b653c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::*)(::StringW, ::System::Exception*)>(
    &::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x14b65a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>());
}
inline void ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::New_ctor(::StringW message) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(message));
}
inline void ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException* ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::New_ctor(::StringW message,
                                                                                                                                                              ::System::Exception* exception) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>(message, exception));
}
inline void ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::_ctor(::StringW message, ::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, exception);
}
// Ctor Parameters []
constexpr ::ThirdParty::BouncyCastle::Utilities::IO::Pem::PemGenerationException::PemGenerationException() {}
