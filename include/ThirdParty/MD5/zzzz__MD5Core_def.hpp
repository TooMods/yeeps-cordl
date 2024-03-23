#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD5Core)
namespace System::Text {
class Encoding;
}
namespace ThirdParty::MD5 {
struct ABCDStruct;
}
// Forward declare root types
namespace ThirdParty::MD5 {
class MD5Core;
}
// Write type traits
MARK_REF_PTR_T(::ThirdParty::MD5::MD5Core);
// Type: ThirdParty.MD5::MD5Core
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ThirdParty::MD5 {
// Is value type: false
// CS Name: ::ThirdParty.MD5::MD5Core*
class CORDL_TYPE MD5Core : public ::System::Object {
public:
  // Declarations
  /// @brief Method Converter, addr 0x149ea64, size 0x164, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Converter(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t ibStart);

  /// @brief Method GetHash, addr 0x149da30, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHash(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method GetHash, addr 0x149db14, size 0x64, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHash(::StringW input);

  /// @brief Method GetHash, addr 0x149d964, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHash(::StringW input, ::System::Text::Encoding* encoding);

  /// @brief Method GetHashBlock, addr 0x149ddb4, size 0xa88, virtual false, abstract: false, final false
  static inline void GetHashBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ByRef<::ThirdParty::MD5::ABCDStruct> ABCDValue, int32_t ibStart);

  /// @brief Method GetHashFinalBlock, addr 0x149e83c, size 0x228, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHashFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t ibStart, int32_t cbSize, ::ThirdParty::MD5::ABCDStruct ABCD, int64_t len);

  /// @brief Method GetHashString, addr 0x149db78, size 0x10c, virtual false, abstract: false, final false
  static inline ::StringW GetHashString(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method GetHashString, addr 0x149dd50, size 0x64, virtual false, abstract: false, final false
  static inline ::StringW GetHashString(::StringW input);

  /// @brief Method GetHashString, addr 0x149dc84, size 0xcc, virtual false, abstract: false, final false
  static inline ::StringW GetHashString(::StringW input, ::System::Text::Encoding* encoding);

  /// @brief Method LSR, addr 0x149ec60, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t LSR(uint32_t i, int32_t s);

  static inline ::ThirdParty::MD5::MD5Core* New_ctor();

  /// @brief Method .ctor, addr 0x149d95c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method r1, addr 0x149ebc8, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t r1(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, int32_t s, uint32_t t);

  /// @brief Method r2, addr 0x149ebf0, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t r2(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, int32_t s, uint32_t t);

  /// @brief Method r3, addr 0x149ec18, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t r3(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, int32_t s, uint32_t t);

  /// @brief Method r4, addr 0x149ec3c, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t r4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, int32_t s, uint32_t t);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD5Core();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD5Core", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD5Core(MD5Core&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD5Core", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD5Core(MD5Core const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::MD5::MD5Core, 0x10>, "Size mismatch!");

} // namespace ThirdParty::MD5
NEED_NO_BOX(::ThirdParty::MD5::MD5Core);
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::MD5::MD5Core*, "ThirdParty.MD5", "MD5Core");
