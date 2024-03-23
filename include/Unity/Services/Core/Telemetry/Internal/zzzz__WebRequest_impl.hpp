#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequestResult_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequest_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequestResult_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::WebRequest.get_IsSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Telemetry::Internal::WebRequest::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::WebRequest::get_IsSuccess)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x270db34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::WebRequest>::get(),
                                                                               "get_IsSuccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool Unity::Services::Core::Telemetry::Internal::WebRequest::get_IsSuccess() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::WebRequest>::get(),
                                                                             "get_IsSuccess", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Result", ty: "::Unity::Services::Core::Telemetry::Internal::WebRequestResult", modifiers: "", def_value: Some("{}") }, CppParam { name: "ErrorMessage", ty:
// "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ErrorBody", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ResponseCode", ty: "int64_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequest::WebRequest(::Unity::Services::Core::Telemetry::Internal::WebRequestResult Result, ::StringW ErrorMessage, ::StringW ErrorBody,
                                                                               int64_t ResponseCode) noexcept {
  this->Result = Result;
  this->ErrorMessage = ErrorMessage;
  this->ErrorBody = ErrorBody;
  this->ResponseCode = ResponseCode;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::WebRequest::WebRequest() {}
