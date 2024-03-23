#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequestResult_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequest)
namespace Unity::Services::Core::Telemetry::Internal {
struct WebRequestResult;
}
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
struct WebRequest;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Telemetry::Internal::WebRequest);
// Type: Unity.Services.Core.Telemetry.Internal::WebRequest
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Telemetry.Internal::WebRequest
struct CORDL_TYPE WebRequest {
public:
  // Declarations
  __declspec(property(get = get_IsSuccess)) bool IsSuccess;

  /// @brief Method get_IsSuccess, addr 0x270db34, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsSuccess();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequest();

  // Ctor Parameters [CppParam { name: "Result", ty: "::Unity::Services::Core::Telemetry::Internal::WebRequestResult", modifiers: "", def_value: None }, CppParam { name: "ErrorMessage", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "ErrorBody", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ResponseCode", ty: "int64_t", modifiers: "",
  // def_value: None }]
  constexpr WebRequest(::Unity::Services::Core::Telemetry::Internal::WebRequestResult Result, ::StringW ErrorMessage, ::StringW ErrorBody, int64_t ResponseCode) noexcept;

  /// @brief Field Result, offset: 0x0, size: 0x4, def value: None
  ::Unity::Services::Core::Telemetry::Internal::WebRequestResult Result;

  /// @brief Field ErrorMessage, offset: 0x8, size: 0x8, def value: None
  ::StringW ErrorMessage;

  /// @brief Field ErrorBody, offset: 0x10, size: 0x8, def value: None
  ::StringW ErrorBody;

  /// @brief Field ResponseCode, offset: 0x18, size: 0x8, def value: None
  int64_t ResponseCode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::WebRequest, 0x20>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::WebRequest, Result) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::WebRequest, ErrorMessage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::WebRequest, ErrorBody) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::WebRequest, ResponseCode) == 0x18, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::WebRequest, "Unity.Services.Core.Telemetry.Internal", "WebRequest");
