#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DeriveBytes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PasswordDeriveBytes)
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class PasswordDeriveBytes;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::PasswordDeriveBytes);
// Type: System.Security.Cryptography::PasswordDeriveBytes
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::PasswordDeriveBytes*
class CORDL_TYPE PasswordDeriveBytes : public ::System::Security::Cryptography::DeriveBytes {
public:
  // Declarations
  __declspec(property(get = get_HashName, put = set_HashName))::StringW HashName;

  __declspec(property(get = get_IterationCount, put = set_IterationCount)) int32_t IterationCount;

  __declspec(property(get = get_Salt, put = set_Salt))::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  /// @brief Field _baseValue, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__baseValue, put = __cordl_internal_set__baseValue))::ArrayW<uint8_t, ::Array<uint8_t>*> _baseValue;

  /// @brief Field _extra, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__extra, put = __cordl_internal_set__extra))::ArrayW<uint8_t, ::Array<uint8_t>*> _extra;

  /// @brief Field _extraCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__extraCount, put = __cordl_internal_set__extraCount)) int32_t _extraCount;

  /// @brief Field _hash, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__hash, put = __cordl_internal_set__hash))::System::Security::Cryptography::HashAlgorithm* _hash;

  /// @brief Field _hashName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__hashName, put = __cordl_internal_set__hashName))::StringW _hashName;

  /// @brief Field _iterations, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__iterations, put = __cordl_internal_set__iterations)) int32_t _iterations;

  /// @brief Field _password, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password))::ArrayW<uint8_t, ::Array<uint8_t>*> _password;

  /// @brief Field _prefix, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__prefix, put = __cordl_internal_set__prefix)) int32_t _prefix;

  /// @brief Field _salt, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__salt, put = __cordl_internal_set__salt))::ArrayW<uint8_t, ::Array<uint8_t>*> _salt;

  /// @brief Method ComputeBaseValue, addr 0x1d212c8, size 0x164, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeBaseValue();

  /// @brief Method ComputeBytes, addr 0x1d2142c, size 0x4d0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeBytes(int32_t cb);

  /// @brief Method CryptDeriveKey, addr 0x1d2198c, size 0xac, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CryptDeriveKey(::StringW algname, ::StringW alghashname, int32_t keySize, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method Dispose, addr 0x1d21908, size 0x84, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetBytes, addr 0x1d2113c, size 0x18c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int32_t cb);

  /// @brief Method HashPrefix, addr 0x1d21a38, size 0x1f4, virtual false, abstract: false, final false
  inline void HashPrefix(::System::Security::Cryptography::CryptoStream* cs);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt,
                                                                                ::System::Security::Cryptography::CspParameters* cspParams);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::StringW hashName,
                                                                                int32_t iterations);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::StringW hashName,
                                                                                int32_t iterations, ::System::Security::Cryptography::CspParameters* cspParams);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt,
                                                                                ::System::Security::Cryptography::CspParameters* cspParams);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt, ::StringW strHashName, int32_t iterations);

  static inline ::System::Security::Cryptography::PasswordDeriveBytes* New_ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt, ::StringW strHashName, int32_t iterations,
                                                                                ::System::Security::Cryptography::CspParameters* cspParams);

  /// @brief Method Reset, addr 0x1d218fc, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__baseValue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__baseValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__extra() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__extra();

  constexpr int32_t const& __cordl_internal_get__extraCount() const;

  constexpr int32_t& __cordl_internal_get__extraCount();

  constexpr ::System::Security::Cryptography::HashAlgorithm*& __cordl_internal_get__hash();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> const& __cordl_internal_get__hash() const;

  constexpr ::StringW const& __cordl_internal_get__hashName() const;

  constexpr ::StringW& __cordl_internal_get__hashName();

  constexpr int32_t const& __cordl_internal_get__iterations() const;

  constexpr int32_t& __cordl_internal_get__iterations();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__password();

  constexpr int32_t const& __cordl_internal_get__prefix() const;

  constexpr int32_t& __cordl_internal_get__prefix();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__salt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__salt();

  constexpr void __cordl_internal_set__baseValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__extra(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__extraCount(int32_t value);

  constexpr void __cordl_internal_set__hash(::System::Security::Cryptography::HashAlgorithm* value);

  constexpr void __cordl_internal_set__hashName(::StringW value);

  constexpr void __cordl_internal_set__iterations(int32_t value);

  constexpr void __cordl_internal_set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__prefix(int32_t value);

  constexpr void __cordl_internal_set__salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x1d2096c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  /// @brief Method .ctor, addr 0x1d209fc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::System::Security::Cryptography::CspParameters* cspParams);

  /// @brief Method .ctor, addr 0x1d20bb4, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::StringW hashName, int32_t iterations);

  /// @brief Method .ctor, addr 0x1d20c58, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::StringW hashName, int32_t iterations,
                    ::System::Security::Cryptography::CspParameters* cspParams);

  /// @brief Method .ctor, addr 0x1d20868, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt);

  /// @brief Method .ctor, addr 0x1d208f8, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt, ::System::Security::Cryptography::CspParameters* cspParams);

  /// @brief Method .ctor, addr 0x1d20a60, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt, ::StringW strHashName, int32_t iterations);

  /// @brief Method .ctor, addr 0x1d20b08, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::StringW strPassword, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSalt, ::StringW strHashName, int32_t iterations, ::System::Security::Cryptography::CspParameters* cspParams);

  /// @brief Method get_HashName, addr 0x1d210b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HashName();

  /// @brief Method get_IterationCount, addr 0x1d210c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IterationCount();

  /// @brief Method get_Salt, addr 0x1d210c8, size 0x74, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Salt();

  /// @brief Method set_HashName, addr 0x1d20f34, size 0x184, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

  /// @brief Method set_IterationCount, addr 0x1d20cb8, size 0x124, virtual false, abstract: false, final false
  inline void set_IterationCount(int32_t value);

  /// @brief Method set_Salt, addr 0x1d20ddc, size 0x158, virtual false, abstract: false, final false
  inline void set_Salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PasswordDeriveBytes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PasswordDeriveBytes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PasswordDeriveBytes(PasswordDeriveBytes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PasswordDeriveBytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PasswordDeriveBytes(PasswordDeriveBytes const&) = delete;

  /// @brief Field _extraCount, offset: 0x10, size: 0x4, def value: None
  int32_t ____extraCount;

  /// @brief Field _prefix, offset: 0x14, size: 0x4, def value: None
  int32_t ____prefix;

  /// @brief Field _iterations, offset: 0x18, size: 0x4, def value: None
  int32_t ____iterations;

  /// @brief Field _baseValue, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____baseValue;

  /// @brief Field _extra, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____extra;

  /// @brief Field _salt, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____salt;

  /// @brief Field _hashName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____hashName;

  /// @brief Field _password, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____password;

  /// @brief Field _hash, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::HashAlgorithm* ____hash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::PasswordDeriveBytes, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____extraCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____prefix) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____iterations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____baseValue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____extra) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____salt) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____hashName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____password) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PasswordDeriveBytes, ____hash) == 0x48, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::PasswordDeriveBytes);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::PasswordDeriveBytes*, "System.Security.Cryptography", "PasswordDeriveBytes");
