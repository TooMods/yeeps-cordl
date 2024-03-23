#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestResult)
// Forward declare root types
namespace Unity::Services::Core::Telemetry::Internal {
struct WebRequestResult;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Telemetry::Internal::WebRequestResult);
// Type: Unity.Services.Core.Telemetry.Internal::WebRequestResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Core::Telemetry::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Telemetry.Internal::WebRequestResult
struct CORDL_TYPE WebRequestResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebRequestResult_Unwrapped
  enum struct __WebRequestResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_ConnectionError = static_cast<int32_t>(0x1),
    __E_ProtocolError = static_cast<int32_t>(0x2),
    __E_UnknownError = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebRequestResult_Unwrapped() const noexcept {
    return static_cast<__WebRequestResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRequestResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebRequestResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ConnectionError value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Core::Telemetry::Internal::WebRequestResult const ConnectionError;

  /// @brief Field ProtocolError value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Core::Telemetry::Internal::WebRequestResult const ProtocolError;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Core::Telemetry::Internal::WebRequestResult const Success;

  /// @brief Field UnknownError value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Core::Telemetry::Internal::WebRequestResult const UnknownError;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Telemetry::Internal::WebRequestResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Telemetry::Internal::WebRequestResult, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Core::Telemetry::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Telemetry::Internal::WebRequestResult, "Unity.Services.Core.Telemetry.Internal", "WebRequestResult");
