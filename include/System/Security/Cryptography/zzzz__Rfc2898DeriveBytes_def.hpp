#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DeriveBytes_def.hpp"
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc2898DeriveBytes)
namespace System::Security::Cryptography {
class HMAC;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Rfc2898DeriveBytes;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Rfc2898DeriveBytes);
// Type: System.Security.Cryptography::Rfc2898DeriveBytes
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::Rfc2898DeriveBytes*
class CORDL_TYPE Rfc2898DeriveBytes : public ::System::Security::Cryptography::DeriveBytes {
public:
  // Declarations
  __declspec(property(get = get_HashAlgorithm))::System::Security::Cryptography::HashAlgorithmName HashAlgorithm;

  __declspec(property(get = get_IterationCount, put = set_IterationCount)) int32_t IterationCount;

  __declspec(property(get = get_Salt, put = set_Salt))::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  /// @brief Field <HashAlgorithm>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__HashAlgorithm_k__BackingField,
                      put = __cordl_internal_set__HashAlgorithm_k__BackingField))::System::Security::Cryptography::HashAlgorithmName _HashAlgorithm_k__BackingField;

  /// @brief Field _block, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__block, put = __cordl_internal_set__block)) uint32_t _block;

  /// @brief Field _blockSize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__blockSize, put = __cordl_internal_set__blockSize)) int32_t _blockSize;

  /// @brief Field _buffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _endIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__endIndex, put = __cordl_internal_set__endIndex)) int32_t _endIndex;

  /// @brief Field _hmac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__hmac, put = __cordl_internal_set__hmac))::System::Security::Cryptography::HMAC* _hmac;

  /// @brief Field _iterations, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__iterations, put = __cordl_internal_set__iterations)) uint32_t _iterations;

  /// @brief Field _password, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__password, put = __cordl_internal_set__password))::ArrayW<uint8_t, ::Array<uint8_t>*> _password;

  /// @brief Field _salt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__salt, put = __cordl_internal_set__salt))::ArrayW<uint8_t, ::Array<uint8_t>*> _salt;

  /// @brief Field _startIndex, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__startIndex, put = __cordl_internal_set__startIndex)) int32_t _startIndex;

  /// @brief Method CryptDeriveKey, addr 0x1ea9800, size 0x40, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CryptDeriveKey(::StringW algname, ::StringW alghashname, int32_t keySize, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV);

  /// @brief Method Dispose, addr 0x1ea90ec, size 0x88, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Func, addr 0x1ea933c, size 0x4c4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Func();

  /// @brief Method GetBytes, addr 0x1ea9174, size 0x1c8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes(int32_t cb);

  /// @brief Method Initialize, addr 0x1ea8c2c, size 0x78, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations);

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations,
                                                                               ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations);

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations,
                                                                               ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::StringW password, int32_t saltSize);

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::StringW password, int32_t saltSize, int32_t iterations);

  static inline ::System::Security::Cryptography::Rfc2898DeriveBytes* New_ctor(::StringW password, int32_t saltSize, int32_t iterations,
                                                                               ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method OpenHmac, addr 0x1ea89f0, size 0x23c, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::HMAC* OpenHmac();

  /// @brief Method Reset, addr 0x1ea9840, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::System::Security::Cryptography::HashAlgorithmName const& __cordl_internal_get__HashAlgorithm_k__BackingField() const;

  constexpr ::System::Security::Cryptography::HashAlgorithmName& __cordl_internal_get__HashAlgorithm_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__block() const;

  constexpr uint32_t& __cordl_internal_get__block();

  constexpr int32_t const& __cordl_internal_get__blockSize() const;

  constexpr int32_t& __cordl_internal_get__blockSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr int32_t const& __cordl_internal_get__endIndex() const;

  constexpr int32_t& __cordl_internal_get__endIndex();

  constexpr ::System::Security::Cryptography::HMAC*& __cordl_internal_get__hmac();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HMAC*> const& __cordl_internal_get__hmac() const;

  constexpr uint32_t const& __cordl_internal_get__iterations() const;

  constexpr uint32_t& __cordl_internal_get__iterations();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__password() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__password();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__salt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__salt();

  constexpr int32_t const& __cordl_internal_get__startIndex() const;

  constexpr int32_t& __cordl_internal_get__startIndex();

  constexpr void __cordl_internal_set__HashAlgorithm_k__BackingField(::System::Security::Cryptography::HashAlgorithmName value);

  constexpr void __cordl_internal_set__block(uint32_t value);

  constexpr void __cordl_internal_set__blockSize(int32_t value);

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__endIndex(int32_t value);

  constexpr void __cordl_internal_set__hmac(::System::Security::Cryptography::HMAC* value);

  constexpr void __cordl_internal_set__iterations(uint32_t value);

  constexpr void __cordl_internal_set__password(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__startIndex(int32_t value);

  /// @brief Method .ctor, addr 0x1ea87f4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations);

  /// @brief Method .ctor, addr 0x1ea883c, size 0x1b4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method .ctor, addr 0x1ea8ca4, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  /// @brief Method .ctor, addr 0x1ea8ce0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations);

  /// @brief Method .ctor, addr 0x1ea8d28, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterations, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method .ctor, addr 0x1ea8d8c, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, int32_t saltSize);

  /// @brief Method .ctor, addr 0x1ea8dc8, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, int32_t saltSize, int32_t iterations);

  /// @brief Method .ctor, addr 0x1ea8e10, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::StringW password, int32_t saltSize, int32_t iterations, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm);

  /// @brief Method get_HashAlgorithm, addr 0x1ea87ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::HashAlgorithmName get_HashAlgorithm();

  /// @brief Method get_IterationCount, addr 0x1ea8fa0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IterationCount();

  /// @brief Method get_Salt, addr 0x1ea9028, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Salt();

  /// @brief Method set_IterationCount, addr 0x1ea8fa8, size 0x80, virtual false, abstract: false, final false
  inline void set_IterationCount(int32_t value);

  /// @brief Method set_Salt, addr 0x1ea9034, size 0xb8, virtual false, abstract: false, final false
  inline void set_Salt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc2898DeriveBytes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rfc2898DeriveBytes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc2898DeriveBytes(Rfc2898DeriveBytes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc2898DeriveBytes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc2898DeriveBytes(Rfc2898DeriveBytes const&) = delete;

  /// @brief Field _password, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____password;

  /// @brief Field _salt, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____salt;

  /// @brief Field _iterations, offset: 0x20, size: 0x4, def value: None
  uint32_t ____iterations;

  /// @brief Field _hmac, offset: 0x28, size: 0x8, def value: None
  ::System::Security::Cryptography::HMAC* ____hmac;

  /// @brief Field _blockSize, offset: 0x30, size: 0x4, def value: None
  int32_t ____blockSize;

  /// @brief Field _buffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _block, offset: 0x40, size: 0x4, def value: None
  uint32_t ____block;

  /// @brief Field _startIndex, offset: 0x44, size: 0x4, def value: None
  int32_t ____startIndex;

  /// @brief Field _endIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ____endIndex;

  /// @brief Field <HashAlgorithm>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::System::Security::Cryptography::HashAlgorithmName ____HashAlgorithm_k__BackingField;

  /// @brief Field MinimumSaltSize offset 0xffffffff size 0x4
  static constexpr int32_t MinimumSaltSize{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Rfc2898DeriveBytes, 0x58>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____salt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____iterations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____hmac) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____blockSize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____block) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____startIndex) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____endIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::Rfc2898DeriveBytes, ____HashAlgorithm_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Rfc2898DeriveBytes);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Rfc2898DeriveBytes*, "System.Security.Cryptography", "Rfc2898DeriveBytes");
