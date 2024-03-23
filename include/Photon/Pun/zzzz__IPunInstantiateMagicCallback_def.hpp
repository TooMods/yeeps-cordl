#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPunInstantiateMagicCallback)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
// Forward declare root types
namespace Photon::Pun {
class IPunInstantiateMagicCallback;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::IPunInstantiateMagicCallback);
// Type: Photon.Pun::IPunInstantiateMagicCallback
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::IPunInstantiateMagicCallback*
class CORDL_TYPE IPunInstantiateMagicCallback {
public:
  // Declarations
  /// @brief Method OnPhotonInstantiate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPhotonInstantiate(::Photon::Pun::PhotonMessageInfo info);

  // Ctor Parameters [CppParam { name: "", ty: "IPunInstantiateMagicCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPunInstantiateMagicCallback(IPunInstantiateMagicCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPunInstantiateMagicCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPunInstantiateMagicCallback(IPunInstantiateMagicCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::IPunInstantiateMagicCallback);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::IPunInstantiateMagicCallback*, "Photon.Pun", "IPunInstantiateMagicCallback");
