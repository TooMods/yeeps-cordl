#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AndroidSensorCapabilities)
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorCapabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities);
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorCapabilities
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidSensorCapabilities
struct CORDL_TYPE AndroidSensorCapabilities {
public:
  // Declarations
  /// @brief Method FromJson, addr 0x1e01390, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities FromJson(::StringW json);

  /// @brief Method ToJson, addr 0x1e0132c, size 0x64, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method ToString, addr 0x1e01430, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidSensorCapabilities();

  // Ctor Parameters [CppParam { name: "sensorType", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType", modifiers: "", def_value: None }]
  constexpr AndroidSensorCapabilities(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType sensorType) noexcept;

  /// @brief Field sensorType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType sensorType;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, sensorType) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorCapabilities");
