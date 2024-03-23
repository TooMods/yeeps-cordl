#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConversationType)
// Forward declare root types
namespace Unity::Services::Vivox {
struct ConversationType;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Vivox::ConversationType);
// Type: Unity.Services.Vivox::ConversationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Vivox {
// Is value type: true
// CS Name: ::Unity.Services.Vivox::ConversationType
struct CORDL_TYPE ConversationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConversationType_Unwrapped
  enum struct __ConversationType_Unwrapped : int32_t {
    __E_ChannelConversation = static_cast<int32_t>(0x0),
    __E_DirectedMessageConversation = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConversationType_Unwrapped() const noexcept {
    return static_cast<__ConversationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConversationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConversationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ChannelConversation value: static_cast<int32_t>(0x0)
  static ::Unity::Services::Vivox::ConversationType const ChannelConversation;

  /// @brief Field DirectedMessageConversation value: static_cast<int32_t>(0x1)
  static ::Unity::Services::Vivox::ConversationType const DirectedMessageConversation;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Vivox::ConversationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Vivox::ConversationType, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::Services::Vivox
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Vivox::ConversationType, "Unity.Services.Vivox", "ConversationType");
