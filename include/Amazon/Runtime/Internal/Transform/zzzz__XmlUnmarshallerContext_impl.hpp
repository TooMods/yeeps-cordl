#pragma once
#include "Amazon/Runtime/Internal/Transform/zzzz__UnmarshallerContext_impl.hpp"
#include "System/Xml/zzzz__XmlNodeType_impl.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__XmlUnmarshallerContext_def.hpp"
#include "Amazon/Runtime/Internal/Transform/zzzz__IWebResponseData_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/IO/zzzz__StreamReader_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReaderSettings_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_Stream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_Stream)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x244e6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "get_Stream",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_AllowEmptyElementLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (
    ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(&::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_AllowEmptyElementLookup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244e714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                 "get_AllowEmptyElementLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.set_AllowEmptyElementLookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)(
    ::System::Collections::Generic::HashSet_1<::StringW>*)>(&::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::set_AllowEmptyElementLookup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244e71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "set_AllowEmptyElementLookup",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_XmlReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlReader* (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_XmlReader)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x244e724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "get_XmlReader",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)(
    ::System::IO::Stream*, bool, ::Amazon::Runtime::Internal::Transform::IWebResponseData*, bool)>(&::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::_ctor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2449e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_CurrentPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_CurrentPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x244e7d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_CurrentDepth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_CurrentDepth)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x244e7d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::Read)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0x244e820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.ReadText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::ReadText)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x244f1d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_IsStartElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsStartElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x244f2bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_IsEndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsEndElement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x244f2cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_IsStartOfDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsStartOfDocument)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x244f2dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.get_IsAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsAttribute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x244f30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "get_IsAttribute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.StackToPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::Stack_1<::StringW>*)>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::StackToPath)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x244ed98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "StackToPath", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.ReadElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)()>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::ReadElement)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x244eec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "ReadElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::*)(bool)>(
    &::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x244f31c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 12));
    return ___internal_method;
  }
};
constexpr ::System::IO::StreamReader*& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_streamReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StreamReader*> const& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_streamReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___streamReader;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_streamReader(::System::IO::StreamReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___streamReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlReader*& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get__xmlReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlReader;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get__xmlReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlReader;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set__xmlReader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xmlReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::StringW>*& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::StringW>*> const&
Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stack;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_stack(::System::Collections::Generic::Stack_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_stackString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackString;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_stackString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stackString;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_stackString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stackString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_attributeValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_attributeValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeValues;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_attributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_attributeNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_attributeNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeNames;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_attributeNames(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::StringW>*& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_attributeEnumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeEnumerator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::StringW>*> const&
Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_attributeEnumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attributeEnumerator;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_attributeEnumerator(::System::Collections::Generic::IEnumerator_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___attributeEnumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::XmlNodeType& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_nodeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr ::System::Xml::XmlNodeType const& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_nodeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeType;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_nodeType(::System::Xml::XmlNodeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nodeType = value;
}
constexpr ::StringW& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_nodeContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeContent;
}
constexpr ::StringW const& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_nodeContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nodeContent;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_nodeContent(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nodeContent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr bool const& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposed;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposed = value;
}
constexpr bool& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_currentlyProcessingEmptyElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentlyProcessingEmptyElement;
}
constexpr bool const& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get_currentlyProcessingEmptyElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentlyProcessingEmptyElement;
}
constexpr void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set_currentlyProcessingEmptyElement(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentlyProcessingEmptyElement = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get__AllowEmptyElementLookup_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowEmptyElementLookup_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_get__AllowEmptyElementLookup_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowEmptyElementLookup_k__BackingField;
}
constexpr void
Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::__cordl_internal_set__AllowEmptyElementLookup_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AllowEmptyElementLookup_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::setStaticF_READER_SETTINGS(::System::Xml::XmlReaderSettings* value) {
  ::cordl_internals::setStaticField<::System::Xml::XmlReaderSettings*, "READER_SETTINGS",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get>(
      std::forward<::System::Xml::XmlReaderSettings*>(value));
}
inline ::System::Xml::XmlReaderSettings* Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::getStaticF_READER_SETTINGS() {
  return ::cordl_internals::getStaticField<::System::Xml::XmlReaderSettings*, "READER_SETTINGS",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get>();
}
inline void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::setStaticF_nodesToSkip(::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>*, "nodesToSkip",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get>(
      std::forward<::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>* Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::getStaticF_nodesToSkip() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Xml::XmlNodeType>*, "nodesToSkip",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get>();
}
inline ::System::IO::Stream* Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_Stream() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "get_Stream",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_AllowEmptyElementLookup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(),
                                               "get_AllowEmptyElementLookup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::set_AllowEmptyElementLookup(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "set_AllowEmptyElementLookup",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlReader* Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_XmlReader() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "get_XmlReader",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlReader*, false>(this, ___internal_method);
}
/// @param isException: bool (default: false)
inline ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*
Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::New_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                       ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>(responseStream, maintainResponseBody, responseData, isException));
}
/// @param isException: bool (default: false)
inline void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::_ctor(::System::IO::Stream* responseStream, bool maintainResponseBody,
                                                                                ::Amazon::Runtime::Internal::Transform::IWebResponseData* responseData, bool isException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::Transform::IWebResponseData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, responseStream, maintainResponseBody, responseData, isException);
}
inline ::StringW Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_CurrentPath() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_CurrentDepth() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::Read() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::ReadText() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsStartElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsEndElement() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsStartOfDocument() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::get_IsAttribute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "get_IsAttribute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::StackToPath(::System::Collections::Generic::Stack_1<::StringW>* stack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "StackToPath", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Stack_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, stack);
}
inline void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::ReadElement() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), "ReadElement",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::Transform::XmlUnmarshallerContext::XmlUnmarshallerContext() {}
