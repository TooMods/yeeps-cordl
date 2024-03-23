#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ABCDStruct)
// Forward declare root types
namespace ThirdParty::MD5 {
struct ABCDStruct;
}
// Write type traits
MARK_VAL_T(::ThirdParty::MD5::ABCDStruct);
// Type: ThirdParty.MD5::ABCDStruct
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace ThirdParty::MD5 {
// Is value type: true
// CS Name: ::ThirdParty.MD5::ABCDStruct
struct CORDL_TYPE ABCDStruct {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ABCDStruct();

  // Ctor Parameters [CppParam { name: "A", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "B", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "C", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "D", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr ABCDStruct(uint32_t A, uint32_t B, uint32_t C, uint32_t D) noexcept;

  /// @brief Field A, offset: 0x0, size: 0x4, def value: None
  uint32_t A;

  /// @brief Field B, offset: 0x4, size: 0x4, def value: None
  uint32_t B;

  /// @brief Field C, offset: 0x8, size: 0x4, def value: None
  uint32_t C;

  /// @brief Field D, offset: 0xc, size: 0x4, def value: None
  uint32_t D;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ThirdParty::MD5::ABCDStruct, 0x10>, "Size mismatch!");

static_assert(offsetof(::ThirdParty::MD5::ABCDStruct, A) == 0x0, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::MD5::ABCDStruct, B) == 0x4, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::MD5::ABCDStruct, C) == 0x8, "Offset mismatch!");

static_assert(offsetof(::ThirdParty::MD5::ABCDStruct, D) == 0xc, "Offset mismatch!");

} // namespace ThirdParty::MD5
DEFINE_IL2CPP_ARG_TYPE(::ThirdParty::MD5::ABCDStruct, "ThirdParty.MD5", "ABCDStruct");
