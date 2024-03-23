#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICoreAmazonSQS)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonSQS;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSQS);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonSQS
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonSQS*
class CORDL_TYPE ICoreAmazonSQS {
public:
  // Declarations
  /// @brief Method GetAttributesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*>* GetAttributesAsync(::StringW queueUrl);

  /// @brief Method SetAttributesAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* SetAttributesAsync(::StringW queueUrl, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* attributes);

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSQS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonSQS(ICoreAmazonSQS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonSQS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonSQS(ICoreAmazonSQS const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSQS);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonSQS*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonSQS");
