#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__MeshUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__PQHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshUtils)
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct __MeshUtils__EdgePair;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Edge;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Face;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename T> class __MeshUtils__Pooled_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Vertex;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __Tess__ActiveRegion;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class MeshUtils;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Edge;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Face;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename T> class __MeshUtils__Pooled_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Vertex;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct __MeshUtils__EdgePair;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex);
MARK_VAL_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair);
// Type: ::Pooled`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::MeshUtils::Pooled`1<T>*
class CORDL_TYPE __MeshUtils__Pooled_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _stack, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__stack, put = setStaticF__stack))::System::Collections::Generic::Stack_1<T>* _stack;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T Create();

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Free();

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>* New_ctor();

  /// @brief Method OnFree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnFree();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Stack_1<T>* getStaticF__stack();

  static inline void setStaticF__stack(::System::Collections::Generic::Stack_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshUtils__Pooled_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Pooled_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshUtils__Pooled_1(__MeshUtils__Pooled_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Pooled_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshUtils__Pooled_1(__MeshUtils__Pooled_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: ::Vertex
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::MeshUtils::Vertex*
class CORDL_TYPE __MeshUtils__Vertex : public ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> {
public:
  // Declarations
  /// @brief Field _anEdge, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__anEdge, put = __cordl_internal_set__anEdge))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _anEdge;

  /// @brief Field _coords, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get__coords, put = __cordl_internal_set__coords))::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 _coords;

  /// @brief Field _data, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__data, put = __cordl_internal_set__data))::System::Object* _data;

  /// @brief Field _n, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__n, put = __cordl_internal_set__n)) int32_t _n;

  /// @brief Field _next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* _next;

  /// @brief Field _pqHandle, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__pqHandle, put = __cordl_internal_set__pqHandle))::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle _pqHandle;

  /// @brief Field _prev, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__prev, put = __cordl_internal_set__prev))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* _prev;

  /// @brief Field _s, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__s, put = __cordl_internal_set__s)) float_t _s;

  /// @brief Field _t, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__t, put = __cordl_internal_set__t)) float_t _t;

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* New_ctor();

  /// @brief Method Reset, addr 0x2892ac8, size 0x7c, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__anEdge();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__anEdge() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& __cordl_internal_get__coords() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& __cordl_internal_get__coords();

  constexpr ::System::Object*& __cordl_internal_get__data();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__data() const;

  constexpr int32_t const& __cordl_internal_get__n() const;

  constexpr int32_t& __cordl_internal_get__n();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const& __cordl_internal_get__next() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle const& __cordl_internal_get__pqHandle() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle& __cordl_internal_get__pqHandle();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& __cordl_internal_get__prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const& __cordl_internal_get__prev() const;

  constexpr float_t const& __cordl_internal_get__s() const;

  constexpr float_t& __cordl_internal_get__s();

  constexpr float_t const& __cordl_internal_get__t() const;

  constexpr float_t& __cordl_internal_get__t();

  constexpr void __cordl_internal_set__anEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__coords(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value);

  constexpr void __cordl_internal_set__data(::System::Object* value);

  constexpr void __cordl_internal_set__n(int32_t value);

  constexpr void __cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value);

  constexpr void __cordl_internal_set__pqHandle(::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle value);

  constexpr void __cordl_internal_set__prev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value);

  constexpr void __cordl_internal_set__s(float_t value);

  constexpr void __cordl_internal_set__t(float_t value);

  /// @brief Method .ctor, addr 0x2892b44, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshUtils__Vertex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Vertex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshUtils__Vertex(__MeshUtils__Vertex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Vertex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshUtils__Vertex(__MeshUtils__Vertex const&) = delete;

  /// @brief Field _prev, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* ____prev;

  /// @brief Field _next, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* ____next;

  /// @brief Field _anEdge, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____anEdge;

  /// @brief Field _coords, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 ____coords;

  /// @brief Field _s, offset: 0x34, size: 0x4, def value: None
  float_t ____s;

  /// @brief Field _t, offset: 0x38, size: 0x4, def value: None
  float_t ____t;

  /// @brief Field _pqHandle, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::PQHandle ____pqHandle;

  /// @brief Field _n, offset: 0x40, size: 0x4, def value: None
  int32_t ____n;

  /// @brief Field _data, offset: 0x48, size: 0x8, def value: None
  ::System::Object* ____data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____prev) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____anEdge) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____coords) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____s) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____t) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____pqHandle) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____n) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex, ____data) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: ::Face
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 54, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::MeshUtils::Face*
class CORDL_TYPE __MeshUtils__Face : public ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> {
public:
  // Declarations
  __declspec(property(get = get_VertsCount)) int32_t VertsCount;

