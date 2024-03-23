#pragma once
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_impl.hpp"
#include "System/Security/Cryptography/zzzz__PbeEncryptionAlgorithm_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__PbeParameters_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__PbeEncryptionAlgorithm_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters.get_EncryptionAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::PbeEncryptionAlgorithm (::System::Security::Cryptography::PbeParameters::*)()>(
    &::System::Security::Cryptography::PbeParameters::get_EncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x196e600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(),
                                                                               "get_EncryptionAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters.get_HashAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::HashAlgorithmName (::System::Security::Cryptography::PbeParameters::*)()>(
    &::System::Security::Cryptography::PbeParameters::get_HashAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x196e608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(),
                                                                               "get_HashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters.get_IterationCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Cryptography::PbeParameters::*)()>(
    &::System::Security::Cryptography::PbeParameters::get_IterationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x196e610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(),
                                                                               "get_IterationCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PbeParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::PbeParameters::*)(
    ::System::Security::Cryptography::PbeEncryptionAlgorithm, ::System::Security::Cryptography::HashAlgorithmName, int32_t)>(&::System::Security::Cryptography::PbeParameters::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x196e618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PbeEncryptionAlgorithm>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithmName>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm& System::Security::Cryptography::PbeParameters::__cordl_internal_get__EncryptionAlgorithm_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EncryptionAlgorithm_k__BackingField;
}
constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm const& System::Security::Cryptography::PbeParameters::__cordl_internal_get__EncryptionAlgorithm_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EncryptionAlgorithm_k__BackingField;
}
constexpr void System::Security::Cryptography::PbeParameters::__cordl_internal_set__EncryptionAlgorithm_k__BackingField(::System::Security::Cryptography::PbeEncryptionAlgorithm value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EncryptionAlgorithm_k__BackingField = value;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName& System::Security::Cryptography::PbeParameters::__cordl_internal_get__HashAlgorithm_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HashAlgorithm_k__BackingField;
}
constexpr ::System::Security::Cryptography::HashAlgorithmName const& System::Security::Cryptography::PbeParameters::__cordl_internal_get__HashAlgorithm_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HashAlgorithm_k__BackingField;
}
constexpr void System::Security::Cryptography::PbeParameters::__cordl_internal_set__HashAlgorithm_k__BackingField(::System::Security::Cryptography::HashAlgorithmName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HashAlgorithm_k__BackingField = value;
}
constexpr int32_t& System::Security::Cryptography::PbeParameters::__cordl_internal_get__IterationCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IterationCount_k__BackingField;
}
constexpr int32_t const& System::Security::Cryptography::PbeParameters::__cordl_internal_get__IterationCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IterationCount_k__BackingField;
}
constexpr void System::Security::Cryptography::PbeParameters::__cordl_internal_set__IterationCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IterationCount_k__BackingField = value;
}
inline ::System::Security::Cryptography::PbeEncryptionAlgorithm System::Security::Cryptography::PbeParameters::get_EncryptionAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(),
                                                                             "get_EncryptionAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::PbeEncryptionAlgorithm, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::HashAlgorithmName System::Security::Cryptography::PbeParameters::get_HashAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(),
                                                                             "get_HashAlgorithm", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::HashAlgorithmName, false>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::PbeParameters::get_IterationCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(),
                                                                             "get_IterationCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::PbeParameters* System::Security::Cryptography::PbeParameters::New_ctor(::System::Security::Cryptography::PbeEncryptionAlgorithm encryptionAlgorithm,
                                                                                                                ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm,
                                                                                                                int32_t iterationCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::PbeParameters*>(encryptionAlgorithm, hashAlgorithm, iterationCount));
}
inline void System::Security::Cryptography::PbeParameters::_ctor(::System::Security::Cryptography::PbeEncryptionAlgorithm encryptionAlgorithm,
                                                                 ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, int32_t iterationCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PbeParameters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PbeEncryptionAlgorithm>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::HashAlgorithmName>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encryptionAlgorithm, hashAlgorithm, iterationCount);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::PbeParameters::PbeParameters() {}
