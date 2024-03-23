#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__DeleteFunctionEventInvokeConfigResponse_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse::*)()>(
    &::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc79ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse* Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse*>());
}
inline void Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::DeleteFunctionEventInvokeConfigResponse::DeleteFunctionEventInvokeConfigResponse() {}
