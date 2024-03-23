#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__BoolAsNConverter_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__IPropertyConverter_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__BoolConverterV1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::BoolAsNConverter.ToEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* (::Amazon::DynamoDBv2::BoolAsNConverter::*)(::System::Object*)>(
    &::Amazon::DynamoDBv2::BoolAsNConverter::ToEntry)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x120f220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get(), "ToEntry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BoolAsNConverter.FromEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Amazon::DynamoDBv2::BoolAsNConverter::*)(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*)>(
    &::Amazon::DynamoDBv2::BoolAsNConverter::FromEntry)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x120f288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get(), "FromEntry", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::BoolAsNConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::BoolAsNConverter::*)()>(&::Amazon::DynamoDBv2::BoolAsNConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120f2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
constexpr Amazon::DynamoDBv2::BoolAsNConverter::operator ::Amazon::DynamoDBv2::DataModel::IPropertyConverter*() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::DynamoDBv2::DataModel::IPropertyConverter"
constexpr ::Amazon::DynamoDBv2::DataModel::IPropertyConverter* Amazon::DynamoDBv2::BoolAsNConverter::i___Amazon__DynamoDBv2__DataModel__IPropertyConverter() noexcept {
  return static_cast<::Amazon::DynamoDBv2::DataModel::IPropertyConverter*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::BoolAsNConverter::setStaticF_v1Converter(::Amazon::DynamoDBv2::BoolConverterV1* value) {
  ::cordl_internals::setStaticField<::Amazon::DynamoDBv2::BoolConverterV1*, "v1Converter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get>(
      std::forward<::Amazon::DynamoDBv2::BoolConverterV1*>(value));
}
inline ::Amazon::DynamoDBv2::BoolConverterV1* Amazon::DynamoDBv2::BoolAsNConverter::getStaticF_v1Converter() {
  return ::cordl_internals::getStaticField<::Amazon::DynamoDBv2::BoolConverterV1*, "v1Converter",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get>();
}
inline void Amazon::DynamoDBv2::BoolAsNConverter::setStaticF_boolType(::System::Type* value) {
  ::cordl_internals::setStaticField<::System::Type*, "boolType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get>(
      std::forward<::System::Type*>(value));
}
inline ::System::Type* Amazon::DynamoDBv2::BoolAsNConverter::getStaticF_boolType() {
  return ::cordl_internals::getStaticField<::System::Type*, "boolType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get>();
}
inline ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* Amazon::DynamoDBv2::BoolAsNConverter::ToEntry(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get(), "ToEntry", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*, false>(this, ___internal_method, value);
}
inline ::System::Object* Amazon::DynamoDBv2::BoolAsNConverter::FromEntry(::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry* entry) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get(), "FromEntry", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, entry);
}
inline ::Amazon::DynamoDBv2::BoolAsNConverter* Amazon::DynamoDBv2::BoolAsNConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::BoolAsNConverter*>());
}
inline void Amazon::DynamoDBv2::BoolAsNConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::BoolAsNConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::BoolAsNConverter::BoolAsNConverter() {}
