#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpOptions)
// Forward declare root types
namespace Unity::Services::Core::Networking::Internal {
struct HttpOptions;
}
// Write type traits
MARK_VAL_T(::Unity::Services::Core::Networking::Internal::HttpOptions);
// Type: Unity.Services.Core.Networking.Internal::HttpOptions
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::Services::Core::Networking::Internal {
// Is value type: true
// CS Name: ::Unity.Services.Core.Networking.Internal::HttpOptions
struct CORDL_TYPE HttpOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpOptions();

  // Ctor Parameters [CppParam { name: "RequestTimeoutInSeconds", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "RedirectLimit", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpOptions(int32_t RequestTimeoutInSeconds, int32_t RedirectLimit) noexcept;

  /// @brief Field RequestTimeoutInSeconds, offset: 0x0, size: 0x4, def value: None
  int32_t RequestTimeoutInSeconds;

  /// @brief Field RedirectLimit, offset: 0x4, size: 0x4, def value: None
  int32_t RedirectLimit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Services::Core::Networking::Internal::HttpOptions, 0x8>, "Size mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpOptions, RequestTimeoutInSeconds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Services::Core::Networking::Internal::HttpOptions, RedirectLimit) == 0x4, "Offset mismatch!");

} // namespace Unity::Services::Core::Networking::Internal
DEFINE_IL2CPP_ARG_TYPE(::Unity::Services::Core::Networking::Internal::HttpOptions, "Unity.Services.Core.Networking.Internal", "HttpOptions");
