#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__ProvisionedThroughputOverride_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride.get_ReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::*)()>(
    &::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::get_ReadCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104c92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(), "get_ReadCapacityUnits",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride.set_ReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::*)(int64_t)>(
    &::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::set_ReadCapacityUnits)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x104c968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(), "set_ReadCapacityUnits",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride.IsSetReadCapacityUnits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::*)()>(
    &::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::IsSetReadCapacityUnits)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104c9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(), "IsSetReadCapacityUnits",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::*)()>(
    &::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104ca14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int64_t>& Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::__cordl_internal_get__readCapacityUnits() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readCapacityUnits;
}
constexpr ::System::Nullable_1<int64_t> const& Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::__cordl_internal_get__readCapacityUnits() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readCapacityUnits;
}
constexpr void Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::__cordl_internal_set__readCapacityUnits(::System::Nullable_1<int64_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____readCapacityUnits = value;
}
inline int64_t Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::get_ReadCapacityUnits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(),
                                                                             "get_ReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::set_ReadCapacityUnits(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(), "set_ReadCapacityUnits",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::IsSetReadCapacityUnits() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(),
                                                                             "IsSetReadCapacityUnits", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride* Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>());
}
inline void Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::ProvisionedThroughputOverride::ProvisionedThroughputOverride() {}
