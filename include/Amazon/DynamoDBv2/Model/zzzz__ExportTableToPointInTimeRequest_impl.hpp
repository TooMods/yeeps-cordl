#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExportTableToPointInTimeRequest_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ExportFormat_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__S3SseAlgorithm_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_ClientToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_ClientToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_ClientToken",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_ClientToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_ClientToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_ClientToken",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetClientToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetClientToken)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1048130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetClientToken",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_ExportFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ExportFormat* (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_ExportFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_ExportFormat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_ExportFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::Amazon::DynamoDBv2::ExportFormat*)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_ExportFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_ExportFormat", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ExportFormat*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetExportFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetExportFormat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1048150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetExportFormat",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_ExportTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_ExportTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10481b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_ExportTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_ExportTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_ExportTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x10481ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_ExportTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetExportTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetExportTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104825c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetExportTime",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_S3Bucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3Bucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3Bucket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_S3Bucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3Bucket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10482a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3Bucket",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetS3Bucket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3Bucket)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10482a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3Bucket",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_S3BucketOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3BucketOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10482b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3BucketOwner",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_S3BucketOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3BucketOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10482c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3BucketOwner",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetS3BucketOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3BucketOwner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10482c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3BucketOwner",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_S3Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10482d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3Prefix",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_S3Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10482e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3Prefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetS3Prefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3Prefix)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10482e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3Prefix",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_S3SseAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::S3SseAlgorithm* (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3SseAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10482f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3SseAlgorithm",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_S3SseAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::Amazon::DynamoDBv2::S3SseAlgorithm*)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3SseAlgorithm)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3SseAlgorithm", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetS3SseAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3SseAlgorithm)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1048308;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3SseAlgorithm",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_S3SseKmsKeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3SseKmsKeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3SseKmsKeyId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_S3SseKmsKeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3SseKmsKeyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3SseKmsKeyId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetS3SseKmsKeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3SseKmsKeyId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1048378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3SseKmsKeyId",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.get_TableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_TableArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_TableArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.set_TableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_TableArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1048390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_TableArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest.IsSetTableArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetTableArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1048398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetTableArn",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10483a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__clientToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientToken;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__clientToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clientToken;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__clientToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clientToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ExportFormat*& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__exportFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportFormat;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ExportFormat*> const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__exportFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportFormat;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__exportFormat(::Amazon::DynamoDBv2::ExportFormat* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exportFormat)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__exportTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportTime;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__exportTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportTime;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__exportTime(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____exportTime = value;
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3Bucket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3Bucket;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3Bucket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3Bucket;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__s3Bucket(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____s3Bucket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3BucketOwner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3BucketOwner;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3BucketOwner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3BucketOwner;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__s3BucketOwner(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____s3BucketOwner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3Prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3Prefix;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3Prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3Prefix;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__s3Prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____s3Prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::S3SseAlgorithm*& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3SseAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3SseAlgorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::S3SseAlgorithm*> const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3SseAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3SseAlgorithm;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__s3SseAlgorithm(::Amazon::DynamoDBv2::S3SseAlgorithm* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____s3SseAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3SseKmsKeyId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3SseKmsKeyId;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__s3SseKmsKeyId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____s3SseKmsKeyId;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__s3SseKmsKeyId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____s3SseKmsKeyId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__tableArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_get__tableArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableArn;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::__cordl_internal_set__tableArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_ClientToken() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_ClientToken",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_ClientToken(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_ClientToken",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetClientToken() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetClientToken",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ExportFormat* Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_ExportFormat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_ExportFormat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ExportFormat*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_ExportFormat(::Amazon::DynamoDBv2::ExportFormat* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_ExportFormat", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ExportFormat*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetExportFormat() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetExportFormat",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_ExportTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_ExportTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_ExportTime(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_ExportTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetExportTime() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetExportTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3Bucket() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3Bucket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3Bucket(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3Bucket",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3Bucket() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3Bucket",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3BucketOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3BucketOwner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3BucketOwner(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3BucketOwner",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3BucketOwner() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3BucketOwner",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3Prefix() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3Prefix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3Prefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3Prefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3Prefix() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3Prefix",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::S3SseAlgorithm* Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3SseAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3SseAlgorithm",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::S3SseAlgorithm*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3SseAlgorithm(::Amazon::DynamoDBv2::S3SseAlgorithm* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3SseAlgorithm", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::S3SseAlgorithm*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3SseAlgorithm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3SseAlgorithm",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_S3SseKmsKeyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_S3SseKmsKeyId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_S3SseKmsKeyId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_S3SseKmsKeyId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetS3SseKmsKeyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetS3SseKmsKeyId",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::get_TableArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "get_TableArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::set_TableArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "set_TableArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::IsSetTableArn() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), "IsSetTableArn",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest* Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>());
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeRequest::ExportTableToPointInTimeRequest() {}
