#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MonoBehaviourPun)
namespace Photon::Pun {
class PhotonView;
}
// Forward declare root types
namespace Photon::Pun {
class MonoBehaviourPun;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::MonoBehaviourPun);
// Type: Photon.Pun::MonoBehaviourPun
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::MonoBehaviourPun*
class CORDL_TYPE MonoBehaviourPun : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_photonView))::UnityW<::Photon::Pun::PhotonView> photonView;

  /// @brief Field pvCache, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_pvCache, put = __cordl_internal_set_pvCache))::UnityW<::Photon::Pun::PhotonView> pvCache;

  static inline ::Photon::Pun::MonoBehaviourPun* New_ctor();

  constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_pvCache() const;

  constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_pvCache();

  constexpr void __cordl_internal_set_pvCache(::UnityW<::Photon::Pun::PhotonView> value);

  /// @brief Method .ctor, addr 0x27546d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_photonView, addr 0x2754658, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::Photon::Pun::PhotonView> get_photonView();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviourPun();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourPun", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviourPun(MonoBehaviourPun&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourPun", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviourPun(MonoBehaviourPun const&) = delete;

  /// @brief Field pvCache, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::Photon::Pun::PhotonView> ___pvCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::MonoBehaviourPun, 0x20>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::MonoBehaviourPun, ___pvCache) == 0x18, "Offset mismatch!");

} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::MonoBehaviourPun);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::MonoBehaviourPun*, "Photon.Pun", "MonoBehaviourPun");
