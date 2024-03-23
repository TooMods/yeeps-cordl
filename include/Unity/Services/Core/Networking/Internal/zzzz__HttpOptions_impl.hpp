#pragma once
#include "Unity/Services/Core/Networking/Internal/zzzz__HttpOptions_def.hpp"
// Ctor Parameters [CppParam { name: "RequestTimeoutInSeconds", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "RedirectLimit", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::Unity::Services::Core::Networking::Internal::HttpOptions::HttpOptions(int32_t RequestTimeoutInSeconds, int32_t RedirectLimit) noexcept {
  this->RequestTimeoutInSeconds = RequestTimeoutInSeconds;
  this->RedirectLimit = RedirectLimit;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Networking::Internal::HttpOptions::HttpOptions() {}
