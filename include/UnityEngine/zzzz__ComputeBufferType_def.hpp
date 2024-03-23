#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBufferType)
// Forward declare root types
namespace UnityEngine {
struct ComputeBufferType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ComputeBufferType);
// Type: UnityEngine::ComputeBufferType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::ComputeBufferType
struct CORDL_TYPE ComputeBufferType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ComputeBufferType_Unwrapped
  enum struct __ComputeBufferType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Raw = static_cast<int32_t>(0x1),
    __E_Append = static_cast<int32_t>(0x2),
    __E_Counter = static_cast<int32_t>(0x4),
    __E_Constant = static_cast<int32_t>(0x8),
    __E_Structured = static_cast<int32_t>(0x10),
    __E_DrawIndirect = static_cast<int32_t>(0x100),
    __E_IndirectArguments = static_cast<int32_t>(0x100),
    __E_GPUMemory = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ComputeBufferType_Unwrapped() const noexcept {
    return static_cast<__ComputeBufferType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBufferType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ComputeBufferType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Append value: static_cast<int32_t>(0x2)
  static ::UnityEngine::ComputeBufferType const Append;

  /// @brief Field Constant value: static_cast<int32_t>(0x8)
  static ::UnityEngine::ComputeBufferType const Constant;

  /// @brief Field Counter value: static_cast<int32_t>(0x4)
  static ::UnityEngine::ComputeBufferType const Counter;

  /// @brief Field Default value: static_cast<int32_t>(0x0)
  static ::UnityEngine::ComputeBufferType const Default;

  /// @brief Field DrawIndirect value: static_cast<int32_t>(0x100)
  static ::UnityEngine::ComputeBufferType const DrawIndirect;

  /// @brief Field GPUMemory value: static_cast<int32_t>(0x200)
  static ::UnityEngine::ComputeBufferType const GPUMemory;

  /// @brief Field IndirectArguments value: static_cast<int32_t>(0x100)
  static ::UnityEngine::ComputeBufferType const IndirectArguments;

  /// @brief Field Raw value: static_cast<int32_t>(0x1)
  static ::UnityEngine::ComputeBufferType const Raw;

  /// @brief Field Structured value: static_cast<int32_t>(0x10)
  static ::UnityEngine::ComputeBufferType const Structured;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBufferType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ComputeBufferType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBufferType, "UnityEngine", "ComputeBufferType");
