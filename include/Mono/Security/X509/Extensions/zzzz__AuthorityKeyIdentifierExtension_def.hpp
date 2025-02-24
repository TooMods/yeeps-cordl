#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthorityKeyIdentifierExtension)
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class AuthorityKeyIdentifierExtension;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension);
// Type: Mono.Security.X509.Extensions::AuthorityKeyIdentifierExtension
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509::Extensions {
// Is value type: false
// CS Name: ::Mono.Security.X509.Extensions::AuthorityKeyIdentifierExtension*
class CORDL_TYPE AuthorityKeyIdentifierExtension : public ::Mono::Security::X509::X509Extension {
public:
  // Declarations
  __declspec(property(get = get_Identifier))::ArrayW<uint8_t, ::Array<uint8_t>*> Identifier;

  /// @brief Field aki, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_aki, put = __cordl_internal_set_aki))::ArrayW<uint8_t, ::Array<uint8_t>*> aki;

  /// @brief Method Decode, addr 0x246a0a0, size 0x118, virtual true, abstract: false, final false
  inline void Decode();

  /// @brief Method Encode, addr 0x246a1b8, size 0x124, virtual true, abstract: false, final false
  inline void Encode();

  static inline ::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension* New_ctor(::Mono::Security::X509::X509Extension* extension);

  /// @brief Method ToString, addr 0x246a350, size 0x168, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_aki() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_aki();

  constexpr void __cordl_internal_set_aki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x246a09c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::X509::X509Extension* extension);

  /// @brief Method get_Identifier, addr 0x246a2dc, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Identifier();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthorityKeyIdentifierExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthorityKeyIdentifierExtension(AuthorityKeyIdentifierExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthorityKeyIdentifierExtension(AuthorityKeyIdentifierExtension const&) = delete;

  /// @brief Field aki, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___aki;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension, ___aki) == 0x28, "Offset mismatch!");

} // namespace Mono::Security::X509::Extensions
NEED_NO_BOX(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension*, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
