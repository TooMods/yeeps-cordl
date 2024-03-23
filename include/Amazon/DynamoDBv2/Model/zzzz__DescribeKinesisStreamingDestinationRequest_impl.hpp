#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeKinesisStreamingDestinationRequest_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(),
                                                 "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a1f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122a200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(),
                                                 "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::get_TableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(), "get_TableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::IsSetTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(),
                                               "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest* Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeKinesisStreamingDestinationRequest::DescribeKinesisStreamingDestinationRequest() {}
