#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__UnconvertedDynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)(::System::Object*)>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x164e7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.ConvertToAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AttributeValue* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*)>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::ConvertToAttributeValue)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x1650300;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.Convert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::Convert)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x164e4e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::Clone)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x16504b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsBoolean)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x165051c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsByte)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1650650;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsString)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1650784;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsChar)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x16508a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsDateTime)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x16509d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsDecimal)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1650b08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsDouble)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1650c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsInt)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1650d74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsLong)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1650ea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsSByte)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1650fdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsShort)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1651110;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsSingle)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1651244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsUInt)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x1651378;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsULong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsULong)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x16514ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsUShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsUShort)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x16515e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsArrayOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsArrayOfString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1651714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsByteArray)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x165171c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsGuid)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1651788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MemoryStream* (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsMemoryStream)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16517fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsListOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsListOfString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1651874;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsHashSetOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsHashSetOfByteArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16518ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsHashSetOfMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsHashSetOfMemoryStream)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1651964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsHashSetOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsHashSetOfString)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x16519dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsListOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsListOfByteArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1651a54;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.AsListOfMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* (
    ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsListOfMemoryStream)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1651acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::GetHashCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1651b44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::*)(::System::Object*)>(
    &::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::Equals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1651c08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 0));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::__cordl_internal_get_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::__cordl_internal_get_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Value;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::__cordl_internal_set_Value(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::__cordl_internal_get_ValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::__cordl_internal_get_ValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ValueType;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::__cordl_internal_set_ValueType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ValueType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::New_ctor(::System::Object* value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>(value));
}
inline void Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::_ctor(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::Model::AttributeValue*
Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValue*, false>(this, ___internal_method, conversionConfig);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::Convert(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), "Convert", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, conversion);
}
inline ::System::Object* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::Clone() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsBoolean() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline uint8_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsByte() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline char16_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsChar() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsDateTime() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::System::Decimal Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsDecimal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline double_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsDouble() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsInt() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int64_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsLong() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int8_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsSByte() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method);
}
inline int16_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsShort() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline float_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsSingle() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline uint32_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsUInt() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint64_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsULong() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline uint16_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsUShort() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsArrayOfString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsByteArray() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::Guid Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsGuid() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::System::IO::MemoryStream* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsMemoryStream() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsListOfString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsHashSetOfByteArray() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsHashSetOfMemoryStream() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsHashSetOfString() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsListOfByteArray() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::AsListOfMemoryStream() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*, false>(this, ___internal_method);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::UnconvertedDynamoDBEntry::UnconvertedDynamoDBEntry() {}