  /// @brief Field _anEdge, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__anEdge, put = __cordl_internal_set__anEdge))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _anEdge;

  /// @brief Field _inside, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get__inside, put = __cordl_internal_set__inside)) bool _inside;

  /// @brief Field _marked, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get__marked, put = __cordl_internal_set__marked)) bool _marked;

  /// @brief Field _n, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__n, put = __cordl_internal_set__n)) int32_t _n;

  /// @brief Field _next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* _next;

  /// @brief Field _prev, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__prev, put = __cordl_internal_set__prev))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* _prev;

  /// @brief Field _trail, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__trail, put = __cordl_internal_set__trail))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* _trail;

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* New_ctor();

  /// @brief Method Reset, addr 0x2892b8c, size 0x10, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__anEdge();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__anEdge() const;

  constexpr bool const& __cordl_internal_get__inside() const;

  constexpr bool& __cordl_internal_get__inside();

  constexpr bool const& __cordl_internal_get__marked() const;

  constexpr bool& __cordl_internal_get__marked();

  constexpr int32_t const& __cordl_internal_get__n() const;

  constexpr int32_t& __cordl_internal_get__n();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const& __cordl_internal_get__next() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& __cordl_internal_get__prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const& __cordl_internal_get__prev() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& __cordl_internal_get__trail();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const& __cordl_internal_get__trail() const;

  constexpr void __cordl_internal_set__anEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__inside(bool value);

  constexpr void __cordl_internal_set__marked(bool value);

  constexpr void __cordl_internal_set__n(int32_t value);

  constexpr void __cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value);

  constexpr void __cordl_internal_set__prev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value);

  constexpr void __cordl_internal_set__trail(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value);

  /// @brief Method .ctor, addr 0x2892b9c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_VertsCount, addr 0x28925ec, size 0x34, virtual false, abstract: false, final false
  inline int32_t get_VertsCount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshUtils__Face();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Face", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshUtils__Face(__MeshUtils__Face&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Face", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshUtils__Face(__MeshUtils__Face const&) = delete;

  /// @brief Field _prev, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* ____prev;

  /// @brief Field _next, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* ____next;

  /// @brief Field _anEdge, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____anEdge;

  /// @brief Field _trail, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* ____trail;

  /// @brief Field _n, offset: 0x30, size: 0x4, def value: None
  int32_t ____n;

  /// @brief Field _marked, offset: 0x34, size: 0x1, def value: None
  bool ____marked;

  /// @brief Field _inside, offset: 0x35, size: 0x1, def value: None
  bool ____inside;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, ____prev) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, ____next) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, ____anEdge) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, ____trail) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, ____n) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, ____marked) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face, ____inside) == 0x35, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: ::EdgePair
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: true
// CS Name: ::MeshUtils::EdgePair
struct CORDL_TYPE __MeshUtils__EdgePair {
public:
  // Declarations
  /// @brief Method Create, addr 0x2891a08, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair Create();

  /// @brief Method Reset, addr 0x2892be4, size 0x8, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshUtils__EdgePair();

  // Ctor Parameters [CppParam { name: "_e", ty: "::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*", modifiers: "", def_value: None }, CppParam { name: "_eSym", ty:
  // "::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*", modifiers: "", def_value: None }]
  constexpr __MeshUtils__EdgePair(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _e, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _eSym) noexcept;

