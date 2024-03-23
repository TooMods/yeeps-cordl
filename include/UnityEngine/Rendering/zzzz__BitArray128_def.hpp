#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray128)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
class IBitArray;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BitArray128;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BitArray128);
// Type: UnityEngine.Rendering::BitArray128
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BitArray128
struct CORDL_TYPE BitArray128 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_allFalse)) bool allFalse;

  __declspec(property(get = get_allTrue)) bool allTrue;

  __declspec(property(get = get_capacity)) uint32_t capacity;

  __declspec(property(get = get_humanizedData))::StringW humanizedData;

  /// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
  constexpr operator ::UnityEngine::Rendering::IBitArray*();

  /// @brief Method BitAnd, addr 0x17c68d4, size 0xa4, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method BitNot, addr 0x17c6a1c, size 0x60, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitNot();

  /// @brief Method BitOr, addr 0x17c6978, size 0xa4, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method Equals, addr 0x17c6aac, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x17c6b68, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x17c67e0, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue);

  /// @brief Method .ctor, addr 0x17c67d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t initValue1, uint64_t initValue2);

  /// @brief Method get_Item, addr 0x17c6728, size 0x24, virtual true, abstract: false, final true
  inline bool get_Item(uint32_t index);

  /// @brief Method get_allFalse, addr 0x17c64e8, size 0x20, virtual true, abstract: false, final true
  inline bool get_allFalse();

  /// @brief Method get_allTrue, addr 0x17c6508, size 0x24, virtual true, abstract: false, final true
  inline bool get_allTrue();

  /// @brief Method get_capacity, addr 0x17c64e0, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_capacity();

  /// @brief Method get_humanizedData, addr 0x17c652c, size 0x1fc, virtual true, abstract: false, final true
  inline ::StringW get_humanizedData();

  /// @brief Convert to "::UnityEngine::Rendering::IBitArray"
  constexpr ::UnityEngine::Rendering::IBitArray* i___UnityEngine__Rendering__IBitArray();

  /// @brief Method op_BitwiseAnd, addr 0x17c68c8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray128 op_BitwiseAnd(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b);

  /// @brief Method op_BitwiseOr, addr 0x17c68bc, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray128 op_BitwiseOr(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b);

  /// @brief Method op_Equality, addr 0x17c6a7c, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b);

  /// @brief Method op_Inequality, addr 0x17c6a94, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::BitArray128 a, ::UnityEngine::Rendering::BitArray128 b);

  /// @brief Method op_OnesComplement, addr 0x17c68b0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray128 op_OnesComplement(::UnityEngine::Rendering::BitArray128 a);

  /// @brief Method set_Item, addr 0x17c6768, size 0x30, virtual true, abstract: false, final true
  inline void set_Item(uint32_t index, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitArray128();

  // Ctor Parameters [CppParam { name: "data1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "data2", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr BitArray128(uint64_t data1, uint64_t data2) noexcept;

  /// @brief Field data1, offset: 0x0, size: 0x8, def value: None
  uint64_t data1;

  /// @brief Field data2, offset: 0x8, size: 0x8, def value: None
  uint64_t data2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BitArray128, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BitArray128, data1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BitArray128, data2) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BitArray128, "UnityEngine.Rendering", "BitArray128");
