#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__StorageConfig_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__GSIConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__PropertyStorage_def.hpp"
#include "Amazon/Util/Internal/zzzz__ITypeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142da84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142da8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_LowerCamelCaseProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_LowerCamelCaseProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142da94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_LowerCamelCaseProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_LowerCamelCaseProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_LowerCamelCaseProperties)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142da9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_LowerCamelCaseProperties",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_AttributesToStoreAsEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_AttributesToStoreAsEpoch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142daa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_AttributesToStoreAsEpoch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_AttributesToStoreAsEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_AttributesToStoreAsEpoch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_AttributesToStoreAsEpoch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_HashKeyPropertyNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_HashKeyPropertyNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_HashKeyPropertyNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_HashKeyPropertyNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_HashKeyPropertyNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_HashKeyPropertyNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_RangeKeyPropertyNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_RangeKeyPropertyNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_RangeKeyPropertyNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_RangeKeyPropertyNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_RangeKeyPropertyNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_RangeKeyPropertyNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_AttributesToGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_AttributesToGet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_AttributesToGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_AttributesToGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_AttributesToGet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_AttributesToGet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_VersionPropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_VersionPropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142dae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_VersionPropertyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_VersionPropertyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_VersionPropertyName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142daf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_VersionPropertyName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_HasVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_HasVersion)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x14239b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_HasVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_AttributeToIndexesNameMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* (
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_AttributeToIndexesNameMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142daf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                 "get_AttributeToIndexesNameMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_AttributeToIndexesNameMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*)>(
        &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_AttributeToIndexesNameMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142db00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_AttributeToIndexesNameMapping",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_IndexNameToLSIRangePropertiesMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* (
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_IndexNameToLSIRangePropertiesMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142db08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                 "get_IndexNameToLSIRangePropertiesMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_IndexNameToLSIRangePropertiesMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*)>(
        &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_IndexNameToLSIRangePropertiesMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142db10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_IndexNameToLSIRangePropertiesMapping",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_IndexNameToGSIMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* (
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_IndexNameToGSIMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142db18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_IndexNameToGSIMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.set_IndexNameToGSIMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*)>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_IndexNameToGSIMapping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142db20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_IndexNameToGSIMapping", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.GetGSIConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::GSIConfig* (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::GetGSIConfig)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x142db28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "GetGSIConfig",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.GetCorrectHashKeyProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, ::StringW)>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::GetCorrectHashKeyProperty)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1429be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "GetCorrectHashKeyProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.GetRangeKeyByIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::GetRangeKeyByIndex)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x142ab14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "GetRangeKeyByIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.get_VersionPropertyStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::PropertyStorage* (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_VersionPropertyStorage)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x14239d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                               "get_VersionPropertyStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.Denormalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBContext*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::Denormalize)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x142dba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "Denormalize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.AddPropertyStorage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::Amazon::DynamoDBv2::DataModel::PropertyStorage*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::AddPropertyStorage)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x142dfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "AddPropertyStorage", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.AddLSIConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(
    ::System::Collections::Generic::List_1<::StringW>*, ::StringW)>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::AddLSIConfigs)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x142e6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "AddLSIConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig.AddGSIConfigs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(
    ::System::Collections::Generic::List_1<::StringW>*, ::StringW, bool)>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::AddGSIConfigs)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x142e4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "AddGSIConfigs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::*)(::Amazon::Util::Internal::ITypeInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::_ctor)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x142e9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__TableName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__TableName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__TableName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TableName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__LowerCamelCaseProperties_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LowerCamelCaseProperties_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__LowerCamelCaseProperties_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LowerCamelCaseProperties_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__LowerCamelCaseProperties_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LowerCamelCaseProperties_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToStoreAsEpoch_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__AttributesToStoreAsEpoch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToStoreAsEpoch_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__AttributesToStoreAsEpoch_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributesToStoreAsEpoch_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__HashKeyPropertyNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HashKeyPropertyNames_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__HashKeyPropertyNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HashKeyPropertyNames_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__HashKeyPropertyNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____HashKeyPropertyNames_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__RangeKeyPropertyNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RangeKeyPropertyNames_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__RangeKeyPropertyNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RangeKeyPropertyNames_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__RangeKeyPropertyNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RangeKeyPropertyNames_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__AttributesToGet_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToGet_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__AttributesToGet_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToGet_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributesToGet_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__VersionPropertyName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____VersionPropertyName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__VersionPropertyName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____VersionPropertyName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__VersionPropertyName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____VersionPropertyName_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__AttributeToIndexesNameMapping_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeToIndexesNameMapping_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__AttributeToIndexesNameMapping_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeToIndexesNameMapping_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__AttributeToIndexesNameMapping_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributeToIndexesNameMapping_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__IndexNameToLSIRangePropertiesMapping_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNameToLSIRangePropertiesMapping_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__IndexNameToLSIRangePropertiesMapping_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNameToLSIRangePropertiesMapping_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__IndexNameToLSIRangePropertiesMapping_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexNameToLSIRangePropertiesMapping_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__IndexNameToGSIMapping_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNameToGSIMapping_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_get__IndexNameToGSIMapping_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNameToGSIMapping_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::__cordl_internal_set__IndexNameToGSIMapping_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexNameToGSIMapping_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_LowerCamelCaseProperties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_LowerCamelCaseProperties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_LowerCamelCaseProperties(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_LowerCamelCaseProperties",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_AttributesToStoreAsEpoch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_AttributesToStoreAsEpoch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_AttributesToStoreAsEpoch(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_AttributesToStoreAsEpoch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_HashKeyPropertyNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_HashKeyPropertyNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_HashKeyPropertyNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_HashKeyPropertyNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_RangeKeyPropertyNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_RangeKeyPropertyNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_RangeKeyPropertyNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_RangeKeyPropertyNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_AttributesToGet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_AttributesToGet", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_AttributesToGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_VersionPropertyName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_VersionPropertyName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_VersionPropertyName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_VersionPropertyName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_HasVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_HasVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_AttributeToIndexesNameMapping() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "get_AttributeToIndexesNameMapping",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_AttributeToIndexesNameMapping(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_AttributeToIndexesNameMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*
Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_IndexNameToLSIRangePropertiesMapping() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                               "get_IndexNameToLSIRangePropertiesMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_IndexNameToLSIRangePropertiesMapping(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_IndexNameToLSIRangePropertiesMapping",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::StringW>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_IndexNameToGSIMapping() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_IndexNameToGSIMapping", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::set_IndexNameToGSIMapping(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "set_IndexNameToGSIMapping", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::GSIConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::GSIConfig* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::GetGSIConfig(::StringW indexName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "GetGSIConfig",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::GSIConfig*, false>(this, ___internal_method, indexName);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::ItemStorageConfig::GetCorrectHashKeyProperty(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* currentConfig, ::StringW hashKeyProperty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "GetCorrectHashKeyProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, currentConfig, hashKeyProperty);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::ItemStorageConfig::GetRangeKeyByIndex(::StringW indexName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "GetRangeKeyByIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, indexName);
}
inline ::Amazon::DynamoDBv2::DataModel::PropertyStorage* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::get_VersionPropertyStorage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                                                             "get_VersionPropertyStorage", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::PropertyStorage*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::Denormalize(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "Denormalize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::AddPropertyStorage(::Amazon::DynamoDBv2::DataModel::PropertyStorage* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "AddPropertyStorage", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::AddLSIConfigs(::System::Collections::Generic::List_1<::StringW>* lsiIndexNames, ::StringW propertyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "AddLSIConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lsiIndexNames, propertyName);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::AddGSIConfigs(::System::Collections::Generic::List_1<::StringW>* gsiIndexNames, ::StringW propertyName, bool isHashKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), "AddGSIConfigs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gsiIndexNames, propertyName, isHashKey);
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* Amazon::DynamoDBv2::DataModel::ItemStorageConfig::New_ctor(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>(targetTypeInfo));
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfig::_ctor(::Amazon::Util::Internal::ITypeInfo* targetTypeInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, targetTypeInfo);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig::ItemStorageConfig() {}
