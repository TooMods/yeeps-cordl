#pragma once
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptionWrapper_impl.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__EncryptionWrapperAES_def.hpp"
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::EncryptionWrapperAES._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Util::EncryptionWrapperAES::*)()>(
    &::Amazon::Runtime::Internal::Util::EncryptionWrapperAES::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x23f4c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Util::EncryptionWrapperAES.CreateAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::SymmetricAlgorithm* (::Amazon::Runtime::Internal::Util::EncryptionWrapperAES::*)()>(
    &::Amazon::Runtime::Internal::Util::EncryptionWrapperAES::CreateAlgorithm)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23f4cb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*>::get(), 9));
    return ___internal_method;
  }
};
inline ::Amazon::Runtime::Internal::Util::EncryptionWrapperAES* Amazon::Runtime::Internal::Util::EncryptionWrapperAES::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*>());
}
inline void Amazon::Runtime::Internal::Util::EncryptionWrapperAES::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::SymmetricAlgorithm* Amazon::Runtime::Internal::Util::EncryptionWrapperAES::CreateAlgorithm() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Util::EncryptionWrapperAES*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::SymmetricAlgorithm*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Util::EncryptionWrapperAES::EncryptionWrapperAES() {}
