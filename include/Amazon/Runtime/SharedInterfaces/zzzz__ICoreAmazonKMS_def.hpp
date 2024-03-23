#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICoreAmazonKMS)
namespace Amazon::Runtime::SharedInterfaces {
class GenerateDataKeyResult;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Amazon::Runtime::SharedInterfaces {
class ICoreAmazonKMS;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS);
// Type: Amazon.Runtime.SharedInterfaces::ICoreAmazonKMS
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::SharedInterfaces {
// Is value type: false
// CS Name: ::Amazon.Runtime.SharedInterfaces::ICoreAmazonKMS*
class CORDL_TYPE ICoreAmazonKMS {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Decrypt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Decrypt(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext);

  /// @brief Method DecryptAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* DecryptAsync(::ArrayW<uint8_t, ::Array<uint8_t>*> ciphertextBlob,
                                                                                                ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext);

  /// @brief Method GenerateDataKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult* GenerateDataKey(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext,
                                                                                     ::StringW keySpec);

  /// @brief Method GenerateDataKeyAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::SharedInterfaces::GenerateDataKeyResult*>*
  GenerateDataKeyAsync(::StringW keyID, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* encryptionContext, ::StringW keySpec);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonKMS", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICoreAmazonKMS(ICoreAmazonKMS&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICoreAmazonKMS", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICoreAmazonKMS(ICoreAmazonKMS const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::SharedInterfaces
NEED_NO_BOX(::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::SharedInterfaces::ICoreAmazonKMS*, "Amazon.Runtime.SharedInterfaces", "ICoreAmazonKMS");
