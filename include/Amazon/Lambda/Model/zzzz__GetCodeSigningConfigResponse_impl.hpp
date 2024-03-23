#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__GetCodeSigningConfigResponse_def.hpp"
#include "Amazon/Lambda/Model/zzzz__CodeSigningConfig_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigResponse.get_CodeSigningConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Lambda::Model::CodeSigningConfig* (::Amazon::Lambda::Model::GetCodeSigningConfigResponse::*)()>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigResponse::get_CodeSigningConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(),
                                                                               "get_CodeSigningConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigResponse.set_CodeSigningConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetCodeSigningConfigResponse::*)(::Amazon::Lambda::Model::CodeSigningConfig*)>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigResponse::set_CodeSigningConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(), "set_CodeSigningConfig", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::CodeSigningConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigResponse.IsSetCodeSigningConfig
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetCodeSigningConfigResponse::*)()>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigResponse::IsSetCodeSigningConfig)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc9bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(),
                                                                               "IsSetCodeSigningConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetCodeSigningConfigResponse::*)()>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::Amazon::Lambda::Model::CodeSigningConfig*& Amazon::Lambda::Model::GetCodeSigningConfigResponse::__cordl_internal_get__codeSigningConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfig;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Lambda::Model::CodeSigningConfig*> const& Amazon::Lambda::Model::GetCodeSigningConfigResponse::__cordl_internal_get__codeSigningConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfig;
}
constexpr void Amazon::Lambda::Model::GetCodeSigningConfigResponse::__cordl_internal_set__codeSigningConfig(::Amazon::Lambda::Model::CodeSigningConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeSigningConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Amazon::Lambda::Model::CodeSigningConfig* Amazon::Lambda::Model::GetCodeSigningConfigResponse::get_CodeSigningConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(),
                                                                             "get_CodeSigningConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Lambda::Model::CodeSigningConfig*, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetCodeSigningConfigResponse::set_CodeSigningConfig(::Amazon::Lambda::Model::CodeSigningConfig* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(), "set_CodeSigningConfig", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Lambda::Model::CodeSigningConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetCodeSigningConfigResponse::IsSetCodeSigningConfig() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(),
                                                                             "IsSetCodeSigningConfig", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::GetCodeSigningConfigResponse* Amazon::Lambda::Model::GetCodeSigningConfigResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>());
}
inline void Amazon::Lambda::Model::GetCodeSigningConfigResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigResponse*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::GetCodeSigningConfigResponse::GetCodeSigningConfigResponse() {}
