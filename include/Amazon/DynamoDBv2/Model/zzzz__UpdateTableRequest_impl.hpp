#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateTableRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeDefinition_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalSecondaryIndexUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ProvisionedThroughput_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicationGroupUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__SSESpecification_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__StreamSpecification_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__BillingMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x10553d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(::StringW, ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*)>(&::Amazon::DynamoDBv2::Model::UpdateTableRequest::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x10554d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_AttributeDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* (
    ::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(&::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_AttributeDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10555f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "get_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_AttributeDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*)>(&::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_AttributeDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1055600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetAttributeDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetAttributeDefinitions)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1055608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "IsSetAttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_BillingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BillingMode* (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_BillingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105565c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "get_BillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_BillingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(::Amazon::DynamoDBv2::BillingMode*)>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_BillingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1055664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_BillingMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetBillingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetBillingMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x105566c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "IsSetBillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_GlobalSecondaryIndexUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* (
    ::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(&::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_GlobalSecondaryIndexUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10556cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "get_GlobalSecondaryIndexUpdates",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_GlobalSecondaryIndexUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*)>(&::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_GlobalSecondaryIndexUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10556d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_GlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetGlobalSecondaryIndexUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetGlobalSecondaryIndexUpdates)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10556dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "IsSetGlobalSecondaryIndexUpdates",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_ProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ProvisionedThroughput* (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_ProvisionedThroughput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1055730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "get_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_ProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(::Amazon::DynamoDBv2::Model::ProvisionedThroughput*)>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_ProvisionedThroughput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1055738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetProvisionedThroughput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1055740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "IsSetProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_ReplicaUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* (
    ::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(&::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_ReplicaUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1055750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "get_ReplicaUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_ReplicaUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*)>(&::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_ReplicaUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1055758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_ReplicaUpdates", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetReplicaUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetReplicaUpdates)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1055760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "IsSetReplicaUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_SSESpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::SSESpecification* (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_SSESpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10557b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "get_SSESpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_SSESpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(::Amazon::DynamoDBv2::Model::SSESpecification*)>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_SSESpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10557bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_SSESpecification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSESpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetSSESpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetSSESpecification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10557c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "IsSetSSESpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_StreamSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::StreamSpecification* (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_StreamSpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10557d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "get_StreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_StreamSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(::Amazon::DynamoDBv2::Model::StreamSpecification*)>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_StreamSpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10557dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_StreamSpecification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamSpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetStreamSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetStreamSpecification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10557e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "IsSetStreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10557f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10557fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTableRequest.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTableRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1055804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                               "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__attributeDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeDefinitions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*> const&
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__attributeDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeDefinitions;
}
constexpr void
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__attributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::BillingMode*& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__billingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingMode;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__billingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingMode;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__billingMode(::Amazon::DynamoDBv2::BillingMode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____billingMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*&
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__globalSecondaryIndexUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexUpdates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*> const&
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__globalSecondaryIndexUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexUpdates;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__globalSecondaryIndexUpdates(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalSecondaryIndexUpdates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__provisionedThroughput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughput;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const&
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__provisionedThroughput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughput;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provisionedThroughput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__replicaUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaUpdates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*> const&
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__replicaUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaUpdates;
}
constexpr void
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__replicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaUpdates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::SSESpecification*& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__sseSpecification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseSpecification;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSESpecification*> const& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__sseSpecification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseSpecification;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__sseSpecification(::Amazon::DynamoDBv2::Model::SSESpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sseSpecification)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::StreamSpecification*& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__streamSpecification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSpecification;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamSpecification*> const&
Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__streamSpecification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSpecification;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__streamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamSpecification)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateTableRequest::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::UpdateTableRequest* Amazon::DynamoDBv2::Model::UpdateTableRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>());
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::UpdateTableRequest* Amazon::DynamoDBv2::Model::UpdateTableRequest::New_ctor(::StringW tableName,
                                                                                                                ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>(tableName, provisionedThroughput));
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::_ctor(::StringW tableName, ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* provisionedThroughput) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableName, provisionedThroughput);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* Amazon::DynamoDBv2::Model::UpdateTableRequest::get_AttributeDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_AttributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetAttributeDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetAttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::Model::UpdateTableRequest::get_BillingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_BillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BillingMode*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_BillingMode(::Amazon::DynamoDBv2::BillingMode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_BillingMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetBillingMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetBillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* Amazon::DynamoDBv2::Model::UpdateTableRequest::get_GlobalSecondaryIndexUpdates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_GlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_GlobalSecondaryIndexUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_GlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetGlobalSecondaryIndexUpdates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetGlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* Amazon::DynamoDBv2::Model::UpdateTableRequest::get_ProvisionedThroughput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetProvisionedThroughput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* Amazon::DynamoDBv2::Model::UpdateTableRequest::get_ReplicaUpdates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_ReplicaUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_ReplicaUpdates(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_ReplicaUpdates", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicationGroupUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetReplicaUpdates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetReplicaUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::SSESpecification* Amazon::DynamoDBv2::Model::UpdateTableRequest::get_SSESpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_SSESpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::SSESpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_SSESpecification(::Amazon::DynamoDBv2::Model::SSESpecification* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_SSESpecification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSESpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetSSESpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetSSESpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::StreamSpecification* Amazon::DynamoDBv2::Model::UpdateTableRequest::get_StreamSpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_StreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::StreamSpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_StreamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_StreamSpecification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamSpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetStreamSpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetStreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::UpdateTableRequest::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTableRequest::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTableRequest::IsSetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTableRequest*>::get(),
                                                                             "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::UpdateTableRequest::UpdateTableRequest() {}
