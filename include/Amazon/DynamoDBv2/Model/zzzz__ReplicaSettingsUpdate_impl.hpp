#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaSettingsUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AutoScalingSettingsUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaGlobalSecondaryIndexSettingsUpdate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                                               "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.set_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(), "set_RegionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.IsSetRegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetRegionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104f4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                                               "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.get_ReplicaGlobalSecondaryIndexSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* (
    ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(&::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_ReplicaGlobalSecondaryIndexSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                 "get_ReplicaGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.set_ReplicaGlobalSecondaryIndexSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*)>(
        &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_ReplicaGlobalSecondaryIndexSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(), "set_ReplicaGlobalSecondaryIndexSettingsUpdate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.IsSetReplicaGlobalSecondaryIndexSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetReplicaGlobalSecondaryIndexSettingsUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104f510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                 "IsSetReplicaGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                 "get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*)>(&::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104f56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                    "set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.IsSetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104f574;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                 "IsSetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.get_ReplicaProvisionedReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_ReplicaProvisionedReadCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104f584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                 "get_ReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.set_ReplicaProvisionedReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)(int64_t)>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_ReplicaProvisionedReadCapacityUnits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104f5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(), "set_ReplicaProvisionedReadCapacityUnits",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate.IsSetReplicaProvisionedReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetReplicaProvisionedReadCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104f630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                 "IsSetReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x104f66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__regionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__regionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_set__regionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*&
Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__replicaGlobalSecondaryIndexSettingsUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaGlobalSecondaryIndexSettingsUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*> const&
Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__replicaGlobalSecondaryIndexSettingsUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaGlobalSecondaryIndexSettingsUpdate;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_set__replicaGlobalSecondaryIndexSettingsUpdate(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaGlobalSecondaryIndexSettingsUpdate)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettingsUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingSettingsUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const&
Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingSettingsUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingSettingsUpdate;
}
constexpr void
Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_set__replicaProvisionedReadCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaProvisionedReadCapacityAutoScalingSettingsUpdate)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Nullable_1<int64_t>& Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__replicaProvisionedReadCapacityUnits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityUnits;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_get__replicaProvisionedReadCapacityUnits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityUnits;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::__cordl_internal_set__replicaProvisionedReadCapacityUnits(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____replicaProvisionedReadCapacityUnits = value;
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_RegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                                             "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_RegionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(), "set_RegionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetRegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                                             "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*
Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_ReplicaGlobalSecondaryIndexSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                               "get_ReplicaGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_ReplicaGlobalSecondaryIndexSettingsUpdate(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(), "set_ReplicaGlobalSecondaryIndexSettingsUpdate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexSettingsUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetReplicaGlobalSecondaryIndexSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                               "IsSetReplicaGlobalSecondaryIndexSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                               "get_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                  "set_ReplicaProvisionedReadCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                               "IsSetReplicaProvisionedReadCapacityAutoScalingSettingsUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int64_t Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::get_ReplicaProvisionedReadCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                               "get_ReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::set_ReplicaProvisionedReadCapacityUnits(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(), "set_ReplicaProvisionedReadCapacityUnits",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::IsSetReplicaProvisionedReadCapacityUnits() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                               "IsSetReplicaProvisionedReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate* Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>());
}
inline void Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ReplicaSettingsUpdate::ReplicaSettingsUpdate() {}
