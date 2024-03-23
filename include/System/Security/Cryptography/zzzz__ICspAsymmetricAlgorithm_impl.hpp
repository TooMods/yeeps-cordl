#pragma once
#include "System/Security/Cryptography/zzzz__ICspAsymmetricAlgorithm_def.hpp"
#include "System/Security/Cryptography/zzzz__CspKeyContainerInfo_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::ICspAsymmetricAlgorithm.get_CspKeyContainerInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::CspKeyContainerInfo* (
    ::System::Security::Cryptography::ICspAsymmetricAlgorithm::*)()>(&::System::Security::Cryptography::ICspAsymmetricAlgorithm::get_CspKeyContainerInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ICspAsymmetricAlgorithm.ExportCspBlob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::ICspAsymmetricAlgorithm::*)(bool)>(
    &::System::Security::Cryptography::ICspAsymmetricAlgorithm::ExportCspBlob)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ICspAsymmetricAlgorithm.ImportCspBlob
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::ICspAsymmetricAlgorithm::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::ICspAsymmetricAlgorithm::ImportCspBlob)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(), 2));
    return ___internal_method;
  }
};
inline ::System::Security::Cryptography::CspKeyContainerInfo* System::Security::Cryptography::ICspAsymmetricAlgorithm::get_CspKeyContainerInfo() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::CspKeyContainerInfo*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::ICspAsymmetricAlgorithm::ExportCspBlob(bool includePrivateParameters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, includePrivateParameters);
}
inline void System::Security::Cryptography::ICspAsymmetricAlgorithm::ImportCspBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::ICspAsymmetricAlgorithm*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rawData);
}
