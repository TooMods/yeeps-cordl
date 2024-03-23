#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRAngleGazeEvaluator)
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRAngleGazeEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRAngleGazeEvaluator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRAngleGazeEvaluator*
class CORDL_TYPE XRAngleGazeEvaluator : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator {
public:
  // Declarations
  __declspec(property(get = get_gazeTransform, put = set_gazeTransform))::UnityW<::UnityEngine::Transform> gazeTransform;

  /// @brief Field m_GazeTransform, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GazeTransform, put = __cordl_internal_set_m_GazeTransform))::UnityW<::UnityEngine::Transform> m_GazeTransform;

  /// @brief Field m_MaxAngle, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxAngle, put = __cordl_internal_set_m_MaxAngle)) float_t m_MaxAngle;

  __declspec(property(get = get_maxAngle, put = set_maxAngle)) float_t maxAngle;

  /// @brief Field s_XROriginInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_XROriginInstance, put = setStaticF_s_XROriginInstance))::UnityW<::Unity::XR::CoreUtils::XROrigin> s_XROriginInstance;

  /// @brief Method CalculateNormalizedScore, addr 0x2ff1900, size 0x304, virtual true, abstract: false, final false
  inline float_t CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* target);

  /// @brief Method GetXROriginCamera, addr 0x2ff1648, size 0xf4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Camera> GetXROriginCamera();

  /// @brief Method InitializeGazeTransform, addr 0x2ff1774, size 0x108, virtual false, abstract: false, final false
  inline void InitializeGazeTransform();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator* New_ctor();

  /// @brief Method OnEnable, addr 0x2ff187c, size 0x78, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Reset, addr 0x2ff18f8, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_GazeTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_GazeTransform();

  constexpr float_t const& __cordl_internal_get_m_MaxAngle() const;

  constexpr float_t& __cordl_internal_get_m_MaxAngle();

  constexpr void __cordl_internal_set_m_GazeTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_MaxAngle(float_t value);

  /// @brief Method .ctor, addr 0x2ff1c04, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> getStaticF_s_XROriginInstance();

  /// @brief Method get_gazeTransform, addr 0x2ff173c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_gazeTransform();

  /// @brief Method get_maxAngle, addr 0x2ff174c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxAngle();

  static inline void setStaticF_s_XROriginInstance(::UnityW<::Unity::XR::CoreUtils::XROrigin> value);

  /// @brief Method set_gazeTransform, addr 0x2ff1744, size 0x8, virtual false, abstract: false, final false
  inline void set_gazeTransform(::UnityEngine::Transform* value);

  /// @brief Method set_maxAngle, addr 0x2ff1754, size 0x20, virtual false, abstract: false, final false
  inline void set_maxAngle(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRAngleGazeEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRAngleGazeEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRAngleGazeEvaluator(XRAngleGazeEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRAngleGazeEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRAngleGazeEvaluator(XRAngleGazeEvaluator const&) = delete;

  /// @brief Field m_GazeTransform, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_GazeTransform;

  /// @brief Field m_MaxAngle, offset: 0x38, size: 0x4, def value: None
  float_t ___m_MaxAngle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator, ___m_GazeTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator, ___m_MaxAngle) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRAngleGazeEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRAngleGazeEvaluator");
