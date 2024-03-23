#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__DeadLetterConfig_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::DeadLetterConfig.get_TargetArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::DeadLetterConfig::*)()>(
    &::Amazon::Lambda::Model::DeadLetterConfig::get_TargetArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(),
                                                                               "get_TargetArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeadLetterConfig.set_TargetArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeadLetterConfig::*)(::StringW)>(
    &::Amazon::Lambda::Model::DeadLetterConfig::set_TargetArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(), "set_TargetArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeadLetterConfig.IsSetTargetArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::DeadLetterConfig::*)()>(&::Amazon::Lambda::Model::DeadLetterConfig::IsSetTargetArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc6c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(),
                                                                               "IsSetTargetArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeadLetterConfig._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeadLetterConfig::*)()>(&::Amazon::Lambda::Model::DeadLetterConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::DeadLetterConfig::__cordl_internal_get__targetArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::DeadLetterConfig::__cordl_internal_get__targetArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetArn;
}
constexpr void Amazon::Lambda::Model::DeadLetterConfig::__cordl_internal_set__targetArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::DeadLetterConfig::get_TargetArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(), "get_TargetArn",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::DeadLetterConfig::set_TargetArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(), "set_TargetArn", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::DeadLetterConfig::IsSetTargetArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(),
                                                                             "IsSetTargetArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::DeadLetterConfig* Amazon::Lambda::Model::DeadLetterConfig::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::DeadLetterConfig*>());
}
inline void Amazon::Lambda::Model::DeadLetterConfig::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeadLetterConfig*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::DeadLetterConfig::DeadLetterConfig() {}
