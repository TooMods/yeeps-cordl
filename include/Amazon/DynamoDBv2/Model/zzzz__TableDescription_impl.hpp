#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TableDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ArchivalSummary_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AttributeDefinition_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BillingModeSummary_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalSecondaryIndexDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__KeySchemaElement_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__LocalSecondaryIndexDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ProvisionedThroughputDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__RestoreSummary_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__SSEDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__StreamSpecification_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__TableStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(&::Amazon::DynamoDBv2::Model::TableDescription::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x10524f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_ArchivalSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ArchivalSummary* (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_ArchivalSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_ArchivalSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_ArchivalSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::Amazon::DynamoDBv2::Model::ArchivalSummary*)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_ArchivalSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105268c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_ArchivalSummary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ArchivalSummary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetArchivalSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetArchivalSummary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetArchivalSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_AttributeDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* (
    ::Amazon::DynamoDBv2::Model::TableDescription::*)()>(&::Amazon::DynamoDBv2::Model::TableDescription::get_AttributeDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10526a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_AttributeDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*)>(&::Amazon::DynamoDBv2::Model::TableDescription::set_AttributeDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10526ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetAttributeDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetAttributeDefinitions)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10526b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetAttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_BillingModeSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::BillingModeSummary* (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_BillingModeSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_BillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_BillingModeSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::Amazon::DynamoDBv2::Model::BillingModeSummary*)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_BillingModeSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_BillingModeSummary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BillingModeSummary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetBillingModeSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetBillingModeSummary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetBillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_CreationDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_CreationDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1052728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_CreationDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_CreationDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_CreationDateTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1052764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_CreationDateTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetCreationDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetCreationDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10527d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetCreationDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* (
    ::Amazon::DynamoDBv2::Model::TableDescription::*)()>(&::Amazon::DynamoDBv2::Model::TableDescription::get_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*)>(&::Amazon::DynamoDBv2::Model::TableDescription::set_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetGlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetGlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1052820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_GlobalTableVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_GlobalTableVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052874;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_GlobalTableVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_GlobalTableVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_GlobalTableVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105287c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_GlobalTableVersion",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetGlobalTableVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetGlobalTableVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetGlobalTableVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_ItemCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_ItemCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1052894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_ItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_ItemCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(int64_t)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_ItemCount)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x10528d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_ItemCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetItemCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetItemCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1052940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_KeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* (
    ::Amazon::DynamoDBv2::Model::TableDescription::*)()>(&::Amazon::DynamoDBv2::Model::TableDescription::get_KeySchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105297c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_KeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_KeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*)>(&::Amazon::DynamoDBv2::Model::TableDescription::set_KeySchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_KeySchema", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetKeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetKeySchema)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x105298c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetKeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_LatestStreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_LatestStreamArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10529e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_LatestStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_LatestStreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_LatestStreamArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10529e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_LatestStreamArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetLatestStreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetLatestStreamArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10529f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetLatestStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_LatestStreamLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_LatestStreamLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_LatestStreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_LatestStreamLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_LatestStreamLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_LatestStreamLabel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetLatestStreamLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetLatestStreamLabel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetLatestStreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_LocalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* (
    ::Amazon::DynamoDBv2::Model::TableDescription::*)()>(&::Amazon::DynamoDBv2::Model::TableDescription::get_LocalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052a20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_LocalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*)>(&::Amazon::DynamoDBv2::Model::TableDescription::set_LocalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetLocalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetLocalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1052a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetLocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_ProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_ProvisionedThroughput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_ProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(
    ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*)>(&::Amazon::DynamoDBv2::Model::TableDescription::set_ProvisionedThroughput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetProvisionedThroughput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetProvisionedThroughput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_Replicas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* (
    ::Amazon::DynamoDBv2::Model::TableDescription::*)()>(&::Amazon::DynamoDBv2::Model::TableDescription::get_Replicas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_Replicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_Replicas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*)>(&::Amazon::DynamoDBv2::Model::TableDescription::set_Replicas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_Replicas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetReplicas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetReplicas)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1052ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetReplicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_RestoreSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::RestoreSummary* (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_RestoreSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_RestoreSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_RestoreSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::Amazon::DynamoDBv2::Model::RestoreSummary*)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_RestoreSummary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_RestoreSummary", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::RestoreSummary*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetRestoreSummary
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetRestoreSummary)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetRestoreSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_SSEDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::SSEDescription* (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_SSEDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_SSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_SSEDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::Amazon::DynamoDBv2::Model::SSEDescription*)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_SSEDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_SSEDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSEDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetSSEDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetSSEDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetSSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_StreamSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::StreamSpecification* (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_StreamSpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_StreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_StreamSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::Amazon::DynamoDBv2::Model::StreamSpecification*)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_StreamSpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_StreamSpecification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamSpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetStreamSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetStreamSpecification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetStreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_TableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_TableArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_TableArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_TableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_TableArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetTableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetTableArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetTableArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_TableId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_TableId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_TableId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_TableId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_TableId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetTableId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetTableId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetTableId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1052bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_TableSizeBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_TableSizeBytes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1052bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_TableSizeBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_TableSizeBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(int64_t)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_TableSizeBytes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1052c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableSizeBytes",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetTableSizeBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetTableSizeBytes)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1052c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetTableSizeBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.get_TableStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::TableStatus* (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::get_TableStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "get_TableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.set_TableStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableDescription::*)(::Amazon::DynamoDBv2::TableStatus*)>(
    &::Amazon::DynamoDBv2::Model::TableDescription::set_TableStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052cb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::TableStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableDescription.IsSetTableStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableDescription::IsSetTableStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1052cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                               "IsSetTableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::ArchivalSummary*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__archivalSummary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____archivalSummary;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ArchivalSummary*> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__archivalSummary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____archivalSummary;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__archivalSummary(::Amazon::DynamoDBv2::Model::ArchivalSummary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____archivalSummary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__attributeDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeDefinitions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*> const&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__attributeDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeDefinitions;
}
constexpr void
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__attributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::BillingModeSummary*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__billingModeSummary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingModeSummary;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BillingModeSummary*> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__billingModeSummary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____billingModeSummary;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__billingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____billingModeSummary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__creationDateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creationDateTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__creationDateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creationDateTime;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__creationDateTime(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creationDateTime = value;
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__globalSecondaryIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*> const&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__globalSecondaryIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__globalSecondaryIndexes(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalSecondaryIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__globalTableVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableVersion;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__globalTableVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableVersion;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__globalTableVersion(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalTableVersion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__itemCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemCount;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__itemCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____itemCount;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__itemCount(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____itemCount = value;
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__keySchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keySchema;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__keySchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keySchema;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keySchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__latestStreamArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestStreamArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__latestStreamArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestStreamArn;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__latestStreamArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____latestStreamArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__latestStreamLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestStreamLabel;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__latestStreamLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____latestStreamLabel;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__latestStreamLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____latestStreamLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__localSecondaryIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*> const&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__localSecondaryIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localSecondaryIndexes;
}
constexpr void
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__localSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localSecondaryIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__provisionedThroughput() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughput;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*> const&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__provisionedThroughput() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provisionedThroughput;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__provisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____provisionedThroughput)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__replicas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*> const&
Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__replicas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicas;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::RestoreSummary*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__restoreSummary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restoreSummary;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::RestoreSummary*> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__restoreSummary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____restoreSummary;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__restoreSummary(::Amazon::DynamoDBv2::Model::RestoreSummary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____restoreSummary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::SSEDescription*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__sseDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::SSEDescription*> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__sseDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sseDescription;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__sseDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sseDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::StreamSpecification*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__streamSpecification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSpecification;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamSpecification*> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__streamSpecification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamSpecification;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__streamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamSpecification)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableArn;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__tableArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableId;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableId;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__tableId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableSizeBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableSizeBytes;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableSizeBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableSizeBytes;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__tableSizeBytes(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tableSizeBytes = value;
}
constexpr ::Amazon::DynamoDBv2::TableStatus*& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::TableStatus*> const& Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_get__tableStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableStatus;
}
constexpr void Amazon::DynamoDBv2::Model::TableDescription::__cordl_internal_set__tableStatus(::Amazon::DynamoDBv2::TableStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::TableDescription* Amazon::DynamoDBv2::Model::TableDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::TableDescription*>());
}
inline void Amazon::DynamoDBv2::Model::TableDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ArchivalSummary* Amazon::DynamoDBv2::Model::TableDescription::get_ArchivalSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_ArchivalSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ArchivalSummary*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_ArchivalSummary(::Amazon::DynamoDBv2::Model::ArchivalSummary* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_ArchivalSummary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ArchivalSummary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetArchivalSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetArchivalSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* Amazon::DynamoDBv2::Model::TableDescription::get_AttributeDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_AttributeDefinitions(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_AttributeDefinitions", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::AttributeDefinition*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetAttributeDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetAttributeDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::BillingModeSummary* Amazon::DynamoDBv2::Model::TableDescription::get_BillingModeSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_BillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::BillingModeSummary*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_BillingModeSummary(::Amazon::DynamoDBv2::Model::BillingModeSummary* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_BillingModeSummary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BillingModeSummary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetBillingModeSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetBillingModeSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::DynamoDBv2::Model::TableDescription::get_CreationDateTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_CreationDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_CreationDateTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_CreationDateTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetCreationDateTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetCreationDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* Amazon::DynamoDBv2::Model::TableDescription::get_GlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_GlobalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalSecondaryIndexDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetGlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::TableDescription::get_GlobalTableVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_GlobalTableVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_GlobalTableVersion(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_GlobalTableVersion",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetGlobalTableVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetGlobalTableVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::DynamoDBv2::Model::TableDescription::get_ItemCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_ItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_ItemCount(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_ItemCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetItemCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* Amazon::DynamoDBv2::Model::TableDescription::get_KeySchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_KeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_KeySchema", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetKeySchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetKeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::TableDescription::get_LatestStreamArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_LatestStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_LatestStreamArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_LatestStreamArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetLatestStreamArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetLatestStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::TableDescription::get_LatestStreamLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_LatestStreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_LatestStreamLabel(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_LatestStreamLabel",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetLatestStreamLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetLatestStreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* Amazon::DynamoDBv2::Model::TableDescription::get_LocalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_LocalSecondaryIndexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_LocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::LocalSecondaryIndexDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetLocalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetLocalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* Amazon::DynamoDBv2::Model::TableDescription::get_ProvisionedThroughput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_ProvisionedThroughput(::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_ProvisionedThroughput", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ProvisionedThroughputDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetProvisionedThroughput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetProvisionedThroughput", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* Amazon::DynamoDBv2::Model::TableDescription::get_Replicas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_Replicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_Replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_Replicas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetReplicas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetReplicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::RestoreSummary* Amazon::DynamoDBv2::Model::TableDescription::get_RestoreSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_RestoreSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::RestoreSummary*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_RestoreSummary(::Amazon::DynamoDBv2::Model::RestoreSummary* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_RestoreSummary", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::RestoreSummary*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetRestoreSummary() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetRestoreSummary", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::SSEDescription* Amazon::DynamoDBv2::Model::TableDescription::get_SSEDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_SSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::SSEDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_SSEDescription(::Amazon::DynamoDBv2::Model::SSEDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_SSEDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::SSEDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetSSEDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetSSEDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::StreamSpecification* Amazon::DynamoDBv2::Model::TableDescription::get_StreamSpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_StreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::StreamSpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_StreamSpecification(::Amazon::DynamoDBv2::Model::StreamSpecification* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_StreamSpecification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamSpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetStreamSpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetStreamSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::TableDescription::get_TableArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_TableArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_TableArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetTableArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetTableArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::TableDescription::get_TableId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_TableId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_TableId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetTableId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetTableId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::TableDescription::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::DynamoDBv2::Model::TableDescription::get_TableSizeBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_TableSizeBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_TableSizeBytes(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableSizeBytes",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetTableSizeBytes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetTableSizeBytes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::Model::TableDescription::get_TableStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "get_TableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::TableStatus*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableDescription::set_TableStatus(::Amazon::DynamoDBv2::TableStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(), "set_TableStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::TableStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableDescription::IsSetTableStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableDescription*>::get(),
                                                                             "IsSetTableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::TableDescription::TableDescription() {}
