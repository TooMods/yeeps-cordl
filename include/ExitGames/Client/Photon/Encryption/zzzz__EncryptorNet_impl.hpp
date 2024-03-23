#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ExitGames/Client/Photon/Encryption/zzzz__EncryptorNet_def.hpp"
#include "ExitGames/Client/Photon/Encryption/zzzz__IPhotonEncryptor_def.hpp"
#include "System/Security/Cryptography/zzzz__Aes_def.hpp"
#include "System/Security/Cryptography/zzzz__HMACSHA256_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, int32_t)>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::Init)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac9910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.Encrypt2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ByRef<int32_t>)>(
    &::ExitGames::Client::Photon::Encryption::EncryptorNet::Encrypt2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac9950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "Encrypt2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.Decrypt2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>)>(&::ExitGames::Client::Photon::Encryption::EncryptorNet::Decrypt2)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac9990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "Decrypt2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.CalculateEncryptedSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)(int32_t)>(
    &::ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateEncryptedSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac99d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "CalculateEncryptedSize",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet.CalculateFragmentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)()>(
    &::ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateFragmentLength)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac9a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(),
                                                                               "CalculateFragmentLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::Encryption::EncryptorNet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ExitGames::Client::Photon::Encryption::EncryptorNet::*)()>(
    &::ExitGames::Client::Photon::Encryption::EncryptorNet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac9a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
constexpr ExitGames::Client::Photon::Encryption::EncryptorNet::operator ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*() noexcept {
  return static_cast<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(static_cast<void*>(this));
}
/// @brief Convert to "::ExitGames::Client::Photon::Encryption::IPhotonEncryptor"
constexpr ::ExitGames::Client::Photon::Encryption::IPhotonEncryptor* ExitGames::Client::Photon::Encryption::EncryptorNet::i___ExitGames__Client__Photon__Encryption__IPhotonEncryptor() noexcept {
  return static_cast<::ExitGames::Client::Photon::Encryption::IPhotonEncryptor*>(static_cast<void*>(this));
}
constexpr ::System::Security::Cryptography::Aes*& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_encryptorIn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptorIn;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Aes*> const& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_encryptorIn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptorIn;
}
constexpr void ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_set_encryptorIn(::System::Security::Cryptography::Aes* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptorIn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::Aes*& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_encryptorOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptorOut;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Aes*> const& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_encryptorOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___encryptorOut;
}
constexpr void ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_set_encryptorOut(::System::Security::Cryptography::Aes* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___encryptorOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::HMACSHA256*& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_hmacsha256In() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmacsha256In;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HMACSHA256*> const& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_hmacsha256In() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmacsha256In;
}
constexpr void ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_set_hmacsha256In(::System::Security::Cryptography::HMACSHA256* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hmacsha256In)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::HMACSHA256*& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_hmacsha256Out() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmacsha256Out;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HMACSHA256*> const& ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_get_hmacsha256Out() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hmacsha256Out;
}
constexpr void ExitGames::Client::Photon::Encryption::EncryptorNet::__cordl_internal_set_hmacsha256Out(::System::Security::Cryptography::HMACSHA256* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hmacsha256Out)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param ivBytes: ::ArrayW<uint8_t,::Array<uint8_t>*> (default: nullptr)
/// @param chainingModeGCM: bool (default: false)
/// @param mtu: int32_t (default: static_cast<int32_t>(0x4b0))
inline void ExitGames::Client::Photon::Encryption::EncryptorNet::Init(::ArrayW<uint8_t, ::Array<uint8_t>*> encryptionSecret, ::ArrayW<uint8_t, ::Array<uint8_t>*> hmacSecret,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes, bool chainingModeGCM, int32_t mtu) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionSecret, hmacSecret, ivBytes, chainingModeGCM, mtu);
}
inline void ExitGames::Client::Photon::Encryption::EncryptorNet::Encrypt2(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> header,
                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOffset, ByRef<int32_t> outSize) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "Encrypt2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, len, header, output, outOffset, outSize);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExitGames::Client::Photon::Encryption::EncryptorNet::Decrypt2(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t len,
                                                                                                          ::ArrayW<uint8_t, ::Array<uint8_t>*> header, ByRef<int32_t> outLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "Decrypt2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, offset, len, header, outLen);
}
inline int32_t ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateEncryptedSize(int32_t unencryptedSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(), "CalculateEncryptedSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, unencryptedSize);
}
inline int32_t ExitGames::Client::Photon::Encryption::EncryptorNet::CalculateFragmentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(),
                                                                             "CalculateFragmentLength", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::Encryption::EncryptorNet* ExitGames::Client::Photon::Encryption::EncryptorNet::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ExitGames::Client::Photon::Encryption::EncryptorNet*>());
}
inline void ExitGames::Client::Photon::Encryption::EncryptorNet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ExitGames::Client::Photon::Encryption::EncryptorNet*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ExitGames::Client::Photon::Encryption::EncryptorNet::EncryptorNet() {}
