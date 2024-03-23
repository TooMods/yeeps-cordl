#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaskGenerationMethod)
// Forward declare root types
namespace System::Security::Cryptography {
class MaskGenerationMethod;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::MaskGenerationMethod);
// Type: System.Security.Cryptography::MaskGenerationMethod
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::MaskGenerationMethod*
class CORDL_TYPE MaskGenerationMethod : public ::System::Object {
public:
  // Declarations
  /// @brief Method GenerateMask, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GenerateMask(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSeed, int32_t cbReturn);

  static inline ::System::Security::Cryptography::MaskGenerationMethod* New_ctor();

  /// @brief Method .ctor, addr 0x1d20740, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaskGenerationMethod();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaskGenerationMethod", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaskGenerationMethod(MaskGenerationMethod&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaskGenerationMethod", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaskGenerationMethod(MaskGenerationMethod const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::MaskGenerationMethod, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::MaskGenerationMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::MaskGenerationMethod*, "System.Security.Cryptography", "MaskGenerationMethod");
