#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ListBackupsRequest_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__BackupTypeFilter_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.get_BackupType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BackupTypeFilter* (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::get_BackupType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104a604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "get_BackupType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.set_BackupType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)(::Amazon::DynamoDBv2::BackupTypeFilter*)>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::set_BackupType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104a60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_BackupType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BackupTypeFilter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.IsSetBackupType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetBackupType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x104a614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "IsSetBackupType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.get_ExclusiveStartBackupArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::get_ExclusiveStartBackupArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104a674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "get_ExclusiveStartBackupArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.set_ExclusiveStartBackupArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::set_ExclusiveStartBackupArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104a67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_ExclusiveStartBackupArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.IsSetExclusiveStartBackupArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetExclusiveStartBackupArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104a684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "IsSetExclusiveStartBackupArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.get_Limit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::get_Limit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104a694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "get_Limit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.set_Limit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)(int32_t)>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::set_Limit)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x104a6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_Limit",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.IsSetLimit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetLimit)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104a738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "IsSetLimit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104a774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104a77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104a784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.get_TimeRangeLowerBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::get_TimeRangeLowerBound)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104a794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "get_TimeRangeLowerBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.set_TimeRangeLowerBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::set_TimeRangeLowerBound)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104a7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_TimeRangeLowerBound",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.IsSetTimeRangeLowerBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetTimeRangeLowerBound)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104a840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "IsSetTimeRangeLowerBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.get_TimeRangeUpperBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::get_TimeRangeUpperBound)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104a87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "get_TimeRangeUpperBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.set_TimeRangeUpperBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)(::System::DateTime)>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::set_TimeRangeUpperBound)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104a8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_TimeRangeUpperBound",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest.IsSetTimeRangeUpperBound
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetTimeRangeUpperBound)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104a928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                               "IsSetTimeRangeUpperBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ListBackupsRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ListBackupsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::ListBackupsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104a964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::BackupTypeFilter*& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__backupType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupType;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BackupTypeFilter*> const& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__backupType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____backupType;
}
constexpr void Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_set__backupType(::Amazon::DynamoDBv2::BackupTypeFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____backupType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__exclusiveStartBackupArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exclusiveStartBackupArn;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__exclusiveStartBackupArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____exclusiveStartBackupArn;
}
constexpr void Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_set__exclusiveStartBackupArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exclusiveStartBackupArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int32_t>& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__limit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr ::System::Nullable_1<int32_t> const& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__limit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____limit;
}
constexpr void Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_set__limit(::System::Nullable_1<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____limit = value;
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<::System::DateTime>& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__timeRangeLowerBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeRangeLowerBound;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__timeRangeLowerBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeRangeLowerBound;
}
constexpr void Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_set__timeRangeLowerBound(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeRangeLowerBound = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__timeRangeUpperBound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeRangeUpperBound;
}
constexpr ::System::Nullable_1<::System::DateTime> const& Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_get__timeRangeUpperBound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeRangeUpperBound;
}
constexpr void Amazon::DynamoDBv2::Model::ListBackupsRequest::__cordl_internal_set__timeRangeUpperBound(::System::Nullable_1<::System::DateTime> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeRangeUpperBound = value;
}
inline ::Amazon::DynamoDBv2::BackupTypeFilter* Amazon::DynamoDBv2::Model::ListBackupsRequest::get_BackupType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "get_BackupType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BackupTypeFilter*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListBackupsRequest::set_BackupType(::Amazon::DynamoDBv2::BackupTypeFilter* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_BackupType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BackupTypeFilter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetBackupType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "IsSetBackupType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ListBackupsRequest::get_ExclusiveStartBackupArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "get_ExclusiveStartBackupArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListBackupsRequest::set_ExclusiveStartBackupArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_ExclusiveStartBackupArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetExclusiveStartBackupArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "IsSetExclusiveStartBackupArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Amazon::DynamoDBv2::Model::ListBackupsRequest::get_Limit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "get_Limit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListBackupsRequest::set_Limit(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_Limit",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetLimit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "IsSetLimit", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ListBackupsRequest::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListBackupsRequest::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::DynamoDBv2::Model::ListBackupsRequest::get_TimeRangeLowerBound() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "get_TimeRangeLowerBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListBackupsRequest::set_TimeRangeLowerBound(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_TimeRangeLowerBound",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetTimeRangeLowerBound() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "IsSetTimeRangeLowerBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::DateTime Amazon::DynamoDBv2::Model::ListBackupsRequest::get_TimeRangeUpperBound() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "get_TimeRangeUpperBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ListBackupsRequest::set_TimeRangeUpperBound(::System::DateTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), "set_TimeRangeUpperBound",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ListBackupsRequest::IsSetTimeRangeUpperBound() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(),
                                                                             "IsSetTimeRangeUpperBound", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ListBackupsRequest* Amazon::DynamoDBv2::Model::ListBackupsRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>());
}
inline void Amazon::DynamoDBv2::Model::ListBackupsRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ListBackupsRequest*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ListBackupsRequest::ListBackupsRequest() {}
