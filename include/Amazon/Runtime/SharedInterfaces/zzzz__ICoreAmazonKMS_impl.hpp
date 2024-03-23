#pragma once
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonKMS_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__GenerateDataKeyResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS.GenerateDataKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::GenerateDataKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS.Decrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::Decrypt)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS.GenerateDataKeyAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::*)(::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, ::StringW)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::GenerateDataKeyAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS.DecryptAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::DecryptAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 3));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*
Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::GenerateDataKey(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext, ::StringW keySpec) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*, false>(this, ___internal_method, keyID, encryptionContext, keySpec);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
                                                                                                       ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, ciphertextBlob, encryptionContext);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>*
Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::GenerateDataKeyAsync(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext, ::StringW keySpec) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>*, false>(this, ___internal_method, keyID,
                                                                                                                                                      encryptionContext, keySpec);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS::DecryptAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method, ciphertextBlob, encryptionContext);
}
