#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Util/Internal/zzzz__EnvironmentVariableSource_def.hpp"
#include "Amazon/Util/Internal/zzzz__IEnvironmentVariableRetriever_def.hpp"
//  Writing Method size for method: ::Amazon::Util::Internal::EnvironmentVariableSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::EnvironmentVariableSource::*)()>(
    &::Amazon::Util::Internal::EnvironmentVariableSource::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2210f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::EnvironmentVariableSource.get_EnvironmentVariableRetriever
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::IEnvironmentVariableRetriever* (::Amazon::Util::Internal::EnvironmentVariableSource::*)()>(
    &::Amazon::Util::Internal::EnvironmentVariableSource::get_EnvironmentVariableRetriever)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x221105c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(),
                                                 "get_EnvironmentVariableRetriever", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::EnvironmentVariableSource.set_EnvironmentVariableRetriever
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Util::Internal::EnvironmentVariableSource::*)(
    ::Amazon::Util::Internal::IEnvironmentVariableRetriever*)>(&::Amazon::Util::Internal::EnvironmentVariableSource::set_EnvironmentVariableRetriever)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2211064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(), "set_EnvironmentVariableRetriever",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Util::Internal::EnvironmentVariableSource.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Util::Internal::EnvironmentVariableSource* (*)()>(
    &::Amazon::Util::Internal::EnvironmentVariableSource::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x221106c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Util::Internal::IEnvironmentVariableRetriever*& Amazon::Util::Internal::EnvironmentVariableSource::__cordl_internal_get__EnvironmentVariableRetriever_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnvironmentVariableRetriever_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Util::Internal::IEnvironmentVariableRetriever*> const&
Amazon::Util::Internal::EnvironmentVariableSource::__cordl_internal_get__EnvironmentVariableRetriever_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnvironmentVariableRetriever_k__BackingField;
}
constexpr void Amazon::Util::Internal::EnvironmentVariableSource::__cordl_internal_set__EnvironmentVariableRetriever_k__BackingField(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EnvironmentVariableRetriever_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Amazon::Util::Internal::EnvironmentVariableSource::setStaticF_instance(::Amazon::Util::Internal::EnvironmentVariableSource* value) {
  ::cordl_internals::setStaticField<::Amazon::Util::Internal::EnvironmentVariableSource*, "instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get>(
      std::forward<::Amazon::Util::Internal::EnvironmentVariableSource*>(value));
}
inline ::Amazon::Util::Internal::EnvironmentVariableSource* Amazon::Util::Internal::EnvironmentVariableSource::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::Amazon::Util::Internal::EnvironmentVariableSource*, "instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get>();
}
inline ::Amazon::Util::Internal::EnvironmentVariableSource* Amazon::Util::Internal::EnvironmentVariableSource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Util::Internal::EnvironmentVariableSource*>());
}
inline void Amazon::Util::Internal::EnvironmentVariableSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Util::Internal::IEnvironmentVariableRetriever* Amazon::Util::Internal::EnvironmentVariableSource::get_EnvironmentVariableRetriever() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(),
                                                                             "get_EnvironmentVariableRetriever", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::IEnvironmentVariableRetriever*, false>(this, ___internal_method);
}
inline void Amazon::Util::Internal::EnvironmentVariableSource::set_EnvironmentVariableRetriever(::Amazon::Util::Internal::IEnvironmentVariableRetriever* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(), "set_EnvironmentVariableRetriever", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Util::Internal::IEnvironmentVariableRetriever*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Util::Internal::EnvironmentVariableSource* Amazon::Util::Internal::EnvironmentVariableSource::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Util::Internal::EnvironmentVariableSource*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Util::Internal::EnvironmentVariableSource*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Util::Internal::EnvironmentVariableSource::EnvironmentVariableSource() {}
