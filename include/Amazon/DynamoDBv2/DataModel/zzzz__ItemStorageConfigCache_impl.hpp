#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfigCache_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBContext_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__DynamoDBFlatConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfigCache_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__ItemStorageConfig_def.hpp"
#include "Amazon/DynamoDBv2/DataModel/zzzz__PropertyStorage_def.hpp"
#include "Amazon/DynamoDBv2/DocumentModel/zzzz__Table_def.hpp"
#include "Amazon/Util/Internal/zzzz__ITypeInfo_def.hpp"
#include "Amazon/Util/zzzz__TypeMapping_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache.get_Cache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* (
    ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::*)()>(&::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::get_Cache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1430bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(),
                                                 "get_Cache", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache.set_Cache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::*)(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*)>(
    &::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::set_Cache)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1430bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), "set_Cache",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache.get_BaseTypeConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* (
    ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::*)()>(&::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::get_BaseTypeConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1430bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(),
                                                 "get_BaseTypeConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache.set_BaseTypeConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::*)(
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*)>(&::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::set_BaseTypeConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1430be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), "set_BaseTypeConfig",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::*)(
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*)>(&::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x142eee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache.get_BaseTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::*)()>(
    &::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::get_BaseTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1430be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(),
                                                 "get_BaseTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache.set_BaseTableName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::*)(::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::set_BaseTableName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1430bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), "set_BaseTableName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*&
Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_get__Cache_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cache_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*> const&
Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_get__Cache_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Cache_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_set__Cache_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Cache_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*& Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_get__BaseTypeConfig_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTypeConfig_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*> const&
Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_get__BaseTypeConfig_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTypeConfig_k__BackingField;
}
constexpr void
Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_set__BaseTypeConfig_k__BackingField(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BaseTypeConfig_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_get__BaseTableName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTableName_k__BackingField;
}
constexpr ::StringW const& Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_get__BaseTableName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseTableName_k__BackingField;
}
constexpr void Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__cordl_internal_set__BaseTableName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BaseTableName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*
Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::get_Cache() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), "get_Cache",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::set_Cache(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), "set_Cache",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::get_BaseTypeConfig() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(),
                                               "get_BaseTypeConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::set_BaseTypeConfig(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), "set_BaseTypeConfig",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*
Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::New_ctor(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* baseTypeConfig) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>(baseTypeConfig));
}
inline void Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::_ctor(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* baseTypeConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, baseTypeConfig);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::get_BaseTableName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(),
                                               "get_BaseTableName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::set_BaseTableName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>::get(), "set_BaseTableName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache::__ItemStorageConfigCache__ConfigTableCache() {}
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::*)(::Amazon::DynamoDBv2::DataModel::DynamoDBContext*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x1423404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.GetConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* (
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::*)(::System::Type*, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*, bool)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::GetConfig)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x1425e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "GetConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.GetAccurateCase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::StringW)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::GetAccurateCase)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x142efd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "GetAccurateCase", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.CreateStorageConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* (
    ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::*)(::System::Type*, ::StringW)>(&::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::CreateStorageConfig)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x142ec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "CreateStorageConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.PopulateConfigFromType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::Amazon::Util::Internal::ITypeInfo*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::PopulateConfigFromType)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x142f174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "PopulateConfigFromType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.PopulateConfigFromTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::Amazon::DynamoDBv2::DocumentModel::Table*)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::PopulateConfigFromTable)> {
  constexpr static std::size_t size = 0x930;
  constexpr static std::size_t addrs = 0x142fc54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "PopulateConfigFromTable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.PopulateConfigFromMappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*)>(
        &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::PopulateConfigFromMappings)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x142f898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "PopulateConfigFromMappings", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.GetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Amazon::DynamoDBv2::DataModel::PropertyStorage* (*)(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, ::StringW, bool)>(
        &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::GetProperty)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x14307c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::Validate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x1430ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.ValidateProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, ::StringW, ::StringW, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::ValidateProperty)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x14309a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "ValidateProperty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::*)(bool)>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x1430b90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::*)()>(
    &::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x142359c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>*&
Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Cache;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_set_Cache(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::DynamoDBv2::DataModel::__ItemStorageConfigCache__ConfigTableCache*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::DynamoDBv2::DataModel::DynamoDBContext*& Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get_Context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Context;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*> const& Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get_Context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Context;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_set_Context(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get_disposedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr bool const& Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get_disposedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disposedValue;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_set_disposedValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___disposedValue = value;
}
constexpr ::System::Threading::ReaderWriterLockSlim*& Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get__readerWriterLockSlim() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readerWriterLockSlim;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const&
Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_get__readerWriterLockSlim() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____readerWriterLockSlim;
}
constexpr void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::__cordl_internal_set__readerWriterLockSlim(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____readerWriterLockSlim)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache* Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::New_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>(context));
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::_ctor(::Amazon::DynamoDBv2::DataModel::DynamoDBContext* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
/// @param conversionOnly: bool (default: false)
template <typename T>
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::GetConfig(::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig,
                                                                                                                            bool conversionOnly) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "GetConfig",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, false>(this, ___internal_method, flatConfig, conversionOnly);
}
/// @param conversionOnly: bool (default: false)
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*
Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::GetConfig(::System::Type* type, ::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig* flatConfig, bool conversionOnly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "GetConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::DynamoDBFlatConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, false>(this, ___internal_method, type, flatConfig, conversionOnly);
}
inline ::StringW Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::GetAccurateCase(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "GetAccurateCase", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, config, value);
}
inline ::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::CreateStorageConfig(::System::Type* baseType, ::StringW actualTableName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "CreateStorageConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*, false>(this, ___internal_method, baseType, actualTableName);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::PopulateConfigFromType(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config, ::Amazon::Util::Internal::ITypeInfo* typeInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "PopulateConfigFromType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::ITypeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, config, typeInfo);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::PopulateConfigFromTable(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config,
                                                                                           ::Amazon::DynamoDBv2::DocumentModel::Table* table) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "PopulateConfigFromTable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DocumentModel::Table*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, config, table);
}
inline void
Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::PopulateConfigFromMappings(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config,
                                                                                  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* typeMappings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "PopulateConfigFromMappings", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, config, typeMappings);
}
inline ::Amazon::DynamoDBv2::DataModel::PropertyStorage* Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::GetProperty(::Amazon::DynamoDBv2::DataModel::ItemStorageConfig* config,
                                                                                                                            ::StringW attributeName, bool optional) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "GetProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::DynamoDBv2::DataModel::ItemStorageConfig*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::DynamoDBv2::DataModel::PropertyStorage*, false>(nullptr, ___internal_method, config, attributeName, optional);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::Validate(bool value, ::StringW messageFormat, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "Validate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, messageFormat, args);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::ValidateProperty(bool value, ::StringW propertyName, ::StringW messageFormat,
                                                                                    ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), "ValidateProperty", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value, propertyName, messageFormat, args);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::DynamoDBv2::DataModel::ItemStorageConfigCache::ItemStorageConfigCache() {}
