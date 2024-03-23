#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(Vector3UnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector3UnityEvent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Vector3UnityEvent);
// Type: Unity.XR.CoreUtils::Vector3UnityEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::Vector3UnityEvent*
class CORDL_TYPE Vector3UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector3> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Vector3UnityEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2877438, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3UnityEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3UnityEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3UnityEvent(Vector3UnityEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3UnityEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3UnityEvent(Vector3UnityEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Vector3UnityEvent, 0x30>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector3UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector3UnityEvent*, "Unity.XR.CoreUtils", "Vector3UnityEvent");
