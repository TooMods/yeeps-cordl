#pragma once
#include "Amazon/Runtime/zzzz__AmazonServiceClient_impl.hpp"
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBStreamsClient_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeStreamRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeStreamResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetRecordsRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetRecordsResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetShardIteratorRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GetShardIteratorResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ListStreamsRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ListStreamsResponse_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBStreamsConfig_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__IAmazonDynamoDBStreams_def.hpp"
#include "Amazon/Runtime/Internal/Auth/zzzz__AbstractAWSSigner_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__IServiceMetadata_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RuntimePipeline_def.hpp"
#include "Amazon/Runtime/zzzz__AWSCredentials_def.hpp"
#include "Amazon/Runtime/zzzz__IAmazonService_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1222db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::RegionEndpoint*)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1222e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1222f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::Runtime::AWSCredentials*)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x1222f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(
    ::Amazon::Runtime::AWSCredentials*, ::Amazon::RegionEndpoint*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1222ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(
    ::Amazon::Runtime::AWSCredentials*, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1222fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::StringW, ::StringW)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x122307c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::StringW, ::StringW, ::Amazon::RegionEndpoint*)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1223100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(
    ::StringW, ::StringW, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12230f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::StringW, ::StringW, ::StringW)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x1223198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::StringW, ::StringW, ::StringW, ::Amazon::RegionEndpoint*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x122322c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(
    ::StringW, ::StringW, ::StringW, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1223224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.CreateSigner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::CreateSigner)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x12232cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.CustomizeRuntimePipeline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::Runtime::Internal::RuntimePipeline*)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::CustomizeRuntimePipeline)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x1223328;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.get_ServiceMetadata
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::IServiceMetadata* (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::get_ServiceMetadata)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1223478;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(bool)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::Dispose)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x12234d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.DescribeStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::DescribeStreamResponse* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::DescribeStreamRequest*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::DescribeStream)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x12234dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.DescribeStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::StringW, ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::DescribeStreamAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1223648;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.DescribeStreamAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::DescribeStreamRequest*, ::System::Threading::CancellationToken)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::DescribeStreamAsync)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x12236d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.GetRecords
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::GetRecordsResponse* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::GetRecordsRequest*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetRecords)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1223854;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.GetRecordsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::StringW, ::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetRecordsAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x12239c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.GetRecordsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::GetRecordsRequest*, ::System::Threading::CancellationToken)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetRecordsAsync)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1223a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.GetShardIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetShardIterator)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1223bc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.GetShardIteratorAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest*, ::System::Threading::CancellationToken)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetShardIteratorAsync)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1223d30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.ListStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ListStreamsResponse* (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreams)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1223eac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.ListStreams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ListStreamsResponse* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::ListStreamsRequest*)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreams)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x1223f1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.ListStreamsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::System::Threading::CancellationToken)>(&::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreamsAsync)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1224088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.ListStreamsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>* (
    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)(::Amazon::DynamoDBv2::Model::ListStreamsRequest*, ::System::Threading::CancellationToken)>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreamsAsync)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x1224108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient.Amazon_Runtime_IAmazonService_get_Config
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::IClientConfig* (::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::*)()>(
    &::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::Amazon_Runtime_IAmazonService_get_Config)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12242fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                                 "Amazon.Runtime.IAmazonService.get_Config", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Amazon::DynamoDBv2::IAmazonDynamoDBStreams"
