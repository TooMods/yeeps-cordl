#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryResolverBase_def.hpp"
CORDL_MODULE_EXPORT(EndpointDiscoveryResolver)
namespace Amazon::Runtime::Internal::Util {
class Logger;
}
namespace Amazon::Runtime {
class IClientConfig;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryResolver;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointDiscoveryResolver);
// Type: Amazon.Runtime.Internal::EndpointDiscoveryResolver
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointDiscoveryResolver*
class CORDL_TYPE EndpointDiscoveryResolver : public ::Amazon::Runtime::Internal::EndpointDiscoveryResolverBase {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::EndpointDiscoveryResolver* New_ctor(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::Util::Logger* logger);

  /// @brief Method .ctor, addr 0x23d7b44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Amazon::Runtime::IClientConfig* config, ::Amazon::Runtime::Internal::Util::Logger* logger);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointDiscoveryResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointDiscoveryResolver(EndpointDiscoveryResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointDiscoveryResolver(EndpointDiscoveryResolver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointDiscoveryResolver, 0x30>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointDiscoveryResolver);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointDiscoveryResolver*, "Amazon.Runtime.Internal", "EndpointDiscoveryResolver");
