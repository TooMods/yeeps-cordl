#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray16)
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
struct BitArray16;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BitArray16);
// Type: UnityEngine.Rendering::BitArray16
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BitArray16
struct CORDL_TYPE BitArray16 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_allFalse)) bool allFalse;

  __declspec(property(get = get_allTrue)) bool allTrue;

  __declspec(property(get = get_capacity)) uint32_t capacity;

  __declspec(property(get = get_humanizedData))::StringW humanizedData;

  /// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
  constexpr operator ::UnityEngine::Rendering::IBitArray*();

  /// @brief Method BitAnd, addr 0x17c5800, size 0x98, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method BitNot, addr 0x17c5930, size 0x60, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitNot();

  /// @brief Method BitOr, addr 0x17c5898, size 0x98, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method Equals, addr 0x17c59b0, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x17c5a28, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x17c572c, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue);

  /// @brief Method .ctor, addr 0x17c5724, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint16_t initValue);

  /// @brief Method get_Item, addr 0x17c56ac, size 0x18, virtual true, abstract: false, final true
  inline bool get_Item(uint32_t index);

  /// @brief Method get_allFalse, addr 0x17c551c, size 0x10, virtual true, abstract: false, final true
  inline bool get_allFalse();

  /// @brief Method get_allTrue, addr 0x17c552c, size 0x10, virtual true, abstract: false, final true
  inline bool get_allTrue();

  /// @brief Method get_capacity, addr 0x17c5514, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_capacity();

  /// @brief Method get_humanizedData, addr 0x17c553c, size 0x170, virtual true, abstract: false, final true
  inline ::StringW get_humanizedData();

  /// @brief Convert to "::UnityEngine::Rendering::IBitArray"
  constexpr ::UnityEngine::Rendering::IBitArray* i___UnityEngine__Rendering__IBitArray();

  /// @brief Method op_BitwiseAnd, addr 0x17c57f4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray16 op_BitwiseAnd(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b);

  /// @brief Method op_BitwiseOr, addr 0x17c57e8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray16 op_BitwiseOr(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b);

  /// @brief Method op_Equality, addr 0x17c5990, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b);

  /// @brief Method op_Inequality, addr 0x17c59a0, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::BitArray16 a, ::UnityEngine::Rendering::BitArray16 b);

  /// @brief Method op_OnesComplement, addr 0x17c57dc, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray16 op_OnesComplement(::UnityEngine::Rendering::BitArray16 a);

  /// @brief Method set_Item, addr 0x17c56dc, size 0x24, virtual true, abstract: false, final true
  inline void set_Item(uint32_t index, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitArray16();

  // Ctor Parameters [CppParam { name: "data", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr BitArray16(uint16_t data) noexcept;

  /// @brief Field data, offset: 0x0, size: 0x2, def value: None
  uint16_t data;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BitArray16, 0x2>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BitArray16, data) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BitArray16, "UnityEngine.Rendering", "BitArray16");
