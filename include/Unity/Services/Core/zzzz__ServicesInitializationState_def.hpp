#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ServicesInitializationState)
// Forward declare root types
namespace Unity::Services::Core {
struct ServicesInitializationState;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::ServicesInitializationState);
// Type: Unity.Services.Core::ServicesInitializationState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Core {
// Is value type: true
// CS Name: ::Unity.Services.Core::ServicesInitializationState
struct CORDL_TYPE ServicesInitializationState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ServicesInitializationState_Unwrapped
  enum struct __ServicesInitializationState_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_Initializing = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ServicesInitializationState_Unwrapped() const noexcept {
    return static_cast<__ServicesInitializationState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ServicesInitializationState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ServicesInitializationState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Initialized value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Core::ServicesInitializationState const Initialized;

  /// @brief Field Initializing value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Core::ServicesInitializationState const Initializing;

  /// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Core::ServicesInitializationState const Uninitialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::ServicesInitializationState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::ServicesInitializationState, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Core
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::ServicesInitializationState, "Unity.Services.Core", "ServicesInitializationState");
