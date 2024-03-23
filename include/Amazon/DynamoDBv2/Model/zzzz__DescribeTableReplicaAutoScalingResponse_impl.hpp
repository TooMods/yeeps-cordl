#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeTableReplicaAutoScalingResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TableAutoScalingDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse.get_TableAutoScalingDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* (
    ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::*)()>(&::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::get_TableAutoScalingDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(),
                                                 "get_TableAutoScalingDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse.set_TableAutoScalingDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::*)(
    ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*)>(&::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::set_TableAutoScalingDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(),
                                    "set_TableAutoScalingDescription", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse.IsSetTableAutoScalingDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::IsSetTableAutoScalingDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122a848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(),
                                                 "IsSetTableAutoScalingDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*& Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::__cordl_internal_get__tableAutoScalingDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableAutoScalingDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*> const&
Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::__cordl_internal_get__tableAutoScalingDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableAutoScalingDescription;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::__cordl_internal_set__tableAutoScalingDescription(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableAutoScalingDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::get_TableAutoScalingDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(),
                                               "get_TableAutoScalingDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::set_TableAutoScalingDescription(::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(),
                                  "set_TableAutoScalingDescription", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::IsSetTableAutoScalingDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(),
                                               "IsSetTableAutoScalingDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse* Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeTableReplicaAutoScalingResponse::DescribeTableReplicaAutoScalingResponse() {}
