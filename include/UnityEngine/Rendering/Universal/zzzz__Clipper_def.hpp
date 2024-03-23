#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ClipType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ClipperBase_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyFillType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Clipper)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct ClipType;
}
namespace UnityEngine::Rendering::Universal {
struct Direction;
}
namespace UnityEngine::Rendering::Universal {
struct IntPoint;
}
namespace UnityEngine::Rendering::Universal {
class IntersectNode;
}
namespace UnityEngine::Rendering::Universal {
class Join;
}
namespace UnityEngine::Rendering::Universal {
class Maxima;
}
namespace UnityEngine::Rendering::Universal {
class OutPt;
}
namespace UnityEngine::Rendering::Universal {
class OutRec;
}
namespace UnityEngine::Rendering::Universal {
struct PolyFillType;
}
namespace UnityEngine::Rendering::Universal {
class PolyNode;
}
namespace UnityEngine::Rendering::Universal {
class PolyTree;
}
namespace UnityEngine::Rendering::Universal {
class TEdge;
}
namespace UnityEngine::Rendering::Universal {
struct __Clipper__NodeType;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct __Clipper__NodeType;
}
namespace UnityEngine::Rendering::Universal {
class Clipper;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::__Clipper__NodeType);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Clipper);
// Type: ::NodeType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: ::Clipper::NodeType
struct CORDL_TYPE __Clipper__NodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Clipper__NodeType_Unwrapped
  enum struct ____Clipper__NodeType_Unwrapped : int32_t {
    __E_ntAny = static_cast<int32_t>(0x0),
    __E_ntOpen = static_cast<int32_t>(0x1),
    __E_ntClosed = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Clipper__NodeType_Unwrapped() const noexcept {
    return static_cast<____Clipper__NodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Clipper__NodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Clipper__NodeType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ntAny value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Rendering::Universal::__Clipper__NodeType const ntAny;

  /// @brief Field ntClosed value: static_cast<int32_t>(0x2)
  static ::UnityEngine::Rendering::Universal::__Clipper__NodeType const ntClosed;

  /// @brief Field ntOpen value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Rendering::Universal::__Clipper__NodeType const ntOpen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::__Clipper__NodeType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::__Clipper__NodeType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Type: UnityEngine.Rendering.Universal::Clipper
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 146, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Clipper*
class CORDL_TYPE Clipper : public ::UnityEngine::Rendering::Universal::ClipperBase {
public:
  // Declarations
  using NodeType = ::UnityEngine::Rendering::Universal::__Clipper__NodeType;

  __declspec(property(get = get_LastIndex, put = set_LastIndex)) int32_t LastIndex;

  __declspec(property(get = get_ReverseSolution, put = set_ReverseSolution)) bool ReverseSolution;

  __declspec(property(get = get_StrictlySimple, put = set_StrictlySimple)) bool StrictlySimple;

  /// @brief Field <LastIndex>k__BackingField, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__LastIndex_k__BackingField, put = __cordl_internal_set__LastIndex_k__BackingField)) int32_t _LastIndex_k__BackingField;

  /// @brief Field <ReverseSolution>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__ReverseSolution_k__BackingField, put = __cordl_internal_set__ReverseSolution_k__BackingField)) bool _ReverseSolution_k__BackingField;

  /// @brief Field <StrictlySimple>k__BackingField, offset 0x91, size 0x1
  __declspec(property(get = __cordl_internal_get__StrictlySimple_k__BackingField, put = __cordl_internal_set__StrictlySimple_k__BackingField)) bool _StrictlySimple_k__BackingField;

  /// @brief Field m_ClipFillType, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClipFillType, put = __cordl_internal_set_m_ClipFillType))::UnityEngine::Rendering::Universal::PolyFillType m_ClipFillType;

  /// @brief Field m_ClipType, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClipType, put = __cordl_internal_set_m_ClipType))::UnityEngine::Rendering::Universal::ClipType m_ClipType;

  /// @brief Field m_ExecuteLocked, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExecuteLocked, put = __cordl_internal_set_m_ExecuteLocked)) bool m_ExecuteLocked;

  /// @brief Field m_GhostJoins, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GhostJoins,
                      put = __cordl_internal_set_m_GhostJoins))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* m_GhostJoins;

  /// @brief Field m_IntersectList, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IntersectList,
                      put = __cordl_internal_set_m_IntersectList))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>* m_IntersectList;

  /// @brief Field m_IntersectNodeComparer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IntersectNodeComparer,
                      put = __cordl_internal_set_m_IntersectNodeComparer))::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>* m_IntersectNodeComparer;

  /// @brief Field m_Joins, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Joins, put = __cordl_internal_set_m_Joins))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* m_Joins;

  /// @brief Field m_Maxima, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Maxima, put = __cordl_internal_set_m_Maxima))::UnityEngine::Rendering::Universal::Maxima* m_Maxima;

  /// @brief Field m_SortedEdges, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SortedEdges, put = __cordl_internal_set_m_SortedEdges))::UnityEngine::Rendering::Universal::TEdge* m_SortedEdges;

  /// @brief Field m_SubjFillType, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SubjFillType, put = __cordl_internal_set_m_SubjFillType))::UnityEngine::Rendering::Universal::PolyFillType m_SubjFillType;

  /// @brief Field m_UsingPolyTree, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UsingPolyTree, put = __cordl_internal_set_m_UsingPolyTree)) bool m_UsingPolyTree;

  /// @brief Method AddEdgeToSEL, addr 0x1e273d4, size 0x38, virtual false, abstract: false, final false
  inline void AddEdgeToSEL(::UnityEngine::Rendering::Universal::TEdge* edge);

  /// @brief Method AddGhostJoin, addr 0x1e26ad4, size 0xf8, virtual false, abstract: false, final false
  inline void AddGhostJoin(::UnityEngine::Rendering::Universal::OutPt* Op, ::UnityEngine::Rendering::Universal::IntPoint OffPt);

  /// @brief Method AddJoin, addr 0x1e269cc, size 0x108, virtual false, abstract: false, final false
  inline void AddJoin(::UnityEngine::Rendering::Universal::OutPt* Op1, ::UnityEngine::Rendering::Universal::OutPt* Op2, ::UnityEngine::Rendering::Universal::IntPoint OffPt);

  /// @brief Method AddLocalMaxPoly, addr 0x1e27cf4, size 0xcc, virtual false, abstract: false, final false
  inline void AddLocalMaxPoly(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2, ::UnityEngine::Rendering::Universal::IntPoint pt);

  /// @brief Method AddLocalMinPoly, addr 0x1e271e0, size 0x1f4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutPt* AddLocalMinPoly(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2,
                                                                     ::UnityEngine::Rendering::Universal::IntPoint pt);

  /// @brief Method AddOutPt, addr 0x1e2700c, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutPt* AddOutPt(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::IntPoint pt);

  /// @brief Method AddPolyNodeToPaths, addr 0x1e2ced8, size 0x200, virtual false, abstract: false, final false
  static inline void AddPolyNodeToPaths(::UnityEngine::Rendering::Universal::PolyNode* polynode, ::UnityEngine::Rendering::Universal::__Clipper__NodeType nt,
                                        ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* paths);

  /// @brief Method AppendPolygon, addr 0x1e27dc0, size 0x23c, virtual false, abstract: false, final false
  inline void AppendPolygon(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2);

  /// @brief Method Area, addr 0x1e2845c, size 0x5c, virtual false, abstract: false, final false
  inline double_t Area(::UnityEngine::Rendering::Universal::OutPt* op);

  /// @brief Method Area, addr 0x1e26134, size 0x18, virtual false, abstract: false, final false
  inline double_t Area(::UnityEngine::Rendering::Universal::OutRec* outRec);

  /// @brief Method Area, addr 0x1e29da0, size 0x12c, virtual false, abstract: false, final false
  static inline double_t Area(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly);

  /// @brief Method BuildIntersectList, addr 0x1e29108, size 0x1e4, virtual false, abstract: false, final false
  inline void BuildIntersectList(int64_t topY);

  /// @brief Method BuildResult, addr 0x1e24f44, size 0x2b8, virtual false, abstract: false, final false
  inline void BuildResult(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polyg);

  /// @brief Method BuildResult2, addr 0x1e251fc, size 0x36c, virtual false, abstract: false, final false
  inline void BuildResult2(::UnityEngine::Rendering::Universal::PolyTree* polytree);

  /// @brief Method CleanPolygon, addr 0x1e2b888, size 0x440, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
  CleanPolygon(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, double_t distance);

  /// @brief Method CleanPolygons, addr 0x1e2bcc8, size 0x158, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  CleanPolygons(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polys, double_t distance);

  /// @brief Method ClosedPathsFromPolyTree, addr 0x1e2d264, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  ClosedPathsFromPolyTree(::UnityEngine::Rendering::Universal::PolyTree* polytree);

  /// @brief Method CopyAELToSEL, addr 0x1e27bf8, size 0x20, virtual false, abstract: false, final false
  inline void CopyAELToSEL();

  /// @brief Method DeleteFromSEL, addr 0x1e287a4, size 0x50, virtual false, abstract: false, final false
  inline void DeleteFromSEL(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method DisposeAllPolyPts, addr 0x1e26928, size 0xa4, virtual false, abstract: false, final false
  inline void DisposeAllPolyPts();

  /// @brief Method DistanceFromLineSqrd, addr 0x1e2b500, size 0x60, virtual false, abstract: false, final false
  static inline double_t DistanceFromLineSqrd(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::IntPoint ln1, ::UnityEngine::Rendering::Universal::IntPoint ln2);

  /// @brief Method DistanceSqrd, addr 0x1e2b4e0, size 0x20, virtual false, abstract: false, final false
  static inline double_t DistanceSqrd(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2);

  /// @brief Method DoMaxima, addr 0x1e29a20, size 0x200, virtual false, abstract: false, final false
  inline void DoMaxima(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method DoSimplePolygons, addr 0x1e26724, size 0x204, virtual false, abstract: false, final false
  inline void DoSimplePolygons();

  /// @brief Method DupOutPt, addr 0x1e29efc, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutPt* DupOutPt(::UnityEngine::Rendering::Universal::OutPt* outPt, bool InsertAfter);

  /// @brief Method E2InsertsBeforeE1, addr 0x1e27a80, size 0x6c, virtual false, abstract: false, final false
  inline bool E2InsertsBeforeE1(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2);

  /// @brief Method EdgesAdjacent, addr 0x1e29988, size 0x40, virtual false, abstract: false, final false
  inline bool EdgesAdjacent(::UnityEngine::Rendering::Universal::IntersectNode* inode);

  /// @brief Method ExcludeOp, addr 0x1e2b850, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::OutPt* ExcludeOp(::UnityEngine::Rendering::Universal::OutPt* op);

  /// @brief Method Execute, addr 0x1e24954, size 0x8, virtual false, abstract: false, final false
  inline bool Execute(::UnityEngine::Rendering::Universal::ClipType clipType, ::UnityEngine::Rendering::Universal::PolyTree* polytree, ::UnityEngine::Rendering::Universal::PolyFillType FillType);

  /// @brief Method Execute, addr 0x1e2495c, size 0xec, virtual false, abstract: false, final false
  inline bool Execute(::UnityEngine::Rendering::Universal::ClipType clipType, ::UnityEngine::Rendering::Universal::PolyTree* polytree, ::UnityEngine::Rendering::Universal::PolyFillType subjFillType,
                      ::UnityEngine::Rendering::Universal::PolyFillType clipFillType);

  /// @brief Method Execute, addr 0x1e247a8, size 0x8, virtual false, abstract: false, final false
  inline bool Execute(::UnityEngine::Rendering::Universal::ClipType clipType,
                      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* solution,
                      ::UnityEngine::Rendering::Universal::PolyFillType FillType);

  /// @brief Method Execute, addr 0x1e247b0, size 0x1a4, virtual false, abstract: false, final false
  inline bool Execute(::UnityEngine::Rendering::Universal::ClipType clipType,
                      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* solution,
                      ::UnityEngine::Rendering::Universal::PolyFillType subjFillType, ::UnityEngine::Rendering::Universal::PolyFillType clipFillType);

  /// @brief Method ExecuteInternal, addr 0x1e24a48, size 0x4fc, virtual false, abstract: false, final false
  inline bool ExecuteInternal();

  /// @brief Method FirstIsBottomPt, addr 0x1e281ac, size 0x2b0, virtual false, abstract: false, final false
  inline bool FirstIsBottomPt(::UnityEngine::Rendering::Universal::OutPt* btmPt1, ::UnityEngine::Rendering::Universal::OutPt* btmPt2);

  /// @brief Method FixHoleLinkage, addr 0x1e25568, size 0x58, virtual false, abstract: false, final false
  inline void FixHoleLinkage(::UnityEngine::Rendering::Universal::OutRec* outRec);

  /// @brief Method FixupFirstLefts1, addr 0x1e2add0, size 0x198, virtual false, abstract: false, final false
  inline void FixupFirstLefts1(::UnityEngine::Rendering::Universal::OutRec* OldOutRec, ::UnityEngine::Rendering::Universal::OutRec* NewOutRec);

  /// @brief Method FixupFirstLefts2, addr 0x1e2af80, size 0x200, virtual false, abstract: false, final false
  inline void FixupFirstLefts2(::UnityEngine::Rendering::Universal::OutRec* innerOutRec, ::UnityEngine::Rendering::Universal::OutRec* outerOutRec);

  /// @brief Method FixupFirstLefts3, addr 0x1e2b180, size 0x16c, virtual false, abstract: false, final false
  inline void FixupFirstLefts3(::UnityEngine::Rendering::Universal::OutRec* OldOutRec, ::UnityEngine::Rendering::Universal::OutRec* NewOutRec);

  /// @brief Method FixupIntersectionOrder, addr 0x1e292ec, size 0x1f8, virtual false, abstract: false, final false
  inline bool FixupIntersectionOrder();

  /// @brief Method FixupOutPolygon, addr 0x1e26544, size 0x1e0, virtual false, abstract: false, final false
  inline void FixupOutPolygon(::UnityEngine::Rendering::Universal::OutRec* outRec);

  /// @brief Method FixupOutPolyline, addr 0x1e264a0, size 0xa4, virtual false, abstract: false, final false
  inline void FixupOutPolyline(::UnityEngine::Rendering::Universal::OutRec* outrec);

  /// @brief Method GetBottomPt, addr 0x1e284b8, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutPt* GetBottomPt(::UnityEngine::Rendering::Universal::OutPt* pp);

  /// @brief Method GetDx, addr 0x1e28174, size 0x38, virtual false, abstract: false, final false
  inline double_t GetDx(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2);

  /// @brief Method GetHorzDirection, addr 0x1e28f4c, size 0x40, virtual false, abstract: false, final false
  inline void GetHorzDirection(::UnityEngine::Rendering::Universal::TEdge* HorzEdge, ByRef<::UnityEngine::Rendering::Universal::Direction> Dir, ByRef<int64_t> Left, ByRef<int64_t> Right);

  /// @brief Method GetLastOutPt, addr 0x1e280d8, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutPt* GetLastOutPt(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method GetLowermostRec, addr 0x1e285b4, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutRec* GetLowermostRec(::UnityEngine::Rendering::Universal::OutRec* outRec1, ::UnityEngine::Rendering::Universal::OutRec* outRec2);

  /// @brief Method GetMaximaPair, addr 0x1e28f8c, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TEdge* GetMaximaPair(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method GetMaximaPairEx, addr 0x1e290cc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TEdge* GetMaximaPairEx(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method GetNextInAEL, addr 0x1e28ffc, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TEdge* GetNextInAEL(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::Direction Direction);

  /// @brief Method GetOutRec, addr 0x1e286b4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutRec* GetOutRec(int32_t idx);

  /// @brief Method GetOverlap, addr 0x1e29fc8, size 0x118, virtual false, abstract: false, final false
  inline bool GetOverlap(int64_t a1, int64_t a2, int64_t b1, int64_t b2, ByRef<int64_t> Left, ByRef<int64_t> Right);

  /// @brief Method HorzSegmentsOverlap, addr 0x1e2740c, size 0x30, virtual false, abstract: false, final false
  inline bool HorzSegmentsOverlap(int64_t seg1a, int64_t seg1b, int64_t seg2a, int64_t seg2b);

  /// @brief Method InsertEdgeIntoAEL, addr 0x1e26bcc, size 0xa8, virtual false, abstract: false, final false
  inline void InsertEdgeIntoAEL(::UnityEngine::Rendering::Universal::TEdge* edge, ::UnityEngine::Rendering::Universal::TEdge* startEdge);

  /// @brief Method InsertLocalMinimaIntoAEL, addr 0x1e255c0, size 0x4dc, virtual false, abstract: false, final false
  inline void InsertLocalMinimaIntoAEL(int64_t botY);

  /// @brief Method InsertMaxima, addr 0x1e246a0, size 0xd0, virtual false, abstract: false, final false
  inline void InsertMaxima(int64_t X);

  /// @brief Method IntersectEdges, addr 0x1e2743c, size 0x644, virtual false, abstract: false, final false
  inline void IntersectEdges(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2, ::UnityEngine::Rendering::Universal::IntPoint pt);

  /// @brief Method IntersectNodeSort, addr 0x1e299c8, size 0x24, virtual false, abstract: false, final false
  static inline int32_t IntersectNodeSort(::UnityEngine::Rendering::Universal::IntersectNode* node1, ::UnityEngine::Rendering::Universal::IntersectNode* node2);

  /// @brief Method IntersectPoint, addr 0x1e295e8, size 0x3a0, virtual false, abstract: false, final false
  inline void IntersectPoint(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2, ByRef<::UnityEngine::Rendering::Universal::IntPoint> ip);

  /// @brief Method IsContributing, addr 0x1e26ea0, size 0x16c, virtual false, abstract: false, final false
  inline bool IsContributing(::UnityEngine::Rendering::Universal::TEdge* edge);

  /// @brief Method IsEvenOddAltFillType, addr 0x1e27b90, size 0x34, virtual false, abstract: false, final false
  inline bool IsEvenOddAltFillType(::UnityEngine::Rendering::Universal::TEdge* edge);

  /// @brief Method IsEvenOddFillType, addr 0x1e27b5c, size 0x34, virtual false, abstract: false, final false
  inline bool IsEvenOddFillType(::UnityEngine::Rendering::Universal::TEdge* edge);

  /// @brief Method IsIntermediate, addr 0x1e29094, size 0x38, virtual false, abstract: false, final false
  inline bool IsIntermediate(::UnityEngine::Rendering::Universal::TEdge* e, double_t Y);

  /// @brief Method IsMaxima, addr 0x1e29068, size 0x2c, virtual false, abstract: false, final false
  inline bool IsMaxima(::UnityEngine::Rendering::Universal::TEdge* e, double_t Y);

  /// @brief Method IsMinima, addr 0x1e29024, size 0x44, virtual false, abstract: false, final false
  inline bool IsMinima(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method JoinCommonEdges, addr 0x1e2617c, size 0x324, virtual false, abstract: false, final false
  inline void JoinCommonEdges();

  /// @brief Method JoinHorz, addr 0x1e2a0e0, size 0x36c, virtual false, abstract: false, final false
  inline bool JoinHorz(::UnityEngine::Rendering::Universal::OutPt* op1, ::UnityEngine::Rendering::Universal::OutPt* op1b, ::UnityEngine::Rendering::Universal::OutPt* op2,
                       ::UnityEngine::Rendering::Universal::OutPt* op2b, ::UnityEngine::Rendering::Universal::IntPoint Pt, bool DiscardLeft);

  /// @brief Method JoinPoints, addr 0x1e2a44c, size 0x644, virtual false, abstract: false, final false
  inline bool JoinPoints(::UnityEngine::Rendering::Universal::Join* j, ::UnityEngine::Rendering::Universal::OutRec* outRec1, ::UnityEngine::Rendering::Universal::OutRec* outRec2);

  /// @brief Method Minkowski, addr 0x1e2be20, size 0xafc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  Minkowski(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pattern, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path,
            bool IsSum, bool IsClosed);

  /// @brief Method MinkowskiDiff, addr 0x1e2cd70, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  MinkowskiDiff(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly1,
                ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly2);

  /// @brief Method MinkowskiSum, addr 0x1e2c91c, size 0xb8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  MinkowskiSum(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pattern,
               ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, bool pathIsClosed);

  /// @brief Method MinkowskiSum, addr 0x1e2cba0, size 0x1d0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  MinkowskiSum(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pattern,
               ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* paths, bool pathIsClosed);

  static inline ::UnityEngine::Rendering::Universal::Clipper* New_ctor(int32_t InitOptions);

  /// @brief Method OpenPathsFromPolyTree, addr 0x1e2d0d8, size 0x18c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  OpenPathsFromPolyTree(::UnityEngine::Rendering::Universal::PolyTree* polytree);

  /// @brief Method Orientation, addr 0x1e29d88, size 0x18, virtual false, abstract: false, final false
  static inline bool Orientation(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly);

  /// @brief Method OutRec1RightOfOutRec2, addr 0x1e28684, size 0x30, virtual false, abstract: false, final false
  inline bool OutRec1RightOfOutRec2(::UnityEngine::Rendering::Universal::OutRec* outRec1, ::UnityEngine::Rendering::Universal::OutRec* outRec2);

  /// @brief Method ParseFirstLeft, addr 0x1e2af68, size 0x18, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::OutRec* ParseFirstLeft(::UnityEngine::Rendering::Universal::OutRec* FirstLeft);

  /// @brief Method PointCount, addr 0x1e29ecc, size 0x30, virtual false, abstract: false, final false
  inline int32_t PointCount(::UnityEngine::Rendering::Universal::OutPt* pts);

  /// @brief Method PointInPolygon, addr 0x1e2ac64, size 0xfc, virtual false, abstract: false, final false
  static inline int32_t PointInPolygon(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::OutPt* op);

  /// @brief Method PointInPolygon, addr 0x1e2aa90, size 0x1d4, virtual false, abstract: false, final false
  static inline int32_t PointInPolygon(::UnityEngine::Rendering::Universal::IntPoint pt, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path);

  /// @brief Method PointsAreClose, addr 0x1e2b828, size 0x28, virtual false, abstract: false, final false
  static inline bool PointsAreClose(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2, double_t distSqrd);

  /// @brief Method Poly2ContainsPoly1, addr 0x1e2ad60, size 0x70, virtual false, abstract: false, final false
  static inline bool Poly2ContainsPoly1(::UnityEngine::Rendering::Universal::OutPt* outPt1, ::UnityEngine::Rendering::Universal::OutPt* outPt2);

  /// @brief Method PolyTreeToPaths, addr 0x1e2ce24, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  PolyTreeToPaths(::UnityEngine::Rendering::Universal::PolyTree* polytree);

  /// @brief Method PopEdgeFromSEL, addr 0x1e27bc4, size 0x34, virtual false, abstract: false, final false
  inline bool PopEdgeFromSEL(ByRef<::UnityEngine::Rendering::Universal::TEdge*> e);

  /// @brief Method ProcessEdgesAtTopOfScanbeam, addr 0x1e25c58, size 0x4dc, virtual false, abstract: false, final false
  inline void ProcessEdgesAtTopOfScanbeam(int64_t topY);

  /// @brief Method ProcessHorizontal, addr 0x1e287f4, size 0x758, virtual false, abstract: false, final false
  inline void ProcessHorizontal(::UnityEngine::Rendering::Universal::TEdge* horzEdge);

  /// @brief Method ProcessHorizontals, addr 0x1e25a9c, size 0x40, virtual false, abstract: false, final false
  inline void ProcessHorizontals();

  /// @brief Method ProcessIntersectList, addr 0x1e294e4, size 0x104, virtual false, abstract: false, final false
  inline void ProcessIntersectList();

  /// @brief Method ProcessIntersections, addr 0x1e25adc, size 0x17c, virtual false, abstract: false, final false
  inline bool ProcessIntersections(int64_t topY);

  /// @brief Method ReversePaths, addr 0x1e29c20, size 0x168, virtual false, abstract: false, final false
  static inline void ReversePaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polys);

  /// @brief Method ReversePolyPtLinks, addr 0x1e2614c, size 0x30, virtual false, abstract: false, final false
  inline void ReversePolyPtLinks(::UnityEngine::Rendering::Universal::OutPt* pp);

  /// @brief Method Round, addr 0x1e299ec, size 0x34, virtual false, abstract: false, final false
  static inline int64_t Round(double_t value);

  /// @brief Method SetHoleState, addr 0x1e27ffc, size 0xdc, virtual false, abstract: false, final false
  inline void SetHoleState(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::OutRec* outRec);

  /// @brief Method SetWindingCount, addr 0x1e26c74, size 0x22c, virtual false, abstract: false, final false
  inline void SetWindingCount(::UnityEngine::Rendering::Universal::TEdge* edge);

  /// @brief Method SimplifyPolygon, addr 0x1e2b320, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  SimplifyPolygon(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* poly, ::UnityEngine::Rendering::Universal::PolyFillType fillType);

  /// @brief Method SimplifyPolygons, addr 0x1e2b400, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*
  SimplifyPolygons(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* polys,
                   ::UnityEngine::Rendering::Universal::PolyFillType fillType);

  /// @brief Method SlopesNearCollinear, addr 0x1e2b560, size 0x2c8, virtual false, abstract: false, final false
  static inline bool SlopesNearCollinear(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2, ::UnityEngine::Rendering::Universal::IntPoint pt3,
                                         double_t distSqrd);

  /// @brief Method SwapPoints, addr 0x1e28150, size 0x24, virtual false, abstract: false, final false
  inline void SwapPoints(ByRef<::UnityEngine::Rendering::Universal::IntPoint> pt1, ByRef<::UnityEngine::Rendering::Universal::IntPoint> pt2);

  /// @brief Method SwapPolyIndexes, addr 0x1e2877c, size 0x28, virtual false, abstract: false, final false
  static inline void SwapPolyIndexes(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2);

  /// @brief Method SwapPositionsInSEL, addr 0x1e27c18, size 0xdc, virtual false, abstract: false, final false
  inline void SwapPositionsInSEL(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2);

  /// @brief Method SwapSides, addr 0x1e28754, size 0x28, virtual false, abstract: false, final false
  static inline void SwapSides(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2);

  /// @brief Method TopX, addr 0x1e27aec, size 0x70, virtual false, abstract: false, final false
  static inline int64_t TopX(::UnityEngine::Rendering::Universal::TEdge* edge, int64_t currentY);

  /// @brief Method TranslatePath, addr 0x1e2c9d4, size 0x1cc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*
  TranslatePath(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, ::UnityEngine::Rendering::Universal::IntPoint delta);

  /// @brief Method UpdateOutPtIdxs, addr 0x1e2b2ec, size 0x34, virtual false, abstract: false, final false
  inline void UpdateOutPtIdxs(::UnityEngine::Rendering::Universal::OutRec* outrec);

  constexpr int32_t const& __cordl_internal_get__LastIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__LastIndex_k__BackingField();

  constexpr bool const& __cordl_internal_get__ReverseSolution_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ReverseSolution_k__BackingField();

  constexpr bool const& __cordl_internal_get__StrictlySimple_k__BackingField() const;

  constexpr bool& __cordl_internal_get__StrictlySimple_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::PolyFillType const& __cordl_internal_get_m_ClipFillType() const;

  constexpr ::UnityEngine::Rendering::Universal::PolyFillType& __cordl_internal_get_m_ClipFillType();

  constexpr ::UnityEngine::Rendering::Universal::ClipType const& __cordl_internal_get_m_ClipType() const;

  constexpr ::UnityEngine::Rendering::Universal::ClipType& __cordl_internal_get_m_ClipType();

  constexpr bool const& __cordl_internal_get_m_ExecuteLocked() const;

  constexpr bool& __cordl_internal_get_m_ExecuteLocked();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*& __cordl_internal_get_m_GhostJoins();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*> const& __cordl_internal_get_m_GhostJoins() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>*& __cordl_internal_get_m_IntersectList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>*> const& __cordl_internal_get_m_IntersectList() const;

  constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*& __cordl_internal_get_m_IntersectNodeComparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*> const&
  __cordl_internal_get_m_IntersectNodeComparer() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*& __cordl_internal_get_m_Joins();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>*> const& __cordl_internal_get_m_Joins() const;

  constexpr ::UnityEngine::Rendering::Universal::Maxima*& __cordl_internal_get_m_Maxima();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Maxima*> const& __cordl_internal_get_m_Maxima() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_m_SortedEdges();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_m_SortedEdges() const;

  constexpr ::UnityEngine::Rendering::Universal::PolyFillType const& __cordl_internal_get_m_SubjFillType() const;

  constexpr ::UnityEngine::Rendering::Universal::PolyFillType& __cordl_internal_get_m_SubjFillType();

  constexpr bool const& __cordl_internal_get_m_UsingPolyTree() const;

  constexpr bool& __cordl_internal_get_m_UsingPolyTree();

  constexpr void __cordl_internal_set__LastIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__ReverseSolution_k__BackingField(bool value);

  constexpr void __cordl_internal_set__StrictlySimple_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ClipFillType(::UnityEngine::Rendering::Universal::PolyFillType value);

  constexpr void __cordl_internal_set_m_ClipType(::UnityEngine::Rendering::Universal::ClipType value);

  constexpr void __cordl_internal_set_m_ExecuteLocked(bool value);

  constexpr void __cordl_internal_set_m_GhostJoins(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* value);

  constexpr void __cordl_internal_set_m_IntersectList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>* value);

  constexpr void __cordl_internal_set_m_IntersectNodeComparer(::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>* value);

  constexpr void __cordl_internal_set_m_Joins(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* value);

  constexpr void __cordl_internal_set_m_Maxima(::UnityEngine::Rendering::Universal::Maxima* value);

  constexpr void __cordl_internal_set_m_SortedEdges(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_m_SubjFillType(::UnityEngine::Rendering::Universal::PolyFillType value);

  constexpr void __cordl_internal_set_m_UsingPolyTree(bool value);

  /// @brief Method .ctor, addr 0x1e24514, size 0x18c, virtual false, abstract: false, final false
  inline void _ctor(int32_t InitOptions);

  /// @brief Method get_LastIndex, addr 0x1e24770, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LastIndex();

  /// @brief Method get_ReverseSolution, addr 0x1e24780, size 0x8, virtual false, abstract: false, final false
  inline bool get_ReverseSolution();

  /// @brief Method get_StrictlySimple, addr 0x1e24794, size 0x8, virtual false, abstract: false, final false
  inline bool get_StrictlySimple();

  /// @brief Method set_LastIndex, addr 0x1e24778, size 0x8, virtual false, abstract: false, final false
  inline void set_LastIndex(int32_t value);

  /// @brief Method set_ReverseSolution, addr 0x1e24788, size 0xc, virtual false, abstract: false, final false
  inline void set_ReverseSolution(bool value);

  /// @brief Method set_StrictlySimple, addr 0x1e2479c, size 0xc, virtual false, abstract: false, final false
  inline void set_StrictlySimple(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Clipper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Clipper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Clipper(Clipper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Clipper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Clipper(Clipper const&) = delete;

  /// @brief Field m_ClipType, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ClipType ___m_ClipType;

  /// @brief Field m_Maxima, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Maxima* ___m_Maxima;

  /// @brief Field m_SortedEdges, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___m_SortedEdges;

  /// @brief Field m_IntersectList, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntersectNode*>* ___m_IntersectList;

  /// @brief Field m_IntersectNodeComparer, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>* ___m_IntersectNodeComparer;

  /// @brief Field m_ExecuteLocked, offset: 0x68, size: 0x1, def value: None
  bool ___m_ExecuteLocked;

  /// @brief Field m_ClipFillType, offset: 0x6c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::PolyFillType ___m_ClipFillType;

  /// @brief Field m_SubjFillType, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::PolyFillType ___m_SubjFillType;

  /// @brief Field m_Joins, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* ___m_Joins;

  /// @brief Field m_GhostJoins, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Join*>* ___m_GhostJoins;

  /// @brief Field m_UsingPolyTree, offset: 0x88, size: 0x1, def value: None
  bool ___m_UsingPolyTree;

  /// @brief Field <LastIndex>k__BackingField, offset: 0x8c, size: 0x4, def value: None
  int32_t ____LastIndex_k__BackingField;

  /// @brief Field <ReverseSolution>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____ReverseSolution_k__BackingField;

  /// @brief Field <StrictlySimple>k__BackingField, offset: 0x91, size: 0x1, def value: None
  bool ____StrictlySimple_k__BackingField;

  /// @brief Field ioPreserveCollinear offset 0xffffffff size 0x4
  static constexpr int32_t ioPreserveCollinear{ static_cast<int32_t>(0x4) };

  /// @brief Field ioReverseSolution offset 0xffffffff size 0x4
  static constexpr int32_t ioReverseSolution{ static_cast<int32_t>(0x1) };

  /// @brief Field ioStrictlySimple offset 0xffffffff size 0x4
  static constexpr int32_t ioStrictlySimple{ static_cast<int32_t>(0x2) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Clipper, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_ClipType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_Maxima) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_SortedEdges) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_IntersectList) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_IntersectNodeComparer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_ExecuteLocked) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_ClipFillType) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_SubjFillType) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_Joins) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_GhostJoins) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ___m_UsingPolyTree) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ____LastIndex_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ____ReverseSolution_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Clipper, ____StrictlySimple_k__BackingField) == 0x91, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::__Clipper__NodeType, "UnityEngine.Rendering.Universal", "Clipper/NodeType");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Clipper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Clipper*, "UnityEngine.Rendering.Universal", "Clipper");
