#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonRigidbodyView)
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
class Rigidbody;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonRigidbodyView;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonRigidbodyView);
// Type: Photon.Pun::PhotonRigidbodyView
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonRigidbodyView*
class CORDL_TYPE PhotonRigidbodyView : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  /// @brief Field m_Angle, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Angle, put = __cordl_internal_set_m_Angle)) float_t m_Angle;

  /// @brief Field m_Body, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Body, put = __cordl_internal_set_m_Body))::UnityW<::UnityEngine::Rigidbody> m_Body;

  /// @brief Field m_Distance, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Distance, put = __cordl_internal_set_m_Distance)) float_t m_Distance;

  /// @brief Field m_NetworkPosition, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_m_NetworkPosition, put = __cordl_internal_set_m_NetworkPosition))::UnityEngine::Vector3 m_NetworkPosition;

  /// @brief Field m_NetworkRotation, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NetworkRotation, put = __cordl_internal_set_m_NetworkRotation))::UnityEngine::Quaternion m_NetworkRotation;

  /// @brief Field m_SynchronizeAngularVelocity, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SynchronizeAngularVelocity, put = __cordl_internal_set_m_SynchronizeAngularVelocity)) bool m_SynchronizeAngularVelocity;

  /// @brief Field m_SynchronizeVelocity, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SynchronizeVelocity, put = __cordl_internal_set_m_SynchronizeVelocity)) bool m_SynchronizeVelocity;

  /// @brief Field m_TeleportEnabled, offset 0x4e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TeleportEnabled, put = __cordl_internal_set_m_TeleportEnabled)) bool m_TeleportEnabled;

  /// @brief Field m_TeleportIfDistanceGreaterThan, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TeleportIfDistanceGreaterThan, put = __cordl_internal_set_m_TeleportIfDistanceGreaterThan)) float_t m_TeleportIfDistanceGreaterThan;

  /// @brief Convert operator to "::Photon::Pun::IPunObservable"
  constexpr operator ::Photon::Pun::IPunObservable*() noexcept;

  /// @brief Method Awake, addr 0x2605b70, size 0x58, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method FixedUpdate, addr 0x2605bc8, size 0x2e0, virtual false, abstract: false, final false
  inline void FixedUpdate();

  static inline ::Photon::Pun::PhotonRigidbodyView* New_ctor();

  /// @brief Method OnPhotonSerializeView, addr 0x2605ea8, size 0x574, virtual true, abstract: false, final true
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  constexpr float_t const& __cordl_internal_get_m_Angle() const;

  constexpr float_t& __cordl_internal_get_m_Angle();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_m_Body() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_m_Body();

  constexpr float_t const& __cordl_internal_get_m_Distance() const;

  constexpr float_t& __cordl_internal_get_m_Distance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_NetworkRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_NetworkRotation();

  constexpr bool const& __cordl_internal_get_m_SynchronizeAngularVelocity() const;

  constexpr bool& __cordl_internal_get_m_SynchronizeAngularVelocity();

  constexpr bool const& __cordl_internal_get_m_SynchronizeVelocity() const;

  constexpr bool& __cordl_internal_get_m_SynchronizeVelocity();

  constexpr bool const& __cordl_internal_get_m_TeleportEnabled() const;

  constexpr bool& __cordl_internal_get_m_TeleportEnabled();

  constexpr float_t const& __cordl_internal_get_m_TeleportIfDistanceGreaterThan() const;

  constexpr float_t& __cordl_internal_get_m_TeleportIfDistanceGreaterThan();

  constexpr void __cordl_internal_set_m_Angle(float_t value);

  constexpr void __cordl_internal_set_m_Body(::UnityW<::UnityEngine::Rigidbody> value);

  constexpr void __cordl_internal_set_m_Distance(float_t value);

  constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_SynchronizeAngularVelocity(bool value);

  constexpr void __cordl_internal_set_m_SynchronizeVelocity(bool value);

  constexpr void __cordl_internal_set_m_TeleportEnabled(bool value);

  constexpr void __cordl_internal_set_m_TeleportIfDistanceGreaterThan(float_t value);

  /// @brief Method .ctor, addr 0x260641c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Pun::IPunObservable"
  constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonRigidbodyView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbodyView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonRigidbodyView(PhotonRigidbodyView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonRigidbodyView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonRigidbodyView(PhotonRigidbodyView const&) = delete;

  /// @brief Field m_Distance, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Distance;

  /// @brief Field m_Angle, offset: 0x24, size: 0x4, def value: None
  float_t ___m_Angle;

  /// @brief Field m_Body, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___m_Body;

  /// @brief Field m_NetworkPosition, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_NetworkPosition;

  /// @brief Field m_NetworkRotation, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_NetworkRotation;

  /// @brief Field m_SynchronizeVelocity, offset: 0x4c, size: 0x1, def value: None
  bool ___m_SynchronizeVelocity;

  /// @brief Field m_SynchronizeAngularVelocity, offset: 0x4d, size: 0x1, def value: None
  bool ___m_SynchronizeAngularVelocity;

  /// @brief Field m_TeleportEnabled, offset: 0x4e, size: 0x1, def value: None
  bool ___m_TeleportEnabled;

  /// @brief Field m_TeleportIfDistanceGreaterThan, offset: 0x50, size: 0x4, def value: None
  float_t ___m_TeleportIfDistanceGreaterThan;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonRigidbodyView, 0x58>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_Distance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_Angle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_Body) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_NetworkPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_NetworkRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_SynchronizeVelocity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_SynchronizeAngularVelocity) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_TeleportEnabled) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonRigidbodyView, ___m_TeleportIfDistanceGreaterThan) == 0x50, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonRigidbodyView);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonRigidbodyView*, "Photon.Pun", "PhotonRigidbodyView");
