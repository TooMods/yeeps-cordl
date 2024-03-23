#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricKeyExchangeFormatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricKeyExchangeFormatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricKeyExchangeFormatter);
// Type: System.Security.Cryptography::AsymmetricKeyExchangeFormatter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::AsymmetricKeyExchangeFormatter*
class CORDL_TYPE AsymmetricKeyExchangeFormatter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Parameters))::StringW Parameters;

  /// @brief Method CreateKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateKeyExchange(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method CreateKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CreateKeyExchange(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::System::Type* symAlgType);

  static inline ::System::Security::Cryptography::AsymmetricKeyExchangeFormatter* New_ctor();

  /// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method .ctor, addr 0x1d19504, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Parameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Parameters();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricKeyExchangeFormatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyExchangeFormatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricKeyExchangeFormatter(AsymmetricKeyExchangeFormatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyExchangeFormatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricKeyExchangeFormatter(AsymmetricKeyExchangeFormatter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricKeyExchangeFormatter, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricKeyExchangeFormatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricKeyExchangeFormatter*, "System.Security.Cryptography", "AsymmetricKeyExchangeFormatter");
