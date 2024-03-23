#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__S3ClientCache_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBClient_def.hpp"
#include "Amazon/Runtime/SharedInterfaces/zzzz__ICoreAmazonS3_def.hpp"
#include "Amazon/zzzz__RegionEndpoint_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3ClientCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::S3ClientCache::*)(::Amazon::DynamoDBv2::AmazonDynamoDBClient*)>(
    &::Amazon::DynamoDBv2::DataModel::S3ClientCache::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1430bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3ClientCache.UseClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::S3ClientCache::*)(
    ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*, ::Amazon::RegionEndpoint*)>(&::Amazon::DynamoDBv2::DataModel::S3ClientCache::UseClient)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1430cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(), "UseClient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::S3ClientCache.GetClient
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3* (
    ::Amazon::DynamoDBv2::DataModel::S3ClientCache::*)(::Amazon::RegionEndpoint*)>(&::Amazon::DynamoDBv2::DataModel::S3ClientCache::GetClient)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1430dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(), "GetClient", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::AmazonDynamoDBClient*& Amazon::DynamoDBv2::DataModel::S3ClientCache::__cordl_internal_get_ddbClient() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ddbClient;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::AmazonDynamoDBClient*> const& Amazon::DynamoDBv2::DataModel::S3ClientCache::__cordl_internal_get_ddbClient() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ddbClient;
}
constexpr void Amazon::DynamoDBv2::DataModel::S3ClientCache::__cordl_internal_set_ddbClient(::Amazon::DynamoDBv2::AmazonDynamoDBClient* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ddbClient)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>*&
Amazon::DynamoDBv2::DataModel::S3ClientCache::__cordl_internal_get_clientsByRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientsByRegion;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>*> const&
Amazon::DynamoDBv2::DataModel::S3ClientCache::__cordl_internal_get_clientsByRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clientsByRegion;
}
constexpr void Amazon::DynamoDBv2::DataModel::S3ClientCache::__cordl_internal_set_clientsByRegion(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___clientsByRegion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::S3ClientCache* Amazon::DynamoDBv2::DataModel::S3ClientCache::New_ctor(::Amazon::DynamoDBv2::AmazonDynamoDBClient* ddbClient) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>(ddbClient));
}
inline void Amazon::DynamoDBv2::DataModel::S3ClientCache::_ctor(::Amazon::DynamoDBv2::AmazonDynamoDBClient* ddbClient) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::AmazonDynamoDBClient*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ddbClient);
}
inline void Amazon::DynamoDBv2::DataModel::S3ClientCache::UseClient(::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3* client, ::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(), "UseClient", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, client, region);
}
inline ::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3* Amazon::DynamoDBv2::DataModel::S3ClientCache::GetClient(::Amazon::RegionEndpoint* region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::S3ClientCache*>::get(), "GetClient", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::RegionEndpoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::SharedInterfaces::ICoreAmazonS3*, false>(this, ___internal_method, region);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::S3ClientCache::S3ClientCache() {}
