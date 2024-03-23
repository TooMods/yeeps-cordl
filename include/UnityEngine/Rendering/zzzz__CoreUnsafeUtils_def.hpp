#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUnsafeUtils)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering {
template <typename T> struct __CoreUnsafeUtils__DefaultKeyGetter_1;
}
namespace UnityEngine::Rendering {
struct __CoreUnsafeUtils__FixedBufferStringQueue;
}
namespace UnityEngine::Rendering {
template <typename TValue, typename TKey> class __CoreUnsafeUtils__IKeyGetter_2;
}
namespace UnityEngine::Rendering {
struct __CoreUnsafeUtils__UintKeyGetter;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreUnsafeUtils;
}
namespace UnityEngine::Rendering {
template <typename TValue, typename TKey> class __CoreUnsafeUtils__IKeyGetter_2;
}
namespace UnityEngine::Rendering {
template <typename T> struct __CoreUnsafeUtils__DefaultKeyGetter_1;
}
namespace UnityEngine::Rendering {
struct __CoreUnsafeUtils__FixedBufferStringQueue;
}
namespace UnityEngine::Rendering {
struct __CoreUnsafeUtils__UintKeyGetter;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreUnsafeUtils);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2);
MARK_GEN_VAL_T(::UnityEngine::Rendering::__CoreUnsafeUtils__DefaultKeyGetter_1);
MARK_VAL_T(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue);
MARK_VAL_T(::UnityEngine::Rendering::__CoreUnsafeUtils__UintKeyGetter);
// Type: ::FixedBufferStringQueue
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::CoreUnsafeUtils::FixedBufferStringQueue
struct CORDL_TYPE __CoreUnsafeUtils__FixedBufferStringQueue {
public:
  // Declarations
  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  /// @brief Method Clear, addr 0x1bd0c2c, size 0x1c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method TryPop, addr 0x1bd0cf4, size 0x68, virtual false, abstract: false, final false
  inline bool TryPop(ByRef<::StringW> v);

  /// @brief Method TryPush, addr 0x1bd0c48, size 0xac, virtual false, abstract: false, final false
  inline bool TryPush(::StringW v);

  /// @brief Method .ctor, addr 0x1bd0c08, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<uint8_t> ptr, int32_t length);

  /// @brief Method get_Count, addr 0x1bd0bf8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method set_Count, addr 0x1bd0c00, size 0x8, virtual false, abstract: false, final false
  inline void set_Count(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreUnsafeUtils__FixedBufferStringQueue();

  // Ctor Parameters [CppParam { name: "m_ReadCursor", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_WriteCursor", ty: "::cordl_internals::Ptr<uint8_t>",
  // modifiers: "", def_value: None }, CppParam { name: "m_BufferEnd", ty: "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_BufferStart", ty:
  // "::cordl_internals::Ptr<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "m_BufferLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_Count_k__BackingField",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CoreUnsafeUtils__FixedBufferStringQueue(::cordl_internals::Ptr<uint8_t> m_ReadCursor, ::cordl_internals::Ptr<uint8_t> m_WriteCursor, ::cordl_internals::Ptr<uint8_t> m_BufferEnd,
                                                      ::cordl_internals::Ptr<uint8_t> m_BufferStart, int32_t m_BufferLength, int32_t _Count_k__BackingField) noexcept;

  /// @brief Field m_ReadCursor, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> m_ReadCursor;

  /// @brief Field m_WriteCursor, offset: 0x8, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> m_WriteCursor;

  /// @brief Field m_BufferEnd, offset: 0x10, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> m_BufferEnd;

  /// @brief Field m_BufferStart, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<uint8_t> m_BufferStart;

  /// @brief Field m_BufferLength, offset: 0x20, size: 0x4, def value: None
  int32_t m_BufferLength;

  /// @brief Field <Count>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t _Count_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, m_ReadCursor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, m_WriteCursor) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, m_BufferEnd) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, m_BufferStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, m_BufferLength) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, _Count_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: ::IKeyGetter`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename TValue, typename TKey>
// Is value type: false
// CS Name: ::CoreUnsafeUtils::IKeyGetter`2<TValue,TKey>*
class CORDL_TYPE __CoreUnsafeUtils__IKeyGetter_2 {
public:
  // Declarations
  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TKey Get(ByRef<TValue> v);

  // Ctor Parameters [CppParam { name: "", ty: "__CoreUnsafeUtils__IKeyGetter_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CoreUnsafeUtils__IKeyGetter_2(__CoreUnsafeUtils__IKeyGetter_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CoreUnsafeUtils__IKeyGetter_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CoreUnsafeUtils__IKeyGetter_2(__CoreUnsafeUtils__IKeyGetter_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: ::DefaultKeyGetter`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::CoreUnsafeUtils::DefaultKeyGetter`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE __CoreUnsafeUtils__DefaultKeyGetter_1 {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<T,T>"
  constexpr operator ::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<T, T>*();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Get(ByRef<T> v);

