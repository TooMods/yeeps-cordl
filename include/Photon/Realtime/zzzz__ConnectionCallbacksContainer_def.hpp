#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Realtime/zzzz__IConnectionCallbacks_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConnectionCallbacksContainer)
namespace Photon::Realtime {
struct DisconnectCause;
}
namespace Photon::Realtime {
class IConnectionCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
class RegionHandler;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Realtime {
class ConnectionCallbacksContainer;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::ConnectionCallbacksContainer);
// Type: Photon.Realtime::ConnectionCallbacksContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::ConnectionCallbacksContainer*
class CORDL_TYPE ConnectionCallbacksContainer : public ::System::Collections::Generic::List_1<::Photon::Realtime::IConnectionCallbacks*> {
public:
  // Declarations
  /// @brief Field client, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_client, put = __cordl_internal_set_client))::Photon::Realtime::LoadBalancingClient* client;

  /// @brief Convert operator to "::Photon::Realtime::IConnectionCallbacks"
  constexpr operator ::Photon::Realtime::IConnectionCallbacks*() noexcept;

  static inline ::Photon::Realtime::ConnectionCallbacksContainer* New_ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Method OnConnected, addr 0x2242314, size 0x1b8, virtual true, abstract: false, final true
  inline void OnConnected();

  /// @brief Method OnConnectedToMaster, addr 0x2240554, size 0x1bc, virtual true, abstract: false, final true
  inline void OnConnectedToMaster();

  /// @brief Method OnCustomAuthenticationFailed, addr 0x223ffcc, size 0x1c4, virtual true, abstract: false, final true
  inline void OnCustomAuthenticationFailed(::StringW debugMessage);

  /// @brief Method OnCustomAuthenticationResponse, addr 0x2240710, size 0x1c4, virtual true, abstract: false, final true
  inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data);

  /// @brief Method OnDisconnected, addr 0x2242688, size 0x1c4, virtual true, abstract: false, final true
  inline void OnDisconnected(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method OnRegionListReceived, addr 0x2240c54, size 0x1c4, virtual true, abstract: false, final true
  inline void OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler);

  constexpr ::Photon::Realtime::LoadBalancingClient*& __cordl_internal_get_client();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Realtime::LoadBalancingClient*> const& __cordl_internal_get_client() const;

  constexpr void __cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient* value);

  /// @brief Method .ctor, addr 0x2239534, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Realtime::LoadBalancingClient* client);

  /// @brief Convert to "::Photon::Realtime::IConnectionCallbacks"
  constexpr ::Photon::Realtime::IConnectionCallbacks* i___Photon__Realtime__IConnectionCallbacks() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionCallbacksContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionCallbacksContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionCallbacksContainer(ConnectionCallbacksContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionCallbacksContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionCallbacksContainer(ConnectionCallbacksContainer const&) = delete;

  /// @brief Field client, offset: 0x28, size: 0x8, def value: None
  ::Photon::Realtime::LoadBalancingClient* ___client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Realtime::ConnectionCallbacksContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::Photon::Realtime::ConnectionCallbacksContainer, ___client) == 0x28, "Offset mismatch!");

} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::ConnectionCallbacksContainer);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::ConnectionCallbacksContainer*, "Photon.Realtime", "ConnectionCallbacksContainer");
