#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeEndpointsResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Endpoint_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse.get_Endpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* (
    ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::*)()>(&::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::get_Endpoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(),
                                                                               "get_Endpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse.set_Endpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*)>(&::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::set_Endpoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(), "set_Endpoints", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse.IsSetEndpoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::IsSetEndpoints)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1229f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(),
                                                                               "IsSetEndpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1229fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*& Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::__cordl_internal_get__endpoints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endpoints;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*> const&
Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::__cordl_internal_get__endpoints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endpoints;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::__cordl_internal_set__endpoints(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endpoints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::get_Endpoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(),
                                                                             "get_Endpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::set_Endpoints(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(), "set_Endpoints", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::Endpoint*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::IsSetEndpoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(),
                                                                             "IsSetEndpoints", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse* Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeEndpointsResponse::DescribeEndpointsResponse() {}
