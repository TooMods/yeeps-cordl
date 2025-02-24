#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KeyedHashAlgorithm)
// Forward declare root types
namespace System::Security::Cryptography {
class KeyedHashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::KeyedHashAlgorithm);
// Type: System.Security.Cryptography::KeyedHashAlgorithm
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::KeyedHashAlgorithm*
class CORDL_TYPE KeyedHashAlgorithm : public ::System::Security::Cryptography::HashAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_Key, put = set_Key))::ArrayW<uint8_t, ::Array<uint8_t>*> Key;

  /// @brief Field KeyValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyValue, put = __cordl_internal_set_KeyValue))::ArrayW<uint8_t, ::Array<uint8_t>*> KeyValue;

  /// @brief Method Create, addr 0x1d1f89c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::KeyedHashAlgorithm* Create();

  /// @brief Method Create, addr 0x1d1f8f4, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::KeyedHashAlgorithm* Create(::StringW algName);

  /// @brief Method Dispose, addr 0x1d1ec6c, size 0x38, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::System::Security::Cryptography::KeyedHashAlgorithm* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_KeyValue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_KeyValue();

  constexpr void __cordl_internal_set_KeyValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x1d1ee2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x1d1f71c, size 0x78, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Key();

  /// @brief Method set_Key, addr 0x1d1f794, size 0x108, virtual true, abstract: false, final false
  inline void set_Key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyedHashAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyedHashAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyedHashAlgorithm(KeyedHashAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyedHashAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyedHashAlgorithm(KeyedHashAlgorithm const&) = delete;

  /// @brief Field KeyValue, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___KeyValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::KeyedHashAlgorithm, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::KeyedHashAlgorithm, ___KeyValue) == 0x28, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::KeyedHashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::KeyedHashAlgorithm*, "System.Security.Cryptography", "KeyedHashAlgorithm");
