#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Extension)
namespace Mono::Security {
class ASN1;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Extension;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509Extension);
// Type: Mono.Security.X509::X509Extension
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: ::Mono.Security.X509::X509Extension*
class CORDL_TYPE X509Extension : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Critical)) bool Critical;

  __declspec(property(get = get_Oid))::StringW Oid;

  __declspec(property(get = get_Value))::Mono::Security::ASN1* Value;

  /// @brief Field extnCritical, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_extnCritical, put = __cordl_internal_set_extnCritical)) bool extnCritical;

  /// @brief Field extnOid, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_extnOid, put = __cordl_internal_set_extnOid))::StringW extnOid;

  /// @brief Field extnValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_extnValue, put = __cordl_internal_set_extnValue))::Mono::Security::ASN1* extnValue;

  /// @brief Method Decode, addr 0x2468d10, size 0x4, virtual true, abstract: false, final false
  inline void Decode();

  /// @brief Method Encode, addr 0x2468d14, size 0x4, virtual true, abstract: false, final false
  inline void Encode();

  /// @brief Method Equals, addr 0x2468d28, size 0x144, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2468e6c, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Mono::Security::X509::X509Extension* New_ctor(::Mono::Security::ASN1* asn1);

  static inline ::Mono::Security::X509::X509Extension* New_ctor(::Mono::Security::X509::X509Extension* extension);

  /// @brief Method ToString, addr 0x24690b4, size 0xd8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method WriteLine, addr 0x2468e8c, size 0x228, virtual false, abstract: false, final false
  inline void WriteLine(::System::Text::StringBuilder* sb, int32_t n, int32_t pos);

  constexpr bool const& __cordl_internal_get_extnCritical() const;

  constexpr bool& __cordl_internal_get_extnCritical();

  constexpr ::StringW const& __cordl_internal_get_extnOid() const;

  constexpr ::StringW& __cordl_internal_get_extnOid();

  constexpr ::Mono::Security::ASN1*& __cordl_internal_get_extnValue();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::ASN1*> const& __cordl_internal_get_extnValue() const;

  constexpr void __cordl_internal_set_extnCritical(bool value);

  constexpr void __cordl_internal_set_extnOid(::StringW value);

  constexpr void __cordl_internal_set_extnValue(::Mono::Security::ASN1* value);

  /// @brief Method .ctor, addr 0x24688cc, size 0x2cc, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::ASN1* asn1);

  /// @brief Method .ctor, addr 0x2468b98, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::X509::X509Extension* extension);

  /// @brief Method get_Critical, addr 0x2468d20, size 0x8, virtual false, abstract: false, final false
  inline bool get_Critical();

  /// @brief Method get_Oid, addr 0x2468d18, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Oid();

  /// @brief Method get_Value, addr 0x2468ce4, size 0x2c, virtual false, abstract: false, final false
  inline ::Mono::Security::ASN1* get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Extension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Extension(X509Extension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Extension(X509Extension const&) = delete;

  /// @brief Field extnOid, offset: 0x10, size: 0x8, def value: None
  ::StringW ___extnOid;

  /// @brief Field extnCritical, offset: 0x18, size: 0x1, def value: None
  bool ___extnCritical;

  /// @brief Field extnValue, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::ASN1* ___extnValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509Extension, 0x28>, "Size mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Extension, ___extnOid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Extension, ___extnCritical) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Extension, ___extnValue) == 0x20, "Offset mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Extension*, "Mono.Security.X509", "X509Extension");
