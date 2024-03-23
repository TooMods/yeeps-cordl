#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBRangeKeyAttribute_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBGlobalSecondaryIndexRangeKeyAttribute_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute.get_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (
    ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::*)()>(&::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::get_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1420fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(),
                                                 "get_IndexNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute.set_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::set_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1420fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(), "set_IndexNames",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1420fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x142106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::__cordl_internal_get__IndexNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::__cordl_internal_get__IndexNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::__cordl_internal_set__IndexNames_k__BackingField(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::get_IndexNames() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(),
                                               "get_IndexNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::set_IndexNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(), "set_IndexNames",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute* Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::New_ctor(::StringW indexName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>(indexName));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::_ctor(::StringW indexName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexName);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*
Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::New_ctor(::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>(indexNames));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::_ctor(::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexNames);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute::DynamoDBGlobalSecondaryIndexRangeKeyAttribute() {}
