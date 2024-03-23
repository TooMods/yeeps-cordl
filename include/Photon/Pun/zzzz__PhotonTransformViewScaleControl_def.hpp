#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(PhotonTransformViewScaleControl)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonTransformViewScaleModel;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewScaleControl;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonTransformViewScaleControl);
// Type: Photon.Pun::PhotonTransformViewScaleControl
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonTransformViewScaleControl*
class CORDL_TYPE PhotonTransformViewScaleControl : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Model, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Model, put = __cordl_internal_set_m_Model))::Photon::Pun::PhotonTransformViewScaleModel* m_Model;

  /// @brief Field m_NetworkScale, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_m_NetworkScale, put = __cordl_internal_set_m_NetworkScale))::UnityEngine::Vector3 m_NetworkScale;

  /// @brief Method GetNetworkScale, addr 0x2608940, size 0x100c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetNetworkScale();

  /// @brief Method GetScale, addr 0x2607b68, size 0x188, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetScale(::UnityEngine::Vector3 currentScale);

  static inline ::Photon::Pun::PhotonTransformViewScaleControl* New_ctor(::Photon::Pun::PhotonTransformViewScaleModel* model);

  /// @brief Method OnPhotonSerializeView, addr 0x260808c, size 0xf8, virtual false, abstract: false, final false
  inline void OnPhotonSerializeView(::UnityEngine::Vector3 currentScale, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  constexpr ::Photon::Pun::PhotonTransformViewScaleModel*& __cordl_internal_get_m_Model();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewScaleModel*> const& __cordl_internal_get_m_Model() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_NetworkScale() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_NetworkScale();

  constexpr void __cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewScaleModel* value);

  constexpr void __cordl_internal_set_m_NetworkScale(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x26071b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Pun::PhotonTransformViewScaleModel* model);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTransformViewScaleControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewScaleControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTransformViewScaleControl(PhotonTransformViewScaleControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewScaleControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTransformViewScaleControl(PhotonTransformViewScaleControl const&) = delete;

  /// @brief Field m_Model, offset: 0x10, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewScaleModel* ___m_Model;

  /// @brief Field m_NetworkScale, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_NetworkScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonTransformViewScaleControl, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleControl, ___m_Model) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewScaleControl, ___m_NetworkScale) == 0x18, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewScaleControl);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewScaleControl*, "Photon.Pun", "PhotonTransformViewScaleControl");
