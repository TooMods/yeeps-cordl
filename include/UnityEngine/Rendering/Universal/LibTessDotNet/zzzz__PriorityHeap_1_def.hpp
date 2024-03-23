#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PriorityHeap_1)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct PQHandle;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __PriorityHeap_1__HandleElem;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __PriorityHeap_1__LessOrEqual;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class PriorityHeap_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __PriorityHeap_1__HandleElem;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __PriorityHeap_1__LessOrEqual;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual);
// Type: ::LessOrEqual
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::PriorityHeap`1::LessOrEqual<TValue>*
class CORDL_TYPE __PriorityHeap_1__LessOrEqual : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(TValue lhs, TValue rhs, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(TValue lhs, TValue rhs);

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PriorityHeap_1__LessOrEqual();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PriorityHeap_1__LessOrEqual", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PriorityHeap_1__LessOrEqual(__PriorityHeap_1__LessOrEqual&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PriorityHeap_1__LessOrEqual", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PriorityHeap_1__LessOrEqual(__PriorityHeap_1__LessOrEqual const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: ::HandleElem
// SizeInfo { instance_size: 32, native_size: 28, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::PriorityHeap`1::HandleElem<TValue>*
class CORDL_TYPE __PriorityHeap_1__HandleElem : public ::System::Object {
public:
  // Declarations
  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) TValue _key;

  /// @brief Field _node, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node)) int32_t _node;

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>* New_ctor();

  constexpr TValue const& __cordl_internal_get__key() const;

  constexpr TValue& __cordl_internal_get__key();

  constexpr int32_t const& __cordl_internal_get__node() const;

  constexpr int32_t& __cordl_internal_get__node();

  constexpr void __cordl_internal_set__key(TValue value);

  constexpr void __cordl_internal_set__node(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PriorityHeap_1__HandleElem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__PriorityHeap_1__HandleElem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PriorityHeap_1__HandleElem(__PriorityHeap_1__HandleElem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PriorityHeap_1__HandleElem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PriorityHeap_1__HandleElem(__PriorityHeap_1__HandleElem const&) = delete;

  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  TValue ____key;

  /// @brief Field _node, offset: 0x18, size: 0x4, def value: None
  int32_t ____node;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::PriorityHeap`1
// SizeInfo { instance_size: 56, native_size: 53, calculated_instance_size: 56, calculated_native_size: 53, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::PriorityHeap`1<TValue>*
class CORDL_TYPE PriorityHeap_1 : public ::System::Object {
public:
  // Declarations
  using HandleElem = ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>;

  using LessOrEqual = ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>;

  __declspec(property(get = get_Empty)) bool Empty;

  /// @brief Field _freeList, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__freeList, put = __cordl_internal_set__freeList)) int32_t _freeList;

  /// @brief Field _handles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__handles,
                      put = __cordl_internal_set__handles))::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
                                                                    ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*> _handles;

  /// @brief Field _initialized, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _leq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leq, put = __cordl_internal_set__leq))::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* _leq;

  /// @brief Field _max, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__max, put = __cordl_internal_set__max)) int32_t _max;

  /// @brief Field _nodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nodes, put = __cordl_internal_set__nodes))::ArrayW<int32_t, ::Array<int32_t>*> _nodes;

  /// @brief Field _size, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__size, put = __cordl_internal_set__size)) int32_t _size;

  /// @brief Method ExtractMin, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue ExtractMin();

  /// @brief Method FloatDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FloatDown(int32_t curr);

  /// @brief Method FloatUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void FloatUp(int32_t curr);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle Insert(TValue value);

  /// @brief Method Minimum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue Minimum();

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1<TValue>* New_ctor(int32_t initialSize,
                                                                                                     ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle handle);

  constexpr int32_t const& __cordl_internal_get__freeList() const;

  constexpr int32_t& __cordl_internal_get__freeList();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
                     ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*> const&
  __cordl_internal_get__handles() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
                     ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*>&
  __cordl_internal_get__handles();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*& __cordl_internal_get__leq();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>*> const& __cordl_internal_get__leq() const;

  constexpr int32_t const& __cordl_internal_get__max() const;

  constexpr int32_t& __cordl_internal_get__max();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__nodes() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__nodes();

  constexpr int32_t const& __cordl_internal_get__size() const;

  constexpr int32_t& __cordl_internal_get__size();

  constexpr void __cordl_internal_set__freeList(int32_t value);

  constexpr void __cordl_internal_set__handles(::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
                                                        ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*>
                                                   value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__leq(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* value);

  constexpr void __cordl_internal_set__max(int32_t value);

  constexpr void __cordl_internal_set__nodes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__size(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t initialSize, ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* leq);

  /// @brief Method get_Empty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Empty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PriorityHeap_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PriorityHeap_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PriorityHeap_1(PriorityHeap_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PriorityHeap_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PriorityHeap_1(PriorityHeap_1 const&) = delete;

  /// @brief Field _leq, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual<TValue>* ____leq;

  /// @brief Field _nodes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____nodes;

  /// @brief Field _handles, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*,
           ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem<TValue>*>*>
      ____handles;

  /// @brief Field _size, offset: 0x28, size: 0x4, def value: None
  int32_t ____size;

  /// @brief Field _max, offset: 0x2c, size: 0x4, def value: None
  int32_t ____max;

  /// @brief Field _freeList, offset: 0x30, size: 0x4, def value: None
  int32_t ____freeList;

  /// @brief Field _initialized, offset: 0x34, size: 0x1, def value: None
  bool ____initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityHeap_1, "UnityEngine.Rendering.Universal.LibTessDotNet", "PriorityHeap`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__HandleElem, "UnityEngine.Rendering.Universal.LibTessDotNet", "PriorityHeap`1/HandleElem");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::__PriorityHeap_1__LessOrEqual, "UnityEngine.Rendering.Universal.LibTessDotNet", "PriorityHeap`1/LessOrEqual");