  /// @brief Convert to "::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<T,T>"
  constexpr ::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<T, T>* i___UnityEngine__Rendering____CoreUnsafeUtils__IKeyGetter_2_T_T_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreUnsafeUtils__DefaultKeyGetter_1();

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace UnityEngine::Rendering
// Type: ::UintKeyGetter
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::CoreUnsafeUtils::UintKeyGetter
#pragma pack(push, 0)
struct CORDL_TYPE __CoreUnsafeUtils__UintKeyGetter {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<uint32_t,uint32_t>"
  constexpr operator ::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<uint32_t, uint32_t>*();

  /// @brief Method Get, addr 0x1bd0d5c, size 0x8, virtual true, abstract: false, final true
  inline uint32_t Get(ByRef<uint32_t> v);

  /// @brief Convert to "::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<uint32_t,uint32_t>"
  constexpr ::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<uint32_t, uint32_t>* i___UnityEngine__Rendering____CoreUnsafeUtils__IKeyGetter_2_uint32_t_uint32_t_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CoreUnsafeUtils__UintKeyGetter();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__CoreUnsafeUtils__UintKeyGetter, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::CoreUnsafeUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CoreUnsafeUtils*
class CORDL_TYPE CoreUnsafeUtils : public ::System::Object {
public:
  // Declarations
  template <typename T> using DefaultKeyGetter_1 = ::UnityEngine::Rendering::__CoreUnsafeUtils__DefaultKeyGetter_1<T>;

  using FixedBufferStringQueue = ::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue;

  template <typename TValue, typename TKey> using IKeyGetter_2 = ::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2<TValue, TKey>;

  using UintKeyGetter = ::UnityEngine::Rendering::__CoreUnsafeUtils__UintKeyGetter;

  /// @brief Method CalculateRadixParams, addr 0x1bcff98, size 0x78, virtual false, abstract: false, final false
  static inline void CalculateRadixParams(int32_t radixBits, ByRef<int32_t> bitStates);

  /// @brief Method CalculateRadixSortSupportArrays, addr 0x1bd001c, size 0x20, virtual false, abstract: false, final false
  static inline void CalculateRadixSortSupportArrays(int32_t bitStates, int32_t arrayLength, ::cordl_internals::Ptr<uint32_t> supportArray, ByRef<::cordl_internals::Ptr<uint32_t>> bucketIndices,
                                                     ByRef<::cordl_internals::Ptr<uint32_t>> bucketSizes, ByRef<::cordl_internals::Ptr<uint32_t>> bucketPrefix,
                                                     ByRef<::cordl_internals::Ptr<uint32_t>> arrayOutput);

  /// @brief Method CalculateRadixSupportSize, addr 0x1bd0010, size 0xc, virtual false, abstract: false, final false
  static inline int32_t CalculateRadixSupportSize(int32_t bitStates, int32_t arrayLength);

  /// @brief Method CombineHashes, addr 0x1bd0a20, size 0x60, virtual false, abstract: false, final false
  static inline void CombineHashes(int32_t count, ::cordl_internals::Ptr<::UnityEngine::Hash128> hashes, ::cordl_internals::Ptr<::UnityEngine::Hash128> outHash);

  /// @brief Method CombineHashes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TGetter> static inline void CombineHashes(int32_t count, ::cordl_internals::Ptr<void> hashes, ::cordl_internals::Ptr<::UnityEngine::Hash128> outHash);

  /// @brief Method CompareHashes, addr 0x1bd097c, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t CompareHashes(int32_t oldHashCount, ::cordl_internals::Ptr<::UnityEngine::Hash128> oldHashes, int32_t newHashCount, ::cordl_internals::Ptr<::UnityEngine::Hash128> newHashes,
                                      ::cordl_internals::Ptr<int32_t> addIndices, ::cordl_internals::Ptr<int32_t> removeIndices, ByRef<int32_t> addCount, ByRef<int32_t> remCount);

  /// @brief Method CompareHashes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TOldValue, typename TOldGetter, typename TNewValue, typename TNewGetter>
  static inline int32_t CompareHashes(int32_t oldHashCount, ::cordl_internals::Ptr<void> oldHashes, int32_t newHashCount, ::cordl_internals::Ptr<void> newHashes,
                                      ::cordl_internals::Ptr<int32_t> addIndices, ::cordl_internals::Ptr<int32_t> removeIndices, ByRef<int32_t> addCount, ByRef<int32_t> remCount);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyTo(::ArrayW<T, ::Array<T>*> list, ::cordl_internals::Ptr<void> dest, int32_t count);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyTo(::System::Collections::Generic::List_1<T>* list, ::cordl_internals::Ptr<void> dest, int32_t count);

