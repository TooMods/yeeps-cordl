#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncOperationStatus)
// Forward declare root types
namespace Unity::Services::Core::Internal {
struct AsyncOperationStatus;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Internal::AsyncOperationStatus);
// Type: Unity.Services.Core.Internal::AsyncOperationStatus
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Core::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Internal::AsyncOperationStatus
struct CORDL_TYPE AsyncOperationStatus {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AsyncOperationStatus_Unwrapped
  enum struct __AsyncOperationStatus_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_InProgress = static_cast<int32_t>(0x1),
    __E_Succeeded = static_cast<int32_t>(0x2),
    __E_Failed = static_cast<int32_t>(0x3),
    __E_Cancelled = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AsyncOperationStatus_Unwrapped() const noexcept {
    return static_cast<__AsyncOperationStatus_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncOperationStatus();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsyncOperationStatus(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Cancelled value: static_cast<int32_t>(0x4)
  static ::Unity::Services::Core::Internal::AsyncOperationStatus const Cancelled;

  /// @brief Field Failed value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Core::Internal::AsyncOperationStatus const Failed;

  /// @brief Field InProgress value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Core::Internal::AsyncOperationStatus const InProgress;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Core::Internal::AsyncOperationStatus const None;

  /// @brief Field Succeeded value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Core::Internal::AsyncOperationStatus const Succeeded;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Internal::AsyncOperationStatus, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Internal::AsyncOperationStatus, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Core::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Internal::AsyncOperationStatus, "Unity.Services.Core.Internal", "AsyncOperationStatus");
