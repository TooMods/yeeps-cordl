#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptographicOperations)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptographicOperations;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptographicOperations);
// Type: System.Security.Cryptography::CryptographicOperations
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::CryptographicOperations*
class CORDL_TYPE CryptographicOperations : public ::System::Object {
public:
  // Declarations
  /// @brief Method FixedTimeEquals, addr 0x1d16bec, size 0x220, virtual false, abstract: false, final false
  static inline bool FixedTimeEquals(::System::ReadOnlySpan_1<uint8_t> left, ::System::ReadOnlySpan_1<uint8_t> right);

  /// @brief Method ZeroMemory, addr 0x1d15550, size 0x68, virtual false, abstract: false, final false
  static inline void ZeroMemory(::System::Span_1<uint8_t> buffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptographicOperations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptographicOperations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptographicOperations(CryptographicOperations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptographicOperations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptographicOperations(CryptographicOperations const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptographicOperations, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptographicOperations);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptographicOperations*, "System.Security.Cryptography", "CryptographicOperations");
