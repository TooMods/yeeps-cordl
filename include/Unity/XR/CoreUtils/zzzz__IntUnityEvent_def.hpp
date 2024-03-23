#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntUnityEvent)
// Forward declare root types
namespace Unity::XR::CoreUtils {
class IntUnityEvent;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::IntUnityEvent);
// Type: Unity.XR.CoreUtils::IntUnityEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::IntUnityEvent*
class CORDL_TYPE IntUnityEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::IntUnityEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2877510, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntUnityEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntUnityEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntUnityEvent(IntUnityEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntUnityEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntUnityEvent(IntUnityEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::IntUnityEvent, 0x30>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils
NEED_NO_BOX(::Unity::XR::CoreUtils::IntUnityEvent);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::IntUnityEvent*, "Unity.XR.CoreUtils", "IntUnityEvent");
