#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecryptionWrapper)
namespace Amazon::Runtime::Internal::Util {
class IDecryptionWrapper;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class DecryptionWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::DecryptionWrapper);
// Type: Amazon.Runtime.Internal.Util::DecryptionWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::DecryptionWrapper*
class CORDL_TYPE DecryptionWrapper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Transformer))::System::Security::Cryptography::ICryptoTransform* Transformer;

  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm))::System::Security::Cryptography::SymmetricAlgorithm* algorithm;

  /// @brief Field decryptor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_decryptor, put = __cordl_internal_set_decryptor))::System::Security::Cryptography::ICryptoTransform* decryptor;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Util::IDecryptionWrapper"
  constexpr operator ::Amazon::Runtime::Internal::Util::IDecryptionWrapper*() noexcept;

  /// @brief Method CreateAlgorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::SymmetricAlgorithm* CreateAlgorithm();

  /// @brief Method CreateDecryptor, addr 0x23f4164, size 0x30, virtual true, abstract: false, final true
  inline void CreateDecryptor();

  static inline ::Amazon::Runtime::Internal::Util::DecryptionWrapper* New_ctor();

  /// @brief Method SetDecryptionData, addr 0x23f40bc, size 0xa8, virtual true, abstract: false, final true
  inline void SetDecryptionData(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  constexpr ::System::Security::Cryptography::SymmetricAlgorithm*& __cordl_internal_get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::SymmetricAlgorithm*> const& __cordl_internal_get_algorithm() const;

  constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_decryptor();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& __cordl_internal_get_decryptor() const;

  constexpr void __cordl_internal_set_algorithm(::System::Security::Cryptography::SymmetricAlgorithm* value);

  constexpr void __cordl_internal_set_decryptor(::System::Security::Cryptography::ICryptoTransform* value);

  /// @brief Method .ctor, addr 0x23f4088, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Transformer, addr 0x23f40b4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Security::Cryptography::ICryptoTransform* get_Transformer();

  /// @brief Convert to "::Amazon::Runtime::Internal::Util::IDecryptionWrapper"
  constexpr ::Amazon::Runtime::Internal::Util::IDecryptionWrapper* i___Amazon__Runtime__Internal__Util__IDecryptionWrapper() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecryptionWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecryptionWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecryptionWrapper(DecryptionWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecryptionWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecryptionWrapper(DecryptionWrapper const&) = delete;

  /// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::SymmetricAlgorithm* ___algorithm;

  /// @brief Field decryptor, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::ICryptoTransform* ___decryptor;

  /// @brief Field encryptionKeySize offset 0xffffffff size 0x4
  static constexpr int32_t encryptionKeySize{ static_cast<int32_t>(0x100) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::DecryptionWrapper, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::DecryptionWrapper, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::DecryptionWrapper, ___decryptor) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::DecryptionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::DecryptionWrapper*, "Amazon.Runtime.Internal.Util", "DecryptionWrapper");
