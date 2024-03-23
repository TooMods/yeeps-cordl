#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__GetItemOperationConfig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig.get_AttributesToGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (
    ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::*)()>(&::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::get_AttributesToGet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "get_AttributesToGet",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig.set_AttributesToGet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::set_AttributesToGet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "set_AttributesToGet", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig.get_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::get_ConsistentRead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141f408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "get_ConsistentRead",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig.set_ConsistentRead
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::*)(bool)>(
    &::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::set_ConsistentRead)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x141f410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "set_ConsistentRead",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::*)()>(
    &::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x141d8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::__cordl_internal_get__AttributesToGet_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToGet_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::__cordl_internal_get__AttributesToGet_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributesToGet_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::__cordl_internal_set__AttributesToGet_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributesToGet_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::__cordl_internal_get__ConsistentRead_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::__cordl_internal_get__ConsistentRead_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConsistentRead_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::__cordl_internal_set__ConsistentRead_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConsistentRead_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::get_AttributesToGet() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "get_AttributesToGet",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::set_AttributesToGet(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "set_AttributesToGet", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::get_ConsistentRead() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "get_ConsistentRead",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::set_ConsistentRead(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), "set_ConsistentRead",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig* Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>());
}
inline void Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DocumentModel::GetItemOperationConfig::GetItemOperationConfig() {}
