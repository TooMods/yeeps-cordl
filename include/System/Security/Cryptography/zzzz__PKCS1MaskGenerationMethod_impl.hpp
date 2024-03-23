#pragma once
#include "System/Security/Cryptography/zzzz__MaskGenerationMethod_impl.hpp"
#include "System/Security/Cryptography/zzzz__PKCS1MaskGenerationMethod_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)()>(
    &::System::Security::Cryptography::PKCS1MaskGenerationMethod::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1d21c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod.get_HashName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)()>(
    &::System::Security::Cryptography::PKCS1MaskGenerationMethod::get_HashName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d21c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), "get_HashName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod.set_HashName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)(::StringW)>(
    &::System::Security::Cryptography::PKCS1MaskGenerationMethod::set_HashName)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1d21c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), "set_HashName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::PKCS1MaskGenerationMethod.GenerateMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::PKCS1MaskGenerationMethod::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(&::System::Security::Cryptography::PKCS1MaskGenerationMethod::GenerateMask)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1d21cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Security::Cryptography::PKCS1MaskGenerationMethod::__cordl_internal_get_HashNameValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashNameValue;
}
constexpr ::StringW const& System::Security::Cryptography::PKCS1MaskGenerationMethod::__cordl_internal_get_HashNameValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___HashNameValue;
}
constexpr void System::Security::Cryptography::PKCS1MaskGenerationMethod::__cordl_internal_set_HashNameValue(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HashNameValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::PKCS1MaskGenerationMethod* System::Security::Cryptography::PKCS1MaskGenerationMethod::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>());
}
inline void System::Security::Cryptography::PKCS1MaskGenerationMethod::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Security::Cryptography::PKCS1MaskGenerationMethod::get_HashName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), "get_HashName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::PKCS1MaskGenerationMethod::set_HashName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), "set_HashName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::PKCS1MaskGenerationMethod::GenerateMask(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSeed, int32_t cbReturn) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::PKCS1MaskGenerationMethod*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rgbSeed, cbReturn);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::PKCS1MaskGenerationMethod::PKCS1MaskGenerationMethod() {}