  /// @brief Method HaveDuplicates, addr 0x1bd0a80, size 0x178, virtual false, abstract: false, final false
  static inline bool HaveDuplicates(::ArrayW<int32_t, ::Array<int32_t>*> arr);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t IndexOf(::cordl_internals::Ptr<void> data, int32_t count, T v);

  /// @brief Method InsertionSort, addr 0x1bd03fc, size 0x90, virtual false, abstract: false, final false
  static inline void InsertionSort(::ArrayW<uint32_t, ::Array<uint32_t>*> arr, int32_t sortSize);

  /// @brief Method InsertionSort, addr 0x1bd048c, size 0xcc, virtual false, abstract: false, final false
  static inline void InsertionSort(::Unity::Collections::NativeArray_1<uint32_t> arr, int32_t sortSize);

  /// @brief Method InsertionSort, addr 0x1bd03a4, size 0x58, virtual false, abstract: false, final false
  static inline void InsertionSort(::cordl_internals::Ptr<uint32_t> arr, int32_t length);

  /// @brief Method MergeSort, addr 0x1bd016c, size 0x10c, virtual false, abstract: false, final false
  static inline void MergeSort(::ArrayW<uint32_t, ::Array<uint32_t>*> arr, int32_t sortSize, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> supportArray);

  /// @brief Method MergeSort, addr 0x1bd0278, size 0x12c, virtual false, abstract: false, final false
  static inline void MergeSort(::Unity::Collections::NativeArray_1<uint32_t> arr, int32_t sortSize, ByRef<::Unity::Collections::NativeArray_1<uint32_t>> supportArray);

  /// @brief Method MergeSort, addr 0x1bd003c, size 0x130, virtual false, abstract: false, final false
  static inline void MergeSort(::cordl_internals::Ptr<uint32_t> array, ::cordl_internals::Ptr<uint32_t> support, int32_t length);

  /// @brief Method Partition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TKey, typename TGetter> static inline int32_t Partition(::cordl_internals::Ptr<void> data, int32_t left, int32_t right);

  /// @brief Method QuickSort, addr 0x1bd0908, size 0x74, virtual false, abstract: false, final false
  static inline void QuickSort(::ArrayW<uint32_t, ::Array<uint32_t>*> arr, int32_t left, int32_t right);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void QuickSort(int32_t count, ::cordl_internals::Ptr<void> data);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TKey, typename TGetter> static inline void QuickSort(int32_t count, ::cordl_internals::Ptr<void> data);

  /// @brief Method QuickSort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue, typename TKey, typename TGetter> static inline void QuickSort(::cordl_internals::Ptr<void> data, int32_t left, int32_t right);

  /// @brief Method RadixSort, addr 0x1bd0680, size 0x12c, virtual false, abstract: false, final false
  static inline void RadixSort(::ArrayW<uint32_t, ::Array<uint32_t>*> arr, int32_t sortSize, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> supportArray, int32_t radixBits);

  /// @brief Method RadixSort, addr 0x1bd07ac, size 0x15c, virtual false, abstract: false, final false
  static inline void RadixSort(::Unity::Collections::NativeArray_1<uint32_t> array, int32_t sortSize, ByRef<::Unity::Collections::NativeArray_1<uint32_t>> supportArray, int32_t radixBits);

  /// @brief Method RadixSort, addr 0x1bd0558, size 0x128, virtual false, abstract: false, final false
  static inline void RadixSort(::cordl_internals::Ptr<uint32_t> array, ::cordl_internals::Ptr<uint32_t> support, int32_t radixBits, int32_t bitStates, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUnsafeUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUnsafeUtils(CoreUnsafeUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUnsafeUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUnsafeUtils(CoreUnsafeUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreUnsafeUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CoreUnsafeUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreUnsafeUtils*, "UnityEngine.Rendering", "CoreUnsafeUtils");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::__CoreUnsafeUtils__IKeyGetter_2, "UnityEngine.Rendering", "CoreUnsafeUtils/IKeyGetter`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::__CoreUnsafeUtils__DefaultKeyGetter_1, "UnityEngine.Rendering", "CoreUnsafeUtils/DefaultKeyGetter`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__CoreUnsafeUtils__FixedBufferStringQueue, "UnityEngine.Rendering", "CoreUnsafeUtils/FixedBufferStringQueue");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__CoreUnsafeUtils__UintKeyGetter, "UnityEngine.Rendering", "CoreUnsafeUtils/UintKeyGetter");