  /// @brief Field _e, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _e;

  /// @brief Field _eSym, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _eSym;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair, _e) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair, _eSym) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: ::Edge
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::MeshUtils::Edge*
class CORDL_TYPE __MeshUtils__Edge : public ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> {
public:
  // Declarations
  __declspec(property(get = get__Dnext, put = set__Dnext))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Dnext;

  __declspec(property(get = get__Dprev, put = set__Dprev))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Dprev;

  __declspec(property(get = get__Dst, put = set__Dst))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* _Dst;

  /// @brief Field _Lface, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Lface, put = __cordl_internal_set__Lface))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* _Lface;

  /// @brief Field _Lnext, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Lnext, put = __cordl_internal_set__Lnext))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Lnext;

  __declspec(property(get = get__Lprev, put = set__Lprev))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Lprev;

  /// @brief Field _Onext, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__Onext, put = __cordl_internal_set__Onext))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Onext;

  __declspec(property(get = get__Oprev, put = set__Oprev))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Oprev;

  /// @brief Field _Org, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Org, put = __cordl_internal_set__Org))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* _Org;

  __declspec(property(get = get__Rface, put = set__Rface))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* _Rface;

  __declspec(property(get = get__Rnext, put = set__Rnext))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Rnext;

  __declspec(property(get = get__Rprev, put = set__Rprev))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Rprev;

  /// @brief Field _Sym, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__Sym, put = __cordl_internal_set__Sym))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _Sym;

  /// @brief Field _activeRegion, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__activeRegion, put = __cordl_internal_set__activeRegion))::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* _activeRegion;

  /// @brief Field _next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__next, put = __cordl_internal_set__next))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _next;

  /// @brief Field _pair, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__pair, put = __cordl_internal_set__pair))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair _pair;

  /// @brief Field _winding, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__winding, put = __cordl_internal_set__winding)) int32_t _winding;

  /// @brief Method EnsureFirst, addr 0x2892a3c, size 0x2c, virtual false, abstract: false, final false
  static inline void EnsureFirst(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> e);

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* New_ctor();

  /// @brief Method Reset, addr 0x2892d24, size 0x14, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*& __cordl_internal_get__Lface();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*> const& __cordl_internal_get__Lface() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__Lnext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__Lnext() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__Onext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__Onext() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& __cordl_internal_get__Org();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const& __cordl_internal_get__Org() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__Sym();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__Sym() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*& __cordl_internal_get__activeRegion();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*> const& __cordl_internal_get__activeRegion() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__next() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair const& __cordl_internal_get__pair() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair& __cordl_internal_get__pair();

  constexpr int32_t const& __cordl_internal_get__winding() const;

  constexpr int32_t& __cordl_internal_get__winding();

  constexpr void __cordl_internal_set__Lface(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value);

  constexpr void __cordl_internal_set__Lnext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__Onext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__Org(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value);

  constexpr void __cordl_internal_set__Sym(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__activeRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* value);

