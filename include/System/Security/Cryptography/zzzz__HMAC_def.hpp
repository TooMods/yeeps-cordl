#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMAC)
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class HMAC;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMAC);
// Type: System.Security.Cryptography::HMAC
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::HMAC*
class CORDL_TYPE HMAC : public ::System::Security::Cryptography::KeyedHashAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_BlockSizeValue, put = set_BlockSizeValue)) int32_t BlockSizeValue;

  __declspec(property(get = get_HashName, put = set_HashName))::StringW HashName;

  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  /// @brief Field blockSizeValue, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSizeValue, put = __cordl_internal_set_blockSizeValue)) int32_t blockSizeValue;

  /// @brief Field m_hash1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_hash1, put = __cordl_internal_set_m_hash1))::System::Security::Cryptography::HashAlgorithm* m_hash1;

  /// @brief Field m_hash2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_hash2, put = __cordl_internal_set_m_hash2))::System::Security::Cryptography::HashAlgorithm* m_hash2;

  /// @brief Field m_hashName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_hashName, put = __cordl_internal_set_m_hashName))::StringW m_hashName;

  /// @brief Field m_hashing, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_m_hashing, put = __cordl_internal_set_m_hashing)) bool m_hashing;

  /// @brief Field m_inner, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_inner, put = __cordl_internal_set_m_inner))::ArrayW<uint8_t, ::Array<uint8_t>*> m_inner;

  /// @brief Field m_outer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_outer, put = __cordl_internal_set_m_outer))::ArrayW<uint8_t, ::Array<uint8_t>*> m_outer;

  /// @brief Method Create, addr 0x1d1e7b4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HMAC* Create();

  /// @brief Method Create, addr 0x1d1e874, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HMAC* Create(::StringW algorithmName);

  /// @brief Method Dispose, addr 0x1d1eb10, size 0x15c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetHashAlgorithmWithFipsFallback, addr 0x1d1eca4, size 0x178, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm*
  GetHashAlgorithmWithFipsFallback(::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>* createStandardHashAlgorithmCallback,
                                   ::System::Func_1<::System::Security::Cryptography::HashAlgorithm*>* createFipsHashAlgorithmCallback);

  /// @brief Method HashCore, addr 0x1d1e960, size 0x80, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ib, int32_t cb);

  /// @brief Method HashFinal, addr 0x1d1e9e0, size 0x130, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x1d1e918, size 0x48, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeKey, addr 0x1d1e560, size 0xd0, virtual false, abstract: false, final false
  inline void InitializeKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::System::Security::Cryptography::HMAC* New_ctor();

  /// @brief Method UpdateIOPadBuffers, addr 0x1d1e3fc, size 0x164, virtual false, abstract: false, final false
  inline void UpdateIOPadBuffers();

  constexpr int32_t const& __cordl_internal_get_blockSizeValue() const;

  constexpr int32_t& __cordl_internal_get_blockSizeValue();

  constexpr ::System::Security::Cryptography::HashAlgorithm*& __cordl_internal_get_m_hash1();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> const& __cordl_internal_get_m_hash1() const;

  constexpr ::System::Security::Cryptography::HashAlgorithm*& __cordl_internal_get_m_hash2();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> const& __cordl_internal_get_m_hash2() const;

  constexpr ::StringW const& __cordl_internal_get_m_hashName() const;

  constexpr ::StringW& __cordl_internal_get_m_hashName();

  constexpr bool const& __cordl_internal_get_m_hashing() const;

  constexpr bool& __cordl_internal_get_m_hashing();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_inner() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_inner();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_outer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_outer();

  constexpr void __cordl_internal_set_blockSizeValue(int32_t value);

  constexpr void __cordl_internal_set_m_hash1(::System::Security::Cryptography::HashAlgorithm* value);

  constexpr void __cordl_internal_set_m_hash2(::System::Security::Cryptography::HashAlgorithm* value);

  constexpr void __cordl_internal_set_m_hashName(::StringW value);

  constexpr void __cordl_internal_set_m_hashing(bool value);

  constexpr void __cordl_internal_set_m_inner(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_outer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x1d1ee1c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BlockSizeValue, addr 0x1d1e3ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_BlockSizeValue();

  /// @brief Method get_HashName, addr 0x1d1e718, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_HashName();

  /// @brief Method get_Key, addr 0x1d1e630, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method set_BlockSizeValue, addr 0x1d1e3f4, size 0x8, virtual false, abstract: false, final false
  inline void set_BlockSizeValue(int32_t value);

  /// @brief Method set_HashName, addr 0x1d1e720, size 0x94, virtual false, abstract: false, final false
  inline void set_HashName(::StringW value);

  /// @brief Method set_Key, addr 0x1d1e6a8, size 0x70, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMAC();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMAC", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMAC(HMAC&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMAC", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMAC(HMAC const&) = delete;

  /// @brief Field blockSizeValue, offset: 0x30, size: 0x4, def value: None
  int32_t ___blockSizeValue;

  /// @brief Field m_hashName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_hashName;

  /// @brief Field m_hash1, offset: 0x40, size: 0x8, def value: None
  ::System::Security::Cryptography::HashAlgorithm* ___m_hash1;

  /// @brief Field m_hash2, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::HashAlgorithm* ___m_hash2;

  /// @brief Field m_inner, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_inner;

  /// @brief Field m_outer, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_outer;

  /// @brief Field m_hashing, offset: 0x60, size: 0x1, def value: None
  bool ___m_hashing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMAC, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMAC, ___blockSizeValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMAC, ___m_hashName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMAC, ___m_hash1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMAC, ___m_hash2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMAC, ___m_inner) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMAC, ___m_outer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMAC, ___m_hashing) == 0x60, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMAC);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMAC*, "System.Security.Cryptography", "HMAC");
