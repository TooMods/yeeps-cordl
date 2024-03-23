#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticipantPropertyUpdateFrequency)
// Forward declare root types
namespace Unity::Services::Vivox {
struct ParticipantPropertyUpdateFrequency;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency);
// Type: Unity.Services.Vivox::ParticipantPropertyUpdateFrequency
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::ParticipantPropertyUpdateFrequency
struct CORDL_TYPE ParticipantPropertyUpdateFrequency {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParticipantPropertyUpdateFrequency_Unwrapped
  enum struct __ParticipantPropertyUpdateFrequency_Unwrapped : int32_t {
    __E_StateChange = static_cast<int32_t>(0x64),
    __E_Never = static_cast<int32_t>(0x0),
    __E_OnePerSecond = static_cast<int32_t>(0x32),
    __E_FivePerSecond = static_cast<int32_t>(0xa),
    __E_TenPerSecond = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParticipantPropertyUpdateFrequency_Unwrapped() const noexcept {
    return static_cast<__ParticipantPropertyUpdateFrequency_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticipantPropertyUpdateFrequency();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParticipantPropertyUpdateFrequency(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FivePerSecond value: static_cast<int32_t>(0xa)
  static ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const FivePerSecond;

  /// @brief Field Never value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const Never;

  /// @brief Field OnePerSecond value: static_cast<int32_t>(0x32)
  static ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const OnePerSecond;

  /// @brief Field StateChange value: static_cast<int32_t>(0x64)
  static ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const StateChange;

  /// @brief Field TenPerSecond value: static_cast<int32_t>(0x5)
  static ::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency const TenPerSecond;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ParticipantPropertyUpdateFrequency, "Unity.Services.Vivox", "ParticipantPropertyUpdateFrequency");
