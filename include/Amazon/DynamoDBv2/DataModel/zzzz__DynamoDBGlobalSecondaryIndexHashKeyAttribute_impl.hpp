#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBHashKeyAttribute_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBGlobalSecondaryIndexHashKeyAttribute_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute.get_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::*)()>(&::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::get_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1420e18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(),
                                                 "get_IndexNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute.set_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::set_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1420e20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(), "set_IndexNames",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1420e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1420ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::__cordl_internal_get__IndexNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::__cordl_internal_get__IndexNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::__cordl_internal_set__IndexNames_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::get_IndexNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(),
                                               "get_IndexNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::set_IndexNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(), "set_IndexNames",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute* Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::New_ctor(::StringW indexName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>(indexName));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::_ctor(::StringW indexName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexName);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*
Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>(indexNames));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexNames);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute::DynamoDBGlobalSecondaryIndexHashKeyAttribute() {}
