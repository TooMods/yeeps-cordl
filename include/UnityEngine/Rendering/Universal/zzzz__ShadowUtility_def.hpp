#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowUtility)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct ContourVertex;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct Vec3;
}
namespace UnityEngine::Rendering::Universal {
struct __ShadowUtility__Edge;
}
namespace UnityEngine::Rendering::Universal {
class __ShadowUtility____c;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShadowUtility;
}
namespace UnityEngine::Rendering::Universal {
class __ShadowUtility____c;
}
namespace UnityEngine::Rendering::Universal {
struct __ShadowUtility__Edge;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ShadowUtility);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::__ShadowUtility____c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge);
// Type: ::Edge
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 41, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::ShadowUtility::Edge
struct CORDL_TYPE __ShadowUtility__Edge {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>*();

  /// @brief Method AssignVertexIndices, addr 0x2c58764, size 0x14, virtual false, abstract: false, final false
  inline void AssignVertexIndices(int32_t vi0, int32_t vi1);

  /// @brief Method Compare, addr 0x2c599f4, size 0x40, virtual false, abstract: false, final false
  inline int32_t Compare(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge a, ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge b);

  /// @brief Method CompareTo, addr 0x2c58b4c, size 0x38, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge edgeToCompare);

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>"
  constexpr ::System::IComparable_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* i___System__IComparable_1___UnityEngine__Rendering__Universal____ShadowUtility__Edge_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShadowUtility__Edge();

  // Ctor Parameters [CppParam { name: "vertexIndex0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "vertexIndex1", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "tangent", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "compareReversed", ty: "bool", modifiers: "", def_value: None }]
  constexpr __ShadowUtility__Edge(int32_t vertexIndex0, int32_t vertexIndex1, ::UnityEngine::Vector4 tangent, bool compareReversed) noexcept;

  /// @brief Field vertexIndex0, offset: 0x0, size: 0x4, def value: None
  int32_t vertexIndex0;

  /// @brief Field vertexIndex1, offset: 0x4, size: 0x4, def value: None
  int32_t vertexIndex1;

  /// @brief Field tangent, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Vector4 tangent;

  /// @brief Field compareReversed, offset: 0x18, size: 0x1, def value: None
  bool compareReversed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, 0x1c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, vertexIndex0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, vertexIndex1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, tangent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, compareReversed) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::ShadowUtility::<>c*
class CORDL_TYPE __ShadowUtility____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::__ShadowUtility____c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<int32_t, int32_t>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_1,
                             put = setStaticF___9__9_1))::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>* __9__9_1;

  /// @brief Field <>9__9_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_2, put = setStaticF___9__9_2))::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>* __9__9_2;

  static inline ::UnityEngine::Rendering::Universal::__ShadowUtility____c* New_ctor();

  /// @brief Method <GenerateShadowMesh>b__9_0, addr 0x2c59aa0, size 0x8, virtual false, abstract: false, final false
  inline int32_t _GenerateShadowMesh_b__9_0(int32_t i);

  /// @brief Method <GenerateShadowMesh>b__9_1, addr 0x2c59aa8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 _GenerateShadowMesh_b__9_1(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex v);

  /// @brief Method <GenerateShadowMesh>b__9_2, addr 0x2c59ab4, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Color _GenerateShadowMesh_b__9_2(::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex v);

  /// @brief Method .ctor, addr 0x2c59a98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::__ShadowUtility____c* getStaticF___9();

  static inline ::System::Func_2<int32_t, int32_t>* getStaticF___9__9_0();

  static inline ::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>* getStaticF___9__9_1();

  static inline ::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>* getStaticF___9__9_2();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::__ShadowUtility____c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<int32_t, int32_t>* value);

  static inline void setStaticF___9__9_1(::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Vector3>* value);

  static inline void setStaticF___9__9_2(::System::Func_2<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::UnityEngine::Color>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ShadowUtility____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ShadowUtility____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ShadowUtility____c(__ShadowUtility____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ShadowUtility____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ShadowUtility____c(__ShadowUtility____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__ShadowUtility____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::ShadowUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ShadowUtility*
class CORDL_TYPE ShadowUtility : public ::System::Object {
public:
  // Declarations
  using Edge = ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge;

  using __c = ::UnityEngine::Rendering::Universal::__ShadowUtility____c;

  /// @brief Method ComputeBoundingSphere, addr 0x2c59118, size 0xc8, virtual false, abstract: false, final false
  static inline void ComputeBoundingSphere(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath, ByRef<::UnityEngine::BoundingSphere> boundingSphere);

  /// @brief Method CreateEdge, addr 0x2c58544, size 0x220, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::__ShadowUtility__Edge
  CreateEdge(int32_t triangleIndexA, int32_t triangleIndexB, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::List_1<int32_t>* triangles);

  /// @brief Method CreateShadowTriangles, addr 0x2c58bd4, size 0x428, virtual false, abstract: false, final false
  static inline void CreateShadowTriangles(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors,
                                           ::System::Collections::Generic::List_1<int32_t>* triangles, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents,
                                           ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edges);

  /// @brief Method GenerateShadowMesh, addr 0x2c591e0, size 0x80c, virtual false, abstract: false, final false
  static inline ::UnityEngine::BoundingSphere GenerateShadowMesh(::UnityEngine::Mesh* mesh, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> shapePath);

  /// @brief Method InitializeTangents, addr 0x2c59020, size 0xf8, virtual false, abstract: false, final false
  static inline void InitializeTangents(int32_t tangentsToAdd, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* tangents);

  /// @brief Method InterpCustomVertexData, addr 0x2c58ffc, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Object* InterpCustomVertexData(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 position, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data,
                                                         ::ArrayW<float_t, ::Array<float_t>*> weights);

  /// @brief Method IsOutsideEdge, addr 0x2c58a14, size 0x138, virtual false, abstract: false, final false
  static inline bool IsOutsideEdge(int32_t edgeIndex, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edgesToProcess);

  static inline ::UnityEngine::Rendering::Universal::ShadowUtility* New_ctor();

  /// @brief Method PopulateEdgeArray, addr 0x2c58778, size 0x29c, virtual false, abstract: false, final false
  static inline void PopulateEdgeArray(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* vertices, ::System::Collections::Generic::List_1<int32_t>* triangles,
                                       ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edges);

  /// @brief Method SortEdges, addr 0x2c58b84, size 0x50, virtual false, abstract: false, final false
  static inline void SortEdges(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::__ShadowUtility__Edge>* edgesToProcess);

  /// @brief Method .ctor, addr 0x2c599ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShadowUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShadowUtility(ShadowUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShadowUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShadowUtility(ShadowUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ShadowUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ShadowUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ShadowUtility*, "UnityEngine.Rendering.Universal", "ShadowUtility");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::__ShadowUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ShadowUtility____c*, "UnityEngine.Rendering.Universal", "ShadowUtility/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__ShadowUtility__Edge, "UnityEngine.Rendering.Universal", "ShadowUtility/Edge");
