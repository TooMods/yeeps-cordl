#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MobileTravelAnchor_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MobileTravelAnchor)
namespace GlobalNamespace {
class Player;
}
namespace GlobalNamespace {
struct __MobileTravelAnchor__AnchorRotationMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MobileTravelAnchor__AnchorRotationMode;
}
namespace GlobalNamespace {
class MobileTravelAnchor;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode);
MARK_REF_PTR_T(::GlobalNamespace::MobileTravelAnchor);
// Type: ::AnchorRotationMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::MobileTravelAnchor::AnchorRotationMode
struct CORDL_TYPE __MobileTravelAnchor__AnchorRotationMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MobileTravelAnchor__AnchorRotationMode_Unwrapped
  enum struct ____MobileTravelAnchor__AnchorRotationMode_Unwrapped : int32_t {
    __E_dontChange = static_cast<int32_t>(0x0),
    __E_matchCameraForward = static_cast<int32_t>(0x1),
    __E_passThrough = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MobileTravelAnchor__AnchorRotationMode_Unwrapped() const noexcept {
    return static_cast<____MobileTravelAnchor__AnchorRotationMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MobileTravelAnchor__AnchorRotationMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MobileTravelAnchor__AnchorRotationMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field dontChange value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode const dontChange;

  /// @brief Field matchCameraForward value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode const matchCameraForward;

  /// @brief Field passThrough value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode const passThrough;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MobileTravelAnchor
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MobileTravelAnchor*
class CORDL_TYPE MobileTravelAnchor : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnchorRotationMode = ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode;

  /// @brief Field activeAnchors, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_activeAnchors, put = setStaticF_activeAnchors))::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* activeAnchors;

  /// @brief Field anchorsToSetVisibility, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get_anchorsToSetVisibility,
      put = __cordl_internal_set_anchorsToSetVisibility))::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> anchorsToSetVisibility;

  /// @brief Field appearsWhenFarOnly, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_appearsWhenFarOnly, put = __cordl_internal_set_appearsWhenFarOnly)) bool appearsWhenFarOnly;

  /// @brief Field forceCurrencyFocus, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_forceCurrencyFocus, put = __cordl_internal_set_forceCurrencyFocus)) bool forceCurrencyFocus;

  /// @brief Field isCameraLinked, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get_isCameraLinked, put = __cordl_internal_set_isCameraLinked)) bool isCameraLinked;

  /// @brief Field isExternalVisible, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_isExternalVisible, put = __cordl_internal_set_isExternalVisible)) bool isExternalVisible;

  /// @brief Field isInternalVisible, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_isInternalVisible, put = __cordl_internal_set_isInternalVisible)) bool isInternalVisible;

  /// @brief Field isRegistered, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegistered, put = __cordl_internal_set_isRegistered)) bool isRegistered;

  /// @brief Field isRegisteredForPlayerCreated, offset 0x3e, size 0x1
  __declspec(property(get = __cordl_internal_get_isRegisteredForPlayerCreated, put = __cordl_internal_set_isRegisteredForPlayerCreated)) bool isRegisteredForPlayerCreated;

  /// @brief Field isVisible, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_isVisible, put = __cordl_internal_set_isVisible)) bool isVisible;

  /// @brief Field masterPlayer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_masterPlayer, put = __cordl_internal_set_masterPlayer))::UnityW<::GlobalNamespace::Player> masterPlayer;

  /// @brief Field overrideDistanceHideCheckAndBeHidden, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideDistanceHideCheckAndBeHidden, put = __cordl_internal_set_overrideDistanceHideCheckAndBeHidden)) bool overrideDistanceHideCheckAndBeHidden;

  /// @brief Field passThroughLocalDirection, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_passThroughLocalDirection, put = __cordl_internal_set_passThroughLocalDirection))::UnityEngine::Vector3 passThroughLocalDirection;

  /// @brief Field rotationMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationMode, put = __cordl_internal_set_rotationMode))::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode rotationMode;

  /// @brief Field scaleContainer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_scaleContainer, put = __cordl_internal_set_scaleContainer))::UnityW<::UnityEngine::Transform> scaleContainer;

  /// @brief Field sphereCollider, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_sphereCollider, put = __cordl_internal_set_sphereCollider))::UnityW<::UnityEngine::SphereCollider> sphereCollider;

  /// @brief Method AddAnchorToSetVisible, addr 0x2e020c4, size 0x194, virtual false, abstract: false, final false
  inline void AddAnchorToSetVisible(::GlobalNamespace::MobileTravelAnchor* anchor);

  /// @brief Method AddAnchorsToSetVisible, addr 0x2e02268, size 0x2f4, virtual false, abstract: false, final false
  inline void AddAnchorsToSetVisible(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* anchors);

  /// @brief Method DeregisterAnchor, addr 0x2e02c9c, size 0x80, virtual false, abstract: false, final false
  static inline void DeregisterAnchor(::GlobalNamespace::MobileTravelAnchor* anchor);

  /// @brief Method GetMagnitizingAnchor, addr 0x2e036f8, size 0x204, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::MobileTravelAnchor> GetMagnitizingAnchor(::UnityEngine::Vector3 position);

  /// @brief Method GetTargetPosition, addr 0x2e035c4, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetTargetPosition(::UnityEngine::Vector3 playerPosition);

  /// @brief Method GetTargetRotation, addr 0x2e03434, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetTargetRotation(::UnityEngine::Vector3 playerPosition);

  static inline ::GlobalNamespace::MobileTravelAnchor* New_ctor();

  /// @brief Method OnDisable, addr 0x2e03138, size 0xec, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2e02d1c, size 0x224, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnIsCameraLinkedUpdated, addr 0x2e03254, size 0x34, virtual false, abstract: false, final false
  inline void OnIsCameraLinkedUpdated(bool newIsCameraLinked);

  /// @brief Method OnMasterPlayerCreated, addr 0x2e02b9c, size 0x100, virtual false, abstract: false, final false
  inline void OnMasterPlayerCreated(::GlobalNamespace::Player* newMasterPlayer);

  /// @brief Method RefreshDistanceBasedState, addr 0x2e02f68, size 0x1d0, virtual false, abstract: false, final false
  inline void RefreshDistanceBasedState(bool forceUpdate);

  /// @brief Method RefreshIsVisible, addr 0x2e02f40, size 0x28, virtual false, abstract: false, final false
  inline void RefreshIsVisible(bool doRegisterUpdate);

  /// @brief Method RefreshRegisterState, addr 0x2e027f0, size 0x2b0, virtual false, abstract: false, final false
  inline void RefreshRegisterState(bool didStateChange, bool newState);

  /// @brief Method RegisterAnchor, addr 0x2e02aa0, size 0xfc, virtual false, abstract: false, final false
  static inline void RegisterAnchor(::GlobalNamespace::MobileTravelAnchor* anchor);

  /// @brief Method RemoveAnchorToSetVisible, addr 0x2e0255c, size 0xc8, virtual false, abstract: false, final false
  inline void RemoveAnchorToSetVisible(::GlobalNamespace::MobileTravelAnchor* anchor);

  /// @brief Method RemoveAnchorsToSetVisible, addr 0x2e02624, size 0x1cc, virtual false, abstract: false, final false
  inline void RemoveAnchorsToSetVisible(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* anchors);

  /// @brief Method SetExternalVisible, addr 0x2e03224, size 0x30, virtual false, abstract: false, final false
  inline void SetExternalVisible(bool newExternalVisible);

  /// @brief Method SetInternalVisible, addr 0x2e02258, size 0x10, virtual false, abstract: false, final false
  inline void SetInternalVisible(bool newInternalVisible);

  /// @brief Method SetOverrideDistanceHideCheckAndBeHidden, addr 0x2e020b8, size 0xc, virtual false, abstract: false, final false
  inline void SetOverrideDistanceHideCheckAndBeHidden(bool newOverrideDistanceHideCheckAndBeHidden);

  /// @brief Method SetVisible, addr 0x2e03288, size 0x130, virtual false, abstract: false, final false
  inline void SetVisible(bool newVisible, bool doRegisterUpdate);

  /// @brief Method Update, addr 0x2e033b8, size 0x7c, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> const& __cordl_internal_get_anchorsToSetVisibility() const;

  constexpr ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*>& __cordl_internal_get_anchorsToSetVisibility();

  constexpr bool const& __cordl_internal_get_appearsWhenFarOnly() const;

  constexpr bool& __cordl_internal_get_appearsWhenFarOnly();

  constexpr bool const& __cordl_internal_get_forceCurrencyFocus() const;

  constexpr bool& __cordl_internal_get_forceCurrencyFocus();

  constexpr bool const& __cordl_internal_get_isCameraLinked() const;

  constexpr bool& __cordl_internal_get_isCameraLinked();

  constexpr bool const& __cordl_internal_get_isExternalVisible() const;

  constexpr bool& __cordl_internal_get_isExternalVisible();

  constexpr bool const& __cordl_internal_get_isInternalVisible() const;

  constexpr bool& __cordl_internal_get_isInternalVisible();

  constexpr bool const& __cordl_internal_get_isRegistered() const;

  constexpr bool& __cordl_internal_get_isRegistered();

  constexpr bool const& __cordl_internal_get_isRegisteredForPlayerCreated() const;

  constexpr bool& __cordl_internal_get_isRegisteredForPlayerCreated();

  constexpr bool const& __cordl_internal_get_isVisible() const;

  constexpr bool& __cordl_internal_get_isVisible();

  constexpr ::UnityW<::GlobalNamespace::Player> const& __cordl_internal_get_masterPlayer() const;

  constexpr ::UnityW<::GlobalNamespace::Player>& __cordl_internal_get_masterPlayer();

  constexpr bool const& __cordl_internal_get_overrideDistanceHideCheckAndBeHidden() const;

  constexpr bool& __cordl_internal_get_overrideDistanceHideCheckAndBeHidden();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_passThroughLocalDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_passThroughLocalDirection();

  constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode const& __cordl_internal_get_rotationMode() const;

  constexpr ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode& __cordl_internal_get_rotationMode();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_scaleContainer() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_scaleContainer();

  constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_sphereCollider() const;

  constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_sphereCollider();

  constexpr void __cordl_internal_set_anchorsToSetVisibility(::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> value);

  constexpr void __cordl_internal_set_appearsWhenFarOnly(bool value);

  constexpr void __cordl_internal_set_forceCurrencyFocus(bool value);

  constexpr void __cordl_internal_set_isCameraLinked(bool value);

  constexpr void __cordl_internal_set_isExternalVisible(bool value);

  constexpr void __cordl_internal_set_isInternalVisible(bool value);

  constexpr void __cordl_internal_set_isRegistered(bool value);

  constexpr void __cordl_internal_set_isRegisteredForPlayerCreated(bool value);

  constexpr void __cordl_internal_set_isVisible(bool value);

  constexpr void __cordl_internal_set_masterPlayer(::UnityW<::GlobalNamespace::Player> value);

  constexpr void __cordl_internal_set_overrideDistanceHideCheckAndBeHidden(bool value);

  constexpr void __cordl_internal_set_passThroughLocalDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rotationMode(::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode value);

  constexpr void __cordl_internal_set_scaleContainer(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_sphereCollider(::UnityW<::UnityEngine::SphereCollider> value);

  /// @brief Method .ctor, addr 0x2e038fc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* getStaticF_activeAnchors();

  static inline void setStaticF_activeAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MobileTravelAnchor>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MobileTravelAnchor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MobileTravelAnchor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MobileTravelAnchor(MobileTravelAnchor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MobileTravelAnchor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MobileTravelAnchor(MobileTravelAnchor const&) = delete;

  /// @brief Field rotationMode, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode ___rotationMode;

  /// @brief Field passThroughLocalDirection, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___passThroughLocalDirection;

  /// @brief Field appearsWhenFarOnly, offset: 0x28, size: 0x1, def value: None
  bool ___appearsWhenFarOnly;

  /// @brief Field forceCurrencyFocus, offset: 0x29, size: 0x1, def value: None
  bool ___forceCurrencyFocus;

  /// @brief Field anchorsToSetVisibility, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::GlobalNamespace::MobileTravelAnchor>, ::Array<::UnityW<::GlobalNamespace::MobileTravelAnchor>>*> ___anchorsToSetVisibility;

  /// @brief Field overrideDistanceHideCheckAndBeHidden, offset: 0x38, size: 0x1, def value: None
  bool ___overrideDistanceHideCheckAndBeHidden;

  /// @brief Field isInternalVisible, offset: 0x39, size: 0x1, def value: None
  bool ___isInternalVisible;

  /// @brief Field isExternalVisible, offset: 0x3a, size: 0x1, def value: None
  bool ___isExternalVisible;

  /// @brief Field isCameraLinked, offset: 0x3b, size: 0x1, def value: None
  bool ___isCameraLinked;

  /// @brief Field isVisible, offset: 0x3c, size: 0x1, def value: None
  bool ___isVisible;

  /// @brief Field isRegistered, offset: 0x3d, size: 0x1, def value: None
  bool ___isRegistered;

  /// @brief Field isRegisteredForPlayerCreated, offset: 0x3e, size: 0x1, def value: None
  bool ___isRegisteredForPlayerCreated;

  /// @brief Field masterPlayer, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::Player> ___masterPlayer;

  /// @brief Field scaleContainer, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___scaleContainer;

  /// @brief Field sphereCollider, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SphereCollider> ___sphereCollider;

  /// @brief Field anchorMagneticDistance offset 0xffffffff size 0x4
  static constexpr float_t anchorMagneticDistance{ 0.75 };

  /// @brief Field appearWhenFarDistance offset 0xffffffff size 0x4
  static constexpr float_t appearWhenFarDistance{ 5.0 };

  /// @brief Field distanceToScaleRatio offset 0xffffffff size 0x4
  static constexpr float_t distanceToScaleRatio{ 0.1 };

  /// @brief Field maxScale offset 0xffffffff size 0x4
  static constexpr float_t maxScale{ 3.0 };

  /// @brief Field minScale offset 0xffffffff size 0x4
  static constexpr float_t minScale{ 0.2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MobileTravelAnchor, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___rotationMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___passThroughLocalDirection) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___appearsWhenFarOnly) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___forceCurrencyFocus) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___anchorsToSetVisibility) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___overrideDistanceHideCheckAndBeHidden) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___isInternalVisible) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___isExternalVisible) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___isCameraLinked) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___isVisible) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___isRegistered) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___isRegisteredForPlayerCreated) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___masterPlayer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___scaleContainer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MobileTravelAnchor, ___sphereCollider) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MobileTravelAnchor__AnchorRotationMode, "", "MobileTravelAnchor/AnchorRotationMode");
NEED_NO_BOX(::GlobalNamespace::MobileTravelAnchor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MobileTravelAnchor*, "", "MobileTravelAnchor");
