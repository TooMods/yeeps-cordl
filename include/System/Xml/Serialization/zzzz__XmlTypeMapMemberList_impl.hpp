#pragma once
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberElement_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberList_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberList::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberList::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3045474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberList*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlTypeMapMemberList* System::Xml::Serialization::XmlTypeMapMemberList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Serialization::XmlTypeMapMemberList*>());
}
inline void System::Xml::Serialization::XmlTypeMapMemberList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Serialization::XmlTypeMapMemberList*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberList::XmlTypeMapMemberList() {}
