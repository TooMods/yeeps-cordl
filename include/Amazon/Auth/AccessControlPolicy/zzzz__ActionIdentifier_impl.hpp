#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__ActionIdentifier_def.hpp"
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ActionIdentifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::ActionIdentifier::*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ActionIdentifier::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x25e90a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ActionIdentifier.get_ActionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Auth::AccessControlPolicy::ActionIdentifier::*)()>(
    &::Amazon::Auth::AccessControlPolicy::ActionIdentifier::get_ActionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e90d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>::get(),
                                                                               "get_ActionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::ActionIdentifier.set_ActionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::ActionIdentifier::*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::ActionIdentifier::set_ActionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25e90d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>::get(), "set_ActionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Auth::AccessControlPolicy::ActionIdentifier::__cordl_internal_get_actionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionName;
}
constexpr ::StringW const& Amazon::Auth::AccessControlPolicy::ActionIdentifier::__cordl_internal_get_actionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___actionName;
}
constexpr void Amazon::Auth::AccessControlPolicy::ActionIdentifier::__cordl_internal_set_actionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___actionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Auth::AccessControlPolicy::ActionIdentifier* Amazon::Auth::AccessControlPolicy::ActionIdentifier::New_ctor(::StringW actionName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>(actionName));
}
inline void Amazon::Auth::AccessControlPolicy::ActionIdentifier::_ctor(::StringW actionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, actionName);
}
inline ::StringW Amazon::Auth::AccessControlPolicy::ActionIdentifier::get_ActionName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>::get(),
                                                                             "get_ActionName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::ActionIdentifier::set_ActionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::ActionIdentifier*>::get(), "set_ActionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::ActionIdentifier::ActionIdentifier() {}
