#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRDualGrabFreeTransformer_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDualGrabFreeTransformer)
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRBaseGrabTransformer__RegistrationMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRDualGrabFreeTransformer__PoseContributor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRGrabInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __XRInteractionUpdateOrder__UpdatePhase;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
struct __XRDualGrabFreeTransformer__PoseContributor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
class XRDualGrabFreeTransformer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer);
// Type: ::PoseContributor
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: true
// CS Name: ::XRDualGrabFreeTransformer::PoseContributor
struct CORDL_TYPE __XRDualGrabFreeTransformer__PoseContributor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XRDualGrabFreeTransformer__PoseContributor_Unwrapped
  enum struct ____XRDualGrabFreeTransformer__PoseContributor_Unwrapped : int32_t {
    __E_First = static_cast<int32_t>(0x0),
    __E_Second = static_cast<int32_t>(0x1),
    __E_Average = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XRDualGrabFreeTransformer__PoseContributor_Unwrapped() const noexcept {
    return static_cast<____XRDualGrabFreeTransformer__PoseContributor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRDualGrabFreeTransformer__PoseContributor();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XRDualGrabFreeTransformer__PoseContributor(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Average value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor const Average;

  /// @brief Field First value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor const First;

  /// @brief Field Second value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor const Second;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
// Type: UnityEngine.XR.Interaction.Toolkit.Transformers::XRDualGrabFreeTransformer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Transformers {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Transformers::XRDualGrabFreeTransformer*
class CORDL_TYPE XRDualGrabFreeTransformer : public ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer {
public:
  // Declarations
  using PoseContributor = ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor;

  /// @brief Field <lastInteractorAttachPose>k__BackingField, offset 0x20, size 0x1c
  __declspec(property(get = __cordl_internal_get__lastInteractorAttachPose_k__BackingField,
                      put = __cordl_internal_set__lastInteractorAttachPose_k__BackingField))::UnityEngine::Pose _lastInteractorAttachPose_k__BackingField;

  __declspec(property(get = get_lastInteractorAttachPose, put = set_lastInteractorAttachPose))::UnityEngine::Pose lastInteractorAttachPose;

  /// @brief Field m_LastUp, offset 0x3c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_LastUp, put = __cordl_internal_set_m_LastUp))::UnityEngine::Vector3 m_LastUp;

  /// @brief Field m_MultiSelectPosition, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MultiSelectPosition,
                      put = __cordl_internal_set_m_MultiSelectPosition))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor m_MultiSelectPosition;

  /// @brief Field m_MultiSelectRotation, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MultiSelectRotation,
                      put = __cordl_internal_set_m_MultiSelectRotation))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor m_MultiSelectRotation;

  __declspec(property(get = get_multiSelectPosition,
                      put = set_multiSelectPosition))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor multiSelectPosition;

  __declspec(property(get = get_multiSelectRotation,
                      put = set_multiSelectRotation))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor multiSelectRotation;

  __declspec(property(get = get_registrationMode))::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode registrationMode;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer* New_ctor();

  /// @brief Method OnDrawGizmosSelected, addr 0x2feb008, size 0x4, virtual true, abstract: false, final false
  inline void OnDrawGizmosSelected();

  /// @brief Method OnGrabCountChanged, addr 0x2feb00c, size 0x80, virtual true, abstract: false, final false
  inline void OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::Pose targetPose, ::UnityEngine::Vector3 localScale);

  /// @brief Method Process, addr 0x2feb08c, size 0x18, virtual true, abstract: false, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ::UnityEngine::XR::Interaction::Toolkit::__XRInteractionUpdateOrder__UpdatePhase updatePhase,
                      ByRef<::UnityEngine::Pose> targetPose, ByRef<::UnityEngine::Vector3> localScale);

  /// @brief Method UpdateTarget, addr 0x2feb0a4, size 0x90, virtual false, abstract: false, final false
  inline void UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ByRef<::UnityEngine::Pose> targetPose);

  /// @brief Method UpdateTargetMulti, addr 0x2feb478, size 0x844, virtual false, abstract: false, final false
  inline void UpdateTargetMulti(::UnityEngine::XR::Interaction::Toolkit::XRGrabInteractable* grabInteractable, ByRef<::UnityEngine::Pose> targetPose);

  constexpr ::UnityEngine::Pose const& __cordl_internal_get__lastInteractorAttachPose_k__BackingField() const;

  constexpr ::UnityEngine::Pose& __cordl_internal_get__lastInteractorAttachPose_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastUp() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastUp();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor const& __cordl_internal_get_m_MultiSelectPosition() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor& __cordl_internal_get_m_MultiSelectPosition();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor const& __cordl_internal_get_m_MultiSelectRotation() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor& __cordl_internal_get_m_MultiSelectRotation();

  constexpr void __cordl_internal_set__lastInteractorAttachPose_k__BackingField(::UnityEngine::Pose value);

  constexpr void __cordl_internal_set_m_LastUp(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_MultiSelectPosition(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor value);

  constexpr void __cordl_internal_set_m_MultiSelectRotation(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor value);

  /// @brief Method .ctor, addr 0x2febcbc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lastInteractorAttachPose, addr 0x2feafd8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose get_lastInteractorAttachPose();

  /// @brief Method get_multiSelectPosition, addr 0x2feafb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor get_multiSelectPosition();

  /// @brief Method get_multiSelectRotation, addr 0x2feafc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor get_multiSelectRotation();

  /// @brief Method get_registrationMode, addr 0x2feafd0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRBaseGrabTransformer__RegistrationMode get_registrationMode();

  /// @brief Method set_lastInteractorAttachPose, addr 0x2feafec, size 0x1c, virtual false, abstract: false, final false
  inline void set_lastInteractorAttachPose(::UnityEngine::Pose value);

  /// @brief Method set_multiSelectPosition, addr 0x2feafb8, size 0x8, virtual false, abstract: false, final false
  inline void set_multiSelectPosition(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor value);

  /// @brief Method set_multiSelectRotation, addr 0x2feafc8, size 0x8, virtual false, abstract: false, final false
  inline void set_multiSelectRotation(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDualGrabFreeTransformer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDualGrabFreeTransformer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDualGrabFreeTransformer(XRDualGrabFreeTransformer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDualGrabFreeTransformer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDualGrabFreeTransformer(XRDualGrabFreeTransformer const&) = delete;

  /// @brief Field m_MultiSelectPosition, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor ___m_MultiSelectPosition;

  /// @brief Field m_MultiSelectRotation, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor ___m_MultiSelectRotation;

  /// @brief Field <lastInteractorAttachPose>k__BackingField, offset: 0x20, size: 0x1c, def value: None
  ::UnityEngine::Pose ____lastInteractorAttachPose_k__BackingField;

  /// @brief Field m_LastUp, offset: 0x3c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_LastUp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ___m_MultiSelectPosition) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ___m_MultiSelectRotation) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ____lastInteractorAttachPose_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer, ___m_LastUp) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Transformers
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::__XRDualGrabFreeTransformer__PoseContributor, "UnityEngine.XR.Interaction.Toolkit.Transformers",
                       "XRDualGrabFreeTransformer/PoseContributor");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Transformers::XRDualGrabFreeTransformer*, "UnityEngine.XR.Interaction.Toolkit.Transformers", "XRDualGrabFreeTransformer");
