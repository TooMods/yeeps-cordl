#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Constants)
// Forward declare root types
namespace System::Security::Cryptography {
class Constants;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Constants);
// Type: System.Security.Cryptography::Constants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::Constants*
class CORDL_TYPE Constants : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Constants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Constants(Constants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Constants(Constants const&) = delete;

  /// @brief Field ALG_CLASS_DATA_ENCRYPT offset 0xffffffff size 0x4
  static constexpr int32_t ALG_CLASS_DATA_ENCRYPT{ static_cast<int32_t>(0x6000) };

  /// @brief Field ALG_CLASS_HASH offset 0xffffffff size 0x4
  static constexpr int32_t ALG_CLASS_HASH{ static_cast<int32_t>(0x8000) };

  /// @brief Field ALG_CLASS_KEY_EXCHANGE offset 0xffffffff size 0x4
  static constexpr int32_t ALG_CLASS_KEY_EXCHANGE{ static_cast<int32_t>(0xa000) };

  /// @brief Field ALG_CLASS_SIGNATURE offset 0xffffffff size 0x4
  static constexpr int32_t ALG_CLASS_SIGNATURE{ static_cast<int32_t>(0x2000) };

  /// @brief Field ALG_TYPE_ANY offset 0xffffffff size 0x4
  static constexpr int32_t ALG_TYPE_ANY{ static_cast<int32_t>(0x0) };

  /// @brief Field ALG_TYPE_BLOCK offset 0xffffffff size 0x4
  static constexpr int32_t ALG_TYPE_BLOCK{ static_cast<int32_t>(0x600) };

  /// @brief Field ALG_TYPE_DSS offset 0xffffffff size 0x4
  static constexpr int32_t ALG_TYPE_DSS{ static_cast<int32_t>(0x200) };

  /// @brief Field ALG_TYPE_RSA offset 0xffffffff size 0x4
  static constexpr int32_t ALG_TYPE_RSA{ static_cast<int32_t>(0x400) };

  /// @brief Field ALG_TYPE_STREAM offset 0xffffffff size 0x4
  static constexpr int32_t ALG_TYPE_STREAM{ static_cast<int32_t>(0x800) };

  /// @brief Field AT_KEYEXCHANGE offset 0xffffffff size 0x4
  static constexpr int32_t AT_KEYEXCHANGE{ static_cast<int32_t>(0x1) };

  /// @brief Field AT_SIGNATURE offset 0xffffffff size 0x4
  static constexpr int32_t AT_SIGNATURE{ static_cast<int32_t>(0x2) };

  /// @brief Field CALG_3DES offset 0xffffffff size 0x4
  static constexpr int32_t CALG_3DES{ static_cast<int32_t>(0x6603) };

  /// @brief Field CALG_3DES_112 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_3DES_112{ static_cast<int32_t>(0x6609) };

  /// @brief Field CALG_AES_128 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_AES_128{ static_cast<int32_t>(0x660e) };

  /// @brief Field CALG_AES_192 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_AES_192{ static_cast<int32_t>(0x660f) };

  /// @brief Field CALG_AES_256 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_AES_256{ static_cast<int32_t>(0x6610) };

  /// @brief Field CALG_DES offset 0xffffffff size 0x4
  static constexpr int32_t CALG_DES{ static_cast<int32_t>(0x6601) };

  /// @brief Field CALG_DSS_SIGN offset 0xffffffff size 0x4
  static constexpr int32_t CALG_DSS_SIGN{ static_cast<int32_t>(0x2200) };

  /// @brief Field CALG_MD5 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_MD5{ static_cast<int32_t>(0x8003) };

  /// @brief Field CALG_RC2 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_RC2{ static_cast<int32_t>(0x6602) };

  /// @brief Field CALG_RC4 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_RC4{ static_cast<int32_t>(0x6801) };

  /// @brief Field CALG_RSA_KEYX offset 0xffffffff size 0x4
  static constexpr int32_t CALG_RSA_KEYX{ static_cast<int32_t>(0xa400) };

  /// @brief Field CALG_RSA_SIGN offset 0xffffffff size 0x4
  static constexpr int32_t CALG_RSA_SIGN{ static_cast<int32_t>(0x2400) };

  /// @brief Field CALG_SHA1 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_SHA1{ static_cast<int32_t>(0x8004) };

  /// @brief Field CALG_SHA_256 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_SHA_256{ static_cast<int32_t>(0x800c) };

  /// @brief Field CALG_SHA_384 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_SHA_384{ static_cast<int32_t>(0x800d) };

  /// @brief Field CALG_SHA_512 offset 0xffffffff size 0x4
  static constexpr int32_t CALG_SHA_512{ static_cast<int32_t>(0x800e) };

  /// @brief Field CLR_ACCESSIBLE offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_ACCESSIBLE{ static_cast<uint32_t>(0x9080706u) };

  /// @brief Field CLR_ALGID offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_ALGID{ static_cast<uint32_t>(0x320b0a09u) };

  /// @brief Field CLR_EXPORTABLE offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_EXPORTABLE{ static_cast<uint32_t>(0x6050403u) };

  /// @brief Field CLR_HARDWARE offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_HARDWARE{ static_cast<uint32_t>(0x8070605u) };

  /// @brief Field CLR_KEYLEN offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_KEYLEN{ static_cast<uint32_t>(0x4030201u) };

  /// @brief Field CLR_PP_CLIENT_HWND offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_PP_CLIENT_HWND{ static_cast<uint32_t>(0x31320b0au) };

  /// @brief Field CLR_PP_PIN offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_PP_PIN{ static_cast<uint32_t>(0x2e31320bu) };

  /// @brief Field CLR_PROTECTED offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_PROTECTED{ static_cast<uint32_t>(0xa090807u) };

  /// @brief Field CLR_PUBLICKEYONLY offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_PUBLICKEYONLY{ static_cast<uint32_t>(0x5040302u) };

  /// @brief Field CLR_REMOVABLE offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_REMOVABLE{ static_cast<uint32_t>(0x7060504u) };

  /// @brief Field CLR_UNIQUE_CONTAINER offset 0xffffffff size 0x4
  static constexpr uint32_t CLR_UNIQUE_CONTAINER{ static_cast<uint32_t>(0xb0a0908u) };

  /// @brief Field CRYPT_DELETEKEYSET offset 0xffffffff size 0x4
  static constexpr uint32_t CRYPT_DELETEKEYSET{ static_cast<uint32_t>(0x1402010u) };

  /// @brief Field CRYPT_EXPORTABLE offset 0xffffffff size 0x4
  static constexpr uint32_t CRYPT_EXPORTABLE{ static_cast<uint32_t>(0x3020101u) };

  /// @brief Field CRYPT_MACHINE_KEYSET offset 0xffffffff size 0x4
  static constexpr uint32_t CRYPT_MACHINE_KEYSET{ static_cast<uint32_t>(0x1014020u) };

  /// @brief Field CRYPT_NEWKEYSET offset 0xffffffff size 0x4
  static constexpr uint32_t CRYPT_NEWKEYSET{ static_cast<uint32_t>(0x40201008u) };

  /// @brief Field CRYPT_OAEP offset 0xffffffff size 0x4
  static constexpr int32_t CRYPT_OAEP{ static_cast<int32_t>(0x40) };

  /// @brief Field CRYPT_SILENT offset 0xffffffff size 0x4
  static constexpr uint32_t CRYPT_SILENT{ static_cast<uint32_t>(0x2010140u) };

  /// @brief Field CRYPT_VERIFYCONTEXT offset 0xffffffff size 0x4
  static constexpr uint32_t CRYPT_VERIFYCONTEXT{ static_cast<uint32_t>(0xf0u) };

  /// @brief Field KP_EFFECTIVE_KEYLEN offset 0xffffffff size 0x4
  static constexpr int32_t KP_EFFECTIVE_KEYLEN{ static_cast<int32_t>(0x13) };

  /// @brief Field KP_IV offset 0xffffffff size 0x4
  static constexpr int32_t KP_IV{ static_cast<int32_t>(0x1) };

  /// @brief Field KP_MODE offset 0xffffffff size 0x4
  static constexpr int32_t KP_MODE{ static_cast<int32_t>(0x4) };

  /// @brief Field KP_MODE_BITS offset 0xffffffff size 0x4
  static constexpr int32_t KP_MODE_BITS{ static_cast<int32_t>(0x5) };

  /// @brief Field NTE_BAD_KEYSET offset 0xffffffff size 0x4
  static constexpr int32_t NTE_BAD_KEYSET{ static_cast<int32_t>(0x80090016) };

  /// @brief Field NTE_FILENOTFOUND offset 0xffffffff size 0x4
  static constexpr int32_t NTE_FILENOTFOUND{ static_cast<int32_t>(0x80070002) };

  /// @brief Field NTE_KEYSET_NOT_DEF offset 0xffffffff size 0x4
  static constexpr int32_t NTE_KEYSET_NOT_DEF{ static_cast<int32_t>(0x80090019) };

  /// @brief Field NTE_NO_KEY offset 0xffffffff size 0x4
  static constexpr int32_t NTE_NO_KEY{ static_cast<int32_t>(0x8009000d) };

  /// @brief Field OID_OIWSEC_RIPEMD160 offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_OIWSEC_RIPEMD160{ u"1.3.36.3.2.1" };

  /// @brief Field OID_OIWSEC_SHA1 offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_OIWSEC_SHA1{ u"1.3.14.3.2.26" };

  /// @brief Field OID_OIWSEC_SHA256 offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_OIWSEC_SHA256{ u"2.16.840.1.101.3.4.2.1" };

  /// @brief Field OID_OIWSEC_SHA384 offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_OIWSEC_SHA384{ u"2.16.840.1.101.3.4.2.2" };

  /// @brief Field OID_OIWSEC_SHA512 offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_OIWSEC_SHA512{ u"2.16.840.1.101.3.4.2.3" };

  /// @brief Field OID_OIWSEC_desCBC offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_OIWSEC_desCBC{ u"1.3.14.3.2.7" };

  /// @brief Field OID_RSA_DES_EDE3_CBC offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_RSA_DES_EDE3_CBC{ u"1.2.840.113549.3.7" };

  /// @brief Field OID_RSA_MD5 offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_RSA_MD5{ u"1.2.840.113549.2.5" };

  /// @brief Field OID_RSA_RC2CBC offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_RSA_RC2CBC{ u"1.2.840.113549.3.2" };

  /// @brief Field OID_RSA_SMIMEalgCMS3DESwrap offset 0xffffffff size 0x8
  static constexpr ::ConstString OID_RSA_SMIMEalgCMS3DESwrap{ u"1.2.840.113549.1.9.16.3.6" };

  /// @brief Field PRIVATEKEYBLOB offset 0xffffffff size 0x4
  static constexpr int32_t PRIVATEKEYBLOB{ static_cast<int32_t>(0x7) };

  /// @brief Field PROV_DSS_DH offset 0xffffffff size 0x4
  static constexpr int32_t PROV_DSS_DH{ static_cast<int32_t>(0xd) };

  /// @brief Field PROV_RSA_AES offset 0xffffffff size 0x4
  static constexpr int32_t PROV_RSA_AES{ static_cast<int32_t>(0x18) };

  /// @brief Field PROV_RSA_FULL offset 0xffffffff size 0x4
  static constexpr int32_t PROV_RSA_FULL{ static_cast<int32_t>(0x1) };

  /// @brief Field PUBLICKEYBLOB offset 0xffffffff size 0x4
  static constexpr int32_t PUBLICKEYBLOB{ static_cast<int32_t>(0x6) };

  /// @brief Field S_OK offset 0xffffffff size 0x4
  static constexpr int32_t S_OK{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Constants, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Constants);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Constants*, "System.Security.Cryptography", "Constants");
