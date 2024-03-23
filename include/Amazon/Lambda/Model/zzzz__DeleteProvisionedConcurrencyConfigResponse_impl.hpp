#pragma once
#include "Amazon/Runtime/zzzz__AmazonWebServiceResponse_impl.hpp"
#include "Amazon/Lambda/Model/zzzz__DeleteProvisionedConcurrencyConfigResponse_def.hpp"
//  Writing Method size for method: ::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse::*)()>(
    &::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2bc7b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse* Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse*>());
}
inline void Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Lambda::Model::DeleteProvisionedConcurrencyConfigResponse::DeleteProvisionedConcurrencyConfigResponse() {}
