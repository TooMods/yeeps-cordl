#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonTransformView)
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformView;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonTransformView);
// Type: Photon.Pun::PhotonTransformView
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonTransformView*
class CORDL_TYPE PhotonTransformView : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  /// @brief Field m_Angle, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Angle, put = __cordl_internal_set_m_Angle)) float_t m_Angle;

  /// @brief Field m_Direction, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Direction, put = __cordl_internal_set_m_Direction))::UnityEngine::Vector3 m_Direction;

  /// @brief Field m_Distance, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Distance, put = __cordl_internal_set_m_Distance)) float_t m_Distance;

  /// @brief Field m_NetworkPosition, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_m_NetworkPosition, put = __cordl_internal_set_m_NetworkPosition))::UnityEngine::Vector3 m_NetworkPosition;

  /// @brief Field m_NetworkRotation, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NetworkRotation, put = __cordl_internal_set_m_NetworkRotation))::UnityEngine::Quaternion m_NetworkRotation;

  /// @brief Field m_StoredPosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_m_StoredPosition, put = __cordl_internal_set_m_StoredPosition))::UnityEngine::Vector3 m_StoredPosition;

  /// @brief Field m_SynchronizePosition, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SynchronizePosition, put = __cordl_internal_set_m_SynchronizePosition)) bool m_SynchronizePosition;

  /// @brief Field m_SynchronizeRotation, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SynchronizeRotation, put = __cordl_internal_set_m_SynchronizeRotation)) bool m_SynchronizeRotation;

  /// @brief Field m_SynchronizeScale, offset 0x5e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SynchronizeScale, put = __cordl_internal_set_m_SynchronizeScale)) bool m_SynchronizeScale;

  /// @brief Field m_UseLocal, offset 0x5f, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseLocal, put = __cordl_internal_set_m_UseLocal)) bool m_UseLocal;

  /// @brief Field m_firstTake, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_firstTake, put = __cordl_internal_set_m_firstTake)) bool m_firstTake;

  /// @brief Convert operator to "::Photon::Pun::IPunObservable"
  constexpr operator ::Photon::Pun::IPunObservable*() noexcept;

  /// @brief Method Awake, addr 0x2606434, size 0xb0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Photon::Pun::PhotonTransformView* New_ctor();

  /// @brief Method OnEnable, addr 0x26064f0, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPhotonSerializeView, addr 0x2606a5c, size 0x548, virtual true, abstract: false, final true
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method Reset, addr 0x26064e4, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x26064fc, size 0x560, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_m_Angle() const;

  constexpr float_t& __cordl_internal_get_m_Angle();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Direction() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Direction();

  constexpr float_t const& __cordl_internal_get_m_Distance() const;

  constexpr float_t& __cordl_internal_get_m_Distance();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_NetworkRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_NetworkRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_StoredPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_StoredPosition();

  constexpr bool const& __cordl_internal_get_m_SynchronizePosition() const;

  constexpr bool& __cordl_internal_get_m_SynchronizePosition();

  constexpr bool const& __cordl_internal_get_m_SynchronizeRotation() const;

  constexpr bool& __cordl_internal_get_m_SynchronizeRotation();

  constexpr bool const& __cordl_internal_get_m_SynchronizeScale() const;

  constexpr bool& __cordl_internal_get_m_SynchronizeScale();

  constexpr bool const& __cordl_internal_get_m_UseLocal() const;

  constexpr bool& __cordl_internal_get_m_UseLocal();

  constexpr bool const& __cordl_internal_get_m_firstTake() const;

  constexpr bool& __cordl_internal_get_m_firstTake();

  constexpr void __cordl_internal_set_m_Angle(float_t value);

  constexpr void __cordl_internal_set_m_Direction(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Distance(float_t value);

  constexpr void __cordl_internal_set_m_NetworkPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_StoredPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_SynchronizePosition(bool value);

  constexpr void __cordl_internal_set_m_SynchronizeRotation(bool value);

  constexpr void __cordl_internal_set_m_SynchronizeScale(bool value);

  constexpr void __cordl_internal_set_m_UseLocal(bool value);

  constexpr void __cordl_internal_set_m_firstTake(bool value);

  /// @brief Method .ctor, addr 0x2606fa4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Pun::IPunObservable"
  constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTransformView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTransformView(PhotonTransformView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTransformView(PhotonTransformView const&) = delete;

  /// @brief Field m_Distance, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Distance;

  /// @brief Field m_Angle, offset: 0x24, size: 0x4, def value: None
  float_t ___m_Angle;

  /// @brief Field m_Direction, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Direction;

  /// @brief Field m_NetworkPosition, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_NetworkPosition;

  /// @brief Field m_StoredPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_StoredPosition;

  /// @brief Field m_NetworkRotation, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_NetworkRotation;

  /// @brief Field m_SynchronizePosition, offset: 0x5c, size: 0x1, def value: None
  bool ___m_SynchronizePosition;

  /// @brief Field m_SynchronizeRotation, offset: 0x5d, size: 0x1, def value: None
  bool ___m_SynchronizeRotation;

  /// @brief Field m_SynchronizeScale, offset: 0x5e, size: 0x1, def value: None
  bool ___m_SynchronizeScale;

  /// @brief Field m_UseLocal, offset: 0x5f, size: 0x1, def value: None
  bool ___m_UseLocal;

  /// @brief Field m_firstTake, offset: 0x60, size: 0x1, def value: None
  bool ___m_firstTake;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonTransformView, 0x68>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_Distance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_Angle) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_Direction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_NetworkPosition) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_StoredPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_NetworkRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_SynchronizePosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_SynchronizeRotation) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_SynchronizeScale) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_UseLocal) == 0x5f, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformView, ___m_firstTake) == 0x60, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonTransformView);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformView*, "Photon.Pun", "PhotonTransformView");
