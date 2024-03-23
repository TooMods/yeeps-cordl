#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DeleteItemRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExpectedAttributeValue_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ConditionalOperator_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnConsumedCapacity_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnItemCollectionMetrics_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReturnValue_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x12172e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(
    ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1229244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(
    ::StringW, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*, ::Amazon::DynamoDBv2::ReturnValue*)>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1229388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ConditionalOperator* (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12294d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_ConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(::Amazon::DynamoDBv2::ConditionalOperator*)>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ConditionalOperator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12294d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConditionalOperator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetConditionalOperator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetConditionalOperator)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x12294e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_ConditionExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ConditionExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_ConditionExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_ConditionExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ConditionExpression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ConditionExpression",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetConditionExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetConditionExpression)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1229550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetConditionExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_Expected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* (
    ::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_Expected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_Expected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_Expected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*)>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_Expected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_Expected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetExpected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetExpected)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1229570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetExpected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_ExpressionAttributeNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (
    ::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ExpressionAttributeNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12295c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_ExpressionAttributeNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ExpressionAttributeNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12295d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetExpressionAttributeNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetExpressionAttributeNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12295d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_ExpressionAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* (
    ::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ExpressionAttributeValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_ExpressionAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ExpressionAttributeValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetExpressionAttributeValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetExpressionAttributeValues)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1229640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* (
    ::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_Key", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*)>(&::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12296a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_Key", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetKey)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12296a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_ReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnConsumedCapacity* (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_ReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(::Amazon::DynamoDBv2::ReturnConsumedCapacity*)>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetReturnConsumedCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetReturnConsumedCapacity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1229710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_ReturnItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ReturnItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "get_ReturnItemCollectionMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_ReturnItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*)>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ReturnItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetReturnItemCollectionMetrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetReturnItemCollectionMetrics)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1229780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "IsSetReturnItemCollectionMetrics",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_ReturnValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReturnValue* (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ReturnValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12297e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_ReturnValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_ReturnValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(::Amazon::DynamoDBv2::ReturnValue*)>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ReturnValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12297e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ReturnValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnValue*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetReturnValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetReturnValues)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x12297f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetReturnValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteItemRequest.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteItemRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1229860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                               "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::ConditionalOperator*& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__conditionalOperator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionalOperator;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ConditionalOperator*> const& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__conditionalOperator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionalOperator;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__conditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conditionalOperator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__conditionExpression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionExpression;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__conditionExpression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____conditionExpression;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__conditionExpression(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____conditionExpression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*&
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__expected() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expected;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*> const&
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__expected() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expected;
}
constexpr void
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__expected(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expected)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__expressionAttributeNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeNames;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__expressionAttributeNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeNames;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__expressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expressionAttributeNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*&
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__expressionAttributeValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeValues;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__expressionAttributeValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expressionAttributeValues;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__expressionAttributeValues(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expressionAttributeValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*> const&
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____key;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ReturnConsumedCapacity*& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__returnConsumedCapacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnConsumedCapacity;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnConsumedCapacity*> const& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__returnConsumedCapacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnConsumedCapacity;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__returnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnConsumedCapacity)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__returnItemCollectionMetrics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnItemCollectionMetrics;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*> const&
Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__returnItemCollectionMetrics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnItemCollectionMetrics;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__returnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnItemCollectionMetrics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ReturnValue*& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__returnValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValues;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReturnValue*> const& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__returnValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____returnValues;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__returnValues(::Amazon::DynamoDBv2::ReturnValue* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____returnValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteItemRequest::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::DeleteItemRequest* Amazon::DynamoDBv2::Model::DeleteItemRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>());
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DeleteItemRequest*
Amazon::DynamoDBv2::Model::DeleteItemRequest::New_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>(tableName, key));
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableName, key);
}
inline ::Amazon::DynamoDBv2::Model::DeleteItemRequest*
Amazon::DynamoDBv2::Model::DeleteItemRequest::New_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key,
                                                       ::Amazon::DynamoDBv2::ReturnValue* returnValues) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>(tableName, key, returnValues));
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::_ctor(::StringW tableName, ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* key,
                                                                ::Amazon::DynamoDBv2::ReturnValue* returnValues) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableName, key, returnValues);
}
inline ::Amazon::DynamoDBv2::ConditionalOperator* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ConditionalOperator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_ConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ConditionalOperator*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ConditionalOperator(::Amazon::DynamoDBv2::ConditionalOperator* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ConditionalOperator", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ConditionalOperator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetConditionalOperator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetConditionalOperator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ConditionExpression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_ConditionExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ConditionExpression(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ConditionExpression",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetConditionExpression() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetConditionExpression", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_Expected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_Expected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_Expected(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_Expected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::ExpectedAttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetExpected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetExpected", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ExpressionAttributeNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ExpressionAttributeNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetExpressionAttributeNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetExpressionAttributeNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ExpressionAttributeValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ExpressionAttributeValues(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetExpressionAttributeValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetExpressionAttributeValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "get_Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_Key(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_Key", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::Model::AttributeValue*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "IsSetKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReturnConsumedCapacity* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ReturnConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnConsumedCapacity*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ReturnConsumedCapacity(::Amazon::DynamoDBv2::ReturnConsumedCapacity* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnConsumedCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetReturnConsumedCapacity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetReturnConsumedCapacity", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ReturnItemCollectionMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_ReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ReturnItemCollectionMetrics(::Amazon::DynamoDBv2::ReturnItemCollectionMetrics* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnItemCollectionMetrics*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetReturnItemCollectionMetrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetReturnItemCollectionMetrics", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReturnValue* Amazon::DynamoDBv2::Model::DeleteItemRequest::get_ReturnValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_ReturnValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReturnValue*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_ReturnValues(::Amazon::DynamoDBv2::ReturnValue* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_ReturnValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReturnValue*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetReturnValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetReturnValues", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::DeleteItemRequest::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteItemRequest::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteItemRequest::IsSetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteItemRequest*>::get(),
                                                                             "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DeleteItemRequest::DeleteItemRequest() {}
