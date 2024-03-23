#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRGazeInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRRayInteractor_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRGazeInteractor)
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractableSnapVolume;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRGazeInteractor__GazeAssistanceCalculation;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRGazeInteractor__GazeAssistanceCalculation;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRGazeInteractor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor);
// Type: ::GazeAssistanceCalculation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::XRGazeInteractor::GazeAssistanceCalculation
struct CORDL_TYPE __XRGazeInteractor__GazeAssistanceCalculation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRGazeInteractor__GazeAssistanceCalculation_Unwrapped
  enum struct ____XRGazeInteractor__GazeAssistanceCalculation_Unwrapped : int32_t {
    __E_FixedSize = static_cast<int32_t>(0x0),
    __E_ColliderSize = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRGazeInteractor__GazeAssistanceCalculation_Unwrapped() const noexcept {
    return static_cast<____XRGazeInteractor__GazeAssistanceCalculation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRGazeInteractor__GazeAssistanceCalculation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRGazeInteractor__GazeAssistanceCalculation(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ColliderSize value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation const ColliderSize;

  /// @brief Field FixedSize value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation const FixedSize;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::XRGazeInteractor
// SizeInfo { instance_size: 912, native_size: -1, calculated_instance_size: 912, calculated_native_size: 912, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRGazeInteractor*
class CORDL_TYPE XRGazeInteractor : public ::UnityEngine::XR::Interaction::Toolkit::XRRayInteractor {
public:
  // Declarations
  using GazeAssistanceCalculation = ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation;

  __declspec(property(get = get_clampGazeAssistanceDistanceScaling, put = set_clampGazeAssistanceDistanceScaling)) bool clampGazeAssistanceDistanceScaling;

  __declspec(property(get = get_gazeAssistanceCalculation,
                      put = set_gazeAssistanceCalculation))::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation gazeAssistanceCalculation;

  __declspec(property(get = get_gazeAssistanceColliderFixedSize, put = set_gazeAssistanceColliderFixedSize)) float_t gazeAssistanceColliderFixedSize;

  __declspec(property(get = get_gazeAssistanceColliderScale, put = set_gazeAssistanceColliderScale)) float_t gazeAssistanceColliderScale;

  __declspec(property(get = get_gazeAssistanceDistanceScaling, put = set_gazeAssistanceDistanceScaling)) bool gazeAssistanceDistanceScaling;

  __declspec(property(get = get_gazeAssistanceDistanceScalingClampValue, put = set_gazeAssistanceDistanceScalingClampValue)) float_t gazeAssistanceDistanceScalingClampValue;

  __declspec(property(get = get_gazeAssistanceSnapVolume, put = set_gazeAssistanceSnapVolume))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> gazeAssistanceSnapVolume;

  /// @brief Field m_ClampGazeAssistanceDistanceScaling, offset 0x389, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClampGazeAssistanceDistanceScaling, put = __cordl_internal_set_m_ClampGazeAssistanceDistanceScaling)) bool m_ClampGazeAssistanceDistanceScaling;

  /// @brief Field m_GazeAssistanceCalculation, offset 0x370, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GazeAssistanceCalculation,
                      put = __cordl_internal_set_m_GazeAssistanceCalculation))::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation m_GazeAssistanceCalculation;

  /// @brief Field m_GazeAssistanceColliderFixedSize, offset 0x374, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GazeAssistanceColliderFixedSize, put = __cordl_internal_set_m_GazeAssistanceColliderFixedSize)) float_t m_GazeAssistanceColliderFixedSize;

  /// @brief Field m_GazeAssistanceColliderScale, offset 0x378, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GazeAssistanceColliderScale, put = __cordl_internal_set_m_GazeAssistanceColliderScale)) float_t m_GazeAssistanceColliderScale;

  /// @brief Field m_GazeAssistanceDistanceScaling, offset 0x388, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GazeAssistanceDistanceScaling, put = __cordl_internal_set_m_GazeAssistanceDistanceScaling)) bool m_GazeAssistanceDistanceScaling;

  /// @brief Field m_GazeAssistanceDistanceScalingClampValue, offset 0x38c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue,
                      put = __cordl_internal_set_m_GazeAssistanceDistanceScalingClampValue)) float_t m_GazeAssistanceDistanceScalingClampValue;

  /// @brief Field m_GazeAssistanceSnapVolume, offset 0x380, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GazeAssistanceSnapVolume,
                      put = __cordl_internal_set_m_GazeAssistanceSnapVolume))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> m_GazeAssistanceSnapVolume;

  /// @brief Method Awake, addr 0x2cef524, size 0x18, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateSnapColliderSize, addr 0x2cf02a4, size 0xe0, virtual false, abstract: false, final false
  inline float_t CalculateSnapColliderSize(::UnityEngine::Collider* interactableCollider);

  /// @brief Method CanInteract, addr 0x2cefaa4, size 0xdc, virtual false, abstract: false, final false
  inline bool CanInteract(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method CreateGazeAssistanceSnapVolume, addr 0x2cef5e8, size 0x210, virtual false, abstract: false, final false
  inline void CreateGazeAssistanceSnapVolume();

  /// @brief Method GetHoverTimeToSelect, addr 0x2cf0384, size 0x128, virtual true, abstract: false, final false
  inline float_t GetHoverTimeToSelect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  /// @brief Method GetTimeToAutoDeselect, addr 0x2cf04ac, size 0x12c, virtual true, abstract: false, final false
  inline float_t GetTimeToAutoDeselect(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor* New_ctor();

  /// @brief Method PreprocessInteractor, addr 0x2cef7f8, size 0x60, virtual true, abstract: false, final false
  inline void PreprocessInteractor(::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase);

  /// @brief Method UpdateSnapVolumeInteractable, addr 0x2cefb80, size 0x468, virtual true, abstract: false, final false
  inline void UpdateSnapVolumeInteractable(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* interactable);

  constexpr bool const& __cordl_internal_get_m_ClampGazeAssistanceDistanceScaling() const;

  constexpr bool& __cordl_internal_get_m_ClampGazeAssistanceDistanceScaling();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation const& __cordl_internal_get_m_GazeAssistanceCalculation() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation& __cordl_internal_get_m_GazeAssistanceCalculation();

  constexpr float_t const& __cordl_internal_get_m_GazeAssistanceColliderFixedSize() const;

  constexpr float_t& __cordl_internal_get_m_GazeAssistanceColliderFixedSize();

  constexpr float_t const& __cordl_internal_get_m_GazeAssistanceColliderScale() const;

  constexpr float_t& __cordl_internal_get_m_GazeAssistanceColliderScale();

  constexpr bool const& __cordl_internal_get_m_GazeAssistanceDistanceScaling() const;

  constexpr bool& __cordl_internal_get_m_GazeAssistanceDistanceScaling();

  constexpr float_t const& __cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue() const;

  constexpr float_t& __cordl_internal_get_m_GazeAssistanceDistanceScalingClampValue();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> const& __cordl_internal_get_m_GazeAssistanceSnapVolume() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume>& __cordl_internal_get_m_GazeAssistanceSnapVolume();

  constexpr void __cordl_internal_set_m_ClampGazeAssistanceDistanceScaling(bool value);

  constexpr void __cordl_internal_set_m_GazeAssistanceCalculation(::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation value);

  constexpr void __cordl_internal_set_m_GazeAssistanceColliderFixedSize(float_t value);

  constexpr void __cordl_internal_set_m_GazeAssistanceColliderScale(float_t value);

  constexpr void __cordl_internal_set_m_GazeAssistanceDistanceScaling(bool value);

  constexpr void __cordl_internal_set_m_GazeAssistanceDistanceScalingClampValue(float_t value);

  constexpr void __cordl_internal_set_m_GazeAssistanceSnapVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> value);

  /// @brief Method .ctor, addr 0x2cf05d8, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_clampGazeAssistanceDistanceScaling, addr 0x2cef500, size 0x8, virtual false, abstract: false, final false
  inline bool get_clampGazeAssistanceDistanceScaling();

  /// @brief Method get_gazeAssistanceCalculation, addr 0x2cef4ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation get_gazeAssistanceCalculation();

  /// @brief Method get_gazeAssistanceColliderFixedSize, addr 0x2cef4bc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_gazeAssistanceColliderFixedSize();

  /// @brief Method get_gazeAssistanceColliderScale, addr 0x2cef4cc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_gazeAssistanceColliderScale();

  /// @brief Method get_gazeAssistanceDistanceScaling, addr 0x2cef4ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_gazeAssistanceDistanceScaling();

  /// @brief Method get_gazeAssistanceDistanceScalingClampValue, addr 0x2cef514, size 0x8, virtual false, abstract: false, final false
  inline float_t get_gazeAssistanceDistanceScalingClampValue();

  /// @brief Method get_gazeAssistanceSnapVolume, addr 0x2cef4dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> get_gazeAssistanceSnapVolume();

  /// @brief Method set_clampGazeAssistanceDistanceScaling, addr 0x2cef508, size 0xc, virtual false, abstract: false, final false
  inline void set_clampGazeAssistanceDistanceScaling(bool value);

  /// @brief Method set_gazeAssistanceCalculation, addr 0x2cef4b4, size 0x8, virtual false, abstract: false, final false
  inline void set_gazeAssistanceCalculation(::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation value);

  /// @brief Method set_gazeAssistanceColliderFixedSize, addr 0x2cef4c4, size 0x8, virtual false, abstract: false, final false
  inline void set_gazeAssistanceColliderFixedSize(float_t value);

  /// @brief Method set_gazeAssistanceColliderScale, addr 0x2cef4d4, size 0x8, virtual false, abstract: false, final false
  inline void set_gazeAssistanceColliderScale(float_t value);

  /// @brief Method set_gazeAssistanceDistanceScaling, addr 0x2cef4f4, size 0xc, virtual false, abstract: false, final false
  inline void set_gazeAssistanceDistanceScaling(bool value);

  /// @brief Method set_gazeAssistanceDistanceScalingClampValue, addr 0x2cef51c, size 0x8, virtual false, abstract: false, final false
  inline void set_gazeAssistanceDistanceScalingClampValue(float_t value);

  /// @brief Method set_gazeAssistanceSnapVolume, addr 0x2cef4e4, size 0x8, virtual false, abstract: false, final false
  inline void set_gazeAssistanceSnapVolume(::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRGazeInteractor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRGazeInteractor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRGazeInteractor(XRGazeInteractor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRGazeInteractor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRGazeInteractor(XRGazeInteractor const&) = delete;

  /// @brief Field m_GazeAssistanceCalculation, offset: 0x370, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation ___m_GazeAssistanceCalculation;

  /// @brief Field m_GazeAssistanceColliderFixedSize, offset: 0x374, size: 0x4, def value: None
  float_t ___m_GazeAssistanceColliderFixedSize;

  /// @brief Field m_GazeAssistanceColliderScale, offset: 0x378, size: 0x4, def value: None
  float_t ___m_GazeAssistanceColliderScale;

  /// @brief Field m_GazeAssistanceSnapVolume, offset: 0x380, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractableSnapVolume> ___m_GazeAssistanceSnapVolume;

  /// @brief Field m_GazeAssistanceDistanceScaling, offset: 0x388, size: 0x1, def value: None
  bool ___m_GazeAssistanceDistanceScaling;

  /// @brief Field m_ClampGazeAssistanceDistanceScaling, offset: 0x389, size: 0x1, def value: None
  bool ___m_ClampGazeAssistanceDistanceScaling;

  /// @brief Field m_GazeAssistanceDistanceScalingClampValue, offset: 0x38c, size: 0x4, def value: None
  float_t ___m_GazeAssistanceDistanceScalingClampValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, 0x390>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, ___m_GazeAssistanceCalculation) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, ___m_GazeAssistanceColliderFixedSize) == 0x374, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, ___m_GazeAssistanceColliderScale) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, ___m_GazeAssistanceSnapVolume) == 0x380, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, ___m_GazeAssistanceDistanceScaling) == 0x388, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, ___m_ClampGazeAssistanceDistanceScaling) == 0x389, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor, ___m_GazeAssistanceDistanceScalingClampValue) == 0x38c, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__XRGazeInteractor__GazeAssistanceCalculation, "UnityEngine.XR.Interaction.Toolkit", "XRGazeInteractor/GazeAssistanceCalculation");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRGazeInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRGazeInteractor");
