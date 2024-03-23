#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WrappedType)
// Forward declare root types
namespace ExitGames::Client::Photon::StructWrapping {
struct WrappedType;
}
// Write type traits
MARK_VAL_T(::ExitGames::Client::Photon::StructWrapping::WrappedType);
// Type: ExitGames.Client.Photon.StructWrapping::WrappedType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon::StructWrapping {
// Is value type: true
// CS Name: ::ExitGames.Client.Photon.StructWrapping::WrappedType
struct CORDL_TYPE WrappedType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WrappedType_Unwrapped
  enum struct __WrappedType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Bool = static_cast<int32_t>(0x1),
    __E_Byte = static_cast<int32_t>(0x2),
    __E_Int16 = static_cast<int32_t>(0x3),
    __E_Int32 = static_cast<int32_t>(0x4),
    __E_Int64 = static_cast<int32_t>(0x5),
    __E_Single = static_cast<int32_t>(0x6),
    __E_Double = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WrappedType_Unwrapped() const noexcept {
    return static_cast<__WrappedType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WrappedType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WrappedType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Bool value: static_cast<int32_t>(0x1)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Bool;

  /// @brief Field Byte value: static_cast<int32_t>(0x2)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Byte;

  /// @brief Field Double value: static_cast<int32_t>(0x7)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Double;

  /// @brief Field Int16 value: static_cast<int32_t>(0x3)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Int16;

  /// @brief Field Int32 value: static_cast<int32_t>(0x4)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Int32;

  /// @brief Field Int64 value: static_cast<int32_t>(0x5)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Int64;

  /// @brief Field Single value: static_cast<int32_t>(0x6)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Single;

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::ExitGames::Client::Photon::StructWrapping::WrappedType const Unknown;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ExitGames::Client::Photon::StructWrapping::WrappedType, 0x4>, "Size mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::StructWrapping::WrappedType, value__) == 0x0, "Offset mismatch!");

} // namespace ExitGames::Client::Photon::StructWrapping
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::StructWrapping::WrappedType, "ExitGames.Client.Photon.StructWrapping", "WrappedType");
