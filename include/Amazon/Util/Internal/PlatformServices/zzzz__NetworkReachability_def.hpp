#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkReachability)
namespace Amazon::Util::Internal::PlatformServices {
class INetworkReachability;
}
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
class NetworkReachability;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Util::Internal::PlatformServices::NetworkReachability);
// Type: Amazon.Util.Internal.PlatformServices::NetworkReachability
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Util::Internal::PlatformServices {
// Is value type: false
// CS Name: ::Amazon.Util.Internal.PlatformServices::NetworkReachability*
class CORDL_TYPE NetworkReachability : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NetworkStatus))::Amazon::Util::Internal::PlatformServices::NetworkStatus NetworkStatus;

  /// @brief Convert operator to "::Amazon::Util::Internal::PlatformServices::INetworkReachability"
  constexpr operator ::Amazon::Util::Internal::PlatformServices::INetworkReachability*() noexcept;

  static inline ::Amazon::Util::Internal::PlatformServices::NetworkReachability* New_ctor();

  /// @brief Method .ctor, addr 0x1fdafb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_NetworkReachabilityChanged, addr 0x1fdaf10, size 0x50, virtual true, abstract: false, final true
  inline void add_NetworkReachabilityChanged(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value);

  /// @brief Method get_NetworkStatus, addr 0x1fdaec0, size 0x50, virtual true, abstract: false, final true
  inline ::Amazon::Util::Internal::PlatformServices::NetworkStatus get_NetworkStatus();

  /// @brief Convert to "::Amazon::Util::Internal::PlatformServices::INetworkReachability"
  constexpr ::Amazon::Util::Internal::PlatformServices::INetworkReachability* i___Amazon__Util__Internal__PlatformServices__INetworkReachability() noexcept;

  /// @brief Method remove_NetworkReachabilityChanged, addr 0x1fdaf60, size 0x50, virtual true, abstract: false, final true
  inline void remove_NetworkReachabilityChanged(::System::EventHandler_1<::Amazon::Util::Internal::PlatformServices::NetworkStatusEventArgs*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NetworkReachability();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NetworkReachability", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NetworkReachability(NetworkReachability&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NetworkReachability", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NetworkReachability(NetworkReachability const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Util::Internal::PlatformServices::NetworkReachability, 0x10>, "Size mismatch!");

} // namespace Amazon::Util::Internal::PlatformServices
NEED_NO_BOX(::Amazon::Util::Internal::PlatformServices::NetworkReachability);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Util::Internal::PlatformServices::NetworkReachability*, "Amazon.Util.Internal.PlatformServices", "NetworkReachability");
