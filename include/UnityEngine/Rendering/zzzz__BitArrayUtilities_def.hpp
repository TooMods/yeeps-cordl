#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitArrayUtilities)
// Forward declare root types
namespace UnityEngine::Rendering {
class BitArrayUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BitArrayUtilities);
// Type: UnityEngine.Rendering::BitArrayUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::BitArrayUtilities*
class CORDL_TYPE BitArrayUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method Get128, addr 0x17c674c, size 0x1c, virtual false, abstract: false, final false
  static inline bool Get128(uint32_t index, uint64_t data1, uint64_t data2);

  /// @brief Method Get16, addr 0x17c56c4, size 0x18, virtual false, abstract: false, final false
  static inline bool Get16(uint32_t index, uint16_t data);

  /// @brief Method Get256, addr 0x17c6f74, size 0x4c, virtual false, abstract: false, final false
  static inline bool Get256(uint32_t index, uint64_t data1, uint64_t data2, uint64_t data3, uint64_t data4);

  /// @brief Method Get32, addr 0x17c5c58, size 0x14, virtual false, abstract: false, final false
  static inline bool Get32(uint32_t index, uint32_t data);

  /// @brief Method Get64, addr 0x17c6174, size 0x14, virtual false, abstract: false, final false
  static inline bool Get64(uint32_t index, uint64_t data);

  /// @brief Method Get8, addr 0x17c5190, size 0x18, virtual false, abstract: false, final false
  static inline bool Get8(uint32_t index, uint8_t data);

  /// @brief Method Set128, addr 0x17c6798, size 0x40, virtual false, abstract: false, final false
  static inline void Set128(uint32_t index, ByRef<uint64_t> data1, ByRef<uint64_t> data2, bool value);

  /// @brief Method Set16, addr 0x17c5700, size 0x24, virtual false, abstract: false, final false
  static inline void Set16(uint32_t index, ByRef<uint16_t> data, bool value);

  /// @brief Method Set256, addr 0x17c6fe4, size 0x78, virtual false, abstract: false, final false
  static inline void Set256(uint32_t index, ByRef<uint64_t> data1, ByRef<uint64_t> data2, ByRef<uint64_t> data3, ByRef<uint64_t> data4, bool value);

  /// @brief Method Set32, addr 0x17c5c90, size 0x24, virtual false, abstract: false, final false
  static inline void Set32(uint32_t index, ByRef<uint32_t> data, bool value);

  /// @brief Method Set64, addr 0x17c61ac, size 0x24, virtual false, abstract: false, final false
  static inline void Set64(uint32_t index, ByRef<uint64_t> data, bool value);

  /// @brief Method Set8, addr 0x17c51cc, size 0x24, virtual false, abstract: false, final false
  static inline void Set8(uint32_t index, ByRef<uint8_t> data, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitArrayUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitArrayUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitArrayUtilities(BitArrayUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitArrayUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitArrayUtilities(BitArrayUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BitArrayUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BitArrayUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BitArrayUtilities*, "UnityEngine.Rendering", "BitArrayUtilities");
