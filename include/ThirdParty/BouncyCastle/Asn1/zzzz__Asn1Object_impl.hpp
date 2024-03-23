#pragma once
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Asn1::Asn1Object.FromByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::BouncyCastle::Asn1::Asn1Object* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::ThirdParty::BouncyCastle::Asn1::Asn1Object::FromByteArray)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x14b3cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(), "FromByteArray", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Asn1::Asn1Object.FromStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::BouncyCastle::Asn1::Asn1Object* (*)(::System::IO::Stream*)>(
    &::ThirdParty::BouncyCastle::Asn1::Asn1Object::FromStream)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x14b7ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(), "FromStream", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Asn1::Asn1Object.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::BouncyCastle::Asn1::Asn1Object* (::ThirdParty::BouncyCastle::Asn1::Asn1Object::*)()>(
    &::ThirdParty::BouncyCastle::Asn1::Asn1Object::ToAsn1Object)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x14b8008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(),
                                                                               "ToAsn1Object", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Asn1::Asn1Object._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::Asn1::Asn1Object::*)()>(&::ThirdParty::BouncyCastle::Asn1::Asn1Object::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x14b800c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ThirdParty::BouncyCastle::Asn1::Asn1Object::FromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(), "FromByteArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::BouncyCastle::Asn1::Asn1Object*, false>(nullptr, ___internal_method, data);
}
inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ThirdParty::BouncyCastle::Asn1::Asn1Object::FromStream(::System::IO::Stream* inStr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(), "FromStream", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::BouncyCastle::Asn1::Asn1Object*, false>(nullptr, ___internal_method, inStr);
}
inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ThirdParty::BouncyCastle::Asn1::Asn1Object::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(),
                                                                             "ToAsn1Object", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ThirdParty::BouncyCastle::Asn1::Asn1Object::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>());
}
inline void ThirdParty::BouncyCastle::Asn1::Asn1Object::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Object*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ThirdParty::BouncyCastle::Asn1::Asn1Object::Asn1Object() {}
