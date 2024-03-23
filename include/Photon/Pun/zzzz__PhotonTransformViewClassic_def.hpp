#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PhotonTransformViewClassic)
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonTransformViewPositionControl;
}
namespace Photon::Pun {
class PhotonTransformViewPositionModel;
}
namespace Photon::Pun {
class PhotonTransformViewRotationControl;
}
namespace Photon::Pun {
class PhotonTransformViewRotationModel;
}
namespace Photon::Pun {
class PhotonTransformViewScaleControl;
}
namespace Photon::Pun {
class PhotonTransformViewScaleModel;
}
namespace Photon::Pun {
class PhotonView;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewClassic;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonTransformViewClassic);
// Type: Photon.Pun::PhotonTransformViewClassic
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 90, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonTransformViewClassic*
class CORDL_TYPE PhotonTransformViewClassic : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  /// @brief Field m_PhotonView, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhotonView, put = __cordl_internal_set_m_PhotonView))::UnityW<::Photon::Pun::PhotonView> m_PhotonView;

  /// @brief Field m_PositionControl, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionControl, put = __cordl_internal_set_m_PositionControl))::Photon::Pun::PhotonTransformViewPositionControl* m_PositionControl;

  /// @brief Field m_PositionModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionModel, put = __cordl_internal_set_m_PositionModel))::Photon::Pun::PhotonTransformViewPositionModel* m_PositionModel;

  /// @brief Field m_ReceivedNetworkUpdate, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReceivedNetworkUpdate, put = __cordl_internal_set_m_ReceivedNetworkUpdate)) bool m_ReceivedNetworkUpdate;

  /// @brief Field m_RotationControl, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RotationControl, put = __cordl_internal_set_m_RotationControl))::Photon::Pun::PhotonTransformViewRotationControl* m_RotationControl;

  /// @brief Field m_RotationModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RotationModel, put = __cordl_internal_set_m_RotationModel))::Photon::Pun::PhotonTransformViewRotationModel* m_RotationModel;

  /// @brief Field m_ScaleControl, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScaleControl, put = __cordl_internal_set_m_ScaleControl))::Photon::Pun::PhotonTransformViewScaleControl* m_ScaleControl;

  /// @brief Field m_ScaleModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScaleModel, put = __cordl_internal_set_m_ScaleModel))::Photon::Pun::PhotonTransformViewScaleModel* m_ScaleModel;

  /// @brief Field m_firstTake, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_m_firstTake, put = __cordl_internal_set_m_firstTake)) bool m_firstTake;

  /// @brief Convert operator to "::Photon::Pun::IPunObservable"
  constexpr operator ::Photon::Pun::IPunObservable*() noexcept;

  /// @brief Method Awake, addr 0x2606fb4, size 0xfc, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Photon::Pun::PhotonTransformViewClassic* New_ctor();

  /// @brief Method OnEnable, addr 0x260721c, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPhotonSerializeView, addr 0x2607d1c, size 0x1b8, virtual true, abstract: false, final true
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method SetSynchronizedValues, addr 0x2607cf0, size 0x20, virtual false, abstract: false, final false
  inline void SetSynchronizedValues(::UnityEngine::Vector3 speed, float_t turnSpeed);

  /// @brief Method Update, addr 0x2607228, size 0xcc, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePosition, addr 0x26072f4, size 0x84, virtual false, abstract: false, final false
  inline void UpdatePosition();

  /// @brief Method UpdateRotation, addr 0x2607378, size 0x84, virtual false, abstract: false, final false
  inline void UpdateRotation();

  /// @brief Method UpdateScale, addr 0x26073fc, size 0x84, virtual false, abstract: false, final false
  inline void UpdateScale();

  constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_m_PhotonView() const;

  constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_m_PhotonView();

  constexpr ::Photon::Pun::PhotonTransformViewPositionControl*& __cordl_internal_get_m_PositionControl();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewPositionControl*> const& __cordl_internal_get_m_PositionControl() const;

  constexpr ::Photon::Pun::PhotonTransformViewPositionModel*& __cordl_internal_get_m_PositionModel();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewPositionModel*> const& __cordl_internal_get_m_PositionModel() const;

  constexpr bool const& __cordl_internal_get_m_ReceivedNetworkUpdate() const;

  constexpr bool& __cordl_internal_get_m_ReceivedNetworkUpdate();

  constexpr ::Photon::Pun::PhotonTransformViewRotationControl*& __cordl_internal_get_m_RotationControl();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewRotationControl*> const& __cordl_internal_get_m_RotationControl() const;

  constexpr ::Photon::Pun::PhotonTransformViewRotationModel*& __cordl_internal_get_m_RotationModel();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewRotationModel*> const& __cordl_internal_get_m_RotationModel() const;

  constexpr ::Photon::Pun::PhotonTransformViewScaleControl*& __cordl_internal_get_m_ScaleControl();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewScaleControl*> const& __cordl_internal_get_m_ScaleControl() const;

  constexpr ::Photon::Pun::PhotonTransformViewScaleModel*& __cordl_internal_get_m_ScaleModel();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewScaleModel*> const& __cordl_internal_get_m_ScaleModel() const;

  constexpr bool const& __cordl_internal_get_m_firstTake() const;

  constexpr bool& __cordl_internal_get_m_firstTake();

  constexpr void __cordl_internal_set_m_PhotonView(::UnityW<::Photon::Pun::PhotonView> value);

  constexpr void __cordl_internal_set_m_PositionControl(::Photon::Pun::PhotonTransformViewPositionControl* value);

  constexpr void __cordl_internal_set_m_PositionModel(::Photon::Pun::PhotonTransformViewPositionModel* value);

  constexpr void __cordl_internal_set_m_ReceivedNetworkUpdate(bool value);

  constexpr void __cordl_internal_set_m_RotationControl(::Photon::Pun::PhotonTransformViewRotationControl* value);

  constexpr void __cordl_internal_set_m_RotationModel(::Photon::Pun::PhotonTransformViewRotationModel* value);

  constexpr void __cordl_internal_set_m_ScaleControl(::Photon::Pun::PhotonTransformViewScaleControl* value);

  constexpr void __cordl_internal_set_m_ScaleModel(::Photon::Pun::PhotonTransformViewScaleModel* value);

  constexpr void __cordl_internal_set_m_firstTake(bool value);

  /// @brief Method .ctor, addr 0x2608184, size 0x114, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Pun::IPunObservable"
  constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTransformViewClassic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewClassic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTransformViewClassic(PhotonTransformViewClassic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewClassic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTransformViewClassic(PhotonTransformViewClassic const&) = delete;

  /// @brief Field m_PositionModel, offset: 0x20, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewPositionModel* ___m_PositionModel;

  /// @brief Field m_RotationModel, offset: 0x28, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewRotationModel* ___m_RotationModel;

  /// @brief Field m_ScaleModel, offset: 0x30, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewScaleModel* ___m_ScaleModel;

  /// @brief Field m_PositionControl, offset: 0x38, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewPositionControl* ___m_PositionControl;

  /// @brief Field m_RotationControl, offset: 0x40, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewRotationControl* ___m_RotationControl;

  /// @brief Field m_ScaleControl, offset: 0x48, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewScaleControl* ___m_ScaleControl;

  /// @brief Field m_PhotonView, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::Photon::Pun::PhotonView> ___m_PhotonView;

  /// @brief Field m_ReceivedNetworkUpdate, offset: 0x58, size: 0x1, def value: None
  bool ___m_ReceivedNetworkUpdate;

  /// @brief Field m_firstTake, offset: 0x59, size: 0x1, def value: None
  bool ___m_firstTake;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonTransformViewClassic, 0x60>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_PositionModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_RotationModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_ScaleModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_PositionControl) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_RotationControl) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_ScaleControl) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_PhotonView) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_ReceivedNetworkUpdate) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewClassic, ___m_firstTake) == 0x59, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewClassic);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewClassic*, "Photon.Pun", "PhotonTransformViewClassic");
