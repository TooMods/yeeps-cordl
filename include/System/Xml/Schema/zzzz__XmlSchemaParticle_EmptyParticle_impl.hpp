#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_EmptyParticle_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle.get_IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::*)()>(
    &::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::get_IsEmpty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18ac3d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::*)()>(
    &::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x18ac380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::get_IsEmpty() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle* System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle*>());
}
inline void System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XmlSchemaParticle__EmptyParticle::__XmlSchemaParticle__EmptyParticle() {}
