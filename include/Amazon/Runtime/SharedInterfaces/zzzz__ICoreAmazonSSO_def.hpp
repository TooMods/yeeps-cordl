#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICoreAmazonSSO)
namespace Amazon::Runtime {
class ImmutableCredentials;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSSO;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonSSO
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonSSO*
class CORDL_TYPE ICoreAmazonSSO {
public:
  // Declarations
  /// @brief Method CredentialsFromSsoAccessTokenAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>*
  CredentialsFromSsoAccessTokenAsync(::StringW accountId, ::StringW roleName, ::StringW accessToken, ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* additionalProperties);

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonSSO(ICoreAmazonSSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonSSO(ICoreAmazonSSO const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSSO*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonSSO");
