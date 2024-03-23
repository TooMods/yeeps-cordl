#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTargetFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderTargetFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderTargetFlags);
// Type: UnityEngine.Rendering::RenderTargetFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::RenderTargetFlags
struct CORDL_TYPE RenderTargetFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderTargetFlags_Unwrapped
  enum struct __RenderTargetFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ReadOnlyDepth = static_cast<int32_t>(0x1),
    __E_ReadOnlyStencil = static_cast<int32_t>(0x2),
    __E_ReadOnlyDepthStencil = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderTargetFlags_Unwrapped() const noexcept {
    return static_cast<__RenderTargetFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTargetFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderTargetFlags(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::RenderTargetFlags const None;

  /// @brief Field ReadOnlyDepth value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::RenderTargetFlags const ReadOnlyDepth;

  /// @brief Field ReadOnlyDepthStencil value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::RenderTargetFlags const ReadOnlyDepthStencil;

  /// @brief Field ReadOnlyStencil value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::RenderTargetFlags const ReadOnlyStencil;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderTargetFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderTargetFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderTargetFlags, "UnityEngine.Rendering", "RenderTargetFlags");
