#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__CryptoUtilFactory_def.hpp"
#include "Amazon/Runtime/zzzz__SigningAlgorithm_def.hpp"
#include "Amazon/Util/zzzz__CryptoUtilFactory_def.hpp"
#include "Amazon/Util/zzzz__ICryptoUtil_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)()>(
    &::Amazon::Util::__CryptoUtilFactory__CryptoUtil::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2205454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.HMACSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(
    ::StringW, ::StringW, ::Amazon::Runtime::SigningAlgorithm)>(&::Amazon::Util::__CryptoUtilFactory__CryptoUtil::HMACSign)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x220545c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "HMACSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.HMACSign
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::StringW, ::Amazon::Runtime::SigningAlgorithm)>(&::Amazon::Util::__CryptoUtilFactory__CryptoUtil::HMACSign)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x22054bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "HMACSign", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.ComputeSHA1Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeSHA1Hash)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2205824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeSHA1Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.ComputeSHA256Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeSHA256Hash)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x22059bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeSHA256Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.ComputeSHA256Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(::System::IO::Stream*)>(
    &::Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeSHA256Hash)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2205ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeSHA256Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.ComputeMD5Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeMD5Hash)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2205b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeMD5Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.ComputeMD5Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(::System::IO::Stream*)>(
    &::Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeMD5Hash)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2205b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeMD5Hash", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.HMACSignBinary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Amazon::Runtime::SigningAlgorithm)>(&::Amazon::Util::__CryptoUtilFactory__CryptoUtil::HMACSignBinary)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2205c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "HMACSignBinary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.CreateKeyedHashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::KeyedHashAlgorithm* (
    ::Amazon::Util::__CryptoUtilFactory__CryptoUtil::*)(::Amazon::Runtime::SigningAlgorithm)>(&::Amazon::Util::__CryptoUtilFactory__CryptoUtil::CreateKeyedHashAlgorithm)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x22056fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "CreateKeyedHashAlgorithm", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::__CryptoUtilFactory__CryptoUtil.get_SHA256HashAlgorithmInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithm* (*)()>(
    &::Amazon::Util::__CryptoUtilFactory__CryptoUtil::get_SHA256HashAlgorithmInstance)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2205a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "get_SHA256HashAlgorithmInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Util::ICryptoUtil"
constexpr Amazon::Util::__CryptoUtilFactory__CryptoUtil::operator ::Amazon::Util::ICryptoUtil*() noexcept {
  return static_cast<::Amazon::Util::ICryptoUtil*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Util::ICryptoUtil"
constexpr ::Amazon::Util::ICryptoUtil* Amazon::Util::__CryptoUtilFactory__CryptoUtil::i___Amazon__Util__ICryptoUtil() noexcept {
  return static_cast<::Amazon::Util::ICryptoUtil*>(static_cast<void*>(this));
}
inline void Amazon::Util::__CryptoUtilFactory__CryptoUtil::setStaticF__hashAlgorithm(::System::Security::Cryptography::HashAlgorithm* value) {
  ::cordl_internals::setStaticField<::System::Security::Cryptography::HashAlgorithm*, "_hashAlgorithm",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get>(
      std::forward<::System::Security::Cryptography::HashAlgorithm*>(value));
}
inline ::System::Security::Cryptography::HashAlgorithm* Amazon::Util::__CryptoUtilFactory__CryptoUtil::getStaticF__hashAlgorithm() {
  return ::cordl_internals::getStaticField<::System::Security::Cryptography::HashAlgorithm*, "_hashAlgorithm",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get>();
}
inline ::Amazon::Util::__CryptoUtilFactory__CryptoUtil* Amazon::Util::__CryptoUtilFactory__CryptoUtil::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>());
}
inline void Amazon::Util::__CryptoUtilFactory__CryptoUtil::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW Amazon::Util::__CryptoUtilFactory__CryptoUtil::HMACSign(::StringW data, ::StringW key, ::Amazon::Runtime::SigningAlgorithm algorithmName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "HMACSign", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, data, key, algorithmName);
}
inline ::StringW Amazon::Util::__CryptoUtilFactory__CryptoUtil::HMACSign(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::StringW key, ::Amazon::Runtime::SigningAlgorithm algorithmName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "HMACSign", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, data, key, algorithmName);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeSHA1Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeSHA1Hash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeSHA256Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeSHA256Hash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeSHA256Hash(::System::IO::Stream* steam) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeSHA256Hash",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, steam);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeMD5Hash(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeMD5Hash", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Util::__CryptoUtilFactory__CryptoUtil::ComputeMD5Hash(::System::IO::Stream* steam) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "ComputeMD5Hash",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, steam);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Util::__CryptoUtilFactory__CryptoUtil::HMACSignBinary(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                                                          ::Amazon::Runtime::SigningAlgorithm algorithmName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "HMACSignBinary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, data, key, algorithmName);
}
inline ::System::Security::Cryptography::KeyedHashAlgorithm* Amazon::Util::__CryptoUtilFactory__CryptoUtil::CreateKeyedHashAlgorithm(::Amazon::Runtime::SigningAlgorithm algorithmName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(), "CreateKeyedHashAlgorithm", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SigningAlgorithm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::KeyedHashAlgorithm*, false>(this, ___internal_method, algorithmName);
}
inline ::System::Security::Cryptography::HashAlgorithm* Amazon::Util::__CryptoUtilFactory__CryptoUtil::get_SHA256HashAlgorithmInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>::get(),
                                                                             "get_SHA256HashAlgorithmInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithm*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::__CryptoUtilFactory__CryptoUtil::__CryptoUtilFactory__CryptoUtil() {}
//  Writing Method size for method: ::Amazon::Util::CryptoUtilFactory.get_CryptoInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::ICryptoUtil* (*)()>(&::Amazon::Util::CryptoUtilFactory::get_CryptoInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2205384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::CryptoUtilFactory*>::get(), "get_CryptoInstance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Util::CryptoUtilFactory::setStaticF_util(::Amazon::Util::__CryptoUtilFactory__CryptoUtil* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*, "util", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::CryptoUtilFactory*>::get>(
      std::forward<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*>(value));
}
inline ::Amazon::Util::__CryptoUtilFactory__CryptoUtil* Amazon::Util::CryptoUtilFactory::getStaticF_util() {
  return ::cordl_internals::getStaticField<::Amazon::Util::__CryptoUtilFactory__CryptoUtil*, "util", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::CryptoUtilFactory*>::get>();
}
inline ::Amazon::Util::ICryptoUtil* Amazon::Util::CryptoUtilFactory::get_CryptoInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::CryptoUtilFactory*>::get(), "get_CryptoInstance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::ICryptoUtil*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::CryptoUtilFactory::CryptoUtilFactory() {}
