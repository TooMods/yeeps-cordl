#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/ComponentModel/zzzz__MergablePropertyAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::MergablePropertyAttribute::*)(bool)>(
    &::System::ComponentModel::MergablePropertyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1ae8800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.get_AllowMerge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MergablePropertyAttribute::*)()>(
    &::System::ComponentModel::MergablePropertyAttribute::get_AllowMerge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae8828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(),
                                                                               "get_AllowMerge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MergablePropertyAttribute::*)(::System::Object*)>(
    &::System::ComponentModel::MergablePropertyAttribute::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x1ae8830;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::ComponentModel::MergablePropertyAttribute::*)()>(
    &::System::ComponentModel::MergablePropertyAttribute::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1ae8914;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::MergablePropertyAttribute.IsDefaultAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::MergablePropertyAttribute::*)()>(
    &::System::ComponentModel::MergablePropertyAttribute::IsDefaultAttribute)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1ae891c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), 6));
    return ___internal_method;
  }
};
constexpr bool& System::ComponentModel::MergablePropertyAttribute::__cordl_internal_get__AllowMerge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowMerge_k__BackingField;
}
constexpr bool const& System::ComponentModel::MergablePropertyAttribute::__cordl_internal_get__AllowMerge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowMerge_k__BackingField;
}
constexpr void System::ComponentModel::MergablePropertyAttribute::__cordl_internal_set__AllowMerge_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AllowMerge_k__BackingField = value;
}
inline void System::ComponentModel::MergablePropertyAttribute::setStaticF_Yes(::System::ComponentModel::MergablePropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Yes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get>(
      std::forward<::System::ComponentModel::MergablePropertyAttribute*>(value));
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::getStaticF_Yes() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Yes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get>();
}
inline void System::ComponentModel::MergablePropertyAttribute::setStaticF_No(::System::ComponentModel::MergablePropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::MergablePropertyAttribute*, "No",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get>(
      std::forward<::System::ComponentModel::MergablePropertyAttribute*>(value));
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::getStaticF_No() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::MergablePropertyAttribute*, "No",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get>();
}
inline void System::ComponentModel::MergablePropertyAttribute::setStaticF_Default(::System::ComponentModel::MergablePropertyAttribute* value) {
  ::cordl_internals::setStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Default",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get>(
      std::forward<::System::ComponentModel::MergablePropertyAttribute*>(value));
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::getStaticF_Default() {
  return ::cordl_internals::getStaticField<::System::ComponentModel::MergablePropertyAttribute*, "Default",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get>();
}
inline ::System::ComponentModel::MergablePropertyAttribute* System::ComponentModel::MergablePropertyAttribute::New_ctor(bool allowMerge) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::MergablePropertyAttribute*>(allowMerge));
}
inline void System::ComponentModel::MergablePropertyAttribute::_ctor(bool allowMerge) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowMerge);
}
inline bool System::ComponentModel::MergablePropertyAttribute::get_AllowMerge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(),
                                                                             "get_AllowMerge", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MergablePropertyAttribute::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::ComponentModel::MergablePropertyAttribute::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::ComponentModel::MergablePropertyAttribute::IsDefaultAttribute() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::MergablePropertyAttribute*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::MergablePropertyAttribute::MergablePropertyAttribute() {}
