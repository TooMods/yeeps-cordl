#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Amazon/Runtime/Internal/zzzz__EndpointDiscoveryDataBase_def.hpp"
CORDL_MODULE_EXPORT(EndpointDiscoveryData)
// Forward declare root types
namespace Amazon::Runtime::Internal {
class EndpointDiscoveryData;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::EndpointDiscoveryData);
// Type: Amazon.Runtime.Internal::EndpointDiscoveryData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal::EndpointDiscoveryData*
class CORDL_TYPE EndpointDiscoveryData : public ::Amazon::Runtime::Internal::EndpointDiscoveryDataBase {
public:
  // Declarations
  static inline ::Amazon::Runtime::Internal::EndpointDiscoveryData* New_ctor(bool required);

  /// @brief Method .ctor, addr 0x23d6928, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(bool required);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndpointDiscoveryData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndpointDiscoveryData(EndpointDiscoveryData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndpointDiscoveryData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndpointDiscoveryData(EndpointDiscoveryData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::EndpointDiscoveryData, 0x20>, "Size mismatch!");

} // namespace Amazon::Runtime::Internal
NEED_NO_BOX(::Amazon::Runtime::Internal::EndpointDiscoveryData);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::EndpointDiscoveryData*, "Amazon.Runtime.Internal", "EndpointDiscoveryData");
