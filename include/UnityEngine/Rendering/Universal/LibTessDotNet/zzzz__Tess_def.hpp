#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__Vec3_def.hpp"
#include "UnityEngine/Rendering/Universal/LibTessDotNet/zzzz__WindingRule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Tess)
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class CombineCallback;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct ContourOrientation;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct ContourVertex;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class Dict_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct ElementType;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class Mesh;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class PriorityQueue_1;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct Vec3;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
struct WindingRule;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
template <typename TValue> class __Dict_1__Node;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Edge;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Face;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __MeshUtils__Vertex;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __Tess__ActiveRegion;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class Tess;
}
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
class __Tess__ActiveRegion;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion);
// Type: ::ActiveRegion
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::Tess::ActiveRegion*
class CORDL_TYPE __Tess__ActiveRegion : public ::System::Object {
public:
  // Declarations
  /// @brief Field _dirty, offset 0x26, size 0x1
  __declspec(property(get = __cordl_internal_get__dirty, put = __cordl_internal_set__dirty)) bool _dirty;

  /// @brief Field _eUp, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__eUp, put = __cordl_internal_set__eUp))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* _eUp;

  /// @brief Field _fixUpperEdge, offset 0x27, size 0x1
  __declspec(property(get = __cordl_internal_get__fixUpperEdge, put = __cordl_internal_set__fixUpperEdge)) bool _fixUpperEdge;

  /// @brief Field _inside, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__inside, put = __cordl_internal_set__inside)) bool _inside;

  /// @brief Field _nodeUp, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__nodeUp,
      put = __cordl_internal_set__nodeUp))::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* _nodeUp;

  /// @brief Field _sentinel, offset 0x25, size 0x1
  __declspec(property(get = __cordl_internal_get__sentinel, put = __cordl_internal_set__sentinel)) bool _sentinel;

  /// @brief Field _windingNumber, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__windingNumber, put = __cordl_internal_set__windingNumber)) int32_t _windingNumber;

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* New_ctor();

  constexpr bool const& __cordl_internal_get__dirty() const;

  constexpr bool& __cordl_internal_get__dirty();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*& __cordl_internal_get__eUp();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge*> const& __cordl_internal_get__eUp() const;

  constexpr bool const& __cordl_internal_get__fixUpperEdge() const;

  constexpr bool& __cordl_internal_get__fixUpperEdge();

  constexpr bool const& __cordl_internal_get__inside() const;

  constexpr bool& __cordl_internal_get__inside();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*& __cordl_internal_get__nodeUp();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*> const&
  __cordl_internal_get__nodeUp() const;

  constexpr bool const& __cordl_internal_get__sentinel() const;

  constexpr bool& __cordl_internal_get__sentinel();

  constexpr int32_t const& __cordl_internal_get__windingNumber() const;

  constexpr int32_t& __cordl_internal_get__windingNumber();

  constexpr void __cordl_internal_set__dirty(bool value);

  constexpr void __cordl_internal_set__eUp(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* value);

  constexpr void __cordl_internal_set__fixUpperEdge(bool value);

  constexpr void __cordl_internal_set__inside(bool value);

  constexpr void __cordl_internal_set__nodeUp(::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* value);

  constexpr void __cordl_internal_set__sentinel(bool value);

  constexpr void __cordl_internal_set__windingNumber(int32_t value);

  /// @brief Method .ctor, addr 0x2ad3618, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Tess__ActiveRegion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Tess__ActiveRegion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Tess__ActiveRegion(__Tess__ActiveRegion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Tess__ActiveRegion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Tess__ActiveRegion(__Tess__ActiveRegion const&) = delete;

  /// @brief Field _eUp, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* ____eUp;

  /// @brief Field _nodeUp, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__Dict_1__Node<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* ____nodeUp;

  /// @brief Field _windingNumber, offset: 0x20, size: 0x4, def value: None
  int32_t ____windingNumber;

  /// @brief Field _inside, offset: 0x24, size: 0x1, def value: None
  bool ____inside;

  /// @brief Field _sentinel, offset: 0x25, size: 0x1, def value: None
  bool ____sentinel;

  /// @brief Field _dirty, offset: 0x26, size: 0x1, def value: None
  bool ____dirty;

  /// @brief Field _fixUpperEdge, offset: 0x27, size: 0x1, def value: None
  bool ____fixUpperEdge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, ____eUp) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, ____nodeUp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, ____windingNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, ____inside) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, ____sentinel) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, ____dirty) == 0x26, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion, ____fixUpperEdge) == 0x27, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
