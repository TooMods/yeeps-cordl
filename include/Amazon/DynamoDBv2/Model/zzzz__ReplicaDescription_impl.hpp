#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ProvisionedThroughputOverride_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaGlobalSecondaryIndexDescription_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReplicaStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* (
    ::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(&::Amazon::DynamoDBv2::Model::ReplicaDescription::get_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*)>(&::Amazon::DynamoDBv2::Model::ReplicaDescription::set_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetGlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetGlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104e8c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_KMSMasterKeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::get_KMSMasterKeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e91c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "get_KMSMasterKeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_KMSMasterKeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::set_KMSMasterKeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_KMSMasterKeyId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetKMSMasterKeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetKMSMasterKeyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "IsSetKMSMasterKeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_ProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::get_ProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e93c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "get_ProvisionedThroughputOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_ProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(
    ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*)>(&::Amazon::DynamoDBv2::Model::ReplicaDescription::set_ProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetProvisionedThroughputOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetProvisionedThroughputOverride)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e94c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "IsSetProvisionedThroughputOverride",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::get_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::set_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_RegionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetRegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetRegionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_ReplicaInaccessibleDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaInaccessibleDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104e97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "get_ReplicaInaccessibleDateTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_ReplicaInaccessibleDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaInaccessibleDateTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104e9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaInaccessibleDateTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetReplicaInaccessibleDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaInaccessibleDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104ea28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "IsSetReplicaInaccessibleDateTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_ReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReplicaStatus* (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ea64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "get_ReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_ReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(::Amazon::DynamoDBv2::ReplicaStatus*)>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ea6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReplicaStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x104ea74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "IsSetReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_ReplicaStatusDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaStatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ead4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "get_ReplicaStatusDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_ReplicaStatusDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaStatusDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104eadc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaStatusDescription",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetReplicaStatusDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaStatusDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104eae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                               "IsSetReplicaStatusDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.get_ReplicaStatusPercentProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaStatusPercentProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104eaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "get_ReplicaStatusPercentProgress",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.set_ReplicaStatusPercentProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaStatusPercentProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104eafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaStatusPercentProgress",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription.IsSetReplicaStatusPercentProgress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaStatusPercentProgress)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104eb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "IsSetReplicaStatusPercentProgress",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaDescription::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x104eb14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*&
Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__globalSecondaryIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*> const&
Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__globalSecondaryIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__globalSecondaryIndexes(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalSecondaryIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__kmsMasterKeyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsMasterKeyId;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__kmsMasterKeyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____kmsMasterKeyId;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__kmsMasterKeyId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____kmsMasterKeyId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__provisionedThroughputOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughputOverride;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*> const&
Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__provisionedThroughputOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughputOverride;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__provisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provisionedThroughputOverride)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__regionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__regionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__regionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaInaccessibleDateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaInaccessibleDateTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaInaccessibleDateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaInaccessibleDateTime;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__replicaInaccessibleDateTime(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____replicaInaccessibleDateTime = value;
}
constexpr ::Amazon::DynamoDBv2::ReplicaStatus*& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReplicaStatus*> const& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatus;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__replicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaStatusDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatusDescription;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaStatusDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatusDescription;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__replicaStatusDescription(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaStatusDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaStatusPercentProgress() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatusPercentProgress;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_get__replicaStatusPercentProgress() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatusPercentProgress;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaDescription::__cordl_internal_set__replicaStatusPercentProgress(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaStatusPercentProgress)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* Amazon::DynamoDBv2::Model::ReplicaDescription::get_GlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::Model::ReplicaDescription::set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetGlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaDescription::get_KMSMasterKeyId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "get_KMSMasterKeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::set_KMSMasterKeyId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_KMSMasterKeyId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetKMSMasterKeyId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "IsSetKMSMasterKeyId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* Amazon::DynamoDBv2::Model::ReplicaDescription::get_ProvisionedThroughputOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "get_ProvisionedThroughputOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::set_ProvisionedThroughputOverride(::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ProvisionedThroughputOverride", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetProvisionedThroughputOverride() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "IsSetProvisionedThroughputOverride",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaDescription::get_RegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::set_RegionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_RegionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetRegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaInaccessibleDateTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "get_ReplicaInaccessibleDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaInaccessibleDateTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaInaccessibleDateTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaInaccessibleDateTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "IsSetReplicaInaccessibleDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "get_ReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReplicaStatus*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReplicaStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "IsSetReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaStatusDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "get_ReplicaStatusDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaStatusDescription(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaStatusDescription",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaStatusDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "IsSetReplicaStatusDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaDescription::get_ReplicaStatusPercentProgress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(),
                                                                             "get_ReplicaStatusPercentProgress", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::set_ReplicaStatusPercentProgress(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "set_ReplicaStatusPercentProgress",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaDescription::IsSetReplicaStatusPercentProgress() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), "IsSetReplicaStatusPercentProgress",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ReplicaDescription* Amazon::DynamoDBv2::Model::ReplicaDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ReplicaDescription*>());
}
inline void Amazon::DynamoDBv2::Model::ReplicaDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaDescription*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ReplicaDescription::ReplicaDescription() {}
