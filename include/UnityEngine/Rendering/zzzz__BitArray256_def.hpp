#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray256)
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
struct BitArray256;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BitArray256);
// Type: UnityEngine.Rendering::BitArray256
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BitArray256
struct CORDL_TYPE BitArray256 {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) bool Item[];

  __declspec(property(get = get_allFalse)) bool allFalse;

  __declspec(property(get = get_allTrue)) bool allTrue;

  __declspec(property(get = get_capacity)) uint32_t capacity;

  __declspec(property(get = get_humanizedData))::StringW humanizedData;

  /// @brief Convert operator to "::UnityEngine::Rendering::IBitArray"
  constexpr operator ::UnityEngine::Rendering::IBitArray*();

  /// @brief Method BitAnd, addr 0x17c71a8, size 0xc0, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitAnd(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method BitNot, addr 0x17c7328, size 0x64, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitNot();

  /// @brief Method BitOr, addr 0x17c7268, size 0xc0, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IBitArray* BitOr(::UnityEngine::Rendering::IBitArray* other);

  /// @brief Method Equals, addr 0x17c7424, size 0x138, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x17c755c, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x17c7068, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<uint32_t>* bitIndexTrue);

  /// @brief Method .ctor, addr 0x17c705c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(uint64_t initValue1, uint64_t initValue2, uint64_t initValue3, uint64_t initValue4);

  /// @brief Method get_Item, addr 0x17c6f24, size 0x50, virtual true, abstract: false, final true
  inline bool get_Item(uint32_t index);

  /// @brief Method get_allFalse, addr 0x17c6bb8, size 0x30, virtual true, abstract: false, final true
  inline bool get_allFalse();

  /// @brief Method get_allTrue, addr 0x17c6be8, size 0x3c, virtual true, abstract: false, final true
  inline bool get_allTrue();

  /// @brief Method get_capacity, addr 0x17c6bb0, size 0x8, virtual true, abstract: false, final true
  inline uint32_t get_capacity();

  /// @brief Method get_humanizedData, addr 0x17c6c24, size 0x300, virtual true, abstract: false, final true
  inline ::StringW get_humanizedData();

  /// @brief Convert to "::UnityEngine::Rendering::IBitArray"
  constexpr ::UnityEngine::Rendering::IBitArray* i___UnityEngine__Rendering__IBitArray();

  /// @brief Method op_BitwiseAnd, addr 0x17c7190, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray256 op_BitwiseAnd(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b);

  /// @brief Method op_BitwiseOr, addr 0x17c7178, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray256 op_BitwiseOr(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b);

  /// @brief Method op_Equality, addr 0x17c738c, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b);

  /// @brief Method op_Inequality, addr 0x17c73d8, size 0x4c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::BitArray256 a, ::UnityEngine::Rendering::BitArray256 b);

  /// @brief Method op_OnesComplement, addr 0x17c7164, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::BitArray256 op_OnesComplement(::UnityEngine::Rendering::BitArray256 a);

  /// @brief Method set_Item, addr 0x17c6fc0, size 0x24, virtual true, abstract: false, final true
  inline void set_Item(uint32_t index, bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitArray256();

  // Ctor Parameters [CppParam { name: "data1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "data2", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "data3",
  // ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "data4", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr BitArray256(uint64_t data1, uint64_t data2, uint64_t data3, uint64_t data4) noexcept;

  /// @brief Field data1, offset: 0x0, size: 0x8, def value: None
  uint64_t data1;

  /// @brief Field data2, offset: 0x8, size: 0x8, def value: None
  uint64_t data2;

  /// @brief Field data3, offset: 0x10, size: 0x8, def value: None
  uint64_t data3;

  /// @brief Field data4, offset: 0x18, size: 0x8, def value: None
  uint64_t data4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BitArray256, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BitArray256, data1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BitArray256, data2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BitArray256, data3) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BitArray256, data4) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BitArray256, "UnityEngine.Rendering", "BitArray256");
