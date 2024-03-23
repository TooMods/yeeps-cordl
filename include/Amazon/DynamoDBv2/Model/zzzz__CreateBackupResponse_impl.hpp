#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__CreateBackupResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BackupDetails_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateBackupResponse.get_BackupDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::BackupDetails* (::Amazon::DynamoDBv2::Model::CreateBackupResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateBackupResponse::get_BackupDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1228494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(),
                                                                               "get_BackupDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateBackupResponse.set_BackupDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateBackupResponse::*)(::Amazon::DynamoDBv2::Model::BackupDetails*)>(
    &::Amazon::DynamoDBv2::Model::CreateBackupResponse::set_BackupDetails)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x122849c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(), "set_BackupDetails", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BackupDetails*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateBackupResponse.IsSetBackupDetails
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::CreateBackupResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateBackupResponse::IsSetBackupDetails)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12284a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(),
                                                                               "IsSetBackupDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::CreateBackupResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::CreateBackupResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::CreateBackupResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12284b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::BackupDetails*& Amazon::DynamoDBv2::Model::CreateBackupResponse::__cordl_internal_get__backupDetails() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupDetails;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BackupDetails*> const& Amazon::DynamoDBv2::Model::CreateBackupResponse::__cordl_internal_get__backupDetails() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupDetails;
}
constexpr void Amazon::DynamoDBv2::Model::CreateBackupResponse::__cordl_internal_set__backupDetails(::Amazon::DynamoDBv2::Model::BackupDetails* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backupDetails)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::BackupDetails* Amazon::DynamoDBv2::Model::CreateBackupResponse::get_BackupDetails() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(),
                                                                             "get_BackupDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::BackupDetails*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::CreateBackupResponse::set_BackupDetails(::Amazon::DynamoDBv2::Model::BackupDetails* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(), "set_BackupDetails", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BackupDetails*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::CreateBackupResponse::IsSetBackupDetails() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(),
                                                                             "IsSetBackupDetails", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::CreateBackupResponse* Amazon::DynamoDBv2::Model::CreateBackupResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>());
}
inline void Amazon::DynamoDBv2::Model::CreateBackupResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::CreateBackupResponse*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::CreateBackupResponse::CreateBackupResponse() {}
