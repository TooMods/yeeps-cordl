#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAmazonService)
namespace Amazon::Runtime {
class IClientConfig;
}
// Forward declare root types
namespace Amazon::Runtime {
class IAmazonService;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::IAmazonService);
// Type: Amazon.Runtime::IAmazonService
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime {
// Is value type: false
// CS Name: ::Amazon.Runtime::IAmazonService*
class CORDL_TYPE IAmazonService {
public:
  // Declarations
  __declspec(property(get = get_Config))::Amazon::Runtime::IClientConfig* Config;

  /// @brief Method get_Config, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::IClientConfig* get_Config();

  // Ctor Parameters [CppParam { name: "", ty: "IAmazonService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAmazonService(IAmazonService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAmazonService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAmazonService(IAmazonService const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime
NEED_NO_BOX(::Amazon::Runtime::IAmazonService);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::IAmazonService*, "Amazon.Runtime", "IAmazonService");
