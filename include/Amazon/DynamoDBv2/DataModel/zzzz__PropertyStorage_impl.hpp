#pragma once
#include "Amazon/DynamoDBv2/DataModel/zzzz__PropertyStorage_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__SimplePropertyStorage_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__PropertyStorage_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBGlobalSecondaryIndexHashKeyAttribute_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBGlobalSecondaryIndexRangeKeyAttribute_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBLocalSecondaryIndexRangeKeyAttribute_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__PropertyStorage_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index.get_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::get_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142ca7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), "get_IndexNames",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index.set_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::*)(
    ::System::Collections::Generic::List_1<::StringW>*)>(&::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::set_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142ca84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), "set_IndexNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index.get_AttributeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::get_AttributeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142ca8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), "get_AttributeName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index.set_AttributeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::set_AttributeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142ca94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), "set_AttributeName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::*)(
    ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x142ca9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::__cordl_internal_get__IndexNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::__cordl_internal_get__IndexNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::__cordl_internal_set__IndexNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::__cordl_internal_get__AttributeName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::__cordl_internal_get__AttributeName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::__cordl_internal_set__AttributeName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributeName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::get_IndexNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(),
                                                                             "get_IndexNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::set_IndexNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), "set_IndexNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::get_AttributeName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(),
                                                                             "get_AttributeName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::set_AttributeName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), "set_AttributeName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index* Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::New_ctor(::StringW attributeName,
                                                                                                                                    ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>(attributeName, indexNames));
}
inline void Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::_ctor(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeName, indexNames);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index::__PropertyStorage__Index() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI::*)(
    ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x142bc88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
inline ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI* Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI::New_ctor(::StringW attributeName,
                                                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI*>(attributeName, indexNames));
}
inline void Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI::_ctor(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeName, indexNames);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__LSI::__PropertyStorage__LSI() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI.get_IsHashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::get_IsHashKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142cb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*>::get(),
                                                                               "get_IsHashKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI.set_IsHashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::set_IsHashKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142cb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*>::get(), "set_IsHashKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::*)(
    bool, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x142baac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::__cordl_internal_get__IsHashKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsHashKey_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::__cordl_internal_get__IsHashKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsHashKey_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::__cordl_internal_set__IsHashKey_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsHashKey_k__BackingField = value;
}
inline bool Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::get_IsHashKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*>::get(),
                                                                             "get_IsHashKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::set_IsHashKey(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*>::get(), "set_IsHashKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI* Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::New_ctor(bool isHashKey, ::StringW attributeName,
                                                                                                                                ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*>(isHashKey, attributeName, indexNames));
}
inline void Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::_ctor(bool isHashKey, ::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHashKey, attributeName, indexNames);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__PropertyStorage__GSI::__PropertyStorage__GSI() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsHashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsHashKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsHashKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IsHashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsHashKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142b95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsHashKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsRangeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsRangeKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b968;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsRangeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IsRangeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsRangeKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142b970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsRangeKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x142b97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IsVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsVersion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142b9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsVersion",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsLSIRangeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsLSIRangeKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b9b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsLSIRangeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IsLSIRangeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsLSIRangeKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142b9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsLSIRangeKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsGSIHashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsGSIHashKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b9c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsGSIHashKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IsGSIHashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsGSIHashKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142b9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsGSIHashKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsGSIRangeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsGSIRangeKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsGSIRangeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IsGSIRangeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsGSIRangeKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142b9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsGSIRangeKey",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsGSIKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsGSIKey)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x142a498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsGSIKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IsIgnored
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsIgnored)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142b9ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IsIgnored", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IsIgnored
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsIgnored)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142b9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsIgnored",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_StoreAsEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_StoreAsEpoch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142ba00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_StoreAsEpoch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_StoreAsEpoch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_StoreAsEpoch)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x142ba08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_StoreAsEpoch",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142ba14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_IndexNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_IndexNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IndexNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142ba1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IndexNames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.AddIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*)>(&::Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x142ba24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.AddIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*)>(&::Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x142bb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.AddIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(
    ::Amazon::DynamoDBv2::DataModel::DynamoDBLocalSecondaryIndexRangeKeyAttribute*)>(&::Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x142bc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBLocalSecondaryIndexRangeKeyAttribute*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.AddGsiIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(
    bool, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::Amazon::DynamoDBv2::DataModel::PropertyStorage::AddGsiIndex)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x142bc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddGsiIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.AddLsiIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::AddLsiIndex)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x142bd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddLsiIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.AddIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*)>(&::Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x142badc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.get_Indexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* (
    ::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)()>(&::Amazon::DynamoDBv2::DataModel::PropertyStorage::get_Indexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142bd90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                               "get_Indexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.set_Indexes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*)>(&::Amazon::DynamoDBv2::DataModel::PropertyStorage::set_Indexes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x142bd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_Indexes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBContext*)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::Validate)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x142bda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::PropertyStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::PropertyStorage::*)(::System::Reflection::MemberInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::PropertyStorage::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x142c9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsHashKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsHashKey_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsHashKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsHashKey_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IsHashKey_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsHashKey_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsRangeKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsRangeKey_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsRangeKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsRangeKey_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IsRangeKey_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsRangeKey_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsVersion_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsVersion_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IsVersion_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsVersion_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsLSIRangeKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsLSIRangeKey_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsLSIRangeKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsLSIRangeKey_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IsLSIRangeKey_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsLSIRangeKey_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsGSIHashKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsGSIHashKey_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsGSIHashKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsGSIHashKey_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IsGSIHashKey_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsGSIHashKey_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsGSIRangeKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsGSIRangeKey_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsGSIRangeKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsGSIRangeKey_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IsGSIRangeKey_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsGSIRangeKey_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsIgnored_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsIgnored_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IsIgnored_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsIgnored_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IsIgnored_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsIgnored_k__BackingField = value;
}
constexpr bool& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__StoreAsEpoch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StoreAsEpoch_k__BackingField;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__StoreAsEpoch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StoreAsEpoch_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__StoreAsEpoch_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StoreAsEpoch_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IndexNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const&
Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__IndexNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IndexNames_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__IndexNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____IndexNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*&
Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__Indexes_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Indexes_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*> const&
Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_get__Indexes_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Indexes_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::PropertyStorage::__cordl_internal_set__Indexes_k__BackingField(
    ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Indexes_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsHashKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsHashKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsHashKey(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsHashKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsRangeKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsRangeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsRangeKey(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsRangeKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsVersion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsVersion",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsLSIRangeKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsLSIRangeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsLSIRangeKey(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsLSIRangeKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsGSIHashKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsGSIHashKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsGSIHashKey(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsGSIHashKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsGSIRangeKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsGSIRangeKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsGSIRangeKey(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsGSIRangeKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsGSIKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsGSIKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IsIgnored() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IsIgnored", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IsIgnored(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IsIgnored",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::DynamoDBv2::DataModel::PropertyStorage::get_StoreAsEpoch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_StoreAsEpoch", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_StoreAsEpoch(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_StoreAsEpoch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Amazon::DynamoDBv2::DataModel::PropertyStorage::get_IndexNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_IndexNames", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_IndexNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_IndexNames", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute* gsiHashKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexHashKeyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gsiHashKey);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex(::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute* gsiRangeKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBGlobalSecondaryIndexRangeKeyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gsiRangeKey);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex(::Amazon::DynamoDBv2::DataModel::DynamoDBLocalSecondaryIndexRangeKeyAttribute* lsiRangeKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBLocalSecondaryIndexRangeKeyAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lsiRangeKey);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::AddGsiIndex(bool isHashKey, ::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddGsiIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isHashKey, attributeName, indexNames);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::AddLsiIndex(::StringW attributeName, ::ArrayW<::StringW, ::Array<::StringW>*> indexNames) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddLsiIndex", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeName, indexNames);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::AddIndex(::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index* index) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "AddIndex", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline ::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* Amazon::DynamoDBv2::DataModel::PropertyStorage::get_Indexes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(),
                                                                             "get_Indexes", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::set_Indexes(::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "set_Indexes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Amazon::DynamoDBv2::DataModel::__PropertyStorage__Index*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::Validate(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline ::Amazon::DynamoDBv2::DataModel::PropertyStorage* Amazon::DynamoDBv2::DataModel::PropertyStorage::New_ctor(::System::Reflection::MemberInfo* member) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>(member));
}
inline void Amazon::DynamoDBv2::DataModel::PropertyStorage::_ctor(::System::Reflection::MemberInfo* member) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::PropertyStorage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, member);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::PropertyStorage::PropertyStorage() {}
