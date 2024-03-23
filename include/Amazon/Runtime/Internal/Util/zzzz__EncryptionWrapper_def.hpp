#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EncryptionWrapper)
namespace Amazon::Runtime::Internal::Util {
class IEncryptionWrapper;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Forward declare root types
namespace Amazon::Runtime::Internal::Util {
class EncryptionWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Amazon::Runtime::Internal::Util::EncryptionWrapper);
// Type: Amazon.Runtime.Internal.Util::EncryptionWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Amazon::Runtime::Internal::Util {
// Is value type: false
// CS Name: ::Amazon.Runtime.Internal.Util::EncryptionWrapper*
class CORDL_TYPE EncryptionWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_algorithm, put = __cordl_internal_set_algorithm))::System::Security::Cryptography::SymmetricAlgorithm* algorithm;

  /// @brief Field encryptor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptor, put = __cordl_internal_set_encryptor))::System::Security::Cryptography::ICryptoTransform* encryptor;

  /// @brief Convert operator to "::Amazon::Runtime::Internal::Util::IEncryptionWrapper"
  constexpr operator ::Amazon::Runtime::Internal::Util::IEncryptionWrapper*() noexcept;

  /// @brief Method AppendBlock, addr 0x23f49dc, size 0xdc, virtual true, abstract: false, final true
  inline int32_t AppendBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count, ::ArrayW<uint8_t, ::Array<uint8_t>*> target, int32_t targetOffset);

  /// @brief Method AppendLastBlock, addr 0x23f4ab8, size 0xc4, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> AppendLastBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method CreateAlgorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::SymmetricAlgorithm* CreateAlgorithm();

  /// @brief Method CreateEncryptor, addr 0x23f4b7c, size 0x30, virtual true, abstract: false, final true
  inline void CreateEncryptor();

  static inline ::Amazon::Runtime::Internal::Util::EncryptionWrapper* New_ctor();

  /// @brief Method Reset, addr 0x23f4c54, size 0x30, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method SetEncryptionData, addr 0x23f4bac, size 0xa8, virtual true, abstract: false, final true
  inline void SetEncryptionData(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> IV);

  constexpr ::System::Security::Cryptography::SymmetricAlgorithm*& __cordl_internal_get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::SymmetricAlgorithm*> const& __cordl_internal_get_algorithm() const;

  constexpr ::System::Security::Cryptography::ICryptoTransform*& __cordl_internal_get_encryptor();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::ICryptoTransform*> const& __cordl_internal_get_encryptor() const;

  constexpr void __cordl_internal_set_algorithm(::System::Security::Cryptography::SymmetricAlgorithm* value);

  constexpr void __cordl_internal_set_encryptor(::System::Security::Cryptography::ICryptoTransform* value);

  /// @brief Method .ctor, addr 0x23f49b0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::Amazon::Runtime::Internal::Util::IEncryptionWrapper"
  constexpr ::Amazon::Runtime::Internal::Util::IEncryptionWrapper* i___Amazon__Runtime__Internal__Util__IEncryptionWrapper() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptionWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptionWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptionWrapper(EncryptionWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptionWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptionWrapper(EncryptionWrapper const&) = delete;

  /// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::SymmetricAlgorithm* ___algorithm;

  /// @brief Field encryptor, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::ICryptoTransform* ___encryptor;

  /// @brief Field encryptionKeySize offset 0xffffffff size 0x4
  static constexpr int32_t encryptionKeySize{ static_cast<int32_t>(0x100) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Amazon::Runtime::Internal::Util::EncryptionWrapper, 0x20>, "Size mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptionWrapper, ___algorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Amazon::Runtime::Internal::Util::EncryptionWrapper, ___encryptor) == 0x18, "Offset mismatch!");

} // namespace Amazon::Runtime::Internal::Util
NEED_NO_BOX(::Amazon::Runtime::Internal::Util::EncryptionWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Amazon::Runtime::Internal::Util::EncryptionWrapper*, "Amazon.Runtime.Internal.Util", "EncryptionWrapper");
