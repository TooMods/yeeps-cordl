#pragma once
#include "Amazon/Lambda/zzzz__AmazonLambdaRequest_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__GetFunctionCodeSigningConfigRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest.get_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::get_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), "get_FunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest.set_FunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::*)(::StringW)>(
    &::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::set_FunctionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), "set_FunctionName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest.IsSetFunctionName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::IsSetFunctionName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2bca838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), "IsSetFunctionName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::*)()>(
    &::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bca848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::__cordl_internal_get__functionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr ::StringW const& Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::__cordl_internal_get__functionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____functionName;
}
constexpr void Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::__cordl_internal_set__functionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____functionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::get_FunctionName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), "get_FunctionName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::set_FunctionName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), "set_FunctionName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::IsSetFunctionName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), "IsSetFunctionName",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest* Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>());
}
inline void Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::GetFunctionCodeSigningConfigRequest::GetFunctionCodeSigningConfigRequest() {}
