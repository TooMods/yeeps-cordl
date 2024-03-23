#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeStreamResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__StreamDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeStreamResponse.get_StreamDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::StreamDescription* (::Amazon::DynamoDBv2::Model::DescribeStreamResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeStreamResponse::get_StreamDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(),
                                                                               "get_StreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeStreamResponse.set_StreamDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeStreamResponse::*)(::Amazon::DynamoDBv2::Model::StreamDescription*)>(
    &::Amazon::DynamoDBv2::Model::DescribeStreamResponse::set_StreamDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(), "set_StreamDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeStreamResponse.IsSetStreamDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeStreamResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeStreamResponse::IsSetStreamDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122a7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(),
                                                                               "IsSetStreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeStreamResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeStreamResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeStreamResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::StreamDescription*& Amazon::DynamoDBv2::Model::DescribeStreamResponse::__cordl_internal_get__streamDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::StreamDescription*> const&
Amazon::DynamoDBv2::Model::DescribeStreamResponse::__cordl_internal_get__streamDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____streamDescription;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeStreamResponse::__cordl_internal_set__streamDescription(::Amazon::DynamoDBv2::Model::StreamDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____streamDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::StreamDescription* Amazon::DynamoDBv2::Model::DescribeStreamResponse::get_StreamDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(),
                                                                             "get_StreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::StreamDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeStreamResponse::set_StreamDescription(::Amazon::DynamoDBv2::Model::StreamDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(), "set_StreamDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::StreamDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeStreamResponse::IsSetStreamDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(),
                                                                             "IsSetStreamDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeStreamResponse* Amazon::DynamoDBv2::Model::DescribeStreamResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeStreamResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeStreamResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeStreamResponse::DescribeStreamResponse() {}
