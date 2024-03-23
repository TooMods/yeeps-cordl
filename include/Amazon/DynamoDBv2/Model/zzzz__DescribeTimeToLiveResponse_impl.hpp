#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeTimeToLiveResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TimeToLiveDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse.get_TimeToLiveDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::TimeToLiveDescription* (::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::get_TimeToLiveDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(),
                                                                               "get_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse.set_TimeToLiveDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::*)(
    ::Amazon::DynamoDBv2::Model::TimeToLiveDescription*)>(&::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::set_TimeToLiveDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a8f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(), "set_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse.IsSetTimeToLiveDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::IsSetTimeToLiveDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122a900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(),
                                                                               "IsSetTimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::TimeToLiveDescription*& Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::__cordl_internal_get__timeToLiveDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToLiveDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*> const&
Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::__cordl_internal_get__timeToLiveDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToLiveDescription;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::__cordl_internal_set__timeToLiveDescription(::Amazon::DynamoDBv2::Model::TimeToLiveDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeToLiveDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::TimeToLiveDescription* Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::get_TimeToLiveDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(),
                                                                             "get_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::set_TimeToLiveDescription(::Amazon::DynamoDBv2::Model::TimeToLiveDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(), "set_TimeToLiveDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TimeToLiveDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::IsSetTimeToLiveDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(),
                                                                             "IsSetTimeToLiveDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse* Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeTimeToLiveResponse::DescribeTimeToLiveResponse() {}
