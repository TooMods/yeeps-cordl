#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__LightSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidLightSensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidLightSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidLightSensor);
// Type: UnityEngine.InputSystem.Android::AndroidLightSensor
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidLightSensor*
class CORDL_TYPE AndroidLightSensor : public ::UnityEngine::InputSystem::LightSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidLightSensor* New_ctor();

  /// @brief Method .ctor, addr 0x1e000fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidLightSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidLightSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidLightSensor(AndroidLightSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidLightSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidLightSensor(AndroidLightSensor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidLightSensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidLightSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidLightSensor*, "UnityEngine.InputSystem.Android", "AndroidLightSensor");
