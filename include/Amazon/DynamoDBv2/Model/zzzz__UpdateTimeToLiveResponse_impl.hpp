#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateTimeToLiveResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TimeToLiveSpecification_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse.get_TimeToLiveSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* (::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::get_TimeToLiveSpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1055884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(),
                                                                               "get_TimeToLiveSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse.set_TimeToLiveSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::*)(
    ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*)>(&::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::set_TimeToLiveSpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105588c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(), "set_TimeToLiveSpecification", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse.IsSetTimeToLiveSpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::IsSetTimeToLiveSpecification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1055894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(),
                                                                               "IsSetTimeToLiveSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10558a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*& Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::__cordl_internal_get__timeToLiveSpecification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToLiveSpecification;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*> const&
Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::__cordl_internal_get__timeToLiveSpecification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToLiveSpecification;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::__cordl_internal_set__timeToLiveSpecification(::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____timeToLiveSpecification)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::get_TimeToLiveSpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(),
                                                                             "get_TimeToLiveSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::set_TimeToLiveSpecification(::Amazon::DynamoDBv2::Model::TimeToLiveSpecification* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(), "set_TimeToLiveSpecification", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TimeToLiveSpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::IsSetTimeToLiveSpecification() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(),
                                                                             "IsSetTimeToLiveSpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse* Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>());
}
inline void Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::UpdateTimeToLiveResponse::UpdateTimeToLiveResponse() {}
