#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ChannelToken)
// Forward declare root types
namespace Unity::Services::Wire::Internal {
struct ChannelToken;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Wire::Internal::ChannelToken);
// Type: Unity.Services.Wire.Internal::ChannelToken
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Services::Wire::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Wire.Internal::ChannelToken
struct CORDL_TYPE ChannelToken {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChannelToken();

  // Ctor Parameters [CppParam { name: "ChannelName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr ChannelToken(::StringW ChannelName, ::StringW Token) noexcept;

  /// @brief Field ChannelName, offset: 0x0, size: 0x8, def value: None
  ::StringW ChannelName;

  /// @brief Field Token, offset: 0x8, size: 0x8, def value: None
  ::StringW Token;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Wire::Internal::ChannelToken, 0x10>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Wire::Internal::ChannelToken, ChannelName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Wire::Internal::ChannelToken, Token) == 0x8, "Offset mismatch!");

} // namespace Unity::Services::Wire::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Wire::Internal::ChannelToken, "Unity.Services.Wire.Internal", "ChannelToken");
