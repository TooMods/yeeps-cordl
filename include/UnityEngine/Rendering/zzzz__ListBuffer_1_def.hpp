#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ListBuffer_1)
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> struct ListBuffer_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::ListBuffer_1);
// Type: UnityEngine.Rendering::ListBuffer`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ListBuffer`1<T>
struct CORDL_TYPE ListBuffer_1 {
public:
  // Declarations
  __declspec(property(get = get_BufferPtr))::cordl_internals::Ptr<T> BufferPtr;

  __declspec(property(get = get_Capacity)) int32_t Capacity;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::cordl_internals::Ptr<T> dstBuffer, int32_t startDstIndex, int32_t copyCount);

  /// @brief Method GetUnchecked, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ByRef<T> GetUnchecked(ByRef<int32_t> index);

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryAdd(ByRef<T> value);

  /// @brief Method TryCopyFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryCopyFrom(::cordl_internals::Ptr<T> srcPtr, int32_t count);

  /// @brief Method TryCopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TryCopyTo(::UnityEngine::Rendering::ListBuffer_1<T> other);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<T> bufferPtr, ::cordl_internals::Ptr<int32_t> countPtr, int32_t capacity);

  /// @brief Method get_BufferPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<T> get_BufferPtr();

  /// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Capacity();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ByRef<T> get_Item(ByRef<int32_t> index);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ListBuffer_1();

  // Ctor Parameters [CppParam { name: "m_BufferPtr", ty: "::cordl_internals::Ptr<T>", modifiers: "", def_value: None }, CppParam { name: "m_Capacity", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_CountPtr", ty: "::cordl_internals::Ptr<int32_t>", modifiers: "", def_value: None }]
  constexpr ListBuffer_1(::cordl_internals::Ptr<T> m_BufferPtr, int32_t m_Capacity, ::cordl_internals::Ptr<int32_t> m_CountPtr) noexcept;

  /// @brief Field m_BufferPtr, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<T> m_BufferPtr;

  /// @brief Field m_Capacity, offset: 0x8, size: 0x4, def value: None
  int32_t m_Capacity;

  /// @brief Field m_CountPtr, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> m_CountPtr;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::ListBuffer_1, "UnityEngine.Rendering", "ListBuffer`1");
