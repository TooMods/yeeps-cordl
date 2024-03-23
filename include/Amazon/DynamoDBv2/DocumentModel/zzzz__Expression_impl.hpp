#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Expression_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__DynamoDBEntry_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DeleteItemRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__PutItemRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__QueryRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ScanRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateItemRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.get_IsSet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::Expression::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::Expression::get_IsSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1654730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                               "get_IsSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.get_ExpressionStatement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DocumentModel::Expression::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::Expression::get_ExpressionStatement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                               "get_ExpressionStatement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.set_ExpressionStatement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DocumentModel::Expression::set_ExpressionStatement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "set_ExpressionStatement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.get_ExpressionAttributeNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::Amazon::DynamoDBv2::DocumentModel::Expression::*)()>(&::Amazon::DynamoDBv2::DocumentModel::Expression::get_ExpressionAttributeNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                               "get_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.set_ExpressionAttributeNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Amazon::DynamoDBv2::DocumentModel::Expression::set_ExpressionAttributeNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "set_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.get_ExpressionAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* (
    ::Amazon::DynamoDBv2::DocumentModel::Expression::*)()>(&::Amazon::DynamoDBv2::DocumentModel::Expression::get_ExpressionAttributeValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                               "get_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.set_ExpressionAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*)>(&::Amazon::DynamoDBv2::DocumentModel::Expression::set_ExpressionAttributeValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1654768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "set_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.ApplyExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)(
    ::Amazon::DynamoDBv2::Model::ScanRequest*, ::Amazon::DynamoDBv2::DocumentModel::Table*)>(&::Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1654770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ScanRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.ApplyExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)(
    ::Amazon::DynamoDBv2::Model::DeleteItemRequest*, ::Amazon::DynamoDBv2::DocumentModel::Table*)>(&::Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1654b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.ApplyExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)(
    ::Amazon::DynamoDBv2::Model::PutItemRequest*, ::Amazon::DynamoDBv2::DocumentModel::Table*)>(&::Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1654c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::PutItemRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.ApplyExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)(
    ::Amazon::DynamoDBv2::Model::UpdateItemRequest*, ::Amazon::DynamoDBv2::DocumentModel::Table*)>(&::Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1654ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::UpdateItemRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.ApplyExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::Model::QueryRequest*, ::Amazon::DynamoDBv2::DocumentModel::Table*,
                                                                                           ::Amazon::DynamoDBv2::DocumentModel::Expression*, ::Amazon::DynamoDBv2::DocumentModel::Expression*)>(
    &::Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x1654d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::QueryRequest*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression.ConvertToAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* (*)(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*,
                                                                  ::Amazon::DynamoDBv2::DocumentModel::Table*)>(&::Amazon::DynamoDBv2::DocumentModel::Expression::ConvertToAttributeValues)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x1654818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ConvertToAttributeValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::Expression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::Expression::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::Expression::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x1654f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_get__expressionAttributeNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_get__expressionAttributeNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeNames;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expressionAttributeNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*&
Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_get__expressionAttributeValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*> const&
Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_get__expressionAttributeValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeValues;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_set__expressionAttributeValues(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expressionAttributeValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_get__ExpressionStatement_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpressionStatement_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_get__ExpressionStatement_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExpressionStatement_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::Expression::__cordl_internal_set__ExpressionStatement_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ExpressionStatement_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Amazon::DynamoDBv2::DocumentModel::Expression::get_IsSet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                             "get_IsSet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::DocumentModel::Expression::get_ExpressionStatement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                             "get_ExpressionStatement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::set_ExpressionStatement(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "set_ExpressionStatement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Amazon::DynamoDBv2::DocumentModel::Expression::get_ExpressionAttributeNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                             "get_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "set_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* Amazon::DynamoDBv2::DocumentModel::Expression::get_ExpressionAttributeValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                                                             "get_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::DocumentModel::Expression::set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "set_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression(::Amazon::DynamoDBv2::Model::ScanRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ScanRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, table);
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression(::Amazon::DynamoDBv2::Model::DeleteItemRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, table);
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression(::Amazon::DynamoDBv2::Model::PutItemRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::PutItemRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, table);
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression(::Amazon::DynamoDBv2::Model::UpdateItemRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::UpdateItemRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, request, table);
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::ApplyExpression(::Amazon::DynamoDBv2::Model::QueryRequest* request, ::Amazon::DynamoDBv2::DocumentModel::Table* table,
                                                                           ::Amazon::DynamoDBv2::DocumentModel::Expression* keyExpression,
                                                                           ::Amazon::DynamoDBv2::DocumentModel::Expression* filterExpression) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ApplyExpression", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::QueryRequest*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, request, table, keyExpression, filterExpression);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*
Amazon::DynamoDBv2::DocumentModel::Expression::ConvertToAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>* valueMap,
                                                                        ::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), "ConvertToAttributeValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DocumentModel::DynamoDBEntry*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*, false>(nullptr, ___internal_method, valueMap,
                                                                                                                                                            table);
}
inline ::Amazon::DynamoDBv2::DocumentModel::Expression* Amazon::DynamoDBv2::DocumentModel::Expression::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::Expression*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::Expression::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::Expression*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::Expression::Expression() {}
