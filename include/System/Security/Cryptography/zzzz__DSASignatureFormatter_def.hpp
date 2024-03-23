#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricSignatureFormatter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSASignatureFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class DSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSASignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSASignatureFormatter);
// Type: System.Security.Cryptography::DSASignatureFormatter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::DSASignatureFormatter*
class CORDL_TYPE DSASignatureFormatter : public ::System::Security::Cryptography::AsymmetricSignatureFormatter {
public:
  // Declarations
  /// @brief Field _dsaKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__dsaKey, put = __cordl_internal_set__dsaKey))::System::Security::Cryptography::DSA* _dsaKey;

  /// @brief Field _oid, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__oid, put = __cordl_internal_set__oid))::StringW _oid;

  /// @brief Method CreateSignature, addr 0x1d1e30c, size 0xe0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash);

  static inline ::System::Security::Cryptography::DSASignatureFormatter* New_ctor();

  static inline ::System::Security::Cryptography::DSASignatureFormatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method SetHashAlgorithm, addr 0x1d1e240, size 0xcc, virtual true, abstract: false, final false
  inline void SetHashAlgorithm(::StringW strName);

  /// @brief Method SetKey, addr 0x1d1e154, size 0xec, virtual true, abstract: false, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  constexpr ::System::Security::Cryptography::DSA*& __cordl_internal_get__dsaKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DSA*> const& __cordl_internal_get__dsaKey() const;

  constexpr ::StringW const& __cordl_internal_get__oid() const;

  constexpr ::StringW& __cordl_internal_get__oid();

  constexpr void __cordl_internal_set__dsaKey(::System::Security::Cryptography::DSA* value);

  constexpr void __cordl_internal_set__oid(::StringW value);

  /// @brief Method .ctor, addr 0x1d1dfe0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1d1e060, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSASignatureFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSASignatureFormatter(DSASignatureFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSASignatureFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSASignatureFormatter(DSASignatureFormatter const&) = delete;

  /// @brief Field _dsaKey, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::DSA* ____dsaKey;

  /// @brief Field _oid, offset: 0x18, size: 0x8, def value: None
  ::StringW ____oid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSASignatureFormatter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSASignatureFormatter, ____dsaKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DSASignatureFormatter, ____oid) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSASignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSASignatureFormatter*, "System.Security.Cryptography", "DSASignatureFormatter");
