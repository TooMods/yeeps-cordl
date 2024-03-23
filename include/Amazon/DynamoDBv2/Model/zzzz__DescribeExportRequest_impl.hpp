#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeExportRequest_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeExportRequest.get_ExportArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::DescribeExportRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeExportRequest::get_ExportArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(),
                                                                               "get_ExportArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeExportRequest.set_ExportArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeExportRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::DescribeExportRequest::set_ExportArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(), "set_ExportArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeExportRequest.IsSetExportArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeExportRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeExportRequest::IsSetExportArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122a038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(),
                                                                               "IsSetExportArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeExportRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeExportRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeExportRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::DescribeExportRequest::__cordl_internal_get__exportArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::DescribeExportRequest::__cordl_internal_get__exportArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportArn;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeExportRequest::__cordl_internal_set__exportArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exportArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::DescribeExportRequest::get_ExportArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(),
                                                                             "get_ExportArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeExportRequest::set_ExportArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(), "set_ExportArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeExportRequest::IsSetExportArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(),
                                                                             "IsSetExportArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeExportRequest* Amazon::DynamoDBv2::Model::DescribeExportRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeExportRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeExportRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeExportRequest::DescribeExportRequest() {}
