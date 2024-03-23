#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricKeyExchangeDeformatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricKeyExchangeDeformatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter);
// Type: System.Security.Cryptography::AsymmetricKeyExchangeDeformatter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::AsymmetricKeyExchangeDeformatter*
class CORDL_TYPE AsymmetricKeyExchangeDeformatter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Parameters, put = set_Parameters))::StringW Parameters;

  /// @brief Method DecryptKeyExchange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptKeyExchange(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb);

  static inline ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter* New_ctor();

  /// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method .ctor, addr 0x1d194fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Parameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Parameters();

  /// @brief Method set_Parameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_Parameters(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsymmetricKeyExchangeDeformatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyExchangeDeformatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsymmetricKeyExchangeDeformatter(AsymmetricKeyExchangeDeformatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsymmetricKeyExchangeDeformatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsymmetricKeyExchangeDeformatter(AsymmetricKeyExchangeDeformatter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter*, "System.Security.Cryptography", "AsymmetricKeyExchangeDeformatter");
