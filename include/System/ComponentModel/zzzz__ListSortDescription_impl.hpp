#pragma once
#include "System/ComponentModel/zzzz__ListSortDirection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/ComponentModel/zzzz__ListSortDescription_def.hpp"
#include "System/ComponentModel/zzzz__ListSortDirection_def.hpp"
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListSortDescription::*)(
    ::System::ComponentModel::PropertyDescriptor*, ::System::ComponentModel::ListSortDirection)>(&::System::ComponentModel::ListSortDescription::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1afc194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListSortDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.get_PropertyDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::PropertyDescriptor* (::System::ComponentModel::ListSortDescription::*)()>(
    &::System::ComponentModel::ListSortDescription::get_PropertyDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afc1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(),
                                                                               "get_PropertyDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.set_PropertyDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListSortDescription::*)(::System::ComponentModel::PropertyDescriptor*)>(
    &::System::ComponentModel::ListSortDescription::set_PropertyDescriptor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afc1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(), "set_PropertyDescriptor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.get_SortDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::ListSortDirection (::System::ComponentModel::ListSortDescription::*)()>(
    &::System::ComponentModel::ListSortDescription::get_SortDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afc1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(),
                                                                               "get_SortDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::ListSortDescription.set_SortDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::ListSortDescription::*)(::System::ComponentModel::ListSortDirection)>(
    &::System::ComponentModel::ListSortDescription::set_SortDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1afc1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(), "set_SortDirection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListSortDirection>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::ComponentModel::PropertyDescriptor*& System::ComponentModel::ListSortDescription::__cordl_internal_get__PropertyDescriptor_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyDescriptor_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptor*> const&
System::ComponentModel::ListSortDescription::__cordl_internal_get__PropertyDescriptor_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____PropertyDescriptor_k__BackingField;
}
constexpr void System::ComponentModel::ListSortDescription::__cordl_internal_set__PropertyDescriptor_k__BackingField(::System::ComponentModel::PropertyDescriptor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____PropertyDescriptor_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::ComponentModel::ListSortDirection& System::ComponentModel::ListSortDescription::__cordl_internal_get__SortDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SortDirection_k__BackingField;
}
constexpr ::System::ComponentModel::ListSortDirection const& System::ComponentModel::ListSortDescription::__cordl_internal_get__SortDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SortDirection_k__BackingField;
}
constexpr void System::ComponentModel::ListSortDescription::__cordl_internal_set__SortDirection_k__BackingField(::System::ComponentModel::ListSortDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SortDirection_k__BackingField = value;
}
inline ::System::ComponentModel::ListSortDescription* System::ComponentModel::ListSortDescription::New_ctor(::System::ComponentModel::PropertyDescriptor* property,
                                                                                                            ::System::ComponentModel::ListSortDirection direction) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::ListSortDescription*>(property, direction));
}
inline void System::ComponentModel::ListSortDescription::_ctor(::System::ComponentModel::PropertyDescriptor* property, ::System::ComponentModel::ListSortDirection direction) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListSortDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, property, direction);
}
inline ::System::ComponentModel::PropertyDescriptor* System::ComponentModel::ListSortDescription::get_PropertyDescriptor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(),
                                                                             "get_PropertyDescriptor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::PropertyDescriptor*, false>(this, ___internal_method);
}
inline void System::ComponentModel::ListSortDescription::set_PropertyDescriptor(::System::ComponentModel::PropertyDescriptor* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(), "set_PropertyDescriptor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::PropertyDescriptor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::ComponentModel::ListSortDirection System::ComponentModel::ListSortDescription::get_SortDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(),
                                                                             "get_SortDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::ComponentModel::ListSortDirection, false>(this, ___internal_method);
}
inline void System::ComponentModel::ListSortDescription::set_SortDirection(::System::ComponentModel::ListSortDirection value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::ListSortDescription*>::get(), "set_SortDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ListSortDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::ListSortDescription::ListSortDescription() {}
