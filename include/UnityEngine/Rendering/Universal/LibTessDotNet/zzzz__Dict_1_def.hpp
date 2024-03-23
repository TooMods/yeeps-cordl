#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dict_1)
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
template <typename TValue> class __Dict_1__LessOrEqual;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __Dict_1__Node;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class Dict_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __Dict_1__LessOrEqual;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __Dict_1__Node;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node);
// Type: ::Node
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::Dict`1::Node<TValue>*
class CORDL_TYPE __Dict_1__Node : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Key)) TValue Key;

  __declspec(property(get = get_Next))::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* Next;

  __declspec(property(get = get_Prev))::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* Prev;

  /// @brief Field _key, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__key, put = __cordl_internal_set__key)) TValue _key;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* _next;

  /// @brief Field _prev, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prev, put = __cordl_internal_set__prev))::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* _prev;

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* New_ctor();

  constexpr TValue const& __cordl_internal_get__key() const;

  constexpr TValue& __cordl_internal_get__key();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*> const& __cordl_internal_get__next() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*& __cordl_internal_get__prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*> const& __cordl_internal_get__prev() const;

  constexpr void __cordl_internal_set__key(TValue value);

  constexpr void __cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* value);

  constexpr void __cordl_internal_set__prev(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Key();

  /// @brief Method get_Next, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* get_Next();

  /// @brief Method get_Prev, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* get_Prev();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dict_1__Node();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dict_1__Node", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dict_1__Node(__Dict_1__Node&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dict_1__Node", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dict_1__Node(__Dict_1__Node const&) = delete;

  /// @brief Field _key, offset: 0x10, size: 0x8, def value: None
  TValue ____key;

  /// @brief Field _prev, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* ____prev;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* ____next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: ::LessOrEqual
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::Dict`1::LessOrEqual<TValue>*
class CORDL_TYPE __Dict_1__LessOrEqual : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(TValue lhs, TValue rhs, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Invoke(TValue lhs, TValue rhs);

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Dict_1__LessOrEqual();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Dict_1__LessOrEqual", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Dict_1__LessOrEqual(__Dict_1__LessOrEqual&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Dict_1__LessOrEqual", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Dict_1__LessOrEqual(__Dict_1__LessOrEqual const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::Dict`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename TValue>
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::Dict`1<TValue>*
class CORDL_TYPE Dict_1 : public ::System::Object {
public:
  // Declarations
  using LessOrEqual = ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>;

  using Node = ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>;

  /// @brief Field _head, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__head, put = __cordl_internal_set__head))::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* _head;

  /// @brief Field _leq, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__leq, put = __cordl_internal_set__leq))::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* _leq;

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* Find(TValue key);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* Insert(TValue key);

  /// @brief Method InsertBefore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* InsertBefore(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* node, TValue key);

  /// @brief Method Min, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* Min();

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<TValue>* New_ctor(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* leq);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* node);

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*& __cordl_internal_get__head();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>*> const& __cordl_internal_get__head() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*& __cordl_internal_get__leq();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>*> const& __cordl_internal_get__leq() const;

  constexpr void __cordl_internal_set__head(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* value);

  constexpr void __cordl_internal_set__leq(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* leq);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dict_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dict_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dict_1(Dict_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dict_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dict_1(Dict_1 const&) = delete;

  /// @brief Field _leq, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual<TValue>* ____leq;

  /// @brief Field _head, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<TValue>* ____head;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1, "UnityEngine.Rendering.Universal.LibTessDotNet", "Dict`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__LessOrEqual, "UnityEngine.Rendering.Universal.LibTessDotNet", "Dict`1/LessOrEqual");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node, "UnityEngine.Rendering.Universal.LibTessDotNet", "Dict`1/Node");
