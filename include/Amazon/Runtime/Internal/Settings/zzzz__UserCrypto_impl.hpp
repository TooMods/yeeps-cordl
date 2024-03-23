#pragma once
#include "Amazon/Runtime/Internal/Settings/zzzz__UserCrypto_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__UserCrypto_def.hpp"
#include "Amazon/Runtime/Internal/Settings/zzzz__UserCrypto_def.hpp"
// Ctor Parameters [CppParam { name: "cbData", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pbData", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB::__UserCrypto__DATA_BLOB(int32_t cbData, void* pbData) noexcept {
  this->cbData = cbData;
  this->pbData = pbData;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB::__UserCrypto__DATA_BLOB() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags::__UserCrypto__CryptProtectPromptFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags::__UserCrypto__CryptProtectPromptFlags() {}
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags::CRYPTPROTECT_PROMPT_ON_UNPROTECT{
  static_cast<int32_t>(0x1)
};
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags::CRYPTPROTECT_PROMPT_ON_PROTECT{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "cbSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "dwPromptFlags", ty:
// "::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "hwndApp", ty: "void*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "szPrompt", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT(
    int32_t cbSize, ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectPromptFlags dwPromptFlags, void* hwndApp, ::StringW szPrompt) noexcept {
  this->cbSize = cbSize;
  this->dwPromptFlags = dwPromptFlags;
  this->hwndApp = hwndApp;
  this->szPrompt = szPrompt;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::__UserCrypto__CryptProtectFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::__UserCrypto__CryptProtectFlags() {}
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::CRYPTPROTECT_UI_FORBIDDEN{ static_cast<int32_t>(
    0x1) };
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::CRYPTPROTECT_LOCAL_MACHINE{ static_cast<int32_t>(
    0x4) };
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::CRYPTPROTECT_CRED_SYNC{ static_cast<int32_t>(
    0x8) };
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::CRYPTPROTECT_AUDIT{ static_cast<int32_t>(0x10) };
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::CRYPTPROTECT_NO_RECOVERY{ static_cast<int32_t>(
    0x20) };
constexpr ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags::CRYPTPROTECT_VERIFY_PROTECTION{
  static_cast<int32_t>(0x40)
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::UserCrypto.Decrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::UserCrypto::Decrypt)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2452648;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "Decrypt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::UserCrypto.Encrypt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::Amazon::Runtime::Internal::Settings::UserCrypto::Encrypt)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x24533f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "Encrypt",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::UserCrypto.ConvertData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::Runtime::Internal::Settings::UserCrypto::ConvertData)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2453a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "ConvertData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::UserCrypto.CryptProtectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>, ::StringW, ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>, void*,
                         ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT>, ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags,
                         ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>)>(&::Amazon::Runtime::Internal::Settings::UserCrypto::CryptProtectData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2453c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "CryptProtectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::UserCrypto.CryptUnprotectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>, ::StringW, ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>, void*,
                         ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT>, ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags,
                         ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>)>(&::Amazon::Runtime::Internal::Settings::UserCrypto::CryptUnprotectData)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2453b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "CryptUnprotectData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Settings::UserCrypto.get_IsUserCryptAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::Amazon::Runtime::Internal::Settings::UserCrypto::get_IsUserCryptAvailable)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x2453d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(),
                                                                               "get_IsUserCryptAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::Internal::Settings::UserCrypto::setStaticF__isUserCryptAvailable(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "_isUserCryptAvailable",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get>(std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> Amazon::Runtime::Internal::Settings::UserCrypto::getStaticF__isUserCryptAvailable() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "_isUserCryptAvailable",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get>();
}
inline ::StringW Amazon::Runtime::Internal::Settings::UserCrypto::Decrypt(::StringW encrypted) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "Decrypt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, encrypted);
}
inline ::StringW Amazon::Runtime::Internal::Settings::UserCrypto::Encrypt(::StringW unencrypted) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "Encrypt",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, unencrypted);
}
inline ::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB Amazon::Runtime::Internal::Settings::UserCrypto::ConvertData(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "ConvertData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB, false>(nullptr, ___internal_method, data);
}
inline bool Amazon::Runtime::Internal::Settings::UserCrypto::CryptProtectData(ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataIn, ::StringW szDataDescr,
                                                                              ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pOptionalEntropy, void* pvReserved,
                                                                              ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT> pPromptStruct,
                                                                              ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags dwFlags,
                                                                              ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "CryptProtectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pDataIn, szDataDescr, pOptionalEntropy, pvReserved, pPromptStruct, dwFlags, pDataOut);
}
inline bool Amazon::Runtime::Internal::Settings::UserCrypto::CryptUnprotectData(ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataIn, ::StringW szDataDescr,
                                                                                ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pOptionalEntropy, void* pvReserved,
                                                                                ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT> pPromptStruct,
                                                                                ::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags dwFlags,
                                                                                ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB> pDataOut) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(), "CryptUnprotectData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__CRYPTPROTECT_PROMPTSTRUCT>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Settings::__UserCrypto__CryptProtectFlags>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::Settings::__UserCrypto__DATA_BLOB>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pDataIn, szDataDescr, pOptionalEntropy, pvReserved, pPromptStruct, dwFlags, pDataOut);
}
inline bool Amazon::Runtime::Internal::Settings::UserCrypto::get_IsUserCryptAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Settings::UserCrypto*>::get(),
                                                                             "get_IsUserCryptAvailable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Settings::UserCrypto::UserCrypto() {}
