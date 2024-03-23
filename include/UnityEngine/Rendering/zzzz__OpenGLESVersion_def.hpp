#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenGLESVersion)
// Forward declare root types
namespace UnityEngine::Rendering {
struct OpenGLESVersion;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::OpenGLESVersion);
// Type: UnityEngine.Rendering::OpenGLESVersion
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::OpenGLESVersion
struct CORDL_TYPE OpenGLESVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenGLESVersion_Unwrapped
  enum struct __OpenGLESVersion_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OpenGLES20 = static_cast<int32_t>(0x1),
    __E_OpenGLES30 = static_cast<int32_t>(0x2),
    __E_OpenGLES31 = static_cast<int32_t>(0x3),
    __E_OpenGLES31AEP = static_cast<int32_t>(0x4),
    __E_OpenGLES32 = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenGLESVersion_Unwrapped() const noexcept {
    return static_cast<__OpenGLESVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenGLESVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenGLESVersion(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::OpenGLESVersion const None;

  /// @brief Field OpenGLES20 value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::OpenGLESVersion const OpenGLES20;

  /// @brief Field OpenGLES30 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::OpenGLESVersion const OpenGLES30;

  /// @brief Field OpenGLES31 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::Rendering::OpenGLESVersion const OpenGLES31;

  /// @brief Field OpenGLES31AEP value: static_cast<int32_t>(0x4)
  static ::UnityEngine::Rendering::OpenGLESVersion const OpenGLES31AEP;

  /// @brief Field OpenGLES32 value: static_cast<int32_t>(0x5)
  static ::UnityEngine::Rendering::OpenGLESVersion const OpenGLES32;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OpenGLESVersion, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OpenGLESVersion, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OpenGLESVersion, "UnityEngine.Rendering", "OpenGLESVersion");
