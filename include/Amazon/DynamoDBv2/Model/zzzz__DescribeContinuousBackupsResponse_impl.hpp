#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeContinuousBackupsResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ContinuousBackupsDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse.get_ContinuousBackupsDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* (
    ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::*)()>(&::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::get_ContinuousBackupsDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(),
                                                 "get_ContinuousBackupsDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse.set_ContinuousBackupsDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::*)(
    ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*)>(&::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::set_ContinuousBackupsDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(), "set_ContinuousBackupsDescription",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse.IsSetContinuousBackupsDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::IsSetContinuousBackupsDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1229c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(),
                                                 "IsSetContinuousBackupsDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*& Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::__cordl_internal_get__continuousBackupsDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuousBackupsDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*> const&
Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::__cordl_internal_get__continuousBackupsDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____continuousBackupsDescription;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::__cordl_internal_set__continuousBackupsDescription(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____continuousBackupsDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::get_ContinuousBackupsDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(),
                                               "get_ContinuousBackupsDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::set_ContinuousBackupsDescription(::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(), "set_ContinuousBackupsDescription",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ContinuousBackupsDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::IsSetContinuousBackupsDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(),
                                               "IsSetContinuousBackupsDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse* Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeContinuousBackupsResponse::DescribeContinuousBackupsResponse() {}
