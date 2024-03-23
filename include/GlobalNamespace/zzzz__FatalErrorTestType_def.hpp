#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FatalErrorTestType)
// Forward declare root types
namespace GlobalNamespace {
struct FatalErrorTestType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FatalErrorTestType);
// Type: ::FatalErrorTestType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::FatalErrorTestType
struct CORDL_TYPE FatalErrorTestType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FatalErrorTestType_Unwrapped
  enum struct __FatalErrorTestType_Unwrapped : int32_t {
    __E_none = static_cast<int32_t>(0x0),
    __E_noInternet = static_cast<int32_t>(0x1),
    __E_failedToFetchOculusAccount = static_cast<int32_t>(0x2),
    __E_failedToFetchGameAccount = static_cast<int32_t>(0x3),
    __E_failedToConnectToPhoton = static_cast<int32_t>(0x4),
    __E_failedToLoadGameRoom = static_cast<int32_t>(0x5),
    __E_failedToTransitionGameRooms = static_cast<int32_t>(0x6),
    __E_timeout = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FatalErrorTestType_Unwrapped() const noexcept {
    return static_cast<__FatalErrorTestType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FatalErrorTestType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FatalErrorTestType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field failedToConnectToPhoton value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::FatalErrorTestType const failedToConnectToPhoton;

  /// @brief Field failedToFetchGameAccount value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::FatalErrorTestType const failedToFetchGameAccount;

  /// @brief Field failedToFetchOculusAccount value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::FatalErrorTestType const failedToFetchOculusAccount;

  /// @brief Field failedToLoadGameRoom value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::FatalErrorTestType const failedToLoadGameRoom;

  /// @brief Field failedToTransitionGameRooms value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::FatalErrorTestType const failedToTransitionGameRooms;

  /// @brief Field noInternet value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::FatalErrorTestType const noInternet;

  /// @brief Field none value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::FatalErrorTestType const none;

  /// @brief Field timeout value: static_cast<int32_t>(0x7)
  static ::GlobalNamespace::FatalErrorTestType const timeout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FatalErrorTestType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FatalErrorTestType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FatalErrorTestType, "", "FatalErrorTestType");
