#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
CORDL_MODULE_EXPORT(Vector4UnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class Vector4UnityEvent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Vector4UnityEvent);
// Type: Unity.XR.CoreUtils::Vector4UnityEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::Vector4UnityEvent*
class CORDL_TYPE Vector4UnityEvent : public ::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector4> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Vector4UnityEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2877480, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4UnityEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4UnityEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4UnityEvent(Vector4UnityEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4UnityEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4UnityEvent(Vector4UnityEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Vector4UnityEvent, 0x30>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::Vector4UnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Vector4UnityEvent*, "Unity.XR.CoreUtils", "Vector4UnityEvent");
