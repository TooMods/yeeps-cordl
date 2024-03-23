#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__Converter_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBBool_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.GetTargetTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::Amazon::DynamoDBv2::Converter::*)()>(
    &::Amazon::DynamoDBv2::Converter::GetTargetTypes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.get_Conversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (::Amazon::DynamoDBv2::Converter::*)()>(
    &::Amazon::DynamoDBv2::Converter::get_Conversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120b354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "get_Conversion",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.set_Conversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Converter::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(
    &::Amazon::DynamoDBv2::Converter::set_Conversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120b35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "set_Conversion", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.ToEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (::Amazon::DynamoDBv2::Converter::*)(::System::Object*)>(
    &::Amazon::DynamoDBv2::Converter::ToEntry)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1209054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "ToEntry", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryToEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>)>(&::Amazon::DynamoDBv2::Converter::TryToEntry)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1208aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "TryToEntry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.FromEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::Amazon::DynamoDBv2::Converter::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::System::Type*)>(&::Amazon::DynamoDBv2::Converter::FromEntry)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x12092cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "FromEntry", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryFromEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::Converter::TryFromEntry)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x1208d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "TryFromEntry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*>)>(&::Amazon::DynamoDBv2::Converter::TryTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b364;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*>)>(
    &::Amazon::DynamoDBv2::Converter::TryTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b370;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*>)>(&::Amazon::DynamoDBv2::Converter::TryTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b37c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*>)>(&::Amazon::DynamoDBv2::Converter::TryTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b388;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::System::Object*, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*>)>(
    &::Amazon::DynamoDBv2::Converter::TryTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b394;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::Converter::TryFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b3a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::Converter::TryFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b3ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::Converter::TryFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b3b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::Converter::TryFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b3c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter.TryFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::Amazon::DynamoDBv2::Converter::*)(::Amazon::DynamoDBv2::DocumentModel::Document*, ::System::Type*, ByRef<::System::Object*>)>(&::Amazon::DynamoDBv2::Converter::TryFrom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x120b3d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Converter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Converter::*)()>(&::Amazon::DynamoDBv2::Converter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120b3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::Converter::__cordl_internal_get__Conversion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const& Amazon::DynamoDBv2::Converter::__cordl_internal_get__Conversion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::Converter::__cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Conversion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Amazon::DynamoDBv2::Converter::GetTargetTypes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::Converter::get_Conversion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "get_Conversion",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Converter::set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "set_Conversion", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::Converter::ToEntry(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "ToEntry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Converter::TryToEntry(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*> entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "TryToEntry", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, entry);
}
inline ::System::Object* Amazon::DynamoDBv2::Converter::FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ::System::Type* targetType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "FromEntry", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, entry, targetType);
}
inline bool Amazon::DynamoDBv2::Converter::TryFromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry, ::System::Type* targetType, ByRef<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), "TryFromEntry", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Object*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry, targetType, value);
}
inline bool Amazon::DynamoDBv2::Converter::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*> b) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, b);
}
inline bool Amazon::DynamoDBv2::Converter::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Primitive*> p) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, p);
}
inline bool Amazon::DynamoDBv2::Converter::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*> pl) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, pl);
}
inline bool Amazon::DynamoDBv2::Converter::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*> l) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, l);
}
inline bool Amazon::DynamoDBv2::Converter::TryTo(::System::Object* value, ByRef<::Amazon::DynamoDBv2::DocumentModel::Document*> d) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value, d);
}
inline bool Amazon::DynamoDBv2::Converter::TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* b, ::System::Type* targetType, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, b, targetType, result);
}
inline bool Amazon::DynamoDBv2::Converter::TryFrom(::Amazon::DynamoDBv2::DocumentModel::Primitive* p, ::System::Type* targetType, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, p, targetType, result);
}
inline bool Amazon::DynamoDBv2::Converter::TryFrom(::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* pl, ::System::Type* targetType, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pl, targetType, result);
}
inline bool Amazon::DynamoDBv2::Converter::TryFrom(::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* l, ::System::Type* targetType, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, l, targetType, result);
}
inline bool Amazon::DynamoDBv2::Converter::TryFrom(::Amazon::DynamoDBv2::DocumentModel::Document* d, ::System::Type* targetType, ByRef<::System::Object*> result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, d, targetType, result);
}
inline ::Amazon::DynamoDBv2::Converter* Amazon::DynamoDBv2::Converter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Converter*>());
}
inline void Amazon::DynamoDBv2::Converter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Converter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Converter::Converter() {}
