#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
CORDL_MODULE_EXPORT(PhotonTransformViewRotationControl)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonTransformViewRotationModel;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonTransformViewRotationControl;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::PhotonTransformViewRotationControl);
// Type: Photon.Pun::PhotonTransformViewRotationControl
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::PhotonTransformViewRotationControl*
class CORDL_TYPE PhotonTransformViewRotationControl : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Model, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Model, put = __cordl_internal_set_m_Model))::Photon::Pun::PhotonTransformViewRotationModel* m_Model;

  /// @brief Field m_NetworkRotation, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_m_NetworkRotation, put = __cordl_internal_set_m_NetworkRotation))::UnityEngine::Quaternion m_NetworkRotation;

  /// @brief Method GetNetworkRotation, addr 0x2608934, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetNetworkRotation();

  /// @brief Method GetRotation, addr 0x26079d4, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation(::UnityEngine::Quaternion currentRotation);

  static inline ::Photon::Pun::PhotonTransformViewRotationControl* New_ctor(::Photon::Pun::PhotonTransformViewRotationModel* model);

  /// @brief Method OnPhotonSerializeView, addr 0x2607f98, size 0xf4, virtual false, abstract: false, final false
  inline void OnPhotonSerializeView(::UnityEngine::Quaternion currentRotation, ::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  constexpr ::Photon::Pun::PhotonTransformViewRotationModel*& __cordl_internal_get_m_Model();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::PhotonTransformViewRotationModel*> const& __cordl_internal_get_m_Model() const;

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_NetworkRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_NetworkRotation();

  constexpr void __cordl_internal_set_m_Model(::Photon::Pun::PhotonTransformViewRotationModel* value);

  constexpr void __cordl_internal_set_m_NetworkRotation(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x2607188, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Pun::PhotonTransformViewRotationModel* model);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhotonTransformViewRotationControl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewRotationControl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhotonTransformViewRotationControl(PhotonTransformViewRotationControl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhotonTransformViewRotationControl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhotonTransformViewRotationControl(PhotonTransformViewRotationControl const&) = delete;

  /// @brief Field m_Model, offset: 0x10, size: 0x8, def value: None
  ::Photon::Pun::PhotonTransformViewRotationModel* ___m_Model;

  /// @brief Field m_NetworkRotation, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_NetworkRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::PhotonTransformViewRotationControl, 0x28>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewRotationControl, ___m_Model) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonTransformViewRotationControl, ___m_NetworkRotation) == 0x18, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::PhotonTransformViewRotationControl);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::PhotonTransformViewRotationControl*, "Photon.Pun", "PhotonTransformViewRotationControl");
