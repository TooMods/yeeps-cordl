#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonRigidbody2DView)
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine {
class Rigidbody2D;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonRigidbody2DView;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonRigidbody2DView);
// Type: Photon.Pun::PhotonRigidbody2DView
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonRigidbody2DView*
class CORDL_TYPE PhotonRigidbody2DView : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  /// @brief Field m_Angle, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Angle, put = __cordl_internal_set_m_Angle)) float_t m_Angle;

  /// @brief Field m_Body, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Body, put = __cordl_internal_set_m_Body))::UnityW<::UnityEngine::Rigidbody2D> m_Body;

  /// @brief Field m_Distance, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Distance, put = __cordl_internal_set_m_Distance)) float_t m_Distance;

  /// @brief Field m_NetworkPosition, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NetworkPosition, put = __cordl_internal_set_m_NetworkPosition))::UnityEngine::Vector2 m_NetworkPosition;

  /// @brief Field m_NetworkRotation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NetworkRotation, put = __cordl_internal_set_m_NetworkRotation)) float_t m_NetworkRotation;

  /// @brief Field m_SynchronizeAngularVelocity, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SynchronizeAngularVelocity, put = __cordl_internal_set_m_SynchronizeAngularVelocity)) bool m_SynchronizeAngularVelocity;

  /// @brief Field m_SynchronizeVelocity, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SynchronizeVelocity, put = __cordl_internal_set_m_SynchronizeVelocity)) bool m_SynchronizeVelocity;

  /// @brief Field m_TeleportEnabled, offset 0x3e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TeleportEnabled, put = __cordl_internal_set_m_TeleportEnabled)) bool m_TeleportEnabled;

  /// @brief Field m_TeleportIfDistanceGreaterThan, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TeleportIfDistanceGreaterThan, put = __cordl_internal_set_m_TeleportIfDistanceGreaterThan)) float_t m_TeleportIfDistanceGreaterThan;

  /// @brief Convert operator to "::Photon::Pun::IPunObservable"
  constexpr operator ::Photon::Pun::IPunObservable*() noexcept;

  /// @brief Method Awake, addr 0x26054d8, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x2605528, size 0x1fc, virtual false, abstract: false, final false
  inline void FixedUpdate();

  static inline ::Photon::Pun::PhotonRigidbody2DView* New_ctor();

  /// @brief Method OnPhotonSerializeView, addr 0x2605724, size 0x434, virtual true, abstract: false, final true
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  constexpr float_t const& __cordl_internal_get_m_Angle() const;

  constexpr float_t& __cordl_internal_get_m_Angle();

  constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& __cordl_internal_get_m_Body() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody2D>& __cordl_internal_get_m_Body();

  constexpr float_t const& __cordl_internal_get_m_Distance() const;

  constexpr float_t& __cordl_internal_get_m_Distance();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_NetworkPosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_NetworkPosition();

  constexpr float_t const& __cordl_internal_get_m_NetworkRotation() const;

  constexpr float_t& __cordl_internal_get_m_NetworkRotation();

  constexpr bool const& __cordl_internal_get_m_SynchronizeAngularVelocity() const;

  constexpr bool& __cordl_internal_get_m_SynchronizeAngularVelocity();

  constexpr bool const& __cordl_internal_get_m_SynchronizeVelocity() const;

  constexpr bool& __cordl_internal_get_m_SynchronizeVelocity();

  constexpr bool const& __cordl_internal_get_m_TeleportEnabled() const;

  constexpr bool& __cordl_internal_get_m_TeleportEnabled();

  constexpr float_t const& __cordl_internal_get_m_TeleportIfDistanceGreaterThan() const;

  constexpr float_t& __cordl_internal_get_m_TeleportIfDistanceGreaterThan();

  constexpr void __cordl_internal_set_m_Angle(float_t value);

  constexpr void __cordl_internal_set_m_Body(::UnityW<::UnityEngine::Rigidbody2D> value);

  constexpr void __cordl_internal_set_m_Distance(float_t value);

  constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_NetworkRotation(float_t value);

  constexpr void __cordl_internal_set_m_SynchronizeAngularVelocity(bool value);

  constexpr void __cordl_internal_set_m_SynchronizeVelocity(bool value);

  constexpr void __cordl_internal_set_m_TeleportEnabled(bool value);

  constexpr void __cordl_internal_set_m_TeleportIfDistanceGreaterThan(float_t value);

  /// @brief Method .ctor, addr 0x2605b58, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Pun::IPunObservable"
  constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonRigidbody2DView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbody2DView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonRigidbody2DView(PhotonRigidbody2DView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbody2DView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonRigidbody2DView(PhotonRigidbody2DView const&) = delete;

  /// @brief Field m_Distance, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Distance;

  /// @brief Field m_Angle, offset: 0x24, size: 0x4, def value: None
  float_t ___m_Angle;

  /// @brief Field m_Body, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody2D> ___m_Body;

  /// @brief Field m_NetworkPosition, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_NetworkPosition;

  /// @brief Field m_NetworkRotation, offset: 0x38, size: 0x4, def value: None
  float_t ___m_NetworkRotation;

  /// @brief Field m_SynchronizeVelocity, offset: 0x3c, size: 0x1, def value: None
  bool ___m_SynchronizeVelocity;

  /// @brief Field m_SynchronizeAngularVelocity, offset: 0x3d, size: 0x1, def value: None
  bool ___m_SynchronizeAngularVelocity;

  /// @brief Field m_TeleportEnabled, offset: 0x3e, size: 0x1, def value: None
  bool ___m_TeleportEnabled;

  /// @brief Field m_TeleportIfDistanceGreaterThan, offset: 0x40, size: 0x4, def value: None
  float_t ___m_TeleportIfDistanceGreaterThan;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonRigidbody2DView, 0x48>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_Distance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_Angle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_Body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_NetworkPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_NetworkRotation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_SynchronizeVelocity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_SynchronizeAngularVelocity) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_TeleportEnabled) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbody2DView, ___m_TeleportIfDistanceGreaterThan) == 0x40, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonRigidbody2DView);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonRigidbody2DView*, "Photon.Pun", "PhotonRigidbody2DView");
