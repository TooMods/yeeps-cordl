#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/zzzz__PaginatorUtils_def.hpp"
#include "Amazon/Runtime/zzzz__AmazonWebServiceRequest_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::PaginatorUtils.SetUserAgentAdditionOnRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::AmazonWebServiceRequest*)>(
    &::Amazon::Runtime::PaginatorUtils::SetUserAgentAdditionOnRequest)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x202142c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::PaginatorUtils*>::get(), "SetUserAgentAdditionOnRequest", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
    return ___internal_method;
  }
};
inline void Amazon::Runtime::PaginatorUtils::SetUserAgentAdditionOnRequest(::Amazon::Runtime::AmazonWebServiceRequest* request) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::PaginatorUtils*>::get(), "SetUserAgentAdditionOnRequest", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::AmazonWebServiceRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, request);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::PaginatorUtils::PaginatorUtils() {}
