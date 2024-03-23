#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__RestoreTableFromBackupRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalSecondaryIndex_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__LocalSecondaryIndex_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ProvisionedThroughput_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__SSESpecification_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__BillingMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.get_BackupArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_BackupArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fa20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "get_BackupArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.set_BackupArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_BackupArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fa28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_BackupArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.IsSetBackupArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetBackupArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104fa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "IsSetBackupArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.get_BillingModeOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BillingMode* (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_BillingModeOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fa40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "get_BillingModeOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.set_BillingModeOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)(::Amazon::DynamoDBv2::BillingMode*)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_BillingModeOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fa48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_BillingModeOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.IsSetBillingModeOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetBillingModeOverride)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x104fa50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "IsSetBillingModeOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.get_GlobalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* (
    ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(&::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_GlobalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "get_GlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.set_GlobalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*)>(&::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_GlobalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_GlobalSecondaryIndexOverride",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.IsSetGlobalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetGlobalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104fac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "IsSetGlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.get_LocalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* (
    ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(&::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_LocalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "get_LocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.set_LocalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*)>(&::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_LocalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_LocalSecondaryIndexOverride",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.IsSetLocalSecondaryIndexOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetLocalSecondaryIndexOverride)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104fb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "IsSetLocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.get_ProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ProvisionedThroughput* (
    ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(&::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_ProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "get_ProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.set_ProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)(
    ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*)>(&::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_ProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fb80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_ProvisionedThroughputOverride",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.IsSetProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104fb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "IsSetProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.get_SSESpecificationOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::SSESpecification* (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_SSESpecificationOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fb98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "get_SSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.set_SSESpecificationOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)(::Amazon::DynamoDBv2::Model::SSESpecification*)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_SSESpecificationOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_SSESpecificationOverride",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSESpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.IsSetSSESpecificationOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetSSESpecificationOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104fba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                 "IsSetSSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.get_TargetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_TargetTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "get_TargetTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.set_TargetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_TargetTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104fbc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_TargetTableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest.IsSetTargetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetTargetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104fbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "IsSetTargetTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x104fbd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__backupArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__backupArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupArn;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_set__backupArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backupArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::BillingMode*& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__billingModeOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingModeOverride;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__billingModeOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingModeOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_set__billingModeOverride(::Amazon::DynamoDBv2::BillingMode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____billingModeOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*&
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__globalSecondaryIndexOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexOverride;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*> const&
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__globalSecondaryIndexOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_set__globalSecondaryIndexOverride(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalSecondaryIndexOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*&
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__localSecondaryIndexOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexOverride;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*> const&
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__localSecondaryIndexOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_set__localSecondaryIndexOverride(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localSecondaryIndexOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughput*& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__provisionedThroughputOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughputOverride;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*> const&
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__provisionedThroughputOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughputOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provisionedThroughputOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::SSESpecification*& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__sseSpecificationOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseSpecificationOverride;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSESpecification*> const&
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__sseSpecificationOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseSpecificationOverride;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_set__sseSpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sseSpecificationOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__targetTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_get__targetTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetTableName;
}
constexpr void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::__cordl_internal_set__targetTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetTableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_BackupArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "get_BackupArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_BackupArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_BackupArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetBackupArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "IsSetBackupArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_BillingModeOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "get_BillingModeOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BillingMode*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_BillingModeOverride(::Amazon::DynamoDBv2::BillingMode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_BillingModeOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetBillingModeOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "IsSetBillingModeOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_GlobalSecondaryIndexOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "get_GlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_GlobalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_GlobalSecondaryIndexOverride",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetGlobalSecondaryIndexOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                               "IsSetGlobalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_LocalSecondaryIndexOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "get_LocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_LocalSecondaryIndexOverride(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_LocalSecondaryIndexOverride",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndex*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetLocalSecondaryIndexOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "IsSetLocalSecondaryIndexOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughput* Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_ProvisionedThroughputOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                               "get_ProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughput* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_ProvisionedThroughputOverride",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughput*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetProvisionedThroughputOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                               "IsSetProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::SSESpecification* Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_SSESpecificationOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "get_SSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::SSESpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_SSESpecificationOverride(::Amazon::DynamoDBv2::Model::SSESpecification* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_SSESpecificationOverride",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSESpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetSSESpecificationOverride() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "IsSetSSESpecificationOverride", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::get_TargetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "get_TargetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::set_TargetTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(), "set_TargetTableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::IsSetTargetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             "IsSetTargetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest* Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>());
}
inline void Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::RestoreTableFromBackupRequest::RestoreTableFromBackupRequest() {}
