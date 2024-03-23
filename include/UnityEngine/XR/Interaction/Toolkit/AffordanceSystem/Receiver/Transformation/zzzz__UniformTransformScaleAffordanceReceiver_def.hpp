#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__FloatAffordanceReceiver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UniformTransformScaleAffordanceReceiver)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation {
class UniformTransformScaleAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Transformation::UniformTransformScaleAffordanceReceiver
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Transformation::UniformTransformScaleAffordanceReceiver*
class CORDL_TYPE UniformTransformScaleAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver {
public:
  // Declarations
  /// @brief Field m_HasTransformToScale, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasTransformToScale, put = __cordl_internal_set_m_HasTransformToScale)) bool m_HasTransformToScale;

  /// @brief Field m_InitialScale, offset 0xac, size 0xc
  __declspec(property(get = __cordl_internal_get_m_InitialScale, put = __cordl_internal_set_m_InitialScale))::UnityEngine::Vector3 m_InitialScale;

  /// @brief Field m_TransformToScale, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformToScale, put = __cordl_internal_set_m_TransformToScale))::UnityW<::UnityEngine::Transform> m_TransformToScale;

  __declspec(property(get = get_transformToScale, put = set_transformToScale))::UnityW<::UnityEngine::Transform> transformToScale;

  /// @brief Method GetCurrentValueForCapture, addr 0x2a2fa5c, size 0x38, virtual true, abstract: false, final false
  inline float_t GetCurrentValueForCapture();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a2fa94, size 0x54, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(float_t newValue);

  /// @brief Method OnEnable, addr 0x2a2f9c8, size 0x94, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x2a2fb54, size 0x78, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr bool const& __cordl_internal_get_m_HasTransformToScale() const;

  constexpr bool& __cordl_internal_get_m_HasTransformToScale();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_InitialScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_InitialScale();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_TransformToScale() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_TransformToScale();

  constexpr void __cordl_internal_set_m_HasTransformToScale(bool value);

  constexpr void __cordl_internal_set_m_InitialScale(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_TransformToScale(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x2a2fbcc, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_transformToScale, addr 0x2a2f948, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_transformToScale();

  /// @brief Method set_transformToScale, addr 0x2a2f950, size 0x78, virtual false, abstract: false, final false
  inline void set_transformToScale(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniformTransformScaleAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniformTransformScaleAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniformTransformScaleAffordanceReceiver(UniformTransformScaleAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniformTransformScaleAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniformTransformScaleAffordanceReceiver(UniformTransformScaleAffordanceReceiver const&) = delete;

  /// @brief Field m_TransformToScale, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_TransformToScale;

  /// @brief Field m_HasTransformToScale, offset: 0xa8, size: 0x1, def value: None
  bool ___m_HasTransformToScale;

  /// @brief Field m_InitialScale, offset: 0xac, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_InitialScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver, ___m_TransformToScale) == 0xa0,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver, ___m_HasTransformToScale) == 0xa8,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver, ___m_InitialScale) == 0xac, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Transformation::UniformTransformScaleAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Transformation", "UniformTransformScaleAffordanceReceiver");
