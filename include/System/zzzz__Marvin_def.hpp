#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Marvin)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class Marvin;
}
// Write type traits
MARK_REF_PTR_T(::System::Marvin);
// Type: System::Marvin
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Marvin*
class CORDL_TYPE Marvin : public ::System::Object {
public:
  // Declarations
  /// @brief Field <DefaultSeed>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__DefaultSeed_k__BackingField, put = setStaticF__DefaultSeed_k__BackingField)) uint64_t _DefaultSeed_k__BackingField;

  /// @brief Method Block, addr 0x30d8188, size 0x88, virtual false, abstract: false, final false
  static inline void Block(ByRef<uint32_t> rp0, ByRef<uint32_t> rp1);

  /// @brief Method ComputeHash32, addr 0x30d7d0c, size 0xac, virtual false, abstract: false, final false
  static inline int32_t ComputeHash32(::System::ReadOnlySpan_1<uint8_t> data, uint64_t seed);

  /// @brief Method ComputeHash32, addr 0x30d7db8, size 0x3d0, virtual false, abstract: false, final false
  static inline int32_t ComputeHash32(ByRef<uint8_t> data, int32_t count, uint64_t seed);

  /// @brief Method GenerateSeed, addr 0x30d8274, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t GenerateSeed();

  /// @brief Method _rotl, addr 0x30d8210, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t _rotl(uint32_t value, int32_t shift);

  static inline uint64_t getStaticF__DefaultSeed_k__BackingField();

  /// @brief Method get_DefaultSeed, addr 0x30d821c, size 0x58, virtual false, abstract: false, final false
  static inline uint64_t get_DefaultSeed();

  static inline void setStaticF__DefaultSeed_k__BackingField(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marvin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marvin(Marvin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marvin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marvin(Marvin const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Marvin, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Marvin);
DEFINE_IL2CPP_ARG_TYPE(::System::Marvin*, "System", "Marvin");
