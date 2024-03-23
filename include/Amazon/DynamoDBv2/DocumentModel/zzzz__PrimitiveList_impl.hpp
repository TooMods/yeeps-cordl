#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntryType_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntryType_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::*)(
    ::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(&::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::Compare)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x165b63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165b86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::operator ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>"
constexpr ::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::i___System__Collections__Generic__IComparer_1___Amazon__DynamoDBv2__DocumentModel__Primitive__() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::setStaticF_Comparer(::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*, "Comparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>::get>(
      std::forward<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>(value));
}
inline ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer* Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::getStaticF_Comparer() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*, "Comparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>::get>();
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::Compare(::Amazon::DynamoDBv2::DocumentModel::Primitive* x, ::Amazon::DynamoDBv2::DocumentModel::Primitive* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>::get(), "Compare", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer* Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__PrimitiveList__PrimitiveComparer::__PrimitiveList__PrimitiveComparer() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1659bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1657948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*)>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::_ctor)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x1659bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.get_Entries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::get_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1659fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                               "get_Entries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.set_Entries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*)>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::set_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1659fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "set_Entries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1659fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                               "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.set_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::set_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1659fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Primitive* (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(int32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1659fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(
    int32_t, ::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::set_Item)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x165a02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(::Amazon::DynamoDBv2::DocumentModel::Primitive*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16579d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.ConvertToAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::Model::AttributeValue* (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::ConvertToAttributeValue)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x165a0fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.GetSortedEntries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::GetSortedEntries)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x165a5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                               "GetSortedEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsArrayOfPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsArrayOfPrimitive)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x165a67c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x165a6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165a7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsListOfPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfPrimitive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165a7e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x165a760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165a7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsHashSetOfPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsHashSetOfPrimitive)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x165a808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x165a8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165a918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsArrayOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsArrayOfString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x165a938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x165a998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___ArrayW___StringW___Array___StringW___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___ArrayW___StringW___Array___StringW___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165aa20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsListOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x165aa40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x165aac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___System__Collections__Generic__List_1___StringW__
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___StringW__)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165ab48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsHashSetOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsHashSetOfString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x165ab68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x165abe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___System__Collections__Generic__HashSet_1___StringW__
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__HashSet_1___StringW__)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165ac70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsListOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfByteArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x165ac90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x165ad10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165ad98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsHashSetOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsHashSetOfByteArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x165adb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x165ae38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x165aec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.AsListOfMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* (
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfMemoryStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x165af40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (*)(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x165afc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* (*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x165b048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Clone)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x165b068;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::GetHashCode)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x165b244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(::System::Object*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Equals)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x165b408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*)>(
    &::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x165b588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>"
constexpr Amazon::DynamoDBv2::DocumentModel::PrimitiveList::operator ::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>*() noexcept {
  return static_cast<::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>"
constexpr ::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::i___System__IEquatable_1___Amazon__DynamoDBv2__DocumentModel__PrimitiveList__() noexcept {
  return static_cast<::System::IEquatable_1<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*& Amazon::DynamoDBv2::DocumentModel::PrimitiveList::__cordl_internal_get__Entries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Entries_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> const&
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::__cordl_internal_get__Entries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Entries_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::__cordl_internal_set__Entries_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Entries_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType& Amazon::DynamoDBv2::DocumentModel::PrimitiveList::__cordl_internal_get__Type_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType const& Amazon::DynamoDBv2::DocumentModel::PrimitiveList::__cordl_internal_get__Type_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Type_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::__cordl_internal_set__Type_k__BackingField(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Type_k__BackingField = value;
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::setStaticF_V1Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "V1Conversion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get>(
      std::forward<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>(value));
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::getStaticF_V1Conversion() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "V1Conversion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get>();
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::New_ctor(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>(type));
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::_ctor(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::New_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* primitives) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>(primitives));
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* primitives) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, primitives);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::get_Entries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                             "get_Entries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::set_Entries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "set_Entries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType Amazon::DynamoDBv2::DocumentModel::PrimitiveList::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                             "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::set_Type(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "set_Type", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntryType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Primitive*, false>(this, ___internal_method, i);
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::set_Item(int32_t i, ::Amazon::DynamoDBv2::DocumentModel::Primitive* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, value);
}
inline void Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Add(::Amazon::DynamoDBv2::DocumentModel::Primitive* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Primitive*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::Model::AttributeValue*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValue*, false>(this, ___internal_method, conversionConfig);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::GetSortedEntries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(),
                                                                             "GetSortedEntries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsArrayOfPrimitive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____(
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>, false>(nullptr, ___internal_method,
                                                                                                                                                                          p);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfPrimitive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsHashSetOfPrimitive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(
    ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(
    ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(nullptr, ___internal_method, p);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsArrayOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::ArrayW<::StringW, ::Array<::StringW>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*>
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___ArrayW___StringW___Array___StringW___(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::List_1<::StringW>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::StringW>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsHashSetOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::HashSet_1<::StringW>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__HashSet_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsHashSetOfByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(
    ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::AsListOfMemoryStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__PrimitiveList_(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*
Amazon::DynamoDBv2::DocumentModel::PrimitiveList::op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Object* Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::PrimitiveList::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool Amazon::DynamoDBv2::DocumentModel::PrimitiveList::Equals(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* other) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList::PrimitiveList() {}
