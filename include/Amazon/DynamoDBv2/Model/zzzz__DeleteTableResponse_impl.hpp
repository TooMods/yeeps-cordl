#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DeleteTableResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TableDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteTableResponse.get_TableDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::TableDescription* (::Amazon::DynamoDBv2::Model::DeleteTableResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteTableResponse::get_TableDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(),
                                                                               "get_TableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteTableResponse.set_TableDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteTableResponse::*)(::Amazon::DynamoDBv2::Model::TableDescription*)>(
    &::Amazon::DynamoDBv2::Model::DeleteTableResponse::set_TableDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(), "set_TableDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TableDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteTableResponse.IsSetTableDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteTableResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteTableResponse::IsSetTableDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1229bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(),
                                                                               "IsSetTableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteTableResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteTableResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteTableResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::TableDescription*& Amazon::DynamoDBv2::Model::DeleteTableResponse::__cordl_internal_get__tableDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::TableDescription*> const& Amazon::DynamoDBv2::Model::DeleteTableResponse::__cordl_internal_get__tableDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableDescription;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteTableResponse::__cordl_internal_set__tableDescription(::Amazon::DynamoDBv2::Model::TableDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::TableDescription* Amazon::DynamoDBv2::Model::DeleteTableResponse::get_TableDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(),
                                                                             "get_TableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::TableDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteTableResponse::set_TableDescription(::Amazon::DynamoDBv2::Model::TableDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(), "set_TableDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::TableDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteTableResponse::IsSetTableDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(),
                                                                             "IsSetTableDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DeleteTableResponse* Amazon::DynamoDBv2::Model::DeleteTableResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DeleteTableResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteTableResponse*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DeleteTableResponse::DeleteTableResponse() {}
