#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__TransactGetItem_def.hpp"
#include "Amazon/DynamoDBv2/Model/zzzz__Get_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItem.get_Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::Model::Get* (::Amazon::DynamoDBv2::Model::TransactGetItem::*)()>(
    &::Amazon::DynamoDBv2::Model::TransactGetItem::get_Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), "get_Get",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItem.set_Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactGetItem::*)(::Amazon::DynamoDBv2::Model::Get*)>(
    &::Amazon::DynamoDBv2::Model::TransactGetItem::set_Get)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), "set_Get", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::Get*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItem.IsSetGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::Model::TransactGetItem::*)()>(&::Amazon::DynamoDBv2::Model::TransactGetItem::IsSetGet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1053070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), "IsSetGet",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::Model::TransactGetItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::Model::TransactGetItem::*)()>(&::Amazon::DynamoDBv2::Model::TransactGetItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1053080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::DynamoDBv2::Model::Get*& Amazon::DynamoDBv2::Model::TransactGetItem::__cordl_internal_get__get() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____get;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::Model::Get*> const& Amazon::DynamoDBv2::Model::TransactGetItem::__cordl_internal_get__get() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____get;
}
constexpr void Amazon::DynamoDBv2::Model::TransactGetItem::__cordl_internal_set__get(::Amazon::DynamoDBv2::Model::Get* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____get)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::Model::Get* Amazon::DynamoDBv2::Model::TransactGetItem::get_Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), "get_Get",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::Model::Get*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::Model::TransactGetItem::set_Get(::Amazon::DynamoDBv2::Model::Get* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), "set_Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::Model::Get*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::Model::TransactGetItem::IsSetGet() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), "IsSetGet",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::Model::TransactGetItem* Amazon::DynamoDBv2::Model::TransactGetItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::Model::TransactGetItem*>());
}
inline void Amazon::DynamoDBv2::Model::TransactGetItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::Model::TransactGetItem*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::Model::TransactGetItem::TransactGetItem() {}
