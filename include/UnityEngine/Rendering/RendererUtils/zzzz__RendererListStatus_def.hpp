#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererListStatus)
// Forward declare root types
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListStatus;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RendererUtils::RendererListStatus);
// Type: UnityEngine.Rendering.RendererUtils::RendererListStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::RendererUtils {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.RendererUtils::RendererListStatus
struct CORDL_TYPE RendererListStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RendererListStatus_Unwrapped
  enum struct __RendererListStatus_Unwrapped : int32_t {
    __E_kRendererListInvalid = static_cast<int32_t>(0xfffffffe),
    __E_kRendererListProcessing = static_cast<int32_t>(0xffffffff),
    __E_kRendererListEmpty = static_cast<int32_t>(0x0),
    __E_kRendererListPopulated = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RendererListStatus_Unwrapped() const noexcept {
    return static_cast<__RendererListStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RendererListStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field kRendererListEmpty value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::RendererUtils::RendererListStatus const kRendererListEmpty;

  /// @brief Field kRendererListInvalid value: static_cast<int32_t>(0xfffffffe)
  static ::UnityEngine::Rendering::RendererUtils::RendererListStatus const kRendererListInvalid;

  /// @brief Field kRendererListPopulated value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::RendererUtils::RendererListStatus const kRendererListPopulated;

  /// @brief Field kRendererListProcessing value: static_cast<int32_t>(0xffffffff)
  static ::UnityEngine::Rendering::RendererUtils::RendererListStatus const kRendererListProcessing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RendererUtils::RendererListStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererUtils::RendererListStatus, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::RendererUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RendererUtils::RendererListStatus, "UnityEngine.Rendering.RendererUtils", "RendererListStatus");
