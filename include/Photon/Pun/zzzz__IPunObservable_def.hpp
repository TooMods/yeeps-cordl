#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPunObservable)
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
// Forward declare root types
namespace Photon::Pun {
class IPunObservable;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::IPunObservable);
// Type: Photon.Pun::IPunObservable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Pun {
// Is value type: false
// CS Name: ::Photon.Pun::IPunObservable*
class CORDL_TYPE IPunObservable {
public:
  // Declarations
  /// @brief Method OnPhotonSerializeView, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPhotonSerializeView(::Photon::Pun::PhotonStream* stream, ::Photon::Pun::PhotonMessageInfo info);

  // Ctor Parameters [CppParam { name: "", ty: "IPunObservable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPunObservable(IPunObservable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPunObservable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPunObservable(IPunObservable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Pun
NEED_NO_BOX(::Photon::Pun::IPunObservable);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::IPunObservable*, "Photon.Pun", "IPunObservable");
