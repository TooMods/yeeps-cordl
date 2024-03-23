#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BitArray)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
struct BitArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::Internal::BitArray);
// Type: UnityEngine.Rendering.Universal.Internal::BitArray
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: true
// CS Name: ::UnityEngine.Rendering.Universal.Internal::BitArray
struct CORDL_TYPE BitArray {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Clear, addr 0x2adbf8c, size 0x2c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x2adc32c, size 0x48, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method IsSet, addr 0x2ade3d4, size 0x20, virtual false, abstract: false, final false
  inline bool IsSet(int32_t bitIndex);

  /// @brief Method Set, addr 0x2adc300, size 0x2c, virtual false, abstract: false, final false
  inline void Set(int32_t bitIndex, bool val);

  /// @brief Method .ctor, addr 0x2adbe84, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t bitCount, ::Unity::Collections::Allocator allocator, ::Unity::Collections::NativeArrayOptions options);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BitArray();

  // Ctor Parameters [CppParam { name: "m_Mem", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "m_BitCount", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_IntCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BitArray(::Unity::Collections::NativeArray_1<uint32_t> m_Mem, int32_t m_BitCount, int32_t m_IntCount) noexcept;

  /// @brief Field m_Mem, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> m_Mem;

  /// @brief Field m_BitCount, offset: 0x10, size: 0x4, def value: None
  int32_t m_BitCount;

  /// @brief Field m_IntCount, offset: 0x14, size: 0x4, def value: None
  int32_t m_IntCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::BitArray, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::BitArray, m_Mem) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::BitArray, m_BitCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::BitArray, m_IntCount) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::BitArray, "UnityEngine.Rendering.Universal.Internal", "BitArray");
