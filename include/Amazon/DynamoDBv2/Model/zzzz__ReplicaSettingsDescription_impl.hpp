#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaSettingsDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AutoScalingSettingsDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BillingModeSummary_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaGlobalSecondaryIndexSettingsDescription_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReplicaStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                               "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_RegionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetRegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetRegionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104f150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                               "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_ReplicaBillingModeSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::BillingModeSummary* (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaBillingModeSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                               "get_ReplicaBillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_ReplicaBillingModeSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(::Amazon::DynamoDBv2::Model::BillingModeSummary*)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaBillingModeSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaBillingModeSummary",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BillingModeSummary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetReplicaBillingModeSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaBillingModeSummary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104f170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                               "IsSetReplicaBillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_ReplicaGlobalSecondaryIndexSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
        &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaGlobalSecondaryIndexSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "get_ReplicaGlobalSecondaryIndexSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_ReplicaGlobalSecondaryIndexSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaGlobalSecondaryIndexSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaGlobalSecondaryIndexSettings",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetReplicaGlobalSecondaryIndexSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaGlobalSecondaryIndexSettings)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104f190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "IsSetReplicaGlobalSecondaryIndexSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_ReplicaProvisionedReadCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* (
    ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(&::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedReadCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "get_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_ReplicaProvisionedReadCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*)>(&::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedReadCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                    "set_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetReplicaProvisionedReadCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedReadCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104f1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "IsSetReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_ReplicaProvisionedReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedReadCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104f204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "get_ReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_ReplicaProvisionedReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(int64_t)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedReadCapacityUnits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104f240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaProvisionedReadCapacityUnits",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetReplicaProvisionedReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedReadCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104f2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "IsSetReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_ReplicaProvisionedWriteCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* (
    ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(&::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedWriteCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "get_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_ReplicaProvisionedWriteCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*)>(&::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedWriteCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                    "set_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetReplicaProvisionedWriteCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedWriteCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104f2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "IsSetReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_ReplicaProvisionedWriteCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedWriteCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104f30c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "get_ReplicaProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_ReplicaProvisionedWriteCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(int64_t)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedWriteCapacityUnits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104f348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaProvisionedWriteCapacityUnits",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetReplicaProvisionedWriteCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedWriteCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104f3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                 "IsSetReplicaProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.get_ReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReplicaStatus* (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                               "get_ReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.set_ReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)(::Amazon::DynamoDBv2::ReplicaStatus*)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f3fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReplicaStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription.IsSetReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x104f404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                               "IsSetReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x104f464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__regionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__regionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__regionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::BillingModeSummary*& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaBillingModeSummary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaBillingModeSummary;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BillingModeSummary*> const&
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaBillingModeSummary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaBillingModeSummary;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__replicaBillingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaBillingModeSummary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*&
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaGlobalSecondaryIndexSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaGlobalSecondaryIndexSettings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*> const&
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaGlobalSecondaryIndexSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaGlobalSecondaryIndexSettings;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__replicaGlobalSecondaryIndexSettings(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaGlobalSecondaryIndexSettings)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*&
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingSettings;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const&
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingSettings;
}
constexpr void
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaProvisionedReadCapacityAutoScalingSettings)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedReadCapacityUnits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityUnits;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedReadCapacityUnits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityUnits;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__replicaProvisionedReadCapacityUnits(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____replicaProvisionedReadCapacityUnits = value;
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*&
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedWriteCapacityAutoScalingSettings;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const&
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedWriteCapacityAutoScalingSettings;
}
constexpr void
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__replicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaProvisionedWriteCapacityAutoScalingSettings)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedWriteCapacityUnits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedWriteCapacityUnits;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaProvisionedWriteCapacityUnits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedWriteCapacityUnits;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__replicaProvisionedWriteCapacityUnits(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____replicaProvisionedWriteCapacityUnits = value;
}
constexpr ::Amazon::DynamoDBv2::ReplicaStatus*& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReplicaStatus*> const& Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_get__replicaStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatus;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::__cordl_internal_set__replicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_RegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                             "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_RegionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_RegionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetRegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                             "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::BillingModeSummary* Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaBillingModeSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                             "get_ReplicaBillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::BillingModeSummary*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaBillingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaBillingModeSummary",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BillingModeSummary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaBillingModeSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                             "IsSetReplicaBillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*
Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaGlobalSecondaryIndexSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "get_ReplicaGlobalSecondaryIndexSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaGlobalSecondaryIndexSettings(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaGlobalSecondaryIndexSettings",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaGlobalSecondaryIndexSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "IsSetReplicaGlobalSecondaryIndexSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedReadCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "get_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                  "set_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedReadCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "IsSetReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedReadCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "get_ReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedReadCapacityUnits(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaProvisionedReadCapacityUnits",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedReadCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "IsSetReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedWriteCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "get_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                  "set_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedWriteCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "IsSetReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaProvisionedWriteCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "get_ReplicaProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaProvisionedWriteCapacityUnits(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaProvisionedWriteCapacityUnits",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaProvisionedWriteCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                               "IsSetReplicaProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::get_ReplicaStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                             "get_ReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReplicaStatus*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::set_ReplicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(), "set_ReplicaStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReplicaStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::IsSetReplicaStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                             "IsSetReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription* Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>());
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ReplicaSettingsDescription::ReplicaSettingsDescription() {}
