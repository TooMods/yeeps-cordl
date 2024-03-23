#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPunOwnershipCallbacks)
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Realtime {
class Player;
}
// Forward declare root types
namespace Photon::Pun {
class IPunOwnershipCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::IPunOwnershipCallbacks);
// Type: Photon.Pun::IPunOwnershipCallbacks
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::IPunOwnershipCallbacks*
class CORDL_TYPE IPunOwnershipCallbacks {
public:
  // Declarations
  /// @brief Method OnOwnershipRequest, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOwnershipRequest(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* requestingPlayer);

  /// @brief Method OnOwnershipTransferFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOwnershipTransferFailed(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* senderOfFailedRequest);

  /// @brief Method OnOwnershipTransfered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOwnershipTransfered(::Photon::Pun::PhotonView* targetView, ::Photon::Realtime::Player* previousOwner);

  // Ctor Parameters [CppParam { name: "", ty: "IPunOwnershipCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPunOwnershipCallbacks(IPunOwnershipCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPunOwnershipCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPunOwnershipCallbacks(IPunOwnershipCallbacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::IPunOwnershipCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::IPunOwnershipCallbacks*, "Photon.Pun", "IPunOwnershipCallbacks");
