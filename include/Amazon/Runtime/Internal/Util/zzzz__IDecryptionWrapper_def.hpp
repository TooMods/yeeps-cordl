#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDecryptionWrapper)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class IDecryptionWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::IDecryptionWrapper);
// Type: Amazon.Runtime.Internal.Util::IDecryptionWrapper
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::IDecryptionWrapper*
class CORDL_TYPE IDecryptionWrapper {
public:
  // Declarations
  __declspec(property(get = get_Transformer))::System::Security::Cryptography::ICryptoTransform* Transformer;

  /// @brief Method CreateDecryptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CreateDecryptor();

  /// @brief Method SetDecryptionData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetDecryptionData(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  /// @brief Method get_Transformer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::ICryptoTransform* get_Transformer();

  // Ctor Parameters [CppParam { name: "", ty: "IDecryptionWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDecryptionWrapper(IDecryptionWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDecryptionWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDecryptionWrapper(IDecryptionWrapper const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::IDecryptionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::IDecryptionWrapper*, "Amazon.Runtime.Internal.Util", "IDecryptionWrapper");
