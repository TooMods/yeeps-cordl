#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__PointInTimeRecoverySpecification_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification.get_PointInTimeRecoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::*)()>(
    &::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::get_PointInTimeRecoveryEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104bfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(),
                                                 "get_PointInTimeRecoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification.set_PointInTimeRecoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::*)(bool)>(
    &::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::set_PointInTimeRecoveryEnabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x104bfdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(), "set_PointInTimeRecoveryEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification.IsSetPointInTimeRecoveryEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::*)()>(
    &::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::IsSetPointInTimeRecoveryEnabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x104c044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(),
                                                 "IsSetPointInTimeRecoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::*)()>(
    &::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x104c080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<bool>& Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::__cordl_internal_get__pointInTimeRecoveryEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointInTimeRecoveryEnabled;
}
constexpr ::System::Nullable_1<bool> const& Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::__cordl_internal_get__pointInTimeRecoveryEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointInTimeRecoveryEnabled;
}
constexpr void Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::__cordl_internal_set__pointInTimeRecoveryEnabled(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pointInTimeRecoveryEnabled = value;
}
inline bool Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::get_PointInTimeRecoveryEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(),
                                               "get_PointInTimeRecoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::set_PointInTimeRecoveryEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(), "set_PointInTimeRecoveryEnabled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::IsSetPointInTimeRecoveryEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(),
                                               "IsSetPointInTimeRecoveryEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification* Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>());
}
inline void Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::PointInTimeRecoverySpecification::PointInTimeRecoverySpecification() {}
