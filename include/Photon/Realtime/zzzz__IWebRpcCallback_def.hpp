#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IWebRpcCallback)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
// Forward declare root types
namespace Photon::Realtime {
class IWebRpcCallback;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::IWebRpcCallback);
// Type: Photon.Realtime::IWebRpcCallback
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::IWebRpcCallback*
class CORDL_TYPE IWebRpcCallback {
public:
  // Declarations
  /// @brief Method OnWebRpcResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse* response);

  // Ctor Parameters [CppParam { name: "", ty: "IWebRpcCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IWebRpcCallback(IWebRpcCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IWebRpcCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWebRpcCallback(IWebRpcCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::IWebRpcCallback);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IWebRpcCallback*, "Photon.Realtime", "IWebRpcCallback");
