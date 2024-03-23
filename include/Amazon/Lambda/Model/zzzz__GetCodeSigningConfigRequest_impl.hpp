#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__GetCodeSigningConfigRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigRequest.get_CodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigRequest::get_CodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(),
                                                                               "get_CodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigRequest.set_CodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetCodeSigningConfigRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigRequest::set_CodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(), "set_CodeSigningConfigArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigRequest.IsSetCodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigRequest::IsSetCodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc9bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(),
                                                                               "IsSetCodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetCodeSigningConfigRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::GetCodeSigningConfigRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc9be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::GetCodeSigningConfigRequest::__cordl_internal_get__codeSigningConfigArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetCodeSigningConfigRequest::__cordl_internal_get__codeSigningConfigArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigArn;
}
constexpr void Amazon::Lambda::Model::GetCodeSigningConfigRequest::__cordl_internal_set__codeSigningConfigArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeSigningConfigArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::GetCodeSigningConfigRequest::get_CodeSigningConfigArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(),
                                                                             "get_CodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetCodeSigningConfigRequest::set_CodeSigningConfigArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(), "set_CodeSigningConfigArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetCodeSigningConfigRequest::IsSetCodeSigningConfigArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(),
                                                                             "IsSetCodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::GetCodeSigningConfigRequest* Amazon::Lambda::Model::GetCodeSigningConfigRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>());
}
inline void Amazon::Lambda::Model::GetCodeSigningConfigRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetCodeSigningConfigRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::GetCodeSigningConfigRequest::GetCodeSigningConfigRequest() {}
