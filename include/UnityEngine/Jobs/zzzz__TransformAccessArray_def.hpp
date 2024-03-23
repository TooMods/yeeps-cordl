#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformAccessArray)
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Jobs {
struct TransformAccessArray;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Jobs::TransformAccessArray);
// Type: UnityEngine.Jobs::TransformAccessArray
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Jobs {
// Is value type: true
// CS Name: ::UnityEngine.Jobs::TransformAccessArray
struct CORDL_TYPE TransformAccessArray {
public:
  // Declarations
  __declspec(property(get = get_Item))::UnityW<::UnityEngine::Transform> Item[];

  __declspec(property(get = get_isCreated)) bool isCreated;

  __declspec(property(get = get_length)) int32_t length;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Add, addr 0x2a88648, size 0x44, virtual false, abstract: false, final false
  inline void Add(::UnityEngine::Transform* transform);

  /// @brief Method Add, addr 0x2a8868c, size 0x44, virtual false, abstract: false, final false
  static inline void Add(void* transformArrayIntPtr, ::UnityEngine::Transform* transform);

  /// @brief Method Allocate, addr 0x2a88390, size 0x58, virtual false, abstract: false, final false
  static inline void Allocate(int32_t capacity, int32_t desiredJobCount, ByRef<::UnityEngine::Jobs::TransformAccessArray> array);

  /// @brief Method Create, addr 0x2a883e8, size 0x44, virtual false, abstract: false, final false
  static inline void* Create(int32_t capacity, int32_t desiredJobCount);

  /// @brief Method DestroyTransformAccessArray, addr 0x2a88504, size 0x3c, virtual false, abstract: false, final false
  static inline void DestroyTransformAccessArray(void* transformArray);

  /// @brief Method Dispose, addr 0x2a88480, size 0x84, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetLength, addr 0x2a8860c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetLength(void* transformArrayIntPtr);

  /// @brief Method GetSortedToUserIndex, addr 0x2a88794, size 0x3c, virtual false, abstract: false, final false
  static inline void* GetSortedToUserIndex(void* transformArrayIntPtr);

  /// @brief Method GetSortedTransformAccess, addr 0x2a88758, size 0x3c, virtual false, abstract: false, final false
  static inline void* GetSortedTransformAccess(void* transformArrayIntPtr);

  /// @brief Method GetTransform, addr 0x2a8858c, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Transform> GetTransform(void* transformArrayIntPtr, int32_t index);

  /// @brief Method GetTransformAccessArrayForSchedule, addr 0x2a88540, size 0x8, virtual false, abstract: false, final false
  inline void* GetTransformAccessArrayForSchedule();

  /// @brief Method RemoveAtSwapBack, addr 0x2a886d0, size 0x44, virtual false, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t index);

  /// @brief Method RemoveAtSwapBack, addr 0x2a88714, size 0x44, virtual false, abstract: false, final false
  static inline void RemoveAtSwapBack(void* transformArrayIntPtr, int32_t index);

  /// @brief Method .ctor, addr 0x2a88338, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, int32_t desiredJobCount);

  /// @brief Method get_Item, addr 0x2a88548, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_Item(int32_t index);

  /// @brief Method get_isCreated, addr 0x2a8842c, size 0x54, virtual false, abstract: false, final false
  inline bool get_isCreated();

  /// @brief Method get_length, addr 0x2a885d0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_length();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformAccessArray();

  // Ctor Parameters [CppParam { name: "m_TransformArray", ty: "void*", modifiers: "", def_value: None }]
  constexpr TransformAccessArray(void* m_TransformArray) noexcept;

  /// @brief Field m_TransformArray, offset: 0x0, size: 0x8, def value: None
  void* m_TransformArray;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Jobs::TransformAccessArray, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Jobs::TransformAccessArray, m_TransformArray) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Jobs
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Jobs::TransformAccessArray, "UnityEngine.Jobs", "TransformAccessArray");
