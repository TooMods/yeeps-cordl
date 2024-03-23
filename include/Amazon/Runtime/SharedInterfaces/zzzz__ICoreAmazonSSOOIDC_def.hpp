#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICoreAmazonSSOOIDC)
namespace Amazon::Runtime::SharedInterfaces {
class GetSsoTokenRequest;
}
namespace Amazon::Runtime::SharedInterfaces {
class GetSsoTokenResponse;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSSOOIDC;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonSSOOIDC
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonSSOOIDC*
class CORDL_TYPE ICoreAmazonSSOOIDC {
public:
  // Declarations
  /// @brief Method GetSsoTokenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GetSsoTokenResponse*>* GetSsoTokenAsync(::Amazon::Runtime::SharedInterfaces::GetSsoTokenRequest* getSsoTokenRequest);

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSSOOIDC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonSSOOIDC(ICoreAmazonSSOOIDC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSSOOIDC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonSSOOIDC(ICoreAmazonSSOOIDC const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSOOIDC*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonSSOOIDC");
