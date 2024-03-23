#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__GenerateDataKeyResult_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult.get_KeyPlaintext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::*)()>(
    &::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::get_KeyPlaintext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202147c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(), "get_KeyPlaintext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult.set_KeyPlaintext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::set_KeyPlaintext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2021484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(), "set_KeyPlaintext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult.get_KeyCiphertext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::*)()>(
    &::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::get_KeyCiphertext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202148c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(), "get_KeyCiphertext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult.set_KeyCiphertext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::set_KeyCiphertext)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2021494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(), "set_KeyCiphertext", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::*)()>(
    &::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x202149c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::__cordl_internal_get__KeyPlaintext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeyPlaintext_k__BackingField;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::__cordl_internal_get__KeyPlaintext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeyPlaintext_k__BackingField;
}
constexpr void Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::__cordl_internal_set__KeyPlaintext_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____KeyPlaintext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::__cordl_internal_get__KeyCiphertext_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeyCiphertext_k__BackingField;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::__cordl_internal_get__KeyCiphertext_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____KeyCiphertext_k__BackingField;
}
constexpr void Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::__cordl_internal_set__KeyCiphertext_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____KeyCiphertext_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::get_KeyPlaintext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(),
                                                                             "get_KeyPlaintext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::set_KeyPlaintext(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(), "set_KeyPlaintext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::get_KeyCiphertext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(),
                                                                             "get_KeyCiphertext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::set_KeyCiphertext(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(), "set_KeyCiphertext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult* Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>());
}
inline void Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult::GenerateDataKeyResult() {}
