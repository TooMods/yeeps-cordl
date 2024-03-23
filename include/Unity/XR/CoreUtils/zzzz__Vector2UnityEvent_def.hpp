#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Vector2UnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector2UnityEvent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Vector2UnityEvent);
// Type: Unity.XR.CoreUtils::Vector2UnityEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::Vector2UnityEvent*
class CORDL_TYPE Vector2UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Vector2UnityEvent* New_ctor();

  /// @brief Method .ctor, addr 0x28773f0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2UnityEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2UnityEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2UnityEvent(Vector2UnityEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2UnityEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2UnityEvent(Vector2UnityEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Vector2UnityEvent, 0x30>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector2UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector2UnityEvent*, "Unity.XR.CoreUtils", "Vector2UnityEvent");
