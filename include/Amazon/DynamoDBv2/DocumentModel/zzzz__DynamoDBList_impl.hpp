#pragma once
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBList_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1653750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c._AsListOfDocument_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::Document* (::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::_AsListOfDocument_b__24_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1653758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get(), "<AsListOfDocument>b__24_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::setStaticF___9(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get>(
      std::forward<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>(value));
}
inline ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c* Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get>();
}
inline void Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::setStaticF___9__24_0(
    ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*, "<>9__24_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get>(
      std::forward<::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*>(value));
}
inline ::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*
Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::getStaticF___9__24_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Amazon::DynamoDBv2::DocumentModel::Document*>*, "<>9__24_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get>();
}
inline ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c* Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::_AsListOfDocument_b__24_0(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c*>::get(), "<AsListOfDocument>b__24_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBList____c::__DynamoDBList____c() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.CreateConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::CreateConversion)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x1651ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                                               "CreateConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1651ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(
    ::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*)>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164fc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.get_Entries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::get_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1651f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                                               "get_Entries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.set_Entries
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*)>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::set_Entries)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1651f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "set_Entries", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(int32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1651f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "get_Item",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(
    int32_t, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::set_Item)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x1651fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::Add)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x16520b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.ForceConversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::ForceConversion)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x1652158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "ForceConversion", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.ConvertToAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::Model::AttributeValue* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::ConvertToAttributeValue)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x1652318;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::Clone)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1652738;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)(::System::Object*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::Equals)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x165290c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::GetHashCode)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x1652a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsArrayOfDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsArrayOfDynamoDBEntry)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1652c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1652ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____Array___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____Array___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1652d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsListOfDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfDynamoDBEntry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1652d20;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1652d28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1652d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsListOfDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfDocument)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x1652da8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1652ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1652f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsArrayOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsArrayOfString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1652f70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1652fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___ArrayW___StringW___Array___StringW___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___ArrayW___StringW___Array___StringW___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1653058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsListOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1653078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16530f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___System__Collections__Generic__List_1___StringW__
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___StringW__)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1653180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsHashSetOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsHashSetOfString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16531a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1653220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___System__Collections__Generic__HashSet_1___StringW__
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__HashSet_1___StringW__)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16532a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsListOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfByteArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16532c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1653348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16533d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsHashSetOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsHashSetOfByteArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16533f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1653470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x16534f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.AsListOfMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfMemoryStream)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1653578;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (*)(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x16535f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList.op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1653680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*&
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::__cordl_internal_get__Entries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Entries_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::__cordl_internal_get__Entries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Entries_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::__cordl_internal_set__Entries_k__BackingField(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Entries_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::DynamoDBv2::DocumentModel::DynamoDBList::setStaticF_conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "conversion",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get>(
      std::forward<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>(value));
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::getStaticF_conversion() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, "conversion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get>();
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::CreateConversion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                                             "CreateConversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(nullptr, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::DynamoDBList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::New_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>(entries));
}
inline void Amazon::DynamoDBv2::DocumentModel::DynamoDBList::_ctor(::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* entries) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entries);
}
template <typename T> inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::Create(::System::Collections::Generic::IEnumerable_1<T>* items) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "Create",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, items);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::get_Entries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(),
                                                                             "get_Entries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::DynamoDBList::set_Entries(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "set_Entries", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "get_Item",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, i);
}
inline void Amazon::DynamoDBv2::DocumentModel::DynamoDBList::set_Item(int32_t i, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "set_Item", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, value);
}
inline void Amazon::DynamoDBv2::DocumentModel::DynamoDBList::Add(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::ForceConversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "ForceConversion", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(this, ___internal_method, conversion);
}
inline ::Amazon::DynamoDBv2::Model::AttributeValue*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValue*, false>(this, ___internal_method, conversionConfig);
}
inline ::System::Object* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DocumentModel::DynamoDBList::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::DynamoDBList::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsArrayOfDynamoDBEntry() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____Array___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry____(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>, false>(
      nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfDynamoDBEntry() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry___(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfDocument() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*, false>(nullptr, ___internal_method, p);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsArrayOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::ArrayW<::StringW, ::Array<::StringW>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*>
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___ArrayW___StringW___Array___StringW___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::StringW>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::StringW>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsHashSetOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::HashSet_1<::StringW>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__HashSet_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsHashSetOfByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBList::AsListOfMemoryStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBList_(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBList::op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*, false>(nullptr, ___internal_method, p);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList::DynamoDBList() {}
