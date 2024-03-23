#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__StreamDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__KeySchemaElement_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Shard_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__StreamStatus_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__StreamViewType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_CreationRequestDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::get_CreationRequestDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x105197c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_CreationRequestDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_CreationRequestDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::set_CreationRequestDateTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x10519b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_CreationRequestDateTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetCreationRequestDateTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetCreationRequestDateTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1051a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetCreationRequestDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_KeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* (
    ::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(&::Amazon::DynamoDBv2::Model::StreamDescription::get_KeySchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051a64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_KeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_KeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*)>(&::Amazon::DynamoDBv2::Model::StreamDescription::set_KeySchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_KeySchema", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetKeySchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetKeySchema)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1051a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetKeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_LastEvaluatedShardId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::get_LastEvaluatedShardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_LastEvaluatedShardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_LastEvaluatedShardId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::set_LastEvaluatedShardId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_LastEvaluatedShardId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetLastEvaluatedShardId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetLastEvaluatedShardId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1051ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetLastEvaluatedShardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_Shards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* (
    ::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(&::Amazon::DynamoDBv2::Model::StreamDescription::get_Shards)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_Shards", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_Shards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*)>(&::Amazon::DynamoDBv2::Model::StreamDescription::set_Shards)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_Shards", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetShards
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetShards)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1051af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetShards", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_StreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::get_StreamArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_StreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_StreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::set_StreamArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051b54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetStreamArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1051b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_StreamLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::get_StreamLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_StreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_StreamLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::set_StreamLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamLabel",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetStreamLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamLabel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1051b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetStreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_StreamStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::StreamStatus* (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::get_StreamStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051b8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_StreamStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_StreamStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(::Amazon::DynamoDBv2::StreamStatus*)>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::set_StreamStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::StreamStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetStreamStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1051b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetStreamStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_StreamViewType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::StreamViewType* (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::get_StreamViewType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_StreamViewType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_StreamViewType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(::Amazon::DynamoDBv2::StreamViewType*)>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::set_StreamViewType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamViewType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::StreamViewType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetStreamViewType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamViewType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1051c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetStreamViewType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1051c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::StreamDescription::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1051c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                               "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::StreamDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::StreamDescription::*)()>(&::Amazon::DynamoDBv2::Model::StreamDescription::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1051c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::System::DateTime>& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__creationRequestDateTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creationRequestDateTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__creationRequestDateTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____creationRequestDateTime;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__creationRequestDateTime(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____creationRequestDateTime = value;
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__keySchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keySchema;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*> const&
Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__keySchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keySchema;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__keySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____keySchema)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__lastEvaluatedShardId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEvaluatedShardId;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__lastEvaluatedShardId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEvaluatedShardId;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__lastEvaluatedShardId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastEvaluatedShardId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__shards() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shards;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*> const&
Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__shards() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shards;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__shards(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shards)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamArn;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__streamArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamLabel;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamLabel;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__streamLabel(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::StreamStatus*& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::StreamStatus*> const& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamStatus;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__streamStatus(::Amazon::DynamoDBv2::StreamStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::StreamViewType*& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamViewType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamViewType;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::StreamViewType*> const& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__streamViewType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamViewType;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__streamViewType(::Amazon::DynamoDBv2::StreamViewType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamViewType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::StreamDescription::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::DateTime Amazon::DynamoDBv2::Model::StreamDescription::get_CreationRequestDateTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_CreationRequestDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_CreationRequestDateTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_CreationRequestDateTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetCreationRequestDateTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetCreationRequestDateTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* Amazon::DynamoDBv2::Model::StreamDescription::get_KeySchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_KeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_KeySchema(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_KeySchema", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::KeySchemaElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetKeySchema() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetKeySchema", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::StreamDescription::get_LastEvaluatedShardId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_LastEvaluatedShardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_LastEvaluatedShardId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_LastEvaluatedShardId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetLastEvaluatedShardId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetLastEvaluatedShardId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* Amazon::DynamoDBv2::Model::StreamDescription::get_Shards() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_Shards", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_Shards(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_Shards", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Shard*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetShards() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetShards", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::StreamDescription::get_StreamArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_StreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_StreamArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetStreamArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::StreamDescription::get_StreamLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_StreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_StreamLabel(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamLabel",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetStreamLabel", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::StreamStatus* Amazon::DynamoDBv2::Model::StreamDescription::get_StreamStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_StreamStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::StreamStatus*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_StreamStatus(::Amazon::DynamoDBv2::StreamStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::StreamStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetStreamStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::StreamViewType* Amazon::DynamoDBv2::Model::StreamDescription::get_StreamViewType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_StreamViewType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::StreamViewType*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_StreamViewType(::Amazon::DynamoDBv2::StreamViewType* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_StreamViewType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::StreamViewType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetStreamViewType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetStreamViewType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::StreamDescription::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::StreamDescription::IsSetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(),
                                                                             "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::StreamDescription* Amazon::DynamoDBv2::Model::StreamDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::StreamDescription*>());
}
inline void Amazon::DynamoDBv2::Model::StreamDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::StreamDescription*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::StreamDescription::StreamDescription() {}
