#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__EndpointOperationContextBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EndpointOperationContext)
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryDataBase;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointOperationContext;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointOperationContext);
// Type: Amazon.Runtime.Internal::EndpointOperationContext
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointOperationContext*
class CORDL_TYPE EndpointOperationContext : public ::Amazon::Runtime::Internal::EndpointOperationContextBase {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::EndpointOperationContext*
  New_ctor(::StringW customerCredentials, ::StringW operationName, ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* endpointDiscoveryData, bool evictCacheKey, ::System::Uri* evictUri);

  /// @brief Method .ctor, addr 0x23d7c50, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW customerCredentials, ::StringW operationName, ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase* endpointDiscoveryData, bool evictCacheKey, ::System::Uri* evictUri);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointOperationContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointOperationContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointOperationContext(EndpointOperationContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointOperationContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointOperationContext(EndpointOperationContext const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointOperationContext, 0x38>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointOperationContext);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointOperationContext*, "Amazon.Runtime.Internal", "EndpointOperationContext");