constexpr Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::operator ::Amazon::DynamoDBv2::IAmazonDynamoDBStreams*() noexcept {
  return static_cast<::Amazon::DynamoDBv2::IAmazonDynamoDBStreams*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::DynamoDBv2::IAmazonDynamoDBStreams"
constexpr ::Amazon::DynamoDBv2::IAmazonDynamoDBStreams* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::i___Amazon__DynamoDBv2__IAmazonDynamoDBStreams() noexcept {
  return static_cast<::Amazon::DynamoDBv2::IAmazonDynamoDBStreams*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Amazon::Runtime::IAmazonService"
constexpr Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::operator ::Amazon::Runtime::IAmazonService*() noexcept {
  return static_cast<::Amazon::Runtime::IAmazonService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::IAmazonService"
constexpr ::Amazon::Runtime::IAmazonService* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::i___Amazon__Runtime__IAmazonService() noexcept {
  return static_cast<::Amazon::Runtime::IAmazonService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::setStaticF_serviceMetadata(::Amazon::Runtime::Internal::IServiceMetadata* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::IServiceMetadata*, "serviceMetadata",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get>(
      std::forward<::Amazon::Runtime::Internal::IServiceMetadata*>(value));
}
inline ::Amazon::Runtime::Internal::IServiceMetadata* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::getStaticF_serviceMetadata() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::IServiceMetadata*, "serviceMetadata",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get>();
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>());
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::Amazon::RegionEndpoint* region) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(region));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, region);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(config));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::Amazon::Runtime::AWSCredentials* credentials) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(credentials));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::Amazon::Runtime::AWSCredentials* credentials) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, credentials);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::RegionEndpoint* region) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(credentials, region));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, credentials, region);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::Amazon::Runtime::AWSCredentials* credentials,
                                                                                                                    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(credentials, clientConfig));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::Amazon::Runtime::AWSCredentials* credentials, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AWSCredentials*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, credentials, clientConfig);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(awsAccessKeyId, awsSecretAccessKey));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey,
                                                                                                                    ::Amazon::RegionEndpoint* region) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(awsAccessKeyId, awsSecretAccessKey, region));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, region);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey,
                                                                                                                    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(awsAccessKeyId, awsSecretAccessKey, clientConfig));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, clientConfig);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(awsAccessKeyId, awsSecretAccessKey, awsSessionToken));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, awsSessionToken);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken,
                                                                                                                    ::Amazon::RegionEndpoint* region) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(awsAccessKeyId, awsSecretAccessKey, awsSessionToken, region));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken, ::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, awsSessionToken, region);
}
inline ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::New_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken,
                                                                                                                    ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>(awsAccessKeyId, awsSecretAccessKey, awsSessionToken, clientConfig));
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::_ctor(::StringW awsAccessKeyId, ::StringW awsSecretAccessKey, ::StringW awsSessionToken,
                                                                   ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig* clientConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, awsAccessKeyId, awsSecretAccessKey, awsSessionToken, clientConfig);
}
inline ::Amazon::Runtime::Internal::Auth::AbstractAWSSigner* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::CreateSigner() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::Auth::AbstractAWSSigner*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::CustomizeRuntimePipeline(::Amazon::Runtime::Internal::RuntimePipeline* pipeline) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pipeline);
}
inline ::Amazon::Runtime::Internal::IServiceMetadata* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::get_ServiceMetadata() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::IServiceMetadata*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::Amazon::DynamoDBv2::Model::DescribeStreamResponse* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::DescribeStream(::Amazon::DynamoDBv2::Model::DescribeStreamRequest* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 21)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*, false>(this, ___internal_method, request);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>*
Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::DescribeStreamAsync(::StringW streamArn, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 22)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>*, false>(this, ___internal_method, streamArn, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>*
Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::DescribeStreamAsync(::Amazon::DynamoDBv2::Model::DescribeStreamRequest* request, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 23)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>*, false>(this, ___internal_method, request, cancellationToken);
}
inline ::Amazon::DynamoDBv2::Model::GetRecordsResponse* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetRecords(::Amazon::DynamoDBv2::Model::GetRecordsRequest* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 24)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::GetRecordsResponse*, false>(this, ___internal_method, request);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>*
Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetRecordsAsync(::StringW shardIterator, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 25)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>*, false>(this, ___internal_method, shardIterator, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>*
Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetRecordsAsync(::Amazon::DynamoDBv2::Model::GetRecordsRequest* request, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetRecordsResponse*>*, false>(this, ___internal_method, request, cancellationToken);
}
inline ::Amazon::DynamoDBv2::Model::GetShardIteratorResponse* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetShardIterator(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*, false>(this, ___internal_method, request);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>*
Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::GetShardIteratorAsync(::Amazon::DynamoDBv2::Model::GetShardIteratorRequest* request, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::GetShardIteratorResponse*>*, false>(this, ___internal_method, request, cancellationToken);
}
inline ::Amazon::DynamoDBv2::Model::ListStreamsResponse* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreams() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ListStreamsResponse*, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ListStreamsResponse* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreams(::Amazon::DynamoDBv2::Model::ListStreamsRequest* request) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ListStreamsResponse*, false>(this, ___internal_method, request);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>*
Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreamsAsync(::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 31)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>*, false>(this, ___internal_method, cancellationToken);
}
/// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
inline ::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>*
Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::ListStreamsAsync(::Amazon::DynamoDBv2::Model::ListStreamsRequest* request, ::System::Threading::CancellationToken cancellationToken) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::DynamoDBv2::Model::ListStreamsResponse*>*, false>(this, ___internal_method, request, cancellationToken);
}
inline ::Amazon::Runtime::IClientConfig* Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::Amazon_Runtime_IAmazonService_get_Config() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient*>::get(),
                                               "Amazon.Runtime.IAmazonService.get_Config", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::IClientConfig*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::AmazonDynamoDBStreamsClient::AmazonDynamoDBStreamsClient() {}
