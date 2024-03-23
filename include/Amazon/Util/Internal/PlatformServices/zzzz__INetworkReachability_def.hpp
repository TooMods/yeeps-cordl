#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INetworkReachability)
namespace Amazon::Util::Internal::PlatformServices {
class NetworkStatusEventArgs;
}
namespace Amazon::Util::Internal::PlatformServices {
struct NetworkStatus;
}
namespace System {
template <typename TEventArgs> class EventHandler_1;
}
// Forward declare root types
namespace Amazon::Util::Internal::PlatformServices {
class INetworkReachability;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::INetworkReachability);
// Type: Amazon.Util.Internal.PlatformServices::INetworkReachability
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::INetworkReachability*
class CORDL_TYPE INetworkReachability {
public:
  // Declarations
  __declspec(property(get = get_NetworkStatus))::Amazon::Util::Internal::PlatformServices::NetworkStatus NetworkStatus;

  /// @brief Method add_NetworkReachabilityChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_NetworkReachabilityChanged(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value);

  /// @brief Method get_NetworkStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Util::Internal::PlatformServices::NetworkStatus get_NetworkStatus();

  /// @brief Method remove_NetworkReachabilityChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_NetworkReachabilityChanged(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value);

  // Ctor Parameters [CppParam { name: "", ty: "INetworkReachability", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INetworkReachability(INetworkReachability&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INetworkReachability", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INetworkReachability(INetworkReachability const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::INetworkReachability);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::INetworkReachability*, "Amazon.Util.Internal.PlatformServices", "INetworkReachability");
