#pragma once
#include "Amazon/DynamoDBv2/zzzz__AmazonDynamoDBRequest_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__UpdateGlobalTableSettingsRequest_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AutoScalingSettingsUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__GlobalTableGlobalSecondaryIndexSettingsUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaSettingsUpdate_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__BillingMode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.get_GlobalTableBillingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::BillingMode* (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableBillingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10542a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "get_GlobalTableBillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.set_GlobalTableBillingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)(::Amazon::DynamoDBv2::BillingMode*)>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableBillingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10542a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableBillingMode",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.IsSetGlobalTableBillingMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableBillingMode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x10542b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "IsSetGlobalTableBillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.get_GlobalTableGlobalSecondaryIndexSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* (
    ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(&::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableGlobalSecondaryIndexSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1054310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "get_GlobalTableGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.set_GlobalTableGlobalSecondaryIndexSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*)>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableGlobalSecondaryIndexSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1054318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableGlobalSecondaryIndexSettingsUpdate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.IsSetGlobalTableGlobalSecondaryIndexSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableGlobalSecondaryIndexSettingsUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1054320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "IsSetGlobalTableGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.get_GlobalTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1054374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "get_GlobalTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.set_GlobalTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.IsSetGlobalTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1054384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "IsSetGlobalTableName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
        &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1054394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                    "get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*)>(&::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105439c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                    "set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.IsSetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10543a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                    "IsSetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.get_GlobalTableProvisionedWriteCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableProvisionedWriteCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10543b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "get_GlobalTableProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.set_GlobalTableProvisionedWriteCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)(int64_t)>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableProvisionedWriteCapacityUnits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x10543f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableProvisionedWriteCapacityUnits",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.IsSetGlobalTableProvisionedWriteCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableProvisionedWriteCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x1054460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "IsSetGlobalTableProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.get_ReplicaSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* (
    ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(&::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_ReplicaSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105449c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "get_ReplicaSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.set_ReplicaSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*)>(&::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_ReplicaSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10544a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_ReplicaSettingsUpdate",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest.IsSetReplicaSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetReplicaSettingsUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x10544ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                                 "IsSetReplicaSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::*)()>(
    &::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1054500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::BillingMode*& Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableBillingMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableBillingMode;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::BillingMode*> const&
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableBillingMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableBillingMode;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_set__globalTableBillingMode(::Amazon::DynamoDBv2::BillingMode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalTableBillingMode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*&
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableGlobalSecondaryIndexSettingsUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableGlobalSecondaryIndexSettingsUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*> const&
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableGlobalSecondaryIndexSettingsUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableGlobalSecondaryIndexSettingsUpdate;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_set__globalTableGlobalSecondaryIndexSettingsUpdate(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalTableGlobalSecondaryIndexSettingsUpdate)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableName;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_set__globalTableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalTableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*&
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const&
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_set__globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalTableProvisionedWriteCapacityAutoScalingSettingsUpdate)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableProvisionedWriteCapacityUnits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableProvisionedWriteCapacityUnits;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__globalTableProvisionedWriteCapacityUnits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalTableProvisionedWriteCapacityUnits;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_set__globalTableProvisionedWriteCapacityUnits(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____globalTableProvisionedWriteCapacityUnits = value;
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*&
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__replicaSettingsUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaSettingsUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*> const&
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_get__replicaSettingsUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaSettingsUpdate;
}
constexpr void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::__cordl_internal_set__replicaSettingsUpdate(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaSettingsUpdate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::BillingMode* Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableBillingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "get_GlobalTableBillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::BillingMode*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableBillingMode(::Amazon::DynamoDBv2::BillingMode* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableBillingMode",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::BillingMode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableBillingMode() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "IsSetGlobalTableBillingMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableGlobalSecondaryIndexSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "get_GlobalTableGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableGlobalSecondaryIndexSettingsUpdate(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableGlobalSecondaryIndexSettingsUpdate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::GlobalTableGlobalSecondaryIndexSettingsUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableGlobalSecondaryIndexSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "IsSetGlobalTableGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "get_GlobalTableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "IsSetGlobalTableName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                  "get_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*, false>(this, ___internal_method);
}
inline void
Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                  "set_GlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                  "IsSetGlobalTableProvisionedWriteCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_GlobalTableProvisionedWriteCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "get_GlobalTableProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_GlobalTableProvisionedWriteCapacityUnits(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_GlobalTableProvisionedWriteCapacityUnits",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetGlobalTableProvisionedWriteCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "IsSetGlobalTableProvisionedWriteCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::get_ReplicaSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "get_ReplicaSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::set_ReplicaSettingsUpdate(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), "set_ReplicaSettingsUpdate",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::IsSetReplicaSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(),
                                               "IsSetReplicaSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest* Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>());
}
inline void Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::UpdateGlobalTableSettingsRequest::UpdateGlobalTableSettingsRequest() {}
