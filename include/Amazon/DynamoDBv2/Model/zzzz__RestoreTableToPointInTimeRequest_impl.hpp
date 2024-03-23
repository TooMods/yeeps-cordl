#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__RestoreTableToPointInTimeRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalSecondaryIndex_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__LocalSecondaryIndex_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ProvisionedThroughput_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__SSESpecification_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__BillingMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_BillingModeOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BillingMode* (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_BillingModeOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fcc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "get_BillingModeOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_BillingModeOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(::Amazon::DynamoDBv2::BillingMode*)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_BillingModeOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fcc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_BillingModeOverride",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetBillingModeOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetBillingModeOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x104fcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "IsSetBillingModeOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_GlobalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* (
    ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(&::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_GlobalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fd30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "get_GlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_GlobalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*)>(&::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_GlobalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_GlobalSecondaryIndexOverride",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetGlobalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetGlobalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104fd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "IsSetGlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_LocalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* (
    ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(&::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_LocalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "get_LocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_LocalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*)>(&::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_LocalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_LocalSecondaryIndexOverride",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetLocalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetLocalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104fda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "IsSetLocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_ProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ProvisionedThroughput* (
    ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(&::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_ProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "get_ProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_ProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(
    ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*)>(&::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_ProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fe00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_ProvisionedThroughputOverride",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104fe08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "IsSetProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_RestoreDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_RestoreDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104fe18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_RestoreDateTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_RestoreDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_RestoreDateTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104fe54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_RestoreDateTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetRestoreDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetRestoreDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104fec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetRestoreDateTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_SourceTableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_SourceTableArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_SourceTableArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_SourceTableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_SourceTableArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_SourceTableArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetSourceTableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetSourceTableArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104ff10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetSourceTableArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_SourceTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_SourceTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_SourceTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_SourceTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_SourceTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_SourceTableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetSourceTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetSourceTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104ff30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetSourceTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_SSESpecificationOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::SSESpecification* (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_SSESpecificationOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "get_SSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_SSESpecificationOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(
    ::Amazon::DynamoDBv2::Model::SSESpecification*)>(&::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_SSESpecificationOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_SSESpecificationOverride",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSESpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetSSESpecificationOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetSSESpecificationOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104ff50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "IsSetSSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_TargetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_TargetTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_TargetTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_TargetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_TargetTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ff68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_TargetTableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetTargetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetTargetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104ff70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetTargetTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.get_UseLatestRestorableTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_UseLatestRestorableTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104ff80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "get_UseLatestRestorableTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.set_UseLatestRestorableTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)(bool)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_UseLatestRestorableTime)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x104ffbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_UseLatestRestorableTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest.IsSetUseLatestRestorableTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetUseLatestRestorableTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1050024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                                 "IsSetUseLatestRestorableTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1050060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::BillingMode*& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__billingModeOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingModeOverride;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const&
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__billingModeOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingModeOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__billingModeOverride(::Amazon::DynamoDBv2::BillingMode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____billingModeOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*&
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__globalSecondaryIndexOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexOverride;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*> const&
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__globalSecondaryIndexOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__globalSecondaryIndexOverride(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalSecondaryIndexOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*&
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__localSecondaryIndexOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexOverride;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*> const&
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__localSecondaryIndexOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__localSecondaryIndexOverride(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localSecondaryIndexOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__provisionedThroughputOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughputOverride;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const&
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__provisionedThroughputOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughputOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provisionedThroughputOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__restoreDateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restoreDateTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__restoreDateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restoreDateTime;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__restoreDateTime(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____restoreDateTime = value;
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__sourceTableArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceTableArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__sourceTableArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceTableArn;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__sourceTableArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sourceTableArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__sourceTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceTableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__sourceTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sourceTableName;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__sourceTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sourceTableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::SSESpecification*& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__sseSpecificationOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseSpecificationOverride;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSESpecification*> const&
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__sseSpecificationOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseSpecificationOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__sseSpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sseSpecificationOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__targetTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__targetTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTableName;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__targetTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<bool>& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__useLatestRestorableTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLatestRestorableTime;
}
constexpr ::System::Nullable_1<bool> const& Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_get__useLatestRestorableTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useLatestRestorableTime;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::__cordl_internal_set__useLatestRestorableTime(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useLatestRestorableTime = value;
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_BillingModeOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_BillingModeOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BillingMode*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_BillingModeOverride(::Amazon::DynamoDBv2::BillingMode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_BillingModeOverride",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetBillingModeOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "IsSetBillingModeOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_GlobalSecondaryIndexOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "get_GlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_GlobalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_GlobalSecondaryIndexOverride",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetGlobalSecondaryIndexOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "IsSetGlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_LocalSecondaryIndexOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "get_LocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_LocalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_LocalSecondaryIndexOverride",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetLocalSecondaryIndexOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "IsSetLocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_ProvisionedThroughputOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "get_ProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_ProvisionedThroughputOverride",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetProvisionedThroughputOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "IsSetProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_RestoreDateTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_RestoreDateTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_RestoreDateTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_RestoreDateTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetRestoreDateTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetRestoreDateTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_SourceTableArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_SourceTableArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_SourceTableArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_SourceTableArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetSourceTableArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetSourceTableArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_SourceTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_SourceTableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_SourceTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_SourceTableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetSourceTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetSourceTableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::SSESpecification* Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_SSESpecificationOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "get_SSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::SSESpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_SSESpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_SSESpecificationOverride",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSESpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetSSESpecificationOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "IsSetSSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_TargetTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "get_TargetTableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_TargetTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_TargetTableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetTargetTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "IsSetTargetTableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::get_UseLatestRestorableTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "get_UseLatestRestorableTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::set_UseLatestRestorableTime(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), "set_UseLatestRestorableTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::IsSetUseLatestRestorableTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(),
                                               "IsSetUseLatestRestorableTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest* Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>());
}
inline void Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::RestoreTableToPointInTimeRequest::RestoreTableToPointInTimeRequest() {}
