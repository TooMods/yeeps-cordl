#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "ThirdParty/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ThirdParty::BouncyCastle::Asn1::Asn1Object* (::ThirdParty::BouncyCastle::Asn1::Asn1Encodable::*)()>(
    &::ThirdParty::BouncyCastle::Asn1::Asn1Encodable::ToAsn1Object)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ThirdParty::BouncyCastle::Asn1::Asn1Encodable::*)()>(
    &::ThirdParty::BouncyCastle::Asn1::Asn1Encodable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b6be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ThirdParty::BouncyCastle::Asn1::Asn1Object* ThirdParty::BouncyCastle::Asn1::Asn1Encodable::ToAsn1Object() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::ThirdParty::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
inline ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable* ThirdParty::BouncyCastle::Asn1::Asn1Encodable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>());
}
inline void ThirdParty::BouncyCastle::Asn1::Asn1Encodable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ThirdParty::BouncyCastle::Asn1::Asn1Encodable*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::ThirdParty::BouncyCastle::Asn1::Asn1Encodable::Asn1Encodable() {}
