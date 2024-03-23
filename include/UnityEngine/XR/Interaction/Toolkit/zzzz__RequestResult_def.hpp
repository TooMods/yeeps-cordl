#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestResult)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct RequestResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::RequestResult);
// Type: UnityEngine.XR.Interaction.Toolkit::RequestResult
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::RequestResult
struct CORDL_TYPE RequestResult {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RequestResult_Unwrapped
  enum struct __RequestResult_Unwrapped : int32_t {
    __E_Success = static_cast<int32_t>(0x0),
    __E_Busy = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RequestResult_Unwrapped() const noexcept {
    return static_cast<__RequestResult_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RequestResult();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RequestResult(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Busy value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::RequestResult const Busy;

  /// @brief Field Error value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::RequestResult const Error;

  /// @brief Field Success value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::RequestResult const Success;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::RequestResult, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::RequestResult, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::RequestResult, "UnityEngine.XR.Interaction.Toolkit", "RequestResult");
