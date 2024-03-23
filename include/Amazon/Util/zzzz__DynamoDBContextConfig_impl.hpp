#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/zzzz__DynamoDBContextConfig_def.hpp"
#include "Amazon/Util/zzzz__TableAlias_def.hpp"
#include "Amazon/Util/zzzz__TypeMapping_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.get_TableNamePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Util::DynamoDBContextConfig::*)()>(
    &::Amazon::Util::DynamoDBContextConfig::get_TableNamePrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(),
                                                                               "get_TableNamePrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.set_TableNamePrefix
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::DynamoDBContextConfig::*)(::StringW)>(
    &::Amazon::Util::DynamoDBContextConfig::set_TableNamePrefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "set_TableNamePrefix",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.get_TableAliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (::Amazon::Util::DynamoDBContextConfig::*)()>(
    &::Amazon::Util::DynamoDBContextConfig::get_TableAliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(),
                                                                               "get_TableAliases", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.set_TableAliases
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::DynamoDBContextConfig::*)(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(
    &::Amazon::Util::DynamoDBContextConfig::set_TableAliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "set_TableAliases", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.get_TypeMappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* (
    ::Amazon::Util::DynamoDBContextConfig::*)()>(&::Amazon::Util::DynamoDBContextConfig::get_TypeMappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(),
                                                                               "get_TypeMappings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.set_TypeMappings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::DynamoDBContextConfig::*)(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*)>(&::Amazon::Util::DynamoDBContextConfig::set_TypeMappings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "set_TypeMappings", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.AddAlias
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::DynamoDBContextConfig::*)(::Amazon::Util::TableAlias*)>(
    &::Amazon::Util::DynamoDBContextConfig::AddAlias)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x1207c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "AddAlias", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::TableAlias*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig.AddMapping
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::DynamoDBContextConfig::*)(::Amazon::Util::TypeMapping*)>(
    &::Amazon::Util::DynamoDBContextConfig::AddMapping)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1207cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "AddMapping", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::TypeMapping*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::DynamoDBContextConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::DynamoDBContextConfig::*)()>(&::Amazon::Util::DynamoDBContextConfig::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x1207d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Util::DynamoDBContextConfig::__cordl_internal_get__TableNamePrefix_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableNamePrefix_k__BackingField;
}
constexpr ::StringW const& Amazon::Util::DynamoDBContextConfig::__cordl_internal_get__TableNamePrefix_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableNamePrefix_k__BackingField;
}
constexpr void Amazon::Util::DynamoDBContextConfig::__cordl_internal_set__TableNamePrefix_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TableNamePrefix_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& Amazon::Util::DynamoDBContextConfig::__cordl_internal_get__TableAliases_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableAliases_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const&
Amazon::Util::DynamoDBContextConfig::__cordl_internal_get__TableAliases_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TableAliases_k__BackingField;
}
constexpr void Amazon::Util::DynamoDBContextConfig::__cordl_internal_set__TableAliases_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TableAliases_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*& Amazon::Util::DynamoDBContextConfig::__cordl_internal_get__TypeMappings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeMappings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*> const&
Amazon::Util::DynamoDBContextConfig::__cordl_internal_get__TypeMappings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeMappings_k__BackingField;
}
constexpr void
Amazon::Util::DynamoDBContextConfig::__cordl_internal_set__TypeMappings_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TypeMappings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Util::DynamoDBContextConfig::get_TableNamePrefix() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(),
                                                                             "get_TableNamePrefix", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Util::DynamoDBContextConfig::set_TableNamePrefix(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "set_TableNamePrefix",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Amazon::Util::DynamoDBContextConfig::get_TableAliases() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "get_TableAliases",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*, false>(this, ___internal_method);
}
inline void Amazon::Util::DynamoDBContextConfig::set_TableAliases(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "set_TableAliases", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* Amazon::Util::DynamoDBContextConfig::get_TypeMappings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "get_TypeMappings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*, false>(this, ___internal_method);
}
inline void Amazon::Util::DynamoDBContextConfig::set_TypeMappings(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "set_TypeMappings", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::System::Type*, ::Amazon::Util::TypeMapping*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Amazon::Util::DynamoDBContextConfig::AddAlias(::Amazon::Util::TableAlias* tableAlias) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "AddAlias", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::TableAlias*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableAlias);
}
inline void Amazon::Util::DynamoDBContextConfig::AddMapping(::Amazon::Util::TypeMapping* typeMapping) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), "AddMapping", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::TypeMapping*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeMapping);
}
inline ::Amazon::Util::DynamoDBContextConfig* Amazon::Util::DynamoDBContextConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::DynamoDBContextConfig*>());
}
inline void Amazon::Util::DynamoDBContextConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::DynamoDBContextConfig*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::DynamoDBContextConfig::DynamoDBContextConfig() {}
