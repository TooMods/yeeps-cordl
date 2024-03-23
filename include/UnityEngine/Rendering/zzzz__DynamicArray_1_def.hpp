#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicArray_1)
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::DynamicArray_1);
// Type: UnityEngine.Rendering::DynamicArray`1
// SizeInfo { instance_size: 32, native_size: 28, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.Rendering::DynamicArray`1<T>*
class CORDL_TYPE DynamicArray_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item)) T Item[];

  /// @brief Field <size>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__size_k__BackingField, put = __cordl_internal_set__size_k__BackingField)) int32_t _size_k__BackingField;

  __declspec(property(get = get_capacity)) int32_t capacity;

  /// @brief Field m_Array, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Array, put = __cordl_internal_set_m_Array))::ArrayW<T, ::Array<T>*> m_Array;

  __declspec(property(get = get_size, put = set_size)) int32_t size;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Add(ByRef<T> value);

  /// @brief Method AddRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRange(::UnityEngine::Rendering::DynamicArray_1<T>* array);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method FindIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t FindIndex(int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(T item);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(T item, int32_t index);

  /// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t IndexOf(T item, int32_t index, int32_t count);

  static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor();

  static inline ::UnityEngine::Rendering::DynamicArray_1<T>* New_ctor(int32_t size);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool Remove(T item);

  /// @brief Method RemoveAt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveRange(int32_t index, int32_t count);

  /// @brief Method Reserve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reserve(int32_t newCapacity, bool keepContent);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize(int32_t newSize, bool keepContent);

  constexpr int32_t const& __cordl_internal_get__size_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__size_k__BackingField();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get_m_Array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get_m_Array();

  constexpr void __cordl_internal_set__size_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_Array(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ByRef<T> get_Item(int32_t index);

  /// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method get_size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_size();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::ArrayW<T, ::Array<T>*> op_Implicit___ArrayW_T___Array_T___(::UnityEngine::Rendering::DynamicArray_1<T>* array);

  /// @brief Method set_size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_size(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicArray_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicArray_1(DynamicArray_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicArray_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicArray_1(DynamicArray_1 const&) = delete;

  /// @brief Field m_Array, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ___m_Array;

  /// @brief Field <size>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____size_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::DynamicArray_1, "UnityEngine.Rendering", "DynamicArray`1");
