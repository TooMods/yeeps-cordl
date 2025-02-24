#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBufferMode)
// Forward declare root types
namespace UnityEngine {
struct ComputeBufferMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ComputeBufferMode);
// Type: UnityEngine::ComputeBufferMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ComputeBufferMode
struct CORDL_TYPE ComputeBufferMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ComputeBufferMode_Unwrapped
  enum struct __ComputeBufferMode_Unwrapped : int32_t {
    __E_Immutable = static_cast<int32_t>(0x0),
    __E_Dynamic = static_cast<int32_t>(0x1),
    __E_Circular = static_cast<int32_t>(0x2),
    __E_StreamOut = static_cast<int32_t>(0x3),
    __E_SubUpdates = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ComputeBufferMode_Unwrapped() const noexcept {
    return static_cast<__ComputeBufferMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBufferMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ComputeBufferMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Circular value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ComputeBufferMode const Circular;

  /// @brief Field Dynamic value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ComputeBufferMode const Dynamic;

  /// @brief Field Immutable value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ComputeBufferMode const Immutable;

  /// @brief Field StreamOut value: static_cast<int32_t>(0x3)
  static ::UnityEngine::ComputeBufferMode const StreamOut;

  /// @brief Field SubUpdates value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ComputeBufferMode const SubUpdates;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBufferMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ComputeBufferMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBufferMode, "UnityEngine", "ComputeBufferMode");
