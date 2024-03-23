#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PushButtonDriver)
namespace UnityEngine::XR::Interaction::Toolkit {
class BaseInteractionEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseInteractable;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class PushButtonDriver;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PushButtonDriver);
// Type: ::PushButtonDriver
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 115, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PushButtonDriver*
class CORDL_TYPE PushButtonDriver : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field buttonMeshRenderer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buttonMeshRenderer, put = __cordl_internal_set_buttonMeshRenderer))::UnityW<::UnityEngine::MeshRenderer> buttonMeshRenderer;

  /// @brief Field defaultMat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultMat, put = setStaticF_defaultMat))::UnityW<::UnityEngine::Material> defaultMat;

  /// @brief Field disabledColor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_disabledColor, put = setStaticF_disabledColor))::UnityEngine::Color disabledColor;

  /// @brief Field disabledMat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_disabledMat, put = setStaticF_disabledMat))::UnityW<::UnityEngine::Material> disabledMat;

  /// @brief Field interactable, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_interactable, put = __cordl_internal_set_interactable))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> interactable;

  /// @brief Field isFollowing, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_isFollowing, put = __cordl_internal_set_isFollowing)) bool isFollowing;

  /// @brief Field isForcePushed, offset 0x72, size 0x1
  __declspec(property(get = __cordl_internal_get_isForcePushed, put = __cordl_internal_set_isForcePushed)) bool isForcePushed;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Field isInteractable, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_isInteractable, put = __cordl_internal_set_isInteractable)) bool isInteractable;

  /// @brief Field localAxis, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_localAxis, put = __cordl_internal_set_localAxis))::UnityEngine::Vector3 localAxis;

  /// @brief Field maxPushDistance, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_maxPushDistance, put = __cordl_internal_set_maxPushDistance)) float_t maxPushDistance;

  /// @brief Field pokeAttachInitialLocalPosition, offset 0x58, size 0xc
  __declspec(property(get = __cordl_internal_get_pokeAttachInitialLocalPosition, put = __cordl_internal_set_pokeAttachInitialLocalPosition))::UnityEngine::Vector3 pokeAttachInitialLocalPosition;

  /// @brief Field pokeAttachTransform, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_pokeAttachTransform, put = __cordl_internal_set_pokeAttachTransform))::UnityW<::UnityEngine::Transform> pokeAttachTransform;

  /// @brief Field referenceTransform, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_referenceTransform, put = __cordl_internal_set_referenceTransform))::UnityW<::UnityEngine::Transform> referenceTransform;

  /// @brief Field visualTarget, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_visualTarget, put = __cordl_internal_set_visualTarget))::UnityW<::UnityEngine::Transform> visualTarget;

  /// @brief Field visualTargetInitialLocalPosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_visualTargetInitialLocalPosition, put = __cordl_internal_set_visualTargetInitialLocalPosition))::UnityEngine::Vector3 visualTargetInitialLocalPosition;

  /// @brief Method Follow, addr 0x29d69c0, size 0x22c, virtual false, abstract: false, final false
  inline void Follow(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs* hover);

  /// @brief Method Initialize, addr 0x29d6864, size 0x15c, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::PushButtonDriver* New_ctor();

  /// @brief Method RefreshPosition, addr 0x29d70c8, size 0x60, virtual false, abstract: false, final false
  inline void RefreshPosition();

  /// @brief Method Reset, addr 0x29d6bec, size 0xb4, virtual false, abstract: false, final false
  inline void Reset(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs* hover);

  /// @brief Method SetForcePushed, addr 0x29d7128, size 0x40, virtual false, abstract: false, final false
  inline void SetForcePushed(bool newForcePushed);

  /// @brief Method SetInteractableVisuals, addr 0x29d6eac, size 0x21c, virtual false, abstract: false, final false
  inline void SetInteractableVisuals(bool newInteractable);

  /// @brief Method Start, addr 0x29d6840, size 0x24, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x29d6ca0, size 0x20c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_buttonMeshRenderer() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_buttonMeshRenderer();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> const& __cordl_internal_get_interactable() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable>& __cordl_internal_get_interactable();

  constexpr bool const& __cordl_internal_get_isFollowing() const;

  constexpr bool& __cordl_internal_get_isFollowing();

  constexpr bool const& __cordl_internal_get_isForcePushed() const;

  constexpr bool& __cordl_internal_get_isForcePushed();

  constexpr bool const& __cordl_internal_get_isInteractable() const;

  constexpr bool& __cordl_internal_get_isInteractable();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localAxis() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_localAxis();

  constexpr float_t const& __cordl_internal_get_maxPushDistance() const;

  constexpr float_t& __cordl_internal_get_maxPushDistance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pokeAttachInitialLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_pokeAttachInitialLocalPosition();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_pokeAttachTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_pokeAttachTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_referenceTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_referenceTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_visualTarget() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_visualTarget();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_visualTargetInitialLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_visualTargetInitialLocalPosition();

  constexpr void __cordl_internal_set_buttonMeshRenderer(::UnityW<::UnityEngine::MeshRenderer> value);

  constexpr void __cordl_internal_set_interactable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> value);

  constexpr void __cordl_internal_set_isFollowing(bool value);

  constexpr void __cordl_internal_set_isForcePushed(bool value);

  constexpr void __cordl_internal_set_isInteractable(bool value);

  constexpr void __cordl_internal_set_localAxis(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_maxPushDistance(float_t value);

  constexpr void __cordl_internal_set_pokeAttachInitialLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_pokeAttachTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_visualTarget(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_visualTargetInitialLocalPosition(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x29d7168, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_defaultMat();

  static inline ::UnityEngine::Color getStaticF_disabledColor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_disabledMat();

  /// @brief Method get_isInitialized, addr 0x29d67e0, size 0x60, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  static inline void setStaticF_defaultMat(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_disabledColor(::UnityEngine::Color value);

  static inline void setStaticF_disabledMat(::UnityW<::UnityEngine::Material> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PushButtonDriver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PushButtonDriver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PushButtonDriver(PushButtonDriver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PushButtonDriver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PushButtonDriver(PushButtonDriver const&) = delete;

  /// @brief Field referenceTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___referenceTransform;

  /// @brief Field visualTarget, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___visualTarget;

  /// @brief Field localAxis, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___localAxis;

  /// @brief Field maxPushDistance, offset: 0x34, size: 0x4, def value: None
  float_t ___maxPushDistance;

  /// @brief Field buttonMeshRenderer, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___buttonMeshRenderer;

  /// @brief Field visualTargetInitialLocalPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___visualTargetInitialLocalPosition;

  /// @brief Field pokeAttachTransform, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___pokeAttachTransform;

  /// @brief Field pokeAttachInitialLocalPosition, offset: 0x58, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___pokeAttachInitialLocalPosition;

  /// @brief Field interactable, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseInteractable> ___interactable;

  /// @brief Field isFollowing, offset: 0x70, size: 0x1, def value: None
  bool ___isFollowing;

  /// @brief Field isInteractable, offset: 0x71, size: 0x1, def value: None
  bool ___isInteractable;

  /// @brief Field isForcePushed, offset: 0x72, size: 0x1, def value: None
  bool ___isForcePushed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PushButtonDriver, 0x78>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___referenceTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___visualTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___localAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___maxPushDistance) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___buttonMeshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___visualTargetInitialLocalPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___pokeAttachTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___pokeAttachInitialLocalPosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___interactable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___isFollowing) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___isInteractable) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PushButtonDriver, ___isForcePushed) == 0x72, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PushButtonDriver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PushButtonDriver*, "", "PushButtonDriver");
