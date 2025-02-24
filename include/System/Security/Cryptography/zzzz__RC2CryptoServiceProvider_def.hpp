#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2CryptoServiceProvider)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2CryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RC2CryptoServiceProvider);
// Type: System.Security.Cryptography::RC2CryptoServiceProvider
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RC2CryptoServiceProvider*
class CORDL_TYPE RC2CryptoServiceProvider : public ::System::Security::Cryptography::RC2 {
public:
  // Declarations
  __declspec(property(get = get_EffectiveKeySize, put = set_EffectiveKeySize)) int32_t EffectiveKeySize;

  __declspec(property(get = get_UseSalt, put = set_UseSalt)) bool UseSalt;

  /// @brief Field m_use40bitSalt, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_m_use40bitSalt, put = __cordl_internal_set_m_use40bitSalt)) bool m_use40bitSalt;

  /// @brief Field s_legalKeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legalKeySizes,
                             put = setStaticF_s_legalKeySizes))::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> s_legalKeySizes;

  /// @brief Method CreateDecryptor, addr 0x1d22eac, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method CreateEncryptor, addr 0x1d22dd8, size 0xd4, virtual true, abstract: false, final false
  inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method GenerateIV, addr 0x1d23028, size 0x98, virtual true, abstract: false, final false
  inline void GenerateIV();

  /// @brief Method GenerateKey, addr 0x1d22f80, size 0xa8, virtual true, abstract: false, final false
  inline void GenerateKey();

  static inline ::System::Security::Cryptography::RC2CryptoServiceProvider* New_ctor();

  constexpr bool const& __cordl_internal_get_m_use40bitSalt() const;

  constexpr bool& __cordl_internal_get_m_use40bitSalt();

  constexpr void __cordl_internal_set_m_use40bitSalt(bool value);

  /// @brief Method .ctor, addr 0x1d229b8, size 0x194, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes();

  /// @brief Method get_EffectiveKeySize, addr 0x1d22d48, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_EffectiveKeySize();

  /// @brief Method get_UseSalt, addr 0x1d22dc4, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseSalt();

  static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*, ::Array<::System::Security::Cryptography::KeySizes*>*> value);

  /// @brief Method set_EffectiveKeySize, addr 0x1d22d50, size 0x74, virtual true, abstract: false, final false
  inline void set_EffectiveKeySize(int32_t value);

  /// @brief Method set_UseSalt, addr 0x1d22dcc, size 0xc, virtual false, abstract: false, final false
  inline void set_UseSalt(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2CryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2CryptoServiceProvider(RC2CryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2CryptoServiceProvider(RC2CryptoServiceProvider const&) = delete;

  /// @brief Field m_use40bitSalt, offset: 0x48, size: 0x1, def value: None
  bool ___m_use40bitSalt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RC2CryptoServiceProvider, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2CryptoServiceProvider, ___m_use40bitSalt) == 0x48, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RC2CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RC2CryptoServiceProvider*, "System.Security.Cryptography", "RC2CryptoServiceProvider");