// Type: UnityEngine.Rendering.Universal.LibTessDotNet::Tess
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 154, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::LibTessDotNet {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.LibTessDotNet::Tess*
class CORDL_TYPE Tess : public ::System::Object {
public:
  // Declarations
  using ActiveRegion = ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion;

  __declspec(property(get = get_ElementCount)) int32_t ElementCount;

  __declspec(property(get = get_Elements))::ArrayW<int32_t, ::Array<int32_t>*> Elements;

  /// @brief Field NoEmptyPolygons, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_NoEmptyPolygons, put = __cordl_internal_set_NoEmptyPolygons)) bool NoEmptyPolygons;

  __declspec(property(get = get_Normal, put = set_Normal))::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 Normal;

  /// @brief Field SUnitX, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_SUnitX, put = __cordl_internal_set_SUnitX)) float_t SUnitX;

  /// @brief Field SUnitY, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_SUnitY, put = __cordl_internal_set_SUnitY)) float_t SUnitY;

  /// @brief Field SentinelCoord, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_SentinelCoord, put = __cordl_internal_set_SentinelCoord)) float_t SentinelCoord;

  /// @brief Field UsePooling, offset 0x99, size 0x1
  __declspec(property(get = __cordl_internal_get_UsePooling, put = __cordl_internal_set_UsePooling)) bool UsePooling;

  __declspec(property(get = get_VertexCount)) int32_t VertexCount;

  __declspec(
      property(get = get_Vertices))::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> Vertices;

  /// @brief Field _bmaxX, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__bmaxX, put = __cordl_internal_set__bmaxX)) float_t _bmaxX;

  /// @brief Field _bmaxY, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__bmaxY, put = __cordl_internal_set__bmaxY)) float_t _bmaxY;

  /// @brief Field _bminX, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__bminX, put = __cordl_internal_set__bminX)) float_t _bminX;

  /// @brief Field _bminY, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__bminY, put = __cordl_internal_set__bminY)) float_t _bminY;

  /// @brief Field _combineCallback, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__combineCallback, put = __cordl_internal_set__combineCallback))::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* _combineCallback;

  /// @brief Field _dict, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__dict,
                      put = __cordl_internal_set__dict))::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* _dict;

  /// @brief Field _elementCount, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__elementCount, put = __cordl_internal_set__elementCount)) int32_t _elementCount;

  /// @brief Field _elements, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__elements, put = __cordl_internal_set__elements))::ArrayW<int32_t, ::Array<int32_t>*> _elements;

  /// @brief Field _event, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__event, put = __cordl_internal_set__event))::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* _event;

  /// @brief Field _mesh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mesh, put = __cordl_internal_set__mesh))::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh* _mesh;

  /// @brief Field _normal, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get__normal, put = __cordl_internal_set__normal))::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 _normal;

  /// @brief Field _pq, offset 0x58, size 0x8
  __declspec(
      property(get = __cordl_internal_get__pq,
               put = __cordl_internal_set__pq))::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>* _pq;

  /// @brief Field _sUnit, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get__sUnit, put = __cordl_internal_set__sUnit))::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 _sUnit;

  /// @brief Field _tUnit, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get__tUnit, put = __cordl_internal_set__tUnit))::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 _tUnit;

  /// @brief Field _vertexCount, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexCount, put = __cordl_internal_set__vertexCount)) int32_t _vertexCount;

  /// @brief Field _vertices, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__vertices, put = __cordl_internal_set__vertices))::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex,
                                                                                                           ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> _vertices;

  /// @brief Field _windingRule, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__windingRule, put = __cordl_internal_set__windingRule))::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule _windingRule;

  /// @brief Method AddContour, addr 0x2896534, size 0x8, virtual false, abstract: false, final false
  inline void AddContour(::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> vertices);

  /// @brief Method AddContour, addr 0x289653c, size 0x1d8, virtual false, abstract: false, final false
  inline void AddContour(::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> vertices,
                         ::UnityEngine::Rendering::Universal::LibTessDotNet::ContourOrientation forceOrientation);

  /// @brief Method AddRegionBelow, addr 0x28930c8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* AddRegionBelow(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regAbove,
                                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eNewUp);

  /// @brief Method AddRightEdges, addr 0x2893320, size 0x1bc, virtual false, abstract: false, final false
  inline void AddRightEdges(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eFirst,
                            ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eLast, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eTopLeft,
                            bool cleanUp);

  /// @brief Method AddSentinel, addr 0x2894900, size 0xf4, virtual false, abstract: false, final false
  inline void AddSentinel(float_t smin, float_t smax, float_t t);

  /// @brief Method CheckForIntersect, addr 0x2893d90, size 0x59c, virtual false, abstract: false, final false
  inline bool CheckForIntersect(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp);

  /// @brief Method CheckForLeftSplice, addr 0x2893c2c, size 0x164, virtual false, abstract: false, final false
  inline bool CheckForLeftSplice(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp);

  /// @brief Method CheckForRightSplice, addr 0x28934dc, size 0x18c, virtual false, abstract: false, final false
  inline bool CheckForRightSplice(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp);

  /// @brief Method CheckOrientation, addr 0x2895724, size 0xfc, virtual false, abstract: false, final false
  inline void CheckOrientation();

  /// @brief Method ComputeInterior, addr 0x2894f28, size 0x108, virtual false, abstract: false, final false
  inline void ComputeInterior();

  /// @brief Method ComputeNormal, addr 0x289510c, size 0x618, virtual false, abstract: false, final false
  inline void ComputeNormal(ByRef<::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3> norm);

  /// @brief Method ComputeWinding, addr 0x2893180, size 0x54, virtual false, abstract: false, final false
  inline void ComputeWinding(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg);

  /// @brief Method ConnectLeftDegenerate, addr 0x2894528, size 0xf8, virtual false, abstract: false, final false
  inline void ConnectLeftDegenerate(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vEvent);

  /// @brief Method ConnectLeftVertex, addr 0x28946e4, size 0x21c, virtual false, abstract: false, final false
  inline void ConnectLeftVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vEvent);

  /// @brief Method ConnectRightVertex, addr 0x289432c, size 0x1fc, virtual false, abstract: false, final false
  inline void ConnectRightVertex(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* eBottomLeft);

  /// @brief Method DeleteRegion, addr 0x2892f18, size 0x68, virtual false, abstract: false, final false
  inline void DeleteRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg);

  /// @brief Method DiscardExterior, addr 0x2895d38, size 0x5c, virtual false, abstract: false, final false
  inline void DiscardExterior();

  /// @brief Method DoneEdgeDict, addr 0x2894ad8, size 0x80, virtual false, abstract: false, final false
  inline void DoneEdgeDict();

  /// @brief Method DonePriorityQ, addr 0x2894e94, size 0x8, virtual false, abstract: false, final false
  inline void DonePriorityQ();

  /// @brief Method EdgeLeq, addr 0x2892e1c, size 0xfc, virtual false, abstract: false, final false
  inline bool EdgeLeq(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg1, ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg2);

  /// @brief Method FinishLeftRegions, addr 0x2893204, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* FinishLeftRegions(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regFirst,
                                                                                                  ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regLast);

  /// @brief Method FinishRegion, addr 0x28931d4, size 0x30, virtual false, abstract: false, final false
  inline void FinishRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg);

  /// @brief Method FixUpperEdge, addr 0x2892f80, size 0x44, virtual false, abstract: false, final false
  inline void FixUpperEdge(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* newEdge);

  /// @brief Method GetIntersectData, addr 0x28939a0, size 0x28c, virtual false, abstract: false, final false
  inline void GetIntersectData(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* isect, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* orgUp,
                               ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* dstUp, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* orgLo,
                               ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* dstLo);

  /// @brief Method GetNeighbourFace, addr 0x2895e40, size 0x38, virtual false, abstract: false, final false
  inline int32_t GetNeighbourFace(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* edge);

  /// @brief Method InitEdgeDict, addr 0x28949f4, size 0xe4, virtual false, abstract: false, final false
  inline void InitEdgeDict();

  /// @brief Method InitPriorityQ, addr 0x2894c90, size 0x204, virtual false, abstract: false, final false
  inline void InitPriorityQ();

  static inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Tess* New_ctor();

  /// @brief Method OutputContours, addr 0x2896290, size 0x210, virtual false, abstract: false, final false
  inline void OutputContours();

  /// @brief Method OutputPolymesh, addr 0x2895e78, size 0x418, virtual false, abstract: false, final false
  inline void OutputPolymesh(::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType elementType, int32_t polySize);

  /// @brief Method ProjectPolygon, addr 0x2895820, size 0x2d8, virtual false, abstract: false, final false
  inline void ProjectPolygon();

  /// @brief Method RegionAbove, addr 0x2892df4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* RegionAbove(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg);

  /// @brief Method RegionBelow, addr 0x2892dcc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* RegionBelow(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg);

  /// @brief Method RemoveDegenerateEdges, addr 0x2894b58, size 0x138, virtual false, abstract: false, final false
  inline void RemoveDegenerateEdges();

  /// @brief Method RemoveDegenerateFaces, addr 0x2894e9c, size 0x8c, virtual false, abstract: false, final false
  inline void RemoveDegenerateFaces();

  /// @brief Method SetWindingNumber, addr 0x2895d94, size 0xac, virtual false, abstract: false, final false
  inline void SetWindingNumber(int32_t value, bool keepOnlyBoundary);

  /// @brief Method SignedArea, addr 0x28964a0, size 0x94, virtual false, abstract: false, final false
  inline float_t SignedArea(::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> vertices);

  /// @brief Method SpliceMergeVertices, addr 0x2893898, size 0x18, virtual false, abstract: false, final false
  inline void SpliceMergeVertices(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* e1, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Edge* e2);

  /// @brief Method SweepEvent, addr 0x2894620, size 0xc4, virtual false, abstract: false, final false
  inline void SweepEvent(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* vEvent);

  /// @brief Method Tessellate, addr 0x2896714, size 0x8, virtual false, abstract: false, final false
  inline void Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule windingRule, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType elementType, int32_t polySize);

  /// @brief Method Tessellate, addr 0x289671c, size 0x11c, virtual false, abstract: false, final false
  inline void Tessellate(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule windingRule, ::UnityEngine::Rendering::Universal::LibTessDotNet::ElementType elementType, int32_t polySize,
                         ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* combineCallback);

  /// @brief Method TessellateInterior, addr 0x2895cd8, size 0x60, virtual false, abstract: false, final false
  inline void TessellateInterior();

  /// @brief Method TessellateMonoRegion, addr 0x2895af8, size 0x1e0, virtual false, abstract: false, final false
  inline void TessellateMonoRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Face* face);

  /// @brief Method TopLeftRegion, addr 0x2892fc4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* TopLeftRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg);

  /// @brief Method TopRightRegion, addr 0x2893074, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* TopRightRegion(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* reg);

  /// @brief Method VertexWeights, addr 0x28938b0, size 0xf0, virtual false, abstract: false, final false
  inline void VertexWeights(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* isect, ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* org,
                            ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* dst, ByRef<float_t> w0, ByRef<float_t> w1);

  /// @brief Method WalkDirtyRegions, addr 0x2893668, size 0x230, virtual false, abstract: false, final false
  inline void WalkDirtyRegions(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion* regUp);

  constexpr bool const& __cordl_internal_get_NoEmptyPolygons() const;

  constexpr bool& __cordl_internal_get_NoEmptyPolygons();

  constexpr float_t const& __cordl_internal_get_SUnitX() const;

  constexpr float_t& __cordl_internal_get_SUnitX();

  constexpr float_t const& __cordl_internal_get_SUnitY() const;

  constexpr float_t& __cordl_internal_get_SUnitY();

  constexpr float_t const& __cordl_internal_get_SentinelCoord() const;

  constexpr float_t& __cordl_internal_get_SentinelCoord();

  constexpr bool const& __cordl_internal_get_UsePooling() const;

  constexpr bool& __cordl_internal_get_UsePooling();

  constexpr float_t const& __cordl_internal_get__bmaxX() const;

  constexpr float_t& __cordl_internal_get__bmaxX();

  constexpr float_t const& __cordl_internal_get__bmaxY() const;

  constexpr float_t& __cordl_internal_get__bmaxY();

  constexpr float_t const& __cordl_internal_get__bminX() const;

  constexpr float_t& __cordl_internal_get__bminX();

  constexpr float_t const& __cordl_internal_get__bminY() const;

  constexpr float_t& __cordl_internal_get__bminY();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*& __cordl_internal_get__combineCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback*> const& __cordl_internal_get__combineCallback() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*& __cordl_internal_get__dict();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>*> const&
  __cordl_internal_get__dict() const;

  constexpr int32_t const& __cordl_internal_get__elementCount() const;

  constexpr int32_t& __cordl_internal_get__elementCount();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__elements() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__elements();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*& __cordl_internal_get__event();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*> const& __cordl_internal_get__event() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh*& __cordl_internal_get__mesh();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh*> const& __cordl_internal_get__mesh() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& __cordl_internal_get__normal() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& __cordl_internal_get__normal();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>*& __cordl_internal_get__pq();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>*> const&
  __cordl_internal_get__pq() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& __cordl_internal_get__sUnit() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& __cordl_internal_get__sUnit();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 const& __cordl_internal_get__tUnit() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3& __cordl_internal_get__tUnit();

  constexpr int32_t const& __cordl_internal_get__vertexCount() const;

  constexpr int32_t& __cordl_internal_get__vertexCount();

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> const&
  __cordl_internal_get__vertices() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*>& __cordl_internal_get__vertices();

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule const& __cordl_internal_get__windingRule() const;

  constexpr ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule& __cordl_internal_get__windingRule();

  constexpr void __cordl_internal_set_NoEmptyPolygons(bool value);

  constexpr void __cordl_internal_set_SUnitX(float_t value);

  constexpr void __cordl_internal_set_SUnitY(float_t value);

  constexpr void __cordl_internal_set_SentinelCoord(float_t value);

  constexpr void __cordl_internal_set_UsePooling(bool value);

  constexpr void __cordl_internal_set__bmaxX(float_t value);

  constexpr void __cordl_internal_set__bmaxY(float_t value);

  constexpr void __cordl_internal_set__bminX(float_t value);

  constexpr void __cordl_internal_set__bminY(float_t value);

  constexpr void __cordl_internal_set__combineCallback(::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* value);

  constexpr void __cordl_internal_set__dict(::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* value);

  constexpr void __cordl_internal_set__elementCount(int32_t value);

  constexpr void __cordl_internal_set__elements(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__event(::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* value);

  constexpr void __cordl_internal_set__mesh(::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh* value);

  constexpr void __cordl_internal_set__normal(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value);

  constexpr void __cordl_internal_set__pq(::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>* value);

  constexpr void __cordl_internal_set__sUnit(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value);

  constexpr void __cordl_internal_set__tUnit(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value);

  constexpr void __cordl_internal_set__vertexCount(int32_t value);

  constexpr void
  __cordl_internal_set__vertices(::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> value);

  constexpr void __cordl_internal_set__windingRule(::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule value);

  /// @brief Method .ctor, addr 0x2895068, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ElementCount, addr 0x2895060, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ElementCount();

  /// @brief Method get_Elements, addr 0x2895058, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_Elements();

  /// @brief Method get_Normal, addr 0x2895030, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 get_Normal();

  /// @brief Method get_VertexCount, addr 0x2895050, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_VertexCount();

  /// @brief Method get_Vertices, addr 0x2895048, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> get_Vertices();

  /// @brief Method set_Normal, addr 0x289503c, size 0xc, virtual false, abstract: false, final false
  inline void set_Normal(::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Tess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tess(Tess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tess(Tess const&) = delete;

  /// @brief Field _mesh, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::Mesh* ____mesh;

  /// @brief Field _normal, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 ____normal;

  /// @brief Field _sUnit, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 ____sUnit;

  /// @brief Field _tUnit, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::Vec3 ____tUnit;

  /// @brief Field _bminX, offset: 0x3c, size: 0x4, def value: None
  float_t ____bminX;

  /// @brief Field _bminY, offset: 0x40, size: 0x4, def value: None
  float_t ____bminY;

  /// @brief Field _bmaxX, offset: 0x44, size: 0x4, def value: None
  float_t ____bmaxX;

  /// @brief Field _bmaxY, offset: 0x48, size: 0x4, def value: None
  float_t ____bmaxY;

  /// @brief Field _windingRule, offset: 0x4c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::WindingRule ____windingRule;

  /// @brief Field _dict, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::Dict_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*>* ____dict;

  /// @brief Field _pq, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::PriorityQueue_1<::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex*>* ____pq;

  /// @brief Field _event, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::__MeshUtils__Vertex* ____event;

  /// @brief Field _combineCallback, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LibTessDotNet::CombineCallback* ____combineCallback;

  /// @brief Field _vertices, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex, ::Array<::UnityEngine::Rendering::Universal::LibTessDotNet::ContourVertex>*> ____vertices;

  /// @brief Field _vertexCount, offset: 0x78, size: 0x4, def value: None
  int32_t ____vertexCount;

  /// @brief Field _elements, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____elements;

  /// @brief Field _elementCount, offset: 0x88, size: 0x4, def value: None
  int32_t ____elementCount;

  /// @brief Field SUnitX, offset: 0x8c, size: 0x4, def value: None
  float_t ___SUnitX;

  /// @brief Field SUnitY, offset: 0x90, size: 0x4, def value: None
  float_t ___SUnitY;

  /// @brief Field SentinelCoord, offset: 0x94, size: 0x4, def value: None
  float_t ___SentinelCoord;

  /// @brief Field NoEmptyPolygons, offset: 0x98, size: 0x1, def value: None
  bool ___NoEmptyPolygons;

  /// @brief Field UsePooling, offset: 0x99, size: 0x1, def value: None
  bool ___UsePooling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____mesh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____normal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____sUnit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____tUnit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____bminX) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____bminY) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____bmaxX) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____bmaxY) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____windingRule) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____dict) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____pq) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____event) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____combineCallback) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____vertices) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____vertexCount) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____elements) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ____elementCount) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ___SUnitX) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ___SUnitY) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ___SentinelCoord) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ___NoEmptyPolygons) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess, ___UsePooling) == 0x99, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::LibTessDotNet
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::Tess*, "UnityEngine.Rendering.Universal.LibTessDotNet", "Tess");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::LibTessDotNet::__Tess__ActiveRegion*, "UnityEngine.Rendering.Universal.LibTessDotNet", "Tess/ActiveRegion");
