#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRPointerVisualizer)
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPointerVisualizer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRPointerVisualizer);
// Type: ::OVRPointerVisualizer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRPointerVisualizer*
class CORDL_TYPE OVRPointerVisualizer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field linePointer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_linePointer, put = __cordl_internal_set_linePointer))::UnityW<::UnityEngine::LineRenderer> linePointer;

  /// @brief Field rayDrawDistance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_rayDrawDistance, put = __cordl_internal_set_rayDrawDistance)) float_t rayDrawDistance;

  /// @brief Field rayTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rayTransform, put = __cordl_internal_set_rayTransform))::UnityW<::UnityEngine::Transform> rayTransform;

  static inline ::GlobalNamespace::OVRPointerVisualizer* New_ctor();

  /// @brief Method Update, addr 0x1489818, size 0x1a0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_linePointer() const;

  constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_linePointer();

  constexpr float_t const& __cordl_internal_get_rayDrawDistance() const;

  constexpr float_t& __cordl_internal_get_rayDrawDistance();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rayTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rayTransform();

  constexpr void __cordl_internal_set_linePointer(::UnityW<::UnityEngine::LineRenderer> value);

  constexpr void __cordl_internal_set_rayDrawDistance(float_t value);

  constexpr void __cordl_internal_set_rayTransform(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x14899b8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRPointerVisualizer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRPointerVisualizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRPointerVisualizer(OVRPointerVisualizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRPointerVisualizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRPointerVisualizer(OVRPointerVisualizer const&) = delete;

  /// @brief Field rayTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rayTransform;

  /// @brief Field linePointer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LineRenderer> ___linePointer;

  /// @brief Field rayDrawDistance, offset: 0x28, size: 0x4, def value: None
  float_t ___rayDrawDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRPointerVisualizer, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPointerVisualizer, ___rayTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPointerVisualizer, ___linePointer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPointerVisualizer, ___rayDrawDistance) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRPointerVisualizer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPointerVisualizer*, "", "OVRPointerVisualizer");
