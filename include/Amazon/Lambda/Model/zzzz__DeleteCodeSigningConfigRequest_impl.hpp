#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__DeleteCodeSigningConfigRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest.get_CodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::get_CodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(),
                                                                               "get_CodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest.set_CodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::set_CodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(), "set_CodeSigningConfigArn",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest.IsSetCodeSigningConfigArn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::IsSetCodeSigningConfigArn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bc6ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(),
                                                                               "IsSetCodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc6cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::__cordl_internal_get__codeSigningConfigArn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigArn;
}
constexpr ::StringW const& Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::__cordl_internal_get__codeSigningConfigArn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____codeSigningConfigArn;
}
constexpr void Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::__cordl_internal_set__codeSigningConfigArn(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____codeSigningConfigArn)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::get_CodeSigningConfigArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(),
                                                                             "get_CodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::set_CodeSigningConfigArn(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(), "set_CodeSigningConfigArn",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::IsSetCodeSigningConfigArn() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(),
                                                                             "IsSetCodeSigningConfigArn", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest* Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>());
}
inline void Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::DeleteCodeSigningConfigRequest::DeleteCodeSigningConfigRequest() {}
