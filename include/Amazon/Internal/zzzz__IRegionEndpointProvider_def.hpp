#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IRegionEndpointProvider)
namespace Amazon::Internal {
class IRegionEndpoint;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace Amazon::Internal {
class IRegionEndpointProvider;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Internal::IRegionEndpointProvider);
// Type: Amazon.Internal::IRegionEndpointProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Internal {
// Is value type: false
// CS Name: ::Amazon.Internal::IRegionEndpointProvider*
class CORDL_TYPE IRegionEndpointProvider {
public:
  // Declarations
  __declspec(property(get = get_AllRegionEndpoints))::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* AllRegionEndpoints;

  /// @brief Method GetRegionEndpoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Internal::IRegionEndpoint* GetRegionEndpoint(::StringW regionName);

  /// @brief Method get_AllRegionEndpoints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Amazon::Internal::IRegionEndpoint*>* get_AllRegionEndpoints();

  // Ctor Parameters [CppParam { name: "", ty: "IRegionEndpointProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRegionEndpointProvider(IRegionEndpointProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRegionEndpointProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRegionEndpointProvider(IRegionEndpointProvider const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Internal
NEED_NO_BOX(::Amazon::Internal::IRegionEndpointProvider);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Internal::IRegionEndpointProvider*, "Amazon.Internal", "IRegionEndpointProvider");
