#pragma once
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_impl.hpp"
#include "System/Security/Cryptography/zzzz__MACTripleDES_def.hpp"
#include "System/Security/Cryptography/zzzz__CryptoStream_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__TailStream_def.hpp"
#include "System/Security/Cryptography/zzzz__TripleDES_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(&::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1d1f998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1d1faf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::Security::Cryptography::MACTripleDES::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1d1fb4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)()>(
    &::System::Security::Cryptography::MACTripleDES::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1d1fd10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.get_Padding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::PaddingMode (::System::Security::Cryptography::MACTripleDES::*)()>(
    &::System::Security::Cryptography::MACTripleDES::get_Padding)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1d1fd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                                               "get_Padding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.set_Padding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::System::Security::Cryptography::PaddingMode)>(
    &::System::Security::Cryptography::MACTripleDES::set_Padding)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1d1fd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), "set_Padding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::System::Security::Cryptography::MACTripleDES::HashCore)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x1d1fdc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.HashFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::Security::Cryptography::MACTripleDES::*)()>(
    &::System::Security::Cryptography::MACTripleDES::HashFinal)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1d1ffcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::MACTripleDES.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Cryptography::MACTripleDES::*)(bool)>(
    &::System::Security::Cryptography::MACTripleDES::Dispose)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1d20194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 13));
    return ___internal_method;
  }
};
constexpr ::System::Security::Cryptography::ICryptoTransform*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_encryptor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptor;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_encryptor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_encryptor;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_m_encryptor(::System::Security::Cryptography::ICryptoTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_encryptor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::CryptoStream*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__cs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::CryptoStream*> const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__cs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cs;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set__cs(::System::Security::Cryptography::CryptoStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::TailStream*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__ts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TailStream*> const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get__ts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ts;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set__ts(::System::Security::Cryptography::TailStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_bytesPerBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bytesPerBlock;
}
constexpr int32_t const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_m_bytesPerBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_bytesPerBlock;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_m_bytesPerBlock(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_bytesPerBlock = value;
}
constexpr ::System::Security::Cryptography::TripleDES*& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_des() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___des;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::TripleDES*> const& System::Security::Cryptography::MACTripleDES::__cordl_internal_get_des() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___des;
}
constexpr void System::Security::Cryptography::MACTripleDES::__cordl_internal_set_des(::System::Security::Cryptography::TripleDES* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___des)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::MACTripleDES*>());
}
inline void System::Security::Cryptography::MACTripleDES::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::MACTripleDES*>(rgbKey));
}
inline void System::Security::Cryptography::MACTripleDES::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgbKey);
}
inline ::System::Security::Cryptography::MACTripleDES* System::Security::Cryptography::MACTripleDES::New_ctor(::StringW strTripleDES, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Security::Cryptography::MACTripleDES*>(strTripleDES, rgbKey));
}
inline void System::Security::Cryptography::MACTripleDES::_ctor(::StringW strTripleDES, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strTripleDES, rgbKey);
}
inline void System::Security::Cryptography::MACTripleDES::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::PaddingMode System::Security::Cryptography::MACTripleDES::get_Padding() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(),
                                                                             "get_Padding", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::PaddingMode, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::set_Padding(::System::Security::Cryptography::PaddingMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), "set_Padding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::PaddingMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Security::Cryptography::MACTripleDES::HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbData, int32_t ibStart, int32_t cbSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgbData, ibStart, cbSize);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Cryptography::MACTripleDES::HashFinal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void System::Security::Cryptography::MACTripleDES::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Cryptography::MACTripleDES*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::MACTripleDES::MACTripleDES() {}
