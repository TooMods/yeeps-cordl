#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IRegionEndpoint)
namespace Amazon {
class __RegionEndpoint__Endpoint;
}
// Forward declare root types
namespace Amazon::Internal {
class IRegionEndpoint;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Internal::IRegionEndpoint);
// Type: Amazon.Internal::IRegionEndpoint
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Internal {
// Is value type: false
// CS Name: ::Amazon.Internal::IRegionEndpoint*
class CORDL_TYPE IRegionEndpoint {
public:
  // Declarations
  __declspec(property(get = get_DisplayName))::StringW DisplayName;

  __declspec(property(get = get_RegionName))::StringW RegionName;

  /// @brief Method GetEndpointForService, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::__RegionEndpoint__Endpoint* GetEndpointForService(::StringW serviceName, bool dualStack);

  /// @brief Method get_DisplayName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_DisplayName();

  /// @brief Method get_RegionName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_RegionName();

  // Ctor Parameters [CppParam { name: "", ty: "IRegionEndpoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRegionEndpoint(IRegionEndpoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRegionEndpoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRegionEndpoint(IRegionEndpoint const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Internal
NEED_NO_BOX(::Amazon::Internal::IRegionEndpoint);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Internal::IRegionEndpoint*, "Amazon.Internal", "IRegionEndpoint");
