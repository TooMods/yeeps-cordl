#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaAutoScalingDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AutoScalingSettingsDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaGlobalSecondaryIndexAutoScalingDescription_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__ReplicaStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.get_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                 "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.set_GlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*)>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_GlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "set_GlobalSecondaryIndexes",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.IsSetGlobalSecondaryIndexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetGlobalSecondaryIndexes)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104e5f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                 "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e64c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "get_RegionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.set_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "set_RegionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.IsSetRegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetRegionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "IsSetRegionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.get_ReplicaProvisionedReadCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* (
    ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(&::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_ReplicaProvisionedReadCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                 "get_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.set_ReplicaProvisionedReadCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*)>(&::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_ReplicaProvisionedReadCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                    "set_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.IsSetReplicaProvisionedReadCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetReplicaProvisionedReadCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e67c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                 "IsSetReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.get_ReplicaProvisionedWriteCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* (
    ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(&::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_ReplicaProvisionedWriteCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                 "get_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.set_ReplicaProvisionedWriteCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*)>(&::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_ReplicaProvisionedWriteCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                    "set_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.IsSetReplicaProvisionedWriteCapacityAutoScalingSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetReplicaProvisionedWriteCapacityAutoScalingSettings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                 "IsSetReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.get_ReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::ReplicaStatus* (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_ReplicaStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "get_ReplicaStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.set_ReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)(::Amazon::DynamoDBv2::ReplicaStatus*)>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_ReplicaStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e6b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "set_ReplicaStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReplicaStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription.IsSetReplicaStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetReplicaStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x104e6bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "IsSetReplicaStatus",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x104e71c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__globalSecondaryIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*> const&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__globalSecondaryIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalSecondaryIndexes;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_set__globalSecondaryIndexes(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____globalSecondaryIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__regionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__regionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_set__regionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingSettings;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingSettings;
}
constexpr void
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaProvisionedReadCapacityAutoScalingSettings)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedWriteCapacityAutoScalingSettings;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*> const&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__replicaProvisionedWriteCapacityAutoScalingSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedWriteCapacityAutoScalingSettings;
}
constexpr void
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_set__replicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaProvisionedWriteCapacityAutoScalingSettings)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::ReplicaStatus*& Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__replicaStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::ReplicaStatus*> const& Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_get__replicaStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaStatus;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::__cordl_internal_set__replicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*
Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_GlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                                             "get_GlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_GlobalSecondaryIndexes(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "set_GlobalSecondaryIndexes",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetGlobalSecondaryIndexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                                             "IsSetGlobalSecondaryIndexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_RegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                                             "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_RegionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "set_RegionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetRegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                                             "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_ReplicaProvisionedReadCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                               "get_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_ReplicaProvisionedReadCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                  "set_ReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetReplicaProvisionedReadCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                               "IsSetReplicaProvisionedReadCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_ReplicaProvisionedWriteCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                               "get_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_ReplicaProvisionedWriteCapacityAutoScalingSettings(::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                  "set_ReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsDescription*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetReplicaProvisionedWriteCapacityAutoScalingSettings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                               "IsSetReplicaProvisionedWriteCapacityAutoScalingSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::ReplicaStatus* Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::get_ReplicaStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                                             "get_ReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::ReplicaStatus*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::set_ReplicaStatus(::Amazon::DynamoDBv2::ReplicaStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(), "set_ReplicaStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::ReplicaStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::IsSetReplicaStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                                             "IsSetReplicaStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription* Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>());
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription::ReplicaAutoScalingDescription() {}
