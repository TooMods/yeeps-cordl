#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICspAsymmetricAlgorithm)
namespace System::Security::Cryptography {
class CspKeyContainerInfo;
}
// Forward declare root types
namespace System::Security::Cryptography {
class ICspAsymmetricAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::ICspAsymmetricAlgorithm);
// Type: System.Security.Cryptography::ICspAsymmetricAlgorithm
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::ICspAsymmetricAlgorithm*
class CORDL_TYPE ICspAsymmetricAlgorithm {
public:
  // Declarations
  __declspec(property(get = get_CspKeyContainerInfo))::System::Security::Cryptography::CspKeyContainerInfo* CspKeyContainerInfo;

  /// @brief Method ExportCspBlob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ExportCspBlob(bool includePrivateParameters);

  /// @brief Method ImportCspBlob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ImportCspBlob(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method get_CspKeyContainerInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo();

  // Ctor Parameters [CppParam { name: "", ty: "ICspAsymmetricAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICspAsymmetricAlgorithm(ICspAsymmetricAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICspAsymmetricAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICspAsymmetricAlgorithm(ICspAsymmetricAlgorithm const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::ICspAsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::ICspAsymmetricAlgorithm*, "System.Security.Cryptography", "ICspAsymmetricAlgorithm");
