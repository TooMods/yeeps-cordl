#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HMAC_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMACSHA384)
// Forward declare root types
namespace System::Security::Cryptography {
class HMACSHA384;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMACSHA384);
// Type: System.Security.Cryptography::HMACSHA384
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::HMACSHA384*
class CORDL_TYPE HMACSHA384 : public ::System::Security::Cryptography::HMAC {
public:
  // Declarations
  __declspec(property(get = get_BlockSize)) int32_t BlockSize;

  __declspec(property(get = get_ProduceLegacyHmacValues, put = set_ProduceLegacyHmacValues)) bool ProduceLegacyHmacValues;

  /// @brief Field m_useLegacyBlockSize, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_m_useLegacyBlockSize, put = __cordl_internal_set_m_useLegacyBlockSize)) bool m_useLegacyBlockSize;

  static inline ::System::Security::Cryptography::HMACSHA384* New_ctor();

  static inline ::System::Security::Cryptography::HMACSHA384* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  constexpr bool const& __cordl_internal_get_m_useLegacyBlockSize() const;

  constexpr bool& __cordl_internal_get_m_useLegacyBlockSize();

  constexpr void __cordl_internal_set_m_useLegacyBlockSize(bool value);

  /// @brief Method .ctor, addr 0x1d1f3a4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1d1f408, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method get_BlockSize, addr 0x1d1f51c, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_BlockSize();

  /// @brief Method get_ProduceLegacyHmacValues, addr 0x1d1f534, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProduceLegacyHmacValues();

  /// @brief Method set_ProduceLegacyHmacValues, addr 0x1d1f53c, size 0x24, virtual false, abstract: false, final false
  inline void set_ProduceLegacyHmacValues(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMACSHA384();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMACSHA384(HMACSHA384&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMACSHA384", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMACSHA384(HMACSHA384 const&) = delete;

  /// @brief Field m_useLegacyBlockSize, offset: 0x61, size: 0x1, def value: None
  bool ___m_useLegacyBlockSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMACSHA384, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HMACSHA384, ___m_useLegacyBlockSize) == 0x61, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMACSHA384);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMACSHA384*, "System.Security.Cryptography", "HMACSHA384");
