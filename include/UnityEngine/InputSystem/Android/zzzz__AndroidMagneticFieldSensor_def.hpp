#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__MagneticFieldSensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidMagneticFieldSensor)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidMagneticFieldSensor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor);
// Type: UnityEngine.InputSystem.Android::AndroidMagneticFieldSensor
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidMagneticFieldSensor*
class CORDL_TYPE AndroidMagneticFieldSensor : public ::UnityEngine::InputSystem::MagneticFieldSensor {
public:
  // Declarations
  static inline ::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor* New_ctor();

  /// @brief Method .ctor, addr 0x1e000ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AndroidMagneticFieldSensor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AndroidMagneticFieldSensor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AndroidMagneticFieldSensor(AndroidMagneticFieldSensor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AndroidMagneticFieldSensor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AndroidMagneticFieldSensor(AndroidMagneticFieldSensor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor, 0x178>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidMagneticFieldSensor*, "UnityEngine.InputSystem.Android", "AndroidMagneticFieldSensor");
