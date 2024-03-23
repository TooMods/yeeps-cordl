#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAPKCS1SignatureFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAPKCS1SignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAPKCS1SignatureFormatter);
// Type: System.Security.Cryptography::RSAPKCS1SignatureFormatter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RSAPKCS1SignatureFormatter*
class CORDL_TYPE RSAPKCS1SignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
  // Declarations
  /// @brief Field hash, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hash, put = __cordl_internal_set_hash))::StringW hash;

  /// @brief Field rsa, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rsa, put = __cordl_internal_set_rsa))::System::Security::Cryptography::RSA* rsa;

  /// @brief Method CreateSignature, addr 0x196c48c, size 0x128, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash);

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* New_ctor();

  static inline ::System::Security::Cryptography::RSAPKCS1SignatureFormatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method SetHashAlgorithm, addr 0x196c5b4, size 0x60, virtual true, abstract: false, final false
  inline void SetHashAlgorithm(::StringW strName);

  /// @brief Method SetKey, addr 0x196c614, size 0xec, virtual true, abstract: false, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  constexpr ::StringW const& __cordl_internal_get_hash() const;

  constexpr ::StringW& __cordl_internal_get_hash();

  constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get_rsa();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> const& __cordl_internal_get_rsa() const;

  constexpr void __cordl_internal_set_hash(::StringW value);

  constexpr void __cordl_internal_set_rsa(::System::Security::Cryptography::RSA* value);

  /// @brief Method .ctor, addr 0x196c450, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x196c458, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAPKCS1SignatureFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAPKCS1SignatureFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAPKCS1SignatureFormatter(RSAPKCS1SignatureFormatter const&) = delete;

  /// @brief Field rsa, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RSA* ___rsa;

  /// @brief Field hash, offset: 0x18, size: 0x8, def value: None
  ::StringW ___hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAPKCS1SignatureFormatter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureFormatter, ___rsa) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAPKCS1SignatureFormatter, ___hash) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAPKCS1SignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAPKCS1SignatureFormatter*, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