  constexpr void __cordl_internal_set__next(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__pair(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair value);

  constexpr void __cordl_internal_set__winding(int32_t value);

  /// @brief Method .ctor, addr 0x2892d38, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get__Dnext, addr 0x2892c94, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* get__Dnext();

  /// @brief Method get__Dprev, addr 0x2892c24, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* get__Dprev();

  /// @brief Method get__Dst, addr 0x2891450, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* get__Dst();

  /// @brief Method get__Lprev, addr 0x2892620, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* get__Lprev();

  /// @brief Method get__Oprev, addr 0x28920b4, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* get__Oprev();

  /// @brief Method get__Rface, addr 0x2892098, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* get__Rface();

  /// @brief Method get__Rnext, addr 0x2892cdc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* get__Rnext();

  /// @brief Method get__Rprev, addr 0x2892c5c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* get__Rprev();

  /// @brief Method set__Dnext, addr 0x2892cb8, size 0x24, virtual false, abstract: false, final false
  inline void set__Dnext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  /// @brief Method set__Dprev, addr 0x2892c40, size 0x1c, virtual false, abstract: false, final false
  inline void set__Dprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  /// @brief Method set__Dst, addr 0x2892264, size 0x1c, virtual false, abstract: false, final false
  inline void set__Dst(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value);

  /// @brief Method set__Lprev, addr 0x2892c08, size 0x1c, virtual false, abstract: false, final false
  inline void set__Lprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  /// @brief Method set__Oprev, addr 0x2892bec, size 0x1c, virtual false, abstract: false, final false
  inline void set__Oprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  /// @brief Method set__Rface, addr 0x2892280, size 0x1c, virtual false, abstract: false, final false
  inline void set__Rface(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* value);

  /// @brief Method set__Rnext, addr 0x2892d00, size 0x24, virtual false, abstract: false, final false
  inline void set__Rnext(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  /// @brief Method set__Rprev, addr 0x2892c78, size 0x1c, virtual false, abstract: false, final false
  inline void set__Rprev(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MeshUtils__Edge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Edge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MeshUtils__Edge(__MeshUtils__Edge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MeshUtils__Edge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MeshUtils__Edge(__MeshUtils__Edge const&) = delete;

  /// @brief Field _pair, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair ____pair;

  /// @brief Field _next, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____next;

  /// @brief Field _Sym, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____Sym;

  /// @brief Field _Onext, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____Onext;

  /// @brief Field _Lnext, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____Lnext;

  /// @brief Field _Org, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* ____Org;

  /// @brief Field _Lface, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* ____Lface;

  /// @brief Field _activeRegion, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* ____activeRegion;

  /// @brief Field _winding, offset: 0x58, size: 0x4, def value: None
  int32_t ____winding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____pair) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____Sym) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____Onext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____Lnext) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____Org) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____Lface) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____activeRegion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge, ____winding) == 0x58, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::MeshUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::MeshUtils*
class CORDL_TYPE MeshUtils : public ::System::Object {
public:
  // Declarations
  using Edge = ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge;

  using EdgePair = ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair;

  using Face = ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face;

  template <typename T> using Pooled_1 = ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1<T>;

  using Vertex = ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex;

  /// @brief Method FaceArea, addr 0x2892a68, size 0x60, virtual false, abstract: false, final false
  static inline float_t FaceArea(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* f);

  /// @brief Method KillEdge, addr 0x28920d0, size 0x94, virtual false, abstract: false, final false
  static inline void KillEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eDel);

  /// @brief Method KillFace, addr 0x2891ed0, size 0x88, virtual false, abstract: false, final false
  static inline void KillFace(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* fDel, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* newLFace);

  /// @brief Method KillVertex, addr 0x2891e48, size 0x88, virtual false, abstract: false, final false
  static inline void KillVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vDel, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* newOrg);

  /// @brief Method MakeEdge, addr 0x2891bd8, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* MakeEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eNext);

  /// @brief Method MakeFace, addr 0x2891cec, size 0xa0, virtual false, abstract: false, final false
  static inline void MakeFace(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrig, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* fNext);

  /// @brief Method MakeVertex, addr 0x2891c58, size 0x94, virtual false, abstract: false, final false
  static inline void MakeVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eOrig, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vNext);

  /// @brief Method Splice, addr 0x2891f58, size 0x48, virtual false, abstract: false, final false
  static inline void Splice(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* a, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* b);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshUtils(MeshUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshUtils(MeshUtils const&) = delete;

  /// @brief Field Undef offset 0xffffffff size 0x4
  static constexpr int32_t Undef{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::MeshUtils*, "UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*, "UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Edge");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face*, "UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Face");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Pooled_1, "UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Pooled`1");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*, "UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/Vertex");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__EdgePair, "UnityEngine.Rendering.Universal.LibTessDotNet", "MeshUtils/EdgePair");
