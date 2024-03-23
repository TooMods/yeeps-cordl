#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaAutoScalingUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__AutoScalingSettingsUpdate_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaGlobalSecondaryIndexAutoScalingUpdate_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.get_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::get_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                                               "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.set_RegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::set_RegionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(), "set_RegionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.IsSetRegionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::IsSetRegionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                                               "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.get_ReplicaGlobalSecondaryIndexUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* (
    ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)()>(&::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::get_ReplicaGlobalSecondaryIndexUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                 "get_ReplicaGlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.set_ReplicaGlobalSecondaryIndexUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*)>(
        &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::set_ReplicaGlobalSecondaryIndexUpdates)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(), "set_ReplicaGlobalSecondaryIndexUpdates",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.IsSetReplicaGlobalSecondaryIndexUpdates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::IsSetReplicaGlobalSecondaryIndexUpdates)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x104e7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                 "IsSetReplicaGlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.get_ReplicaProvisionedReadCapacityAutoScalingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::get_ReplicaProvisionedReadCapacityAutoScalingUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e81c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                 "get_ReplicaProvisionedReadCapacityAutoScalingUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.set_ReplicaProvisionedReadCapacityAutoScalingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)(
    ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*)>(&::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::set_ReplicaProvisionedReadCapacityAutoScalingUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104e824;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                    "set_ReplicaProvisionedReadCapacityAutoScalingUpdate", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate.IsSetReplicaProvisionedReadCapacityAutoScalingUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::IsSetReplicaProvisionedReadCapacityAutoScalingUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x104e82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                 "IsSetReplicaProvisionedReadCapacityAutoScalingUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::*)()>(
    &::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x104e83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_get__regionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_get__regionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____regionName;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_set__regionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____regionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_get__replicaGlobalSecondaryIndexUpdates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaGlobalSecondaryIndexUpdates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*> const&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_get__replicaGlobalSecondaryIndexUpdates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaGlobalSecondaryIndexUpdates;
}
constexpr void Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_set__replicaGlobalSecondaryIndexUpdates(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaGlobalSecondaryIndexUpdates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*& Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingUpdate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingUpdate;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*> const&
Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_get__replicaProvisionedReadCapacityAutoScalingUpdate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicaProvisionedReadCapacityAutoScalingUpdate;
}
constexpr void
Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::__cordl_internal_set__replicaProvisionedReadCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicaProvisionedReadCapacityAutoScalingUpdate)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::get_RegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                                             "get_RegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::set_RegionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(), "set_RegionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::IsSetRegionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                                             "IsSetRegionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*
Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::get_ReplicaGlobalSecondaryIndexUpdates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                               "get_ReplicaGlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::set_ReplicaGlobalSecondaryIndexUpdates(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(), "set_ReplicaGlobalSecondaryIndexUpdates",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaGlobalSecondaryIndexAutoScalingUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::IsSetReplicaGlobalSecondaryIndexUpdates() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                               "IsSetReplicaGlobalSecondaryIndexUpdates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::get_ReplicaProvisionedReadCapacityAutoScalingUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                               "get_ReplicaProvisionedReadCapacityAutoScalingUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::set_ReplicaProvisionedReadCapacityAutoScalingUpdate(::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                  "set_ReplicaProvisionedReadCapacityAutoScalingUpdate", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::AutoScalingSettingsUpdate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::IsSetReplicaProvisionedReadCapacityAutoScalingUpdate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                               "IsSetReplicaProvisionedReadCapacityAutoScalingUpdate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate* Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>());
}
inline void Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ReplicaAutoScalingUpdate::ReplicaAutoScalingUpdate() {}
