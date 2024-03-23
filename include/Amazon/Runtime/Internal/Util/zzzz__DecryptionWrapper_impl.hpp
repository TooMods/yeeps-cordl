#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__DecryptionWrapper_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__IDecryptionWrapper_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::DecryptionWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::DecryptionWrapper::*)()>(
    &::Amazon::Runtime::Internal::Util::DecryptionWrapper::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23f4088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::DecryptionWrapper.CreateAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SymmetricAlgorithm* (::Amazon::Runtime::Internal::Util::DecryptionWrapper::*)()>(
    &::Amazon::Runtime::Internal::Util::DecryptionWrapper::CreateAlgorithm)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::DecryptionWrapper.get_Transformer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::ICryptoTransform* (::Amazon::Runtime::Internal::Util::DecryptionWrapper::*)()>(
    &::Amazon::Runtime::Internal::Util::DecryptionWrapper::get_Transformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f40b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(),
                                                                               "get_Transformer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::DecryptionWrapper.SetDecryptionData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::DecryptionWrapper::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Amazon::Runtime::Internal::Util::DecryptionWrapper::SetDecryptionData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x23f40bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(), "SetDecryptionData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::DecryptionWrapper.CreateDecryptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::DecryptionWrapper::*)()>(
    &::Amazon::Runtime::Internal::Util::DecryptionWrapper::CreateDecryptor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23f4164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(),
                                                                               "CreateDecryptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::Runtime::Internal::Util::IDecryptionWrapper"
constexpr Amazon::Runtime::Internal::Util::DecryptionWrapper::operator ::Amazon::Runtime::Internal::Util::IDecryptionWrapper*() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::IDecryptionWrapper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::Internal::Util::IDecryptionWrapper"
constexpr ::Amazon::Runtime::Internal::Util::IDecryptionWrapper* Amazon::Runtime::Internal::Util::DecryptionWrapper::i___Amazon__Runtime__Internal__Util__IDecryptionWrapper() noexcept {
  return static_cast<::Amazon::Runtime::Internal::Util::IDecryptionWrapper*>(static_cast<void*>(this));
}
constexpr ::System::Security::Cryptography::SymmetricAlgorithm*& Amazon::Runtime::Internal::Util::DecryptionWrapper::__cordl_internal_get_algorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::SymmetricAlgorithm*> const& Amazon::Runtime::Internal::Util::DecryptionWrapper::__cordl_internal_get_algorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___algorithm;
}
constexpr void Amazon::Runtime::Internal::Util::DecryptionWrapper::__cordl_internal_set_algorithm(::System::Security::Cryptography::SymmetricAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___algorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::ICryptoTransform*& Amazon::Runtime::Internal::Util::DecryptionWrapper::__cordl_internal_get_decryptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& Amazon::Runtime::Internal::Util::DecryptionWrapper::__cordl_internal_get_decryptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decryptor;
}
constexpr void Amazon::Runtime::Internal::Util::DecryptionWrapper::__cordl_internal_set_decryptor(::System::Security::Cryptography::ICryptoTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decryptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Runtime::Internal::Util::DecryptionWrapper* Amazon::Runtime::Internal::Util::DecryptionWrapper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>());
}
inline void Amazon::Runtime::Internal::Util::DecryptionWrapper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::SymmetricAlgorithm* Amazon::Runtime::Internal::Util::DecryptionWrapper::CreateAlgorithm() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SymmetricAlgorithm*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ICryptoTransform* Amazon::Runtime::Internal::Util::DecryptionWrapper::get_Transformer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(),
                                                                             "get_Transformer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::ICryptoTransform*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Util::DecryptionWrapper::SetDecryptionData(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(), "SetDecryptionData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, IV);
}
inline void Amazon::Runtime::Internal::Util::DecryptionWrapper::CreateDecryptor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::DecryptionWrapper*>::get(),
                                                                             "CreateDecryptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::DecryptionWrapper::DecryptionWrapper() {}
