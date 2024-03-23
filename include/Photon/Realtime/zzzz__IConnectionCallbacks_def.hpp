#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IConnectionCallbacks)
namespace Photon::Realtime {
struct DisconnectCause;
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
class IConnectionCallbacks;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Realtime::IConnectionCallbacks);
// Type: Photon.Realtime::IConnectionCallbacks
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Photon::Realtime {
// Is value type: false
// CS Name: ::Photon.Realtime::IConnectionCallbacks*
class CORDL_TYPE IConnectionCallbacks {
public:
  // Declarations
  /// @brief Method OnConnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnConnected();

  /// @brief Method OnConnectedToMaster, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnConnectedToMaster();

  /// @brief Method OnCustomAuthenticationFailed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnCustomAuthenticationFailed(::StringW debugMessage);

  /// @brief Method OnCustomAuthenticationResponse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnCustomAuthenticationResponse(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* data);

  /// @brief Method OnDisconnected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnDisconnected(::Photon::Realtime::DisconnectCause cause);

  /// @brief Method OnRegionListReceived, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnRegionListReceived(::Photon::Realtime::RegionHandler* regionHandler);

  // Ctor Parameters [CppParam { name: "", ty: "IConnectionCallbacks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IConnectionCallbacks(IConnectionCallbacks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IConnectionCallbacks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IConnectionCallbacks(IConnectionCallbacks const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Photon::Realtime
NEED_NO_BOX(::Photon::Realtime::IConnectionCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::IConnectionCallbacks*, "Photon.Realtime", "IConnectionCallbacks");
