#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBAttribute_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBRenamableAttribute_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1420bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1420bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute.get_AttributeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::*)()>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::get_AttributeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1420bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), "get_AttributeName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute.set_AttributeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::set_AttributeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1420bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), "set_AttributeName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::__cordl_internal_get__AttributeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::__cordl_internal_get__AttributeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::__cordl_internal_set__AttributeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributeName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute* Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>());
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute* Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::New_ctor(::StringW attributeName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>(attributeName));
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::_ctor(::StringW attributeName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeName);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::get_AttributeName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), "get_AttributeName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::set_AttributeName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute*>::get(), "set_AttributeName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBRenamableAttribute::DynamoDBRenamableAttribute() {}
