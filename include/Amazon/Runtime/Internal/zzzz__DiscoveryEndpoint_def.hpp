#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__DiscoveryEndpointBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiscoveryEndpoint)
// Forward declare root types
namespace Amazon::Runtime::Internal {
class DiscoveryEndpoint;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::DiscoveryEndpoint);
// Type: Amazon.Runtime.Internal::DiscoveryEndpoint
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::DiscoveryEndpoint*
class CORDL_TYPE DiscoveryEndpoint : public ::Amazon::Runtime::Internal::DiscoveryEndpointBase {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::DiscoveryEndpoint* New_ctor(::StringW address, int64_t cachePeriodInMinutes);

  /// @brief Method .ctor, addr 0x23d6870, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW address, int64_t cachePeriodInMinutes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DiscoveryEndpoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DiscoveryEndpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DiscoveryEndpoint(DiscoveryEndpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DiscoveryEndpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DiscoveryEndpoint(DiscoveryEndpoint const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::DiscoveryEndpoint, 0x30>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::DiscoveryEndpoint);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::DiscoveryEndpoint*, "Amazon.Runtime.Internal", "DiscoveryEndpoint");
