#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateContinuousBackupsRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__PointInTimeRecoverySpecification_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest.get_PointInTimeRecoverySpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* (
    ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::*)()>(&::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::get_PointInTimeRecoverySpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(),
                                                 "get_PointInTimeRecoverySpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest.set_PointInTimeRecoverySpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::*)(
    ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*)>(&::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::set_PointInTimeRecoverySpecification)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053f58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "set_PointInTimeRecoverySpecification",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest.IsSetPointInTimeRecoverySpecification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::IsSetPointInTimeRecoverySpecification)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1053f60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(),
                                                 "IsSetPointInTimeRecoverySpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "get_TableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1053f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "IsSetTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*& Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::__cordl_internal_get__pointInTimeRecoverySpecification() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointInTimeRecoverySpecification;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*> const&
Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::__cordl_internal_get__pointInTimeRecoverySpecification() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointInTimeRecoverySpecification;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::__cordl_internal_set__pointInTimeRecoverySpecification(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointInTimeRecoverySpecification)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::get_PointInTimeRecoverySpecification() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(),
                                               "get_PointInTimeRecoverySpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::set_PointInTimeRecoverySpecification(::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "set_PointInTimeRecoverySpecification",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::IsSetPointInTimeRecoverySpecification() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(),
                                               "IsSetPointInTimeRecoverySpecification", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::get_TableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "get_TableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::IsSetTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), "IsSetTableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest* Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>());
}
inline void Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::UpdateContinuousBackupsRequest::UpdateContinuousBackupsRequest() {}
