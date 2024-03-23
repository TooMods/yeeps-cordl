#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricKeyExchangeDeformatter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSAOAEPKeyExchangeDeformatter)
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSAOAEPKeyExchangeDeformatter;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter);
// Type: System.Security.Cryptography::RSAOAEPKeyExchangeDeformatter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 26, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RSAOAEPKeyExchangeDeformatter*
class CORDL_TYPE RSAOAEPKeyExchangeDeformatter : public ::System::Security::Cryptography::AsymmetricKeyExchangeDeformatter {
public:
  // Declarations
  __declspec(property(get = get_OverridesDecrypt)) bool OverridesDecrypt;

  __declspec(property(get = get_Parameters, put = set_Parameters))::StringW Parameters;

  /// @brief Field _rsaKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rsaKey, put = __cordl_internal_set__rsaKey))::System::Security::Cryptography::RSA* _rsaKey;

  /// @brief Field _rsaOverridesDecrypt, offset 0x18, size 0x2
  __declspec(property(get = __cordl_internal_get__rsaOverridesDecrypt, put = __cordl_internal_set__rsaOverridesDecrypt))::System::Nullable_1<bool> _rsaOverridesDecrypt;

  /// @brief Method DecryptKeyExchange, addr 0x1c85e18, size 0x198, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> DecryptKeyExchange(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbData);

  static inline ::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter* New_ctor();

  static inline ::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter* New_ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method SetKey, addr 0x1c86270, size 0xf0, virtual true, abstract: false, final false
  inline void SetKey(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  constexpr ::System::Security::Cryptography::RSA*& __cordl_internal_get__rsaKey();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RSA*> const& __cordl_internal_get__rsaKey() const;

  constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__rsaOverridesDecrypt() const;

  constexpr ::System::Nullable_1<bool>& __cordl_internal_get__rsaOverridesDecrypt();

  constexpr void __cordl_internal_set__rsaKey(::System::Security::Cryptography::RSA* value);

  constexpr void __cordl_internal_set__rsaOverridesDecrypt(::System::Nullable_1<bool> value);

  /// @brief Method .ctor, addr 0x1c85e04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1c84704, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::AsymmetricAlgorithm* key);

  /// @brief Method get_OverridesDecrypt, addr 0x1c85fb0, size 0x1f0, virtual false, abstract: false, final false
  inline bool get_OverridesDecrypt();

  /// @brief Method get_Parameters, addr 0x1c85e0c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Parameters();

  /// @brief Method set_Parameters, addr 0x1c85e14, size 0x4, virtual true, abstract: false, final false
  inline void set_Parameters(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RSAOAEPKeyExchangeDeformatter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RSAOAEPKeyExchangeDeformatter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RSAOAEPKeyExchangeDeformatter(RSAOAEPKeyExchangeDeformatter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RSAOAEPKeyExchangeDeformatter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RSAOAEPKeyExchangeDeformatter(RSAOAEPKeyExchangeDeformatter const&) = delete;

  /// @brief Field _rsaKey, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RSA* ____rsaKey;

  /// @brief Field _rsaOverridesDecrypt, offset: 0x18, size: 0x2, def value: None
  ::System::Nullable_1<bool> ____rsaOverridesDecrypt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter, ____rsaKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter, ____rsaOverridesDecrypt) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RSAOAEPKeyExchangeDeformatter*, "System.Security.Cryptography", "RSAOAEPKeyExchangeDeformatter");
