#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlNodeReaderNavigator_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Xml/Schema/zzzz__IXmlSchemaInfo_def.hpp"
#include "System/Xml/zzzz__XmlDeclaration_def.hpp"
#include "System/Xml/zzzz__XmlDocumentType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceScope_def.hpp"
#include "System/Xml/zzzz__XmlNodeReaderNavigator_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
//  Writing Method size for method: ::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute::*)(::StringW, ::StringW)>(
    &::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa2080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void System::Xml::__XmlNodeReaderNavigator__VirtualAttribute::_ctor(::StringW name, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "value", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute::__XmlNodeReaderNavigator__VirtualAttribute(::StringW name, ::StringW value) noexcept {
  this->name = name;
  this->value = value;
}
// Ctor Parameters []
constexpr ::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute::__XmlNodeReaderNavigator__VirtualAttribute() {}
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::XmlNodeReaderNavigator::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xfa1eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_NodeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNodeType (::System::Xml::XmlNodeReaderNavigator::*)()>(
    &::System::Xml::XmlNodeReaderNavigator::get_NodeType)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xfa2088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_NodeType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_NamespaceURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_NamespaceURI)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa20cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                               "get_NamespaceURI", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_Name)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xfa20f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_LocalName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_LocalName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xfa2204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_LocalName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_CreatedOnAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_CreatedOnAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa22b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                               "get_CreatedOnAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.IsLocalNameEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNodeType)>(
    &::System::Xml::XmlNodeReaderNavigator::IsLocalNameEmpty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa21e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "IsLocalNameEmpty", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_Prefix)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa22b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Prefix",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_Value)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xfa22dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_BaseURI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_BaseURI)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa2688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_BaseURI",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_XmlSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlSpace (::System::Xml::XmlNodeReaderNavigator::*)()>(
    &::System::Xml::XmlNodeReaderNavigator::get_XmlSpace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa26ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_XmlSpace",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_XmlLang
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_XmlLang)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa26d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_XmlLang",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_IsEmptyElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_IsEmptyElement)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xfa26f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                               "get_IsEmptyElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_IsDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_IsDefault)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xfa27a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_IsDefault",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_SchemaInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::IXmlSchemaInfo* (::System::Xml::XmlNodeReaderNavigator::*)()>(
    &::System::Xml::XmlNodeReaderNavigator::get_SchemaInfo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa287c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_SchemaInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlNodeReaderNavigator::*)()>(
    &::System::Xml::XmlNodeReaderNavigator::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa28a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_NameTable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_AttributeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_AttributeCount)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xfa28a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                               "get_AttributeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.CheckIndexCondition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(
    &::System::Xml::XmlNodeReaderNavigator::CheckIndexCondition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xfa2ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "CheckIndexCondition",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.InitDecAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::InitDecAttr)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xfa2554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "InitDecAttr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDeclarationAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlDeclaration*, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xfa2b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDeclarationAttr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDeclaration*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDeclarationAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xfa2c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDeclarationAttr",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDecAttrInd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDecAttrInd)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xfa2c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDecAttrInd", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.InitDocTypeAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::InitDocTypeAttr)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xfa2a0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "InitDocTypeAttr",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDocumentTypeAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlDocumentType*, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xfa2d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDocumentTypeAttr", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDocumentTypeAttr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xfa2dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDocumentTypeAttr",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetDocTypeAttrInd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetDocTypeAttrInd)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xfa2e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDocTypeAttrInd",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttributeFromElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlElement*, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xfa2eb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttributeFromElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetAttribute)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xfa2ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttributeFromElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlElement*, ::StringW, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xfa3090;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttributeFromElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::GetAttribute)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xfa30d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(
    &::System::Xml::XmlNodeReaderNavigator::GetAttribute)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xfa32a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.LogMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::LogMove)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfa347c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "LogMove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.RollBackMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(ByRef<int32_t>)>(
    &::System::Xml::XmlNodeReaderNavigator::RollBackMove)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xfa34a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "RollBackMove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_IsOnDeclOrDocType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::get_IsOnDeclOrDocType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xfa34cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                               "get_IsOnDeclOrDocType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.ResetToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(ByRef<int32_t>)>(
    &::System::Xml::XmlNodeReaderNavigator::ResetToAttribute)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xfa3504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "ResetToAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.ResetMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(ByRef<int32_t>, ByRef<::System::Xml::XmlNodeType>)>(
    &::System::Xml::XmlNodeReaderNavigator::ResetMove)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xfa359c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "ResetMove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::XmlNodeType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xfa3768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttributeFromElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlElement*, ::StringW, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::MoveToAttributeFromElement)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xfa3920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttributeFromElement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::StringW, ::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xfa37c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlNodeReaderNavigator::*)(int32_t)>(&::System::Xml::XmlNodeReaderNavigator::MoveToAttribute)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xfa39d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToNextAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(ByRef<int32_t>)>(
    &::System::Xml::XmlNodeReaderNavigator::MoveToNextAttribute)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xfa3ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToNextAttribute",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToParent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToParent)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfa3d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToParent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToFirstChild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToFirstChild)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xfa3da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                               "MoveToFirstChild", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToNextSibling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNode*)>(
    &::System::Xml::XmlNodeReaderNavigator::MoveToNextSibling)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xfa3df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToNextSibling", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToNext)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xfa3e3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToNext",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.MoveToElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)()>(&::System::Xml::XmlNodeReaderNavigator::MoveToElement)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xfa3e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToElement",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.LookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::LookupNamespace)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0xfa3efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.DefaultLookupNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::DefaultLookupNamespace)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xfa41a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "DefaultLookupNamespace",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.LookupPrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::XmlNodeReaderNavigator::*)(::StringW)>(
    &::System::Xml::XmlNodeReaderNavigator::LookupPrefix)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xfa42e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "LookupPrefix", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.GetNamespacesInScope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* (
    ::System::Xml::XmlNodeReaderNavigator::*)(::System::Xml::XmlNamespaceScope)>(&::System::Xml::XmlNodeReaderNavigator::GetNamespacesInScope)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xfa46a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.ReadAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::XmlNodeReaderNavigator::*)(ByRef<int32_t>, ByRef<bool>, ByRef<::System::Xml::XmlNodeType>)>(
    &::System::Xml::XmlNodeReaderNavigator::ReadAttributeValue)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xfa4b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "ReadAttributeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::XmlNodeType>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlNodeReaderNavigator.get_Document
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlNodeReaderNavigator::*)()>(
    &::System::Xml::XmlNodeReaderNavigator::get_Document)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfa4d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Document",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_curNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_curNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___curNode;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_curNode(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___curNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_elemNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_elemNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elemNode;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_elemNode(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elemNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNode*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logNode;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logNode;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_logNode(::System::Xml::XmlNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_attrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrIndex;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_attrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrIndex;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_attrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrIndex = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logAttrIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logAttrIndex;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_logAttrIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logAttrIndex;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_logAttrIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logAttrIndex = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlDocument*& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_doc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_doc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___doc;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_doc(::System::Xml::XmlDocument* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___doc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nAttrInd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nAttrInd;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nAttrInd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nAttrInd;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nAttrInd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nAttrInd = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDeclarationAttrCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDeclarationAttrCount;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDeclarationAttrCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDeclarationAttrCount;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nDeclarationAttrCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nDeclarationAttrCount = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDocTypeAttrCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDocTypeAttrCount;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nDocTypeAttrCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nDocTypeAttrCount;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nDocTypeAttrCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nDocTypeAttrCount = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogLevel;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogLevel;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nLogLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nLogLevel = value;
}
constexpr int32_t& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogAttrInd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogAttrInd;
}
constexpr int32_t const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_nLogAttrInd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nLogAttrInd;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_nLogAttrInd(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nLogAttrInd = value;
}
constexpr bool& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bLogOnAttrVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bLogOnAttrVal;
}
constexpr bool const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bLogOnAttrVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bLogOnAttrVal;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_bLogOnAttrVal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bLogOnAttrVal = value;
}
constexpr bool& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bCreatedOnAttribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bCreatedOnAttribute;
}
constexpr bool const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bCreatedOnAttribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bCreatedOnAttribute;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_bCreatedOnAttribute(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bCreatedOnAttribute = value;
}
constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*>&
System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_decNodeAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decNodeAttributes;
}
constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> const&
System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_decNodeAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___decNodeAttributes;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_decNodeAttributes(
    ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___decNodeAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*>&
System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_docTypeNodeAttributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeNodeAttributes;
}
constexpr ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> const&
System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_docTypeNodeAttributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___docTypeNodeAttributes;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_docTypeNodeAttributes(
    ::ArrayW<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute, ::Array<::System::Xml::__XmlNodeReaderNavigator__VirtualAttribute>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___docTypeNodeAttributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bOnAttrVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bOnAttrVal;
}
constexpr bool const& System::Xml::XmlNodeReaderNavigator::__cordl_internal_get_bOnAttrVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bOnAttrVal;
}
constexpr void System::Xml::XmlNodeReaderNavigator::__cordl_internal_set_bOnAttrVal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bOnAttrVal = value;
}
inline ::System::Xml::XmlNodeReaderNavigator* System::Xml::XmlNodeReaderNavigator::New_ctor(::System::Xml::XmlNode* node) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::XmlNodeReaderNavigator*>(node));
}
inline void System::Xml::XmlNodeReaderNavigator::_ctor(::System::Xml::XmlNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline ::System::Xml::XmlNodeType System::Xml::XmlNodeReaderNavigator::get_NodeType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_NodeType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNodeType, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_NamespaceURI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_NamespaceURI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_LocalName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_LocalName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_CreatedOnAttribute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                             "get_CreatedOnAttribute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::IsLocalNameEmpty(::System::Xml::XmlNodeType nt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "IsLocalNameEmpty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNodeType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nt);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_Prefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Prefix",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_BaseURI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_BaseURI",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Xml::XmlSpace System::Xml::XmlNodeReaderNavigator::get_XmlSpace() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_XmlSpace",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlSpace, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::get_XmlLang() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_XmlLang",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_IsEmptyElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                             "get_IsEmptyElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_IsDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_IsDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::IXmlSchemaInfo* System::Xml::XmlNodeReaderNavigator::get_SchemaInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_SchemaInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::IXmlSchemaInfo*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlNodeReaderNavigator::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_NameTable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XmlNodeReaderNavigator::get_AttributeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                             "get_AttributeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Xml::XmlNodeReaderNavigator::CheckIndexCondition(int32_t attributeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "CheckIndexCondition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeIndex);
}
inline void System::Xml::XmlNodeReaderNavigator::InitDecAttr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "InitDecAttr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr(::System::Xml::XmlDeclaration* decl, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDeclarationAttr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDeclaration*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, decl, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDeclarationAttr(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDeclarationAttr",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline int32_t System::Xml::XmlNodeReaderNavigator::GetDecAttrInd(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDecAttrInd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline void System::Xml::XmlNodeReaderNavigator::InitDocTypeAttr() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "InitDocTypeAttr",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr(::System::Xml::XmlDocumentType* docType, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDocumentTypeAttr", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlDocumentType*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, docType, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetDocumentTypeAttr(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDocumentTypeAttr",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, i);
}
inline int32_t System::Xml::XmlNodeReaderNavigator::GetDocTypeAttrInd(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetDocTypeAttrInd", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttributeFromElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, elem, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttribute(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttributeFromElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, elem, name, ns);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttribute(::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, name, ns);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::GetAttribute(int32_t attributeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, attributeIndex);
}
inline void System::Xml::XmlNodeReaderNavigator::LogMove(int32_t level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "LogMove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline void System::Xml::XmlNodeReaderNavigator::RollBackMove(ByRef<int32_t> level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "RollBackMove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline bool System::Xml::XmlNodeReaderNavigator::get_IsOnDeclOrDocType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(),
                                                                             "get_IsOnDeclOrDocType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::XmlNodeReaderNavigator::ResetToAttribute(ByRef<int32_t> level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "ResetToAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline void System::Xml::XmlNodeReaderNavigator::ResetMove(ByRef<int32_t> level, ByRef<::System::Xml::XmlNodeType> nt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "ResetMove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::XmlNodeType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, nt);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToAttribute(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToAttributeFromElement(::System::Xml::XmlElement* elem, ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttributeFromElement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, elem, name, ns);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToAttribute(::StringW name, ::StringW namespaceURI) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttribute", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, namespaceURI);
}
inline void System::Xml::XmlNodeReaderNavigator::MoveToAttribute(int32_t attributeIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeIndex);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToNextAttribute(ByRef<int32_t> level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToNextAttribute",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToParent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToParent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToFirstChild() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToFirstChild",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToNextSibling(::System::Xml::XmlNode* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToNextSibling", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToNext",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Xml::XmlNodeReaderNavigator::MoveToElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "MoveToElement",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::LookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "LookupNamespace", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::DefaultLookupNamespace(::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "DefaultLookupNamespace",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Xml::XmlNodeReaderNavigator::LookupPrefix(::StringW namespaceName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "LookupPrefix", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, namespaceName);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* System::Xml::XmlNodeReaderNavigator::GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "GetNamespacesInScope", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceScope>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method, scope);
}
inline bool System::Xml::XmlNodeReaderNavigator::ReadAttributeValue(ByRef<int32_t> level, ByRef<bool> bResolveEntity, ByRef<::System::Xml::XmlNodeType> nt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "ReadAttributeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Xml::XmlNodeType>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level, bResolveEntity, nt);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlNodeReaderNavigator::get_Document() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlNodeReaderNavigator*>::get(), "get_Document",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::XmlNodeReaderNavigator::XmlNodeReaderNavigator() {}
