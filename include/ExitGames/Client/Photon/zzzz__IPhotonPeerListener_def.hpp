#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IPhotonPeerListener)
namespace ExitGames::Client::Photon {
struct DebugLevel;
}
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
struct StatusCode;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
// Write type traits
MARK_REF_PTR_T(::ExitGames::Client::Photon::IPhotonPeerListener);
// Type: ExitGames.Client.Photon::IPhotonPeerListener
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ::ExitGames.Client.Photon::IPhotonPeerListener*
class CORDL_TYPE IPhotonPeerListener {
public:
  // Declarations
  /// @brief Method DebugReturn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DebugReturn(::ExitGames::Client::Photon::DebugLevel level, ::StringW message);

  /// @brief Method OnEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnEvent(::ExitGames::Client::Photon::EventData* eventData);

  /// @brief Method OnOperationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnOperationResponse(::ExitGames::Client::Photon::OperationResponse* operationResponse);

  /// @brief Method OnStatusChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnStatusChanged(::ExitGames::Client::Photon::StatusCode statusCode);

  // Ctor Parameters [CppParam { name: "", ty: "IPhotonPeerListener", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPhotonPeerListener(IPhotonPeerListener&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPhotonPeerListener", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPhotonPeerListener(IPhotonPeerListener const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace ExitGames::Client::Photon
NEED_NO_BOX(::ExitGames::Client::Photon::IPhotonPeerListener);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::IPhotonPeerListener*, "ExitGames.Client.Photon", "IPhotonPeerListener");
