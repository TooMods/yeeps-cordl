#pragma once
#include "System/Resources/zzzz__ResourceManager_impl.hpp"
#include "System/ComponentModel/zzzz__ComponentResourceManager_def.hpp"
#include "System/Collections/Generic/zzzz__SortedList_2_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Resources/zzzz__ResourceSet_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)()>(
    &::System::ComponentModel::ComponentResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1aec83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)(::System::Type*)>(
    &::System::ComponentModel::ComponentResourceManager::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1aec894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.get_NeutralResourcesCulture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::ComponentModel::ComponentResourceManager::*)()>(
    &::System::ComponentModel::ComponentResourceManager::get_NeutralResourcesCulture)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x1aec8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(),
                                                                               "get_NeutralResourcesCulture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.ApplyResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)(::System::Object*, ::StringW)>(
    &::System::ComponentModel::ComponentResourceManager::ApplyResources)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1aec984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(),
                                                                               "ApplyResources", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.ApplyResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ComponentResourceManager::*)(
    ::System::Object*, ::StringW, ::System::Globalization::CultureInfo*)>(&::System::ComponentModel::ComponentResourceManager::ApplyResources)> {
  constexpr static std::size_t size = 0xa90;
  constexpr static std::size_t addrs = 0x1aec994;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ComponentResourceManager.FillResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::SortedList_2<::StringW, ::System::Object*>* (
    ::System::ComponentModel::ComponentResourceManager::*)(::System::Globalization::CultureInfo*, ByRef<::System::Resources::ResourceSet*>)>(
    &::System::ComponentModel::ComponentResourceManager::FillResources)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x1aed424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(), "FillResources", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceSet*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__resourceSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceSets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__resourceSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resourceSets;
}
constexpr void System::ComponentModel::ComponentResourceManager::__cordl_internal_set__resourceSets(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resourceSets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::CultureInfo*& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__neutralResourcesCulture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neutralResourcesCulture;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& System::ComponentModel::ComponentResourceManager::__cordl_internal_get__neutralResourcesCulture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____neutralResourcesCulture;
}
constexpr void System::ComponentModel::ComponentResourceManager::__cordl_internal_set__neutralResourcesCulture(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____neutralResourcesCulture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::ComponentModel::ComponentResourceManager* System::ComponentModel::ComponentResourceManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ComponentResourceManager*>());
}
inline void System::ComponentModel::ComponentResourceManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::ComponentResourceManager* System::ComponentModel::ComponentResourceManager::New_ctor(::System::Type* t) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ComponentResourceManager*>(t));
}
inline void System::ComponentModel::ComponentResourceManager::_ctor(::System::Type* t) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t);
}
inline ::System::Globalization::CultureInfo* System::ComponentModel::ComponentResourceManager::get_NeutralResourcesCulture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(),
                                                                             "get_NeutralResourcesCulture", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline void System::ComponentModel::ComponentResourceManager::ApplyResources(::System::Object* value, ::StringW objectName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(), "ApplyResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, objectName);
}
inline void System::ComponentModel::ComponentResourceManager::ApplyResources(::System::Object* value, ::StringW objectName, ::System::Globalization::CultureInfo* culture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, objectName, culture);
}
inline ::System::Collections::Generic::SortedList_2<::StringW, ::System::Object*>*
System::ComponentModel::ComponentResourceManager::FillResources(::System::Globalization::CultureInfo* culture, ByRef<::System::Resources::ResourceSet*> resourceSet) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ComponentResourceManager*>::get(), "FillResources", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Resources::ResourceSet*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::SortedList_2<::StringW, ::System::Object*>*, false>(this, ___internal_method, culture, resourceSet);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ComponentResourceManager::ComponentResourceManager() {}
