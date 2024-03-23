#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DescribeGlobalTableResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalTableDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse.get_GlobalTableDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::GlobalTableDescription* (::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::get_GlobalTableDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a0a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(),
                                                                               "get_GlobalTableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse.set_GlobalTableDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::*)(
    ::Amazon::DynamoDBv2::Model::GlobalTableDescription*)>(&::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::set_GlobalTableDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(), "set_GlobalTableDescription",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::GlobalTableDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse.IsSetGlobalTableDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::IsSetGlobalTableDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x122a0b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(),
                                                                               "IsSetGlobalTableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122a0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::GlobalTableDescription*& Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::__cordl_internal_get__globalTableDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::GlobalTableDescription*> const&
Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::__cordl_internal_get__globalTableDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableDescription;
}
constexpr void Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::__cordl_internal_set__globalTableDescription(::Amazon::DynamoDBv2::Model::GlobalTableDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalTableDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::GlobalTableDescription* Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::get_GlobalTableDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(),
                                                                             "get_GlobalTableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::GlobalTableDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::set_GlobalTableDescription(::Amazon::DynamoDBv2::Model::GlobalTableDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(), "set_GlobalTableDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::GlobalTableDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::IsSetGlobalTableDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(),
                                                                             "IsSetGlobalTableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse* Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DescribeGlobalTableResponse::DescribeGlobalTableResponse() {}
