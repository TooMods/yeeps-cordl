#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PriorityQueue_1)
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct PQHandle;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class PriorityHeap_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __PriorityHeap_1__LessOrEqual;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __PriorityQueue_1__StackItem;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class PriorityQueue_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __PriorityQueue_1__StackItem;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem);
// Type: ::StackItem
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::PriorityQueue`1::StackItem<TValue>*
class CORDL_TYPE __PriorityQueue_1__StackItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p)) int32_t p;

  /// @brief Field r, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) int32_t r;

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>* New_ctor();

  constexpr int32_t const& __cordl_internal_get_p() const;

  constexpr int32_t& __cordl_internal_get_p();

  constexpr int32_t const& __cordl_internal_get_r() const;

  constexpr int32_t& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_p(int32_t value);

  constexpr void __cordl_internal_set_r(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PriorityQueue_1__StackItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PriorityQueue_1__StackItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PriorityQueue_1__StackItem(__PriorityQueue_1__StackItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PriorityQueue_1__StackItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PriorityQueue_1__StackItem(__PriorityQueue_1__StackItem const&) = delete;

  /// @brief Field p, offset: 0x10, size: 0x4, def value: None
  int32_t ___p;

  /// @brief Field r, offset: 0x14, size: 0x4, def value: None
  int32_t ___r;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::PriorityQueue`1
// SizeInfo { instance_size: 64, native_size: 57, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::PriorityQueue`1<TValue>*
class CORDL_TYPE PriorityQueue_1 : public ::System::Object {
public:
  // Declarations
  using StackItem = ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem<TValue>;

  __declspec(property(get = get_Empty)) bool Empty;

  /// @brief Field _heap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__heap, put = __cordl_internal_set__heap))::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>* _heap;

  /// @brief Field _initialized, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _keys, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__keys, put = __cordl_internal_set__keys))::ArrayW<TValue, ::Array<TValue>*> _keys;

  /// @brief Field _leq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leq, put = __cordl_internal_set__leq))::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* _leq;

  /// @brief Field _max, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__max, put = __cordl_internal_set__max)) int32_t _max;

  /// @brief Field _order, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__order, put = __cordl_internal_set__order))::ArrayW<int32_t, ::Array<int32_t>*> _order;

  /// @brief Field _size, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Method ExtractMin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ExtractMin();

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle Insert(TValue value);

  /// @brief Method Minimum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue Minimum();

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<TValue>* New_ctor(int32_t initialSize,
                                                                                                      ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle handle);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Swap(ByRef<int32_t> a, ByRef<int32_t> b);

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*& __cordl_internal_get__heap();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>*> const& __cordl_internal_get__heap() const;

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::ArrayW<TValue, ::Array<TValue>*> const& __cordl_internal_get__keys() const;

  constexpr ::ArrayW<TValue, ::Array<TValue>*>& __cordl_internal_get__keys();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*& __cordl_internal_get__leq();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*> const& __cordl_internal_get__leq() const;

  constexpr int32_t const& __cordl_internal_get__max() const;

  constexpr int32_t& __cordl_internal_get__max();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__order() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__order();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr void __cordl_internal_set__heap(::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__keys(::ArrayW<TValue, ::Array<TValue>*> value);

  constexpr void __cordl_internal_set__leq(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* value);

  constexpr void __cordl_internal_set__max(int32_t value);

  constexpr void __cordl_internal_set__order(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__size(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize, ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq);

  /// @brief Method get_Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Empty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PriorityQueue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PriorityQueue_1(PriorityQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PriorityQueue_1(PriorityQueue_1 const&) = delete;

  /// @brief Field _leq, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* ____leq;

  /// @brief Field _heap, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>* ____heap;

  /// @brief Field _keys, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<TValue, ::Array<TValue>*> ____keys;

  /// @brief Field _order, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____order;

  /// @brief Field _size, offset: 0x30, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _max, offset: 0x34, size: 0x4, def value: None
  int32_t ____max;

  /// @brief Field _initialized, offset: 0x38, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1, "UnityEngine.Rendering.Universal.LibTessDotNet", "PriorityQueue`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityQueue_1__StackItem, "UnityEngine.Rendering.Universal.LibTessDotNet", "PriorityQueue`1/StackItem");
