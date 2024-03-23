#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Auth/AccessControlPolicy/zzzz__Principal_def.hpp"
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Principal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Principal::*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Principal::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x25ebac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Principal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Principal::*)(::StringW, ::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Principal::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x25ebb6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Principal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Principal::*)(::StringW, ::StringW, bool)>(
    &::Amazon::Auth::AccessControlPolicy::Principal::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x25ebbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Principal.get_Provider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Auth::AccessControlPolicy::Principal::*)()>(
    &::Amazon::Auth::AccessControlPolicy::Principal::get_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ebc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(),
                                                                               "get_Provider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Principal.set_Provider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Auth::AccessControlPolicy::Principal::*)(::StringW)>(
    &::Amazon::Auth::AccessControlPolicy::Principal::set_Provider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ebc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), "set_Provider",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Auth::AccessControlPolicy::Principal.get_Id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Auth::AccessControlPolicy::Principal::*)()>(
    &::Amazon::Auth::AccessControlPolicy::Principal::get_Id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25ebc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), "get_Id",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Auth::AccessControlPolicy::Principal::__cordl_internal_get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr ::StringW const& Amazon::Auth::AccessControlPolicy::Principal::__cordl_internal_get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___id;
}
constexpr void Amazon::Auth::AccessControlPolicy::Principal::__cordl_internal_set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Amazon::Auth::AccessControlPolicy::Principal::__cordl_internal_get_provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr ::StringW const& Amazon::Auth::AccessControlPolicy::Principal::__cordl_internal_get_provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___provider;
}
constexpr void Amazon::Auth::AccessControlPolicy::Principal::__cordl_internal_set_provider(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___provider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Auth::AccessControlPolicy::Principal::setStaticF_AllUsers(::Amazon::Auth::AccessControlPolicy::Principal* value) {
  ::cordl_internals::setStaticField<::Amazon::Auth::AccessControlPolicy::Principal*, "AllUsers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get>(
      std::forward<::Amazon::Auth::AccessControlPolicy::Principal*>(value));
}
inline ::Amazon::Auth::AccessControlPolicy::Principal* Amazon::Auth::AccessControlPolicy::Principal::getStaticF_AllUsers() {
  return ::cordl_internals::getStaticField<::Amazon::Auth::AccessControlPolicy::Principal*, "AllUsers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get>();
}
inline void Amazon::Auth::AccessControlPolicy::Principal::setStaticF_Anonymous(::Amazon::Auth::AccessControlPolicy::Principal* value) {
  ::cordl_internals::setStaticField<::Amazon::Auth::AccessControlPolicy::Principal*, "Anonymous",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get>(
      std::forward<::Amazon::Auth::AccessControlPolicy::Principal*>(value));
}
inline ::Amazon::Auth::AccessControlPolicy::Principal* Amazon::Auth::AccessControlPolicy::Principal::getStaticF_Anonymous() {
  return ::cordl_internals::getStaticField<::Amazon::Auth::AccessControlPolicy::Principal*, "Anonymous",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get>();
}
inline ::Amazon::Auth::AccessControlPolicy::Principal* Amazon::Auth::AccessControlPolicy::Principal::New_ctor(::StringW accountId) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Auth::AccessControlPolicy::Principal*>(accountId));
}
inline void Amazon::Auth::AccessControlPolicy::Principal::_ctor(::StringW accountId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, accountId);
}
inline ::Amazon::Auth::AccessControlPolicy::Principal* Amazon::Auth::AccessControlPolicy::Principal::New_ctor(::StringW provider, ::StringW id) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Auth::AccessControlPolicy::Principal*>(provider, id));
}
inline void Amazon::Auth::AccessControlPolicy::Principal::_ctor(::StringW provider, ::StringW id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, id);
}
inline ::Amazon::Auth::AccessControlPolicy::Principal* Amazon::Auth::AccessControlPolicy::Principal::New_ctor(::StringW provider, ::StringW id, bool stripHyphen) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Auth::AccessControlPolicy::Principal*>(provider, id, stripHyphen));
}
inline void Amazon::Auth::AccessControlPolicy::Principal::_ctor(::StringW provider, ::StringW id, bool stripHyphen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, id, stripHyphen);
}
inline ::StringW Amazon::Auth::AccessControlPolicy::Principal::get_Provider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(),
                                                                             "get_Provider", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Auth::AccessControlPolicy::Principal::set_Provider(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), "set_Provider",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW Amazon::Auth::AccessControlPolicy::Principal::get_Id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Auth::AccessControlPolicy::Principal*>::get(), "get_Id",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Auth::AccessControlPolicy::Principal::Principal() {}
