#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__HashAlgorithmName_def.hpp"
#include "System/Security/Cryptography/zzzz__PbeEncryptionAlgorithm_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PbeParameters)
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
struct PbeEncryptionAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class PbeParameters;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::PbeParameters);
// Type: System.Security.Cryptography::PbeParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::PbeParameters*
class CORDL_TYPE PbeParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_EncryptionAlgorithm))::System::Security::Cryptography::PbeEncryptionAlgorithm EncryptionAlgorithm;

  __declspec(property(get = get_HashAlgorithm))::System::Security::Cryptography::HashAlgorithmName HashAlgorithm;

  __declspec(property(get = get_IterationCount)) int32_t IterationCount;

  /// @brief Field <EncryptionAlgorithm>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__EncryptionAlgorithm_k__BackingField,
                      put = __cordl_internal_set__EncryptionAlgorithm_k__BackingField))::System::Security::Cryptography::PbeEncryptionAlgorithm _EncryptionAlgorithm_k__BackingField;

  /// @brief Field <HashAlgorithm>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__HashAlgorithm_k__BackingField,
                      put = __cordl_internal_set__HashAlgorithm_k__BackingField))::System::Security::Cryptography::HashAlgorithmName _HashAlgorithm_k__BackingField;

  /// @brief Field <IterationCount>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__IterationCount_k__BackingField, put = __cordl_internal_set__IterationCount_k__BackingField)) int32_t _IterationCount_k__BackingField;

  static inline ::System::Security::Cryptography::PbeParameters* New_ctor(::System::Security::Cryptography::PbeEncryptionAlgorithm encryptionAlgorithm,
                                                                          ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, int32_t iterationCount);

  constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm const& __cordl_internal_get__EncryptionAlgorithm_k__BackingField() const;

  constexpr ::System::Security::Cryptography::PbeEncryptionAlgorithm& __cordl_internal_get__EncryptionAlgorithm_k__BackingField();

  constexpr ::System::Security::Cryptography::HashAlgorithmName const& __cordl_internal_get__HashAlgorithm_k__BackingField() const;

  constexpr ::System::Security::Cryptography::HashAlgorithmName& __cordl_internal_get__HashAlgorithm_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__IterationCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__IterationCount_k__BackingField();

  constexpr void __cordl_internal_set__EncryptionAlgorithm_k__BackingField(::System::Security::Cryptography::PbeEncryptionAlgorithm value);

  constexpr void __cordl_internal_set__HashAlgorithm_k__BackingField(::System::Security::Cryptography::HashAlgorithmName value);

  constexpr void __cordl_internal_set__IterationCount_k__BackingField(int32_t value);

  /// @brief Method .ctor, addr 0x196e618, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::PbeEncryptionAlgorithm encryptionAlgorithm, ::System::Security::Cryptography::HashAlgorithmName hashAlgorithm, int32_t iterationCount);

  /// @brief Method get_EncryptionAlgorithm, addr 0x196e600, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::PbeEncryptionAlgorithm get_EncryptionAlgorithm();

  /// @brief Method get_HashAlgorithm, addr 0x196e608, size 0x8, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::HashAlgorithmName get_HashAlgorithm();

  /// @brief Method get_IterationCount, addr 0x196e610, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_IterationCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbeParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PbeParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbeParameters(PbeParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbeParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbeParameters(PbeParameters const&) = delete;

  /// @brief Field <EncryptionAlgorithm>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Cryptography::PbeEncryptionAlgorithm ____EncryptionAlgorithm_k__BackingField;

  /// @brief Field <HashAlgorithm>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Security::Cryptography::HashAlgorithmName ____HashAlgorithm_k__BackingField;

  /// @brief Field <IterationCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____IterationCount_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::PbeParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PbeParameters, ____EncryptionAlgorithm_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PbeParameters, ____HashAlgorithm_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::PbeParameters, ____IterationCount_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::PbeParameters);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::PbeParameters*, "System.Security.Cryptography", "PbeParameters");
