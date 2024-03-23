#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LoginState)
// Forward declare root types
namespace Unity::Services::Vivox {
struct LoginState;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::LoginState);
// Type: Unity.Services.Vivox::LoginState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::LoginState
struct CORDL_TYPE LoginState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LoginState_Unwrapped
  enum struct __LoginState_Unwrapped : int32_t {
    __E_LoggedOut = static_cast<int32_t>(0x0),
    __E_LoggedIn = static_cast<int32_t>(0x1),
    __E_LoggingIn = static_cast<int32_t>(0x2),
    __E_LoggingOut = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LoginState_Unwrapped() const noexcept {
    return static_cast<__LoginState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LoginState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LoginState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field LoggedIn value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::LoginState const LoggedIn;

  /// @brief Field LoggedOut value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::LoginState const LoggedOut;

  /// @brief Field LoggingIn value: static_cast<int32_t>(0x2)
  static ::Unity::Services::Vivox::LoginState const LoggingIn;

  /// @brief Field LoggingOut value: static_cast<int32_t>(0x3)
  static ::Unity::Services::Vivox::LoginState const LoggingOut;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::LoginState, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::LoginState, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::LoginState, "Unity.Services.Vivox", "LoginState");
