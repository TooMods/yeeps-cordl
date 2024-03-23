#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RandomNumberGenerator)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RandomNumberGenerator);
// Type: System.Security.Cryptography::RandomNumberGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RandomNumberGenerator*
class CORDL_TYPE RandomNumberGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Create, addr 0x1d21d64, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* Create();

  /// @brief Method Create, addr 0x1d21dc0, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* Create(::StringW rngName);

  /// @brief Method Dispose, addr 0x1d21e64, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x1d21ed0, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Fill, addr 0x1d2210c, size 0x4, virtual false, abstract: false, final false
  static inline void Fill(::System::Span_1<uint8_t> data);

  /// @brief Method FillSpan, addr 0x1d22110, size 0x78, virtual false, abstract: false, final false
  static inline void FillSpan(::System::Span_1<uint8_t> data);

  /// @brief Method GetBytes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetBytes, addr 0x1d21ed4, size 0x1f8, virtual true, abstract: false, final false
  inline void GetBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset, int32_t count);

  /// @brief Method GetBytes, addr 0x1d22188, size 0x200, virtual true, abstract: false, final false
  inline void GetBytes(::System::Span_1<uint8_t> data);

  /// @brief Method GetInt32, addr 0x1d22580, size 0x194, virtual false, abstract: false, final false
  static inline int32_t GetInt32(int32_t fromInclusive, int32_t toExclusive);

  /// @brief Method GetInt32, addr 0x1d22714, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetInt32(int32_t toExclusive);

  /// @brief Method GetNonZeroBytes, addr 0x1d220cc, size 0x40, virtual true, abstract: false, final false
  inline void GetNonZeroBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetNonZeroBytes, addr 0x1d22388, size 0x1f8, virtual true, abstract: false, final false
  inline void GetNonZeroBytes(::System::Span_1<uint8_t> data);

  static inline ::System::Security::Cryptography::RandomNumberGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x1d21d5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomNumberGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomNumberGenerator(RandomNumberGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomNumberGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomNumberGenerator(RandomNumberGenerator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RandomNumberGenerator, 0x10>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RandomNumberGenerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RandomNumberGenerator*, "System.Security.Cryptography", "RandomNumberGenerator");
