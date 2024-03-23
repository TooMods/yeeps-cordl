#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricSignatureFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricSignatureFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricSignatureFormatter);
// Type: System.Security.Cryptography::AsymmetricSignatureFormatter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::AsymmetricSignatureFormatter*
class CORDL_TYPE AsymmetricSignatureFormatter : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateSignature, addr 0x1d195d4, size 0xb0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignature(::System::Security::Cryptography::HashAlgorithm* hash);

  /// @brief Method CreateSignature, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateSignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash);

  static inline ::System::Security::Cryptography::AsymmetricSignatureFormatter* New_ctor();

  /// @brief Method SetHashAlgorithm, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetHashAlgorithm(::StringW strName);

  /// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method .ctor, addr 0x1d195cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricSignatureFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricSignatureFormatter(AsymmetricSignatureFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricSignatureFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricSignatureFormatter(AsymmetricSignatureFormatter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricSignatureFormatter, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricSignatureFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricSignatureFormatter*, "System.Security.Cryptography", "AsymmetricSignatureFormatter");
