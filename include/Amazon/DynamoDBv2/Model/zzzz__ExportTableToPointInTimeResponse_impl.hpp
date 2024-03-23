#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExportTableToPointInTimeResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ExportDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse.get_ExportDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::ExportDescription* (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::get_ExportDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10483b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(), "get_ExportDescription",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse.set_ExportDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::*)(
    ::Amazon::DynamoDBv2::Model::ExportDescription*)>(&::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::set_ExportDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10483b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(), "set_ExportDescription",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ExportDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse.IsSetExportDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::IsSetExportDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10483c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(),
                                                 "IsSetExportDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10483d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::ExportDescription*& Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::__cordl_internal_get__exportDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::ExportDescription*> const&
Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::__cordl_internal_get__exportDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exportDescription;
}
constexpr void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::__cordl_internal_set__exportDescription(::Amazon::DynamoDBv2::Model::ExportDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exportDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::ExportDescription* Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::get_ExportDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(), "get_ExportDescription",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::ExportDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::set_ExportDescription(::Amazon::DynamoDBv2::Model::ExportDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(), "set_ExportDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::ExportDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::IsSetExportDescription() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(), "IsSetExportDescription",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse* Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>());
}
inline void Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ExportTableToPointInTimeResponse::ExportTableToPointInTimeResponse() {}
