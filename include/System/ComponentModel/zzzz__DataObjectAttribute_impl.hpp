#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__DataObjectAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DataObjectAttribute::*)()>(&::System::ComponentModel::DataObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1af3784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DataObjectAttribute::*)(bool)>(
    &::System::ComponentModel::DataObjectAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1af37a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.get_IsDataObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DataObjectAttribute::*)()>(
    &::System::ComponentModel::DataObjectAttribute::get_IsDataObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1af37cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(),
                                                                               "get_IsDataObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DataObjectAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::DataObjectAttribute::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1af37d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::DataObjectAttribute::*)()>(
    &::System::ComponentModel::DataObjectAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1af386c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DataObjectAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DataObjectAttribute::*)()>(
    &::System::ComponentModel::DataObjectAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1af388c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::DataObjectAttribute::__cordl_internal_get__IsDataObject_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataObject_k__BackingField;
}
constexpr bool const& System::ComponentModel::DataObjectAttribute::__cordl_internal_get__IsDataObject_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsDataObject_k__BackingField;
}
constexpr void System::ComponentModel::DataObjectAttribute::__cordl_internal_set__IsDataObject_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsDataObject_k__BackingField = value;
}
inline void System::ComponentModel::DataObjectAttribute::setStaticF_DataObject(::System::ComponentModel::DataObjectAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DataObjectAttribute*, "DataObject",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get>(
      std::forward<::System::ComponentModel::DataObjectAttribute*>(value));
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::getStaticF_DataObject() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DataObjectAttribute*, "DataObject",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get>();
}
inline void System::ComponentModel::DataObjectAttribute::setStaticF_NonDataObject(::System::ComponentModel::DataObjectAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DataObjectAttribute*, "NonDataObject",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get>(
      std::forward<::System::ComponentModel::DataObjectAttribute*>(value));
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::getStaticF_NonDataObject() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DataObjectAttribute*, "NonDataObject",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get>();
}
inline void System::ComponentModel::DataObjectAttribute::setStaticF_Default(::System::ComponentModel::DataObjectAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::DataObjectAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get>(
      std::forward<::System::ComponentModel::DataObjectAttribute*>(value));
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::DataObjectAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get>();
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::DataObjectAttribute*>());
}
inline void System::ComponentModel::DataObjectAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::ComponentModel::DataObjectAttribute* System::ComponentModel::DataObjectAttribute::New_ctor(bool isDataObject) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::DataObjectAttribute*>(isDataObject));
}
inline void System::ComponentModel::DataObjectAttribute::_ctor(bool isDataObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isDataObject);
}
inline bool System::ComponentModel::DataObjectAttribute::get_IsDataObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(),
                                                                             "get_IsDataObject", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::DataObjectAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::DataObjectAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::DataObjectAttribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DataObjectAttribute*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DataObjectAttribute::DataObjectAttribute() {}
