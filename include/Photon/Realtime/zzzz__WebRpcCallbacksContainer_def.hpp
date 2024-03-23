#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__IWebRpcCallback_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
CORDL_MODULE_EXPORT(WebRpcCallbacksContainer)
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace Photon::Realtime {
class IWebRpcCallback;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
// Forward declare root types
namespace Photon::Realtime {
class WebRpcCallbacksContainer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::WebRpcCallbacksContainer);
// Type: Photon.Realtime::WebRpcCallbacksContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::WebRpcCallbacksContainer*
class CORDL_TYPE WebRpcCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IWebRpcCallback*> {
public:
  // Declarations
  /// @brief Field client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Photon::Realtime::LoadBalancingClient* client;

  /// @brief Convert operator to "::Photon::Realtime::IWebRpcCallback"
  constexpr operator ::Photon::Realtime::IWebRpcCallback*() noexcept;

  static inline ::Photon::Realtime::WebRpcCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Method OnWebRpcResponse, addr 0x22418ec, size 0x1c0, virtual true, abstract: false, final true
  inline void OnWebRpcResponse(::ExitGames::Client::Photon::OperationResponse* response);

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method .ctor, addr 0x2239734, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Convert to "::Photon::Realtime::IWebRpcCallback"
  constexpr ::Photon::Realtime::IWebRpcCallback* i___Photon__Realtime__IWebRpcCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebRpcCallbacksContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebRpcCallbacksContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebRpcCallbacksContainer(WebRpcCallbacksContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebRpcCallbacksContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebRpcCallbacksContainer(WebRpcCallbacksContainer const&) = delete;

  /// @brief Field client, offset: 0x28, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::WebRpcCallbacksContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::WebRpcCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::WebRpcCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::WebRpcCallbacksContainer*, "Photon.Realtime", "WebRpcCallbacksContainer");
