#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__DeleteBackupResponse_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__BackupDescription_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteBackupResponse.get_BackupDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::BackupDescription* (::Amazon::DynamoDBv2::Model::DeleteBackupResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteBackupResponse::get_BackupDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12291f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(),
                                                                               "get_BackupDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteBackupResponse.set_BackupDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteBackupResponse::*)(::Amazon::DynamoDBv2::Model::BackupDescription*)>(
    &::Amazon::DynamoDBv2::Model::DeleteBackupResponse::set_BackupDescription)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12291fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(), "set_BackupDescription", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BackupDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteBackupResponse.IsSetBackupDescription
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::DeleteBackupResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteBackupResponse::IsSetBackupDescription)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1229204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(),
                                                                               "IsSetBackupDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::DeleteBackupResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::DeleteBackupResponse::*)()>(
    &::Amazon::DynamoDBv2::Model::DeleteBackupResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1229214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::BackupDescription*& Amazon::DynamoDBv2::Model::DeleteBackupResponse::__cordl_internal_get__backupDescription() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupDescription;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::BackupDescription*> const& Amazon::DynamoDBv2::Model::DeleteBackupResponse::__cordl_internal_get__backupDescription() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupDescription;
}
constexpr void Amazon::DynamoDBv2::Model::DeleteBackupResponse::__cordl_internal_set__backupDescription(::Amazon::DynamoDBv2::Model::BackupDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backupDescription)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::BackupDescription* Amazon::DynamoDBv2::Model::DeleteBackupResponse::get_BackupDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(),
                                                                             "get_BackupDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::BackupDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::DeleteBackupResponse::set_BackupDescription(::Amazon::DynamoDBv2::Model::BackupDescription* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(), "set_BackupDescription", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::BackupDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::DeleteBackupResponse::IsSetBackupDescription() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(),
                                                                             "IsSetBackupDescription", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::DeleteBackupResponse* Amazon::DynamoDBv2::Model::DeleteBackupResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>());
}
inline void Amazon::DynamoDBv2::Model::DeleteBackupResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::DeleteBackupResponse*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::DeleteBackupResponse::DeleteBackupResponse() {}
