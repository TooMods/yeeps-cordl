#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Document_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBBool_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBNull_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__PrimitiveList_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Primitive_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValueUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExpectedAttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__DynamoDBEntryConversion_def.hpp"
#include "Amazon/Util/zzzz__CircularReferenceTracking_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig.get_CRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::CircularReferenceTracking* (
    ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::*)()>(&::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::get_CRT)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1650244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(),
                                                 "get_CRT", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig.set_CRT
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::*)(
    ::Amazon::Util::CircularReferenceTracking*)>(&::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::set_CRT)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165024c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(), "set_CRT",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::CircularReferenceTracking*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig.get_Conversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DynamoDBEntryConversion* (
    ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::*)()>(&::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::get_Conversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1650254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(),
                                                 "get_Conversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig.set_Conversion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::*)(
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::set_Conversion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x165025c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(), "set_Conversion",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig.get_IsEmptyStringValueEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::get_IsEmptyStringValueEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1650264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(),
                                                 "get_IsEmptyStringValueEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig.set_IsEmptyStringValueEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::*)(bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::set_IsEmptyStringValueEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x165026c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(), "set_IsEmptyStringValueEnabled",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::*)(
    ::Amazon::DynamoDBv2::DynamoDBEntryConversion*, bool)>(&::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1650278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::CircularReferenceTracking*& Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_get__CRT_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CRT_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::CircularReferenceTracking*> const&
Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_get__CRT_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CRT_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_set__CRT_k__BackingField(::Amazon::Util::CircularReferenceTracking* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CRT_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DynamoDBEntryConversion*& Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_get__Conversion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DynamoDBEntryConversion*> const&
Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_get__Conversion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Conversion_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_set__Conversion_k__BackingField(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Conversion_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEmptyStringValueEnabled_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_get__IsEmptyStringValueEnabled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsEmptyStringValueEnabled_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__cordl_internal_set__IsEmptyStringValueEnabled_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsEmptyStringValueEnabled_k__BackingField = value;
}
inline ::Amazon::Util::CircularReferenceTracking* Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::get_CRT() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(),
                                               "get_CRT", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::CircularReferenceTracking*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::set_CRT(::Amazon::Util::CircularReferenceTracking* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(), "set_CRT",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::CircularReferenceTracking*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DynamoDBEntryConversion* Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::get_Conversion() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(),
                                               "get_Conversion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DynamoDBEntryConversion*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::set_Conversion(::Amazon::DynamoDBv2::DynamoDBEntryConversion* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(), "set_Conversion",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::get_IsEmptyStringValueEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(),
                                               "get_IsEmptyStringValueEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::set_IsEmptyStringValueEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(), "set_IsEmptyStringValueEnabled",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*
Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::New_ctor(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>(conversion, isEmptyStringValueEnabled));
}
inline void Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::_ctor(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion, bool isEmptyStringValueEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, conversion, isEmptyStringValueEnabled);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig::__DynamoDBEntry__AttributeConversionConfig() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ConvertToAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::Model::AttributeValue* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ConvertToAttributeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ConvertToExpectedAttributeValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ConvertToExpectedAttributeValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x164dfcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "ConvertToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ConvertToAttributeUpdateValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AttributeValueUpdate* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ConvertToAttributeUpdateValue)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x164e080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "ConvertToAttributeUpdateValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Primitive* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsPrimitive)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x164e180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "AsPrimitive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsPrimitiveList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsPrimitiveList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x164e1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "AsPrimitiveList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsDynamoDBList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDynamoDBList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x164e270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "AsDynamoDBList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsDynamoDBBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDynamoDBBool)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x164e2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "AsDynamoDBBool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsDynamoDBNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDynamoDBNull)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x164e360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "AsDynamoDBNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Document* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDocument)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x164e3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "AsDocument", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ToConvertedEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)(::Amazon::DynamoDBv2::DynamoDBEntryConversion*)>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToConvertedEntry)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164e450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "ToConvertedEntry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ToPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Primitive* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToPrimitive)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x164e508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "ToPrimitive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ToPrimitiveList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToPrimitiveList)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x164e55c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "ToPrimitiveList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ToDynamoDBList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDynamoDBList)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x164e5b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "ToDynamoDBList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ToDynamoDBBool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDynamoDBBool)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x164e604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "ToDynamoDBBool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ToDynamoDBNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDynamoDBNull)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x164e658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "ToDynamoDBNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.ToDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::Document* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDocument)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x164e6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               "ToDocument", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsBoolean
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsBoolean)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164e700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164e740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_bool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_bool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x164e85c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164e878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(uint8_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164e8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_uint8_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint8_t)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x164e94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsSByte
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsSByte)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164e968;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(int8_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164e9a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_int8_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int8_t)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x164ea3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsUShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsUShort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164ea58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(uint16_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164ea98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_uint16_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint16_t)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x164eb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsShort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsShort)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164eb48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(int16_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164eb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_int16_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int16_t)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x164ec1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsUInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsUInt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164ec38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(uint32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164ec78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_uint32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint32_t)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x164ed0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsInt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsInt)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164ed28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(int32_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164ed68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_int32_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x164edfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsULong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsULong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164ee18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(uint64_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164ee58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_uint64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164eeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsLong
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsLong)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164ef0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(int64_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164ef4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_int64_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164efe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsSingle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsSingle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f000;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(float_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164f040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_float_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsDouble
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDouble)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f0f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(double_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164f134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_double_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsDecimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDecimal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f1e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Decimal)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x164f228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Decimal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsChar)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(char16_t)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164f350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit_char16_t
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_char16_t)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f404;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::StringW)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x164f444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___StringW
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDateTime)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f520;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x164f560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__DateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__DateTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsGuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsGuid)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Guid)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x164f654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Guid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Guid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsByteArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f714;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164f754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___ArrayW_uint8_t___Array_uint8_t___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___ArrayW_uint8_t___Array_uint8_t___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MemoryStream* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsMemoryStream)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f7d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::IO::MemoryStream*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164f814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__IO__MemoryStream_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::MemoryStream* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__IO__MemoryStream_)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164f874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsArrayOfDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsArrayOfDynamoDBEntry)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164f894;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsListOfDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfDynamoDBEntry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f8f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsHashSetOfDynamoDBEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfDynamoDBEntry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f934;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsArrayOfPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsArrayOfPrimitive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164f974;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164f9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164fa14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsListOfPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfPrimitive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164fa34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164fa74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164fad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsHashSetOfPrimitive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfPrimitive)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164faf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164fb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164fb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsListOfDocument
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfDocument)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164fbb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x164fbf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164fce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsArrayOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsArrayOfString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164fd04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164fd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___ArrayW___StringW___Array___StringW___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___ArrayW___StringW___Array___StringW___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164fda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsListOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164fdc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164fe04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__List_1___StringW__
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___StringW__)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164fe64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsHashSetOfString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164fe84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164fec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__HashSet_1___StringW__
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___StringW__)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164ff24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsListOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfByteArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x164ff44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x164ff84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x164ffe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsHashSetOfByteArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfByteArray)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1650004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1650044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x16500a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsListOfMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfMemoryStream)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x16500c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1650104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1650164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.AsHashSetOfMemoryStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* (
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(&::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfMemoryStream)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1650184;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 37));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (*)(::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x16501c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.op_Explicit___System__Collections__Generic__HashSet_1___System__IO__MemoryStream___
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* (*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
        &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___System__IO__MemoryStream___)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1650224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::Clone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x164dcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::ICloneable"
constexpr Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::i___System__ICloneable() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
inline ::Amazon::DynamoDBv2::Model::AttributeValue*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ConvertToAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValue*, false>(this, ___internal_method, conversionConfig);
}
inline ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ConvertToExpectedAttributeValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "ConvertToExpectedAttributeValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*, false>(this, ___internal_method, conversionConfig);
}
inline ::Amazon::DynamoDBv2::Model::AttributeValueUpdate*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ConvertToAttributeUpdateValue(::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig* conversionConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "ConvertToAttributeUpdateValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::__DynamoDBEntry__AttributeConversionConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AttributeValueUpdate*, false>(this, ___internal_method, conversionConfig);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsPrimitive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "AsPrimitive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Primitive*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsPrimitiveList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "AsPrimitiveList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDynamoDBList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "AsDynamoDBList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDynamoDBBool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "AsDynamoDBBool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDynamoDBNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "AsDynamoDBNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDocument() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "AsDocument", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToConvertedEntry(::Amazon::DynamoDBv2::DynamoDBEntryConversion* conversion) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "ToConvertedEntry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DynamoDBEntryConversion*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, conversion);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Primitive* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToPrimitive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "ToPrimitive", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Primitive*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::PrimitiveList* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToPrimitiveList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "ToPrimitiveList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::PrimitiveList*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBList* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDynamoDBList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "ToDynamoDBList", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBList*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDynamoDBBool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "ToDynamoDBBool", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBBool*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDynamoDBNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "ToDynamoDBNull", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBNull*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Document* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::ToDocument() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             "ToDocument", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::Document*, false>(this, ___internal_method);
}
template <typename T> inline T Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::Validate(T item) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                                  "Validate", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, item);
}
inline bool Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsBoolean() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(bool data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline bool Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_bool(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, p);
}
inline uint8_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint8_t data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline uint8_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint8_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, p);
}
inline int8_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsSByte() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int8_t data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline int8_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int8_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int8_t, false>(nullptr, ___internal_method, p);
}
inline uint16_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsUShort() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint16_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline uint16_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint16_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint16_t, false>(nullptr, ___internal_method, p);
}
inline int16_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsShort() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int16_t data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline int16_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int16_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(nullptr, ___internal_method, p);
}
inline uint32_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsUInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline uint32_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint32_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, p);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsInt() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int32_t data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline int32_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int32_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, p);
}
inline uint64_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsULong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(uint64_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline uint64_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_uint64_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, p);
}
inline int64_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsLong() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(int64_t data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline int64_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_int64_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, p);
}
inline float_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsSingle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(float_t data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline float_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_float_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, p);
}
inline double_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDouble() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(double_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline double_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_double_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, p);
}
inline ::System::Decimal Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDecimal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Decimal data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Decimal Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Decimal(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Decimal, false>(nullptr, ___internal_method, p);
}
inline char16_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsChar() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(char16_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline char16_t Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit_char16_t(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, p);
}
inline ::StringW Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::StringW data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::StringW Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___StringW(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, p);
}
inline ::System::DateTime Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsDateTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::DateTime data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::DateTime Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__DateTime(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(nullptr, ___internal_method, p);
}
inline ::System::Guid Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsGuid() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Guid data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Guid Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Guid(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(nullptr, ___internal_method, p);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::ArrayW<uint8_t, ::Array<uint8_t>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___ArrayW_uint8_t___Array_uint8_t___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, p);
}
inline ::System::IO::MemoryStream* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsMemoryStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::IO::MemoryStream* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::IO::MemoryStream* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__IO__MemoryStream_(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::MemoryStream*, false>(nullptr, ___internal_method, p);
}
inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsArrayOfDynamoDBEntry() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, ::Array<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfDynamoDBEntry() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfDynamoDBEntry() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method);
}
inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsArrayOfPrimitive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(
    ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___ArrayW___Amazon__DynamoDBv2__DocumentModel__Primitive____Array___Amazon__DynamoDBv2__DocumentModel__Primitive____(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Amazon::DynamoDBv2::DocumentModel::Primitive*, ::Array<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>, false>(nullptr, ___internal_method,
                                                                                                                                                                          p);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfPrimitive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfPrimitive() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(
    ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___Amazon__DynamoDBv2__DocumentModel__Primitive___(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::Amazon::DynamoDBv2::DocumentModel::Primitive*>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfDocument() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___Amazon__DynamoDBv2__DocumentModel__Document___(
    ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DocumentModel::Document*>*, false>(nullptr, ___internal_method, p);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsArrayOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::ArrayW<::StringW, ::Array<::StringW>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*>
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___ArrayW___StringW___Array___StringW___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::StringW>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::StringW>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::HashSet_1<::StringW>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___StringW__(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 34)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfByteArray() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(
    ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___ArrayW_uint8_t___Array_uint8_t_____(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsListOfMemoryStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 36)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::List_1<::System::IO::MemoryStream*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__List_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::IO::MemoryStream*>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::AsHashSetOfMemoryStream() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 37)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Implicit___Amazon__DynamoDBv2__DocumentModel__DynamoDBEntry_(::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Implicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(nullptr, ___internal_method, data);
}
inline ::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*
Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::op_Explicit___System__Collections__Generic__HashSet_1___System__IO__MemoryStream___(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* p) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), "op_Explicit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::System::IO::MemoryStream*>*, false>(nullptr, ___internal_method, p);
}
inline ::System::Object* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::Clone() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(), 38)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry::DynamoDBEntry() {}
