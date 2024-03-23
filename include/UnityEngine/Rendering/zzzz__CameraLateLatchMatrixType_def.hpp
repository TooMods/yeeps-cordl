#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraLateLatchMatrixType)
// Forward declare root types
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CameraLateLatchMatrixType);
// Type: UnityEngine.Rendering::CameraLateLatchMatrixType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::CameraLateLatchMatrixType
struct CORDL_TYPE CameraLateLatchMatrixType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CameraLateLatchMatrixType_Unwrapped
  enum struct __CameraLateLatchMatrixType_Unwrapped : int32_t {
    __E_View = static_cast<int32_t>(0x0),
    __E_InverseView = static_cast<int32_t>(0x1),
    __E_ViewProjection = static_cast<int32_t>(0x2),
    __E_InverseViewProjection = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CameraLateLatchMatrixType_Unwrapped() const noexcept {
    return static_cast<__CameraLateLatchMatrixType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraLateLatchMatrixType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CameraLateLatchMatrixType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InverseView value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::CameraLateLatchMatrixType const InverseView;

  /// @brief Field InverseViewProjection value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::CameraLateLatchMatrixType const InverseViewProjection;

  /// @brief Field View value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::CameraLateLatchMatrixType const View;

  /// @brief Field ViewProjection value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::CameraLateLatchMatrixType const ViewProjection;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraLateLatchMatrixType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraLateLatchMatrixType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraLateLatchMatrixType, "UnityEngine.Rendering", "CameraLateLatchMatrixType");
