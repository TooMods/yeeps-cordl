#pragma once
#include "System/Dynamic/zzzz__BindingRestrictions_impl.hpp"
#include "System/Dynamic/zzzz__BindingRestrictions_InstanceRestriction_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__InstanceRestriction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Dynamic::__BindingRestrictions__InstanceRestriction::*)(
    ::System::Linq::Expressions::Expression*, ::System::Object*)>(&::System::Dynamic::__BindingRestrictions__InstanceRestriction::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1b6401c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__InstanceRestriction.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Dynamic::__BindingRestrictions__InstanceRestriction::*)(::System::Object*)>(
    &::System::Dynamic::__BindingRestrictions__InstanceRestriction::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1b64878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__InstanceRestriction.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Dynamic::__BindingRestrictions__InstanceRestriction::*)()>(
    &::System::Dynamic::__BindingRestrictions__InstanceRestriction::GetHashCode)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1b6490c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Dynamic::__BindingRestrictions__InstanceRestriction.GetExpression
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Dynamic::__BindingRestrictions__InstanceRestriction::*)()>(
    &::System::Dynamic::__BindingRestrictions__InstanceRestriction::GetExpression)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x1b64958;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Expression*& System::Dynamic::__BindingRestrictions__InstanceRestriction::__cordl_internal_get__expression() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Expression*> const& System::Dynamic::__BindingRestrictions__InstanceRestriction::__cordl_internal_get__expression() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____expression;
}
constexpr void System::Dynamic::__BindingRestrictions__InstanceRestriction::__cordl_internal_set__expression(::System::Linq::Expressions::Expression* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expression)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Dynamic::__BindingRestrictions__InstanceRestriction::__cordl_internal_get__instance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Dynamic::__BindingRestrictions__InstanceRestriction::__cordl_internal_get__instance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instance;
}
constexpr void System::Dynamic::__BindingRestrictions__InstanceRestriction::__cordl_internal_set__instance(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instance)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Dynamic::__BindingRestrictions__InstanceRestriction* System::Dynamic::__BindingRestrictions__InstanceRestriction::New_ctor(::System::Linq::Expressions::Expression* parameter,
                                                                                                                                            ::System::Object* instance) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>(parameter, instance));
}
inline void System::Dynamic::__BindingRestrictions__InstanceRestriction::_ctor(::System::Linq::Expressions::Expression* parameter, ::System::Object* instance) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameter, instance);
}
inline bool System::Dynamic::__BindingRestrictions__InstanceRestriction::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Dynamic::__BindingRestrictions__InstanceRestriction::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Expression* System::Dynamic::__BindingRestrictions__InstanceRestriction::GetExpression() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::__BindingRestrictions__InstanceRestriction*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Dynamic::__BindingRestrictions__InstanceRestriction::__BindingRestrictions__InstanceRestriction() {}
