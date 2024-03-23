#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TableAutoScalingDescription_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ReplicaAutoScalingDescription_def.hpp"
#include "Amazon/DynamoDBv2/zzzz__TableStatus_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.get_Replicas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* (
    ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)()>(&::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::get_Replicas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                               "get_Replicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.set_Replicas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*)>(&::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::set_Replicas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(), "set_Replicas", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.IsSetReplicas
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::IsSetReplicas)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1052398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                               "IsSetReplicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.get_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::get_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10523ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                               "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.set_TableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)(::StringW)>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::set_TableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10523f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(), "set_TableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.IsSetTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::IsSetTableName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10523fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                               "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.get_TableStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::TableStatus* (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::get_TableStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x105240c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                               "get_TableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.set_TableStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)(::Amazon::DynamoDBv2::TableStatus*)>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::set_TableStatus)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1052414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(), "set_TableStatus", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::TableStatus*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription.IsSetTableStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::IsSetTableStatus)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x105241c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                               "IsSetTableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::*)()>(
    &::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x105247c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*&
Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_get__replicas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicas;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*> const&
Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_get__replicas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replicas;
}
constexpr void
Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_set__replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replicas)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_get__tableName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr ::StringW const& Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_get__tableName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableName;
}
constexpr void Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_set__tableName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::TableStatus*& Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_get__tableStatus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableStatus;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::TableStatus*> const& Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_get__tableStatus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tableStatus;
}
constexpr void Amazon::DynamoDBv2::Model::TableAutoScalingDescription::__cordl_internal_set__tableStatus(::Amazon::DynamoDBv2::TableStatus* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableStatus)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* Amazon::DynamoDBv2::Model::TableAutoScalingDescription::get_Replicas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                             "get_Replicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableAutoScalingDescription::set_Replicas(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(), "set_Replicas", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::Model::ReplicaAutoScalingDescription*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableAutoScalingDescription::IsSetReplicas() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                             "IsSetReplicas", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW Amazon::DynamoDBv2::Model::TableAutoScalingDescription::get_TableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                             "get_TableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableAutoScalingDescription::set_TableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(), "set_TableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableAutoScalingDescription::IsSetTableName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                             "IsSetTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::TableStatus* Amazon::DynamoDBv2::Model::TableAutoScalingDescription::get_TableStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                             "get_TableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::TableStatus*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TableAutoScalingDescription::set_TableStatus(::Amazon::DynamoDBv2::TableStatus* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(), "set_TableStatus", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::TableStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TableAutoScalingDescription::IsSetTableStatus() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                             "IsSetTableStatus", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription* Amazon::DynamoDBv2::Model::TableAutoScalingDescription::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>());
}
inline void Amazon::DynamoDBv2::Model::TableAutoScalingDescription::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TableAutoScalingDescription*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::TableAutoScalingDescription::TableAutoScalingDescription() {}
