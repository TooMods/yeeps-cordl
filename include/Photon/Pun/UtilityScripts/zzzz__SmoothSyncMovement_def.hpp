#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothSyncMovement)
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
namespace Photon::Pun::UtilityScripts {
class SmoothSyncMovement;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::SmoothSyncMovement);
// Type: Photon.Pun.UtilityScripts::SmoothSyncMovement
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::SmoothSyncMovement*
class CORDL_TYPE SmoothSyncMovement : public ::Photon::Pun::MonoBehaviourPun {
public:
  // Declarations
  /// @brief Field SmoothingDelay, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_SmoothingDelay, put = __cordl_internal_set_SmoothingDelay)) float_t SmoothingDelay;

  /// @brief Field correctPlayerPos, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_correctPlayerPos, put = __cordl_internal_set_correctPlayerPos))::UnityEngine::Vector3 correctPlayerPos;

  /// @brief Field correctPlayerRot, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_correctPlayerRot, put = __cordl_internal_set_correctPlayerRot))::UnityEngine::Quaternion correctPlayerRot;

  /// @brief Convert operator to "::Photon::Pun::IPunObservable"
  constexpr operator ::Photon::Pun::IPunObservable*() noexcept;

  /// @brief Method Awake, addr 0x1ec7978, size 0x204, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::Photon::Pun::UtilityScripts::SmoothSyncMovement* New_ctor();

  /// @brief Method OnPhotonSerializeView, addr 0x1ec7b7c, size 0x168, virtual true, abstract: false, final true
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  /// @brief Method Update, addr 0x1ec7ce4, size 0x194, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_SmoothingDelay() const;

  constexpr float_t& __cordl_internal_get_SmoothingDelay();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_correctPlayerPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_correctPlayerPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_correctPlayerRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_correctPlayerRot();

  constexpr void __cordl_internal_set_SmoothingDelay(float_t value);

  constexpr void __cordl_internal_set_correctPlayerPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_correctPlayerRot(::UnityEngine::Quaternion value);

  /// @brief Method .ctor, addr 0x1ec7e78, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Photon::Pun::IPunObservable"
  constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmoothSyncMovement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmoothSyncMovement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmoothSyncMovement(SmoothSyncMovement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmoothSyncMovement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmoothSyncMovement(SmoothSyncMovement const&) = delete;

  /// @brief Field SmoothingDelay, offset: 0x20, size: 0x4, def value: None
  float_t ___SmoothingDelay;

  /// @brief Field correctPlayerPos, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___correctPlayerPos;

  /// @brief Field correctPlayerRot, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___correctPlayerRot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::SmoothSyncMovement, 0x40>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::SmoothSyncMovement, ___SmoothingDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::SmoothSyncMovement, ___correctPlayerPos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::SmoothSyncMovement, ___correctPlayerRot) == 0x30, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::SmoothSyncMovement);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::SmoothSyncMovement*, "Photon.Pun.UtilityScripts", "SmoothSyncMovement");
