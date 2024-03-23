#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipperBase)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct IntPoint;
}
namespace UnityEngine::Rendering::Universal {
struct IntRect;
}
namespace UnityEngine::Rendering::Universal {
class LocalMinima;
}
namespace UnityEngine::Rendering::Universal {
class OutPt;
}
namespace UnityEngine::Rendering::Universal {
class OutRec;
}
namespace UnityEngine::Rendering::Universal {
struct PolyType;
}
namespace UnityEngine::Rendering::Universal {
class Scanbeam;
}
namespace UnityEngine::Rendering::Universal {
class TEdge;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ClipperBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ClipperBase);
// Type: UnityEngine.Rendering.Universal::ClipperBase
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 67, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ClipperBase*
class CORDL_TYPE ClipperBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PreserveCollinear, put = set_PreserveCollinear)) bool PreserveCollinear;

  /// @brief Field <PreserveCollinear>k__BackingField, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get__PreserveCollinear_k__BackingField, put = __cordl_internal_set__PreserveCollinear_k__BackingField)) bool _PreserveCollinear_k__BackingField;

  /// @brief Field m_ActiveEdges, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveEdges, put = __cordl_internal_set_m_ActiveEdges))::UnityEngine::Rendering::Universal::TEdge* m_ActiveEdges;

  /// @brief Field m_CurrentLM, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentLM, put = __cordl_internal_set_m_CurrentLM))::UnityEngine::Rendering::Universal::LocalMinima* m_CurrentLM;

  /// @brief Field m_HasOpenPaths, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasOpenPaths, put = __cordl_internal_set_m_HasOpenPaths)) bool m_HasOpenPaths;

  /// @brief Field m_MinimaList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinimaList, put = __cordl_internal_set_m_MinimaList))::UnityEngine::Rendering::Universal::LocalMinima* m_MinimaList;

  /// @brief Field m_PolyOuts, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PolyOuts, put = __cordl_internal_set_m_PolyOuts))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>* m_PolyOuts;

  /// @brief Field m_Scanbeam, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scanbeam, put = __cordl_internal_set_m_Scanbeam))::UnityEngine::Rendering::Universal::Scanbeam* m_Scanbeam;

  /// @brief Field m_UseFullRange, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseFullRange, put = __cordl_internal_set_m_UseFullRange)) bool m_UseFullRange;

  /// @brief Field m_edges, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_edges,
                      put = __cordl_internal_set_m_edges))::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>* m_edges;

  /// @brief Method AddPath, addr 0x1e23000, size 0xb00, virtual false, abstract: false, final false
  inline bool AddPath(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* pg, ::UnityEngine::Rendering::Universal::PolyType polyType, bool Closed);

  /// @brief Method AddPaths, addr 0x1e23bb0, size 0xcc, virtual false, abstract: false, final false
  inline bool AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* ppg,
                       ::UnityEngine::Rendering::Universal::PolyType polyType, bool closed);

  /// @brief Method Clear, addr 0x1e22700, size 0x17c, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateOutRec, addr 0x1e24158, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::OutRec* CreateOutRec();

  /// @brief Method DeleteFromAEL, addr 0x1e244c4, size 0x50, virtual false, abstract: false, final false
  inline void DeleteFromAEL(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method DisposeLocalMinimaList, addr 0x1e2287c, size 0x1c, virtual false, abstract: false, final false
  inline void DisposeLocalMinimaList();

  /// @brief Method DisposeOutRec, addr 0x1e24260, size 0x8c, virtual false, abstract: false, final false
  inline void DisposeOutRec(int32_t index);

  /// @brief Method FindNextLocMin, addr 0x1e22a9c, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TEdge* FindNextLocMin(::UnityEngine::Rendering::Universal::TEdge* E);

  /// @brief Method GetBounds, addr 0x1e23e24, size 0x2f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::IntRect
  GetBounds(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* paths);

  /// @brief Method InitEdge, addr 0x1e22998, size 0x30, virtual false, abstract: false, final false
  inline void InitEdge(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::TEdge* eNext, ::UnityEngine::Rendering::Universal::TEdge* ePrev,
                       ::UnityEngine::Rendering::Universal::IntPoint pt);

  /// @brief Method InitEdge2, addr 0x1e229c8, size 0x88, virtual false, abstract: false, final false
  inline void InitEdge2(::UnityEngine::Rendering::Universal::TEdge* e, ::UnityEngine::Rendering::Universal::PolyType polyType);

  /// @brief Method InsertLocalMinima, addr 0x1e22f8c, size 0x50, virtual false, abstract: false, final false
  inline void InsertLocalMinima(::UnityEngine::Rendering::Universal::LocalMinima* newLm);

  /// @brief Method InsertScanbeam, addr 0x1e23d2c, size 0xf8, virtual false, abstract: false, final false
  inline void InsertScanbeam(int64_t Y);

  /// @brief Method IsHorizontal, addr 0x1e221d4, size 0x20, virtual false, abstract: false, final false
  static inline bool IsHorizontal(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method LocalMinimaPending, addr 0x1e24148, size 0x10, virtual false, abstract: false, final false
  inline bool LocalMinimaPending();

  static inline ::UnityEngine::Rendering::Universal::ClipperBase* New_ctor();

  /// @brief Method PointIsVertex, addr 0x1e221f4, size 0x50, virtual false, abstract: false, final false
  inline bool PointIsVertex(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::OutPt* pp);

  /// @brief Method PointOnLineSegment, addr 0x1e22244, size 0x168, virtual false, abstract: false, final false
  inline bool PointOnLineSegment(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::IntPoint linePt1, ::UnityEngine::Rendering::Universal::IntPoint linePt2,
                                 bool UseFullRange);

  /// @brief Method PointOnPolygon, addr 0x1e223ac, size 0xcc, virtual false, abstract: false, final false
  inline bool PointOnPolygon(::UnityEngine::Rendering::Universal::IntPoint pt, ::UnityEngine::Rendering::Universal::OutPt* pp, bool UseFullRange);

  /// @brief Method PopLocalMinima, addr 0x1e23c7c, size 0x34, virtual false, abstract: false, final false
  inline bool PopLocalMinima(int64_t Y, ByRef<::UnityEngine::Rendering::Universal::LocalMinima*> current);

  /// @brief Method PopScanbeam, addr 0x1e2411c, size 0x2c, virtual false, abstract: false, final false
  inline bool PopScanbeam(ByRef<int64_t> Y);

  /// @brief Method ProcessBound, addr 0x1e22b8c, size 0x400, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TEdge* ProcessBound(::UnityEngine::Rendering::Universal::TEdge* E, bool LeftBoundIsForward);

  /// @brief Method Pt2IsBetweenPt1AndPt3, addr 0x1e23b34, size 0x7c, virtual false, abstract: false, final false
  inline bool Pt2IsBetweenPt1AndPt3(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2, ::UnityEngine::Rendering::Universal::IntPoint pt3);

  /// @brief Method RangeTest, addr 0x1e22898, size 0x100, virtual false, abstract: false, final false
  inline void RangeTest(::UnityEngine::Rendering::Universal::IntPoint Pt, ByRef<bool> useFullRange);

  /// @brief Method RemoveEdge, addr 0x1e23b00, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::TEdge* RemoveEdge(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method Reset, addr 0x1e23cb0, size 0x7c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReverseHorizontal, addr 0x1e22fdc, size 0x24, virtual false, abstract: false, final false
  inline void ReverseHorizontal(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method SetDx, addr 0x1e22a50, size 0x4c, virtual false, abstract: false, final false
  inline void SetDx(::UnityEngine::Rendering::Universal::TEdge* e);

  /// @brief Method SlopesEqual, addr 0x1e22478, size 0x84, virtual false, abstract: false, final false
  static inline bool SlopesEqual(::UnityEngine::Rendering::Universal::TEdge* e1, ::UnityEngine::Rendering::Universal::TEdge* e2, bool UseFullRange);

  /// @brief Method SlopesEqual, addr 0x1e224fc, size 0xb0, virtual false, abstract: false, final false
  static inline bool SlopesEqual(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2, ::UnityEngine::Rendering::Universal::IntPoint pt3,
                                 bool UseFullRange);

  /// @brief Method SlopesEqual, addr 0x1e225ac, size 0xcc, virtual false, abstract: false, final false
  static inline bool SlopesEqual(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2, ::UnityEngine::Rendering::Universal::IntPoint pt3,
                                 ::UnityEngine::Rendering::Universal::IntPoint pt4, bool UseFullRange);

  /// @brief Method Swap, addr 0x1e221c0, size 0x14, virtual false, abstract: false, final false
  inline void Swap(ByRef<int64_t> val1, ByRef<int64_t> val2);

  /// @brief Method SwapPositionsInAEL, addr 0x1e243ec, size 0xd8, virtual false, abstract: false, final false
  inline void SwapPositionsInAEL(::UnityEngine::Rendering::Universal::TEdge* edge1, ::UnityEngine::Rendering::Universal::TEdge* edge2);

  /// @brief Method UpdateEdgeIntoAEL, addr 0x1e242ec, size 0x100, virtual false, abstract: false, final false
  inline void UpdateEdgeIntoAEL(ByRef<::UnityEngine::Rendering::Universal::TEdge*> e);

  constexpr bool const& __cordl_internal_get__PreserveCollinear_k__BackingField() const;

  constexpr bool& __cordl_internal_get__PreserveCollinear_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_m_ActiveEdges();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_m_ActiveEdges() const;

  constexpr ::UnityEngine::Rendering::Universal::LocalMinima*& __cordl_internal_get_m_CurrentLM();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LocalMinima*> const& __cordl_internal_get_m_CurrentLM() const;

  constexpr bool const& __cordl_internal_get_m_HasOpenPaths() const;

  constexpr bool& __cordl_internal_get_m_HasOpenPaths();

  constexpr ::UnityEngine::Rendering::Universal::LocalMinima*& __cordl_internal_get_m_MinimaList();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::LocalMinima*> const& __cordl_internal_get_m_MinimaList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>*& __cordl_internal_get_m_PolyOuts();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>*> const& __cordl_internal_get_m_PolyOuts() const;

  constexpr ::UnityEngine::Rendering::Universal::Scanbeam*& __cordl_internal_get_m_Scanbeam();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Scanbeam*> const& __cordl_internal_get_m_Scanbeam() const;

  constexpr bool const& __cordl_internal_get_m_UseFullRange() const;

  constexpr bool& __cordl_internal_get_m_UseFullRange();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>*& __cordl_internal_get_m_edges();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>*> const&
  __cordl_internal_get_m_edges() const;

  constexpr void __cordl_internal_set__PreserveCollinear_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_ActiveEdges(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_m_CurrentLM(::UnityEngine::Rendering::Universal::LocalMinima* value);

  constexpr void __cordl_internal_set_m_HasOpenPaths(bool value);

  constexpr void __cordl_internal_set_m_MinimaList(::UnityEngine::Rendering::Universal::LocalMinima* value);

  constexpr void __cordl_internal_set_m_PolyOuts(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>* value);

  constexpr void __cordl_internal_set_m_Scanbeam(::UnityEngine::Rendering::Universal::Scanbeam* value);

  constexpr void __cordl_internal_set_m_UseFullRange(bool value);

  constexpr void __cordl_internal_set_m_edges(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>* value);

  /// @brief Method .ctor, addr 0x1e22678, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PreserveCollinear, addr 0x1e221ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_PreserveCollinear();

  /// @brief Method near_zero, addr 0x1e22184, size 0x28, virtual false, abstract: false, final false
  static inline bool near_zero(double_t val);

  /// @brief Method set_PreserveCollinear, addr 0x1e221b4, size 0xc, virtual false, abstract: false, final false
  inline void set_PreserveCollinear(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClipperBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClipperBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClipperBase(ClipperBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClipperBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClipperBase(ClipperBase const&) = delete;

  /// @brief Field m_MinimaList, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LocalMinima* ___m_MinimaList;

  /// @brief Field m_CurrentLM, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LocalMinima* ___m_CurrentLM;

  /// @brief Field m_edges, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::TEdge*>*>* ___m_edges;

  /// @brief Field m_Scanbeam, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Scanbeam* ___m_Scanbeam;

  /// @brief Field m_PolyOuts, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OutRec*>* ___m_PolyOuts;

  /// @brief Field m_ActiveEdges, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___m_ActiveEdges;

  /// @brief Field m_UseFullRange, offset: 0x40, size: 0x1, def value: None
  bool ___m_UseFullRange;

  /// @brief Field m_HasOpenPaths, offset: 0x41, size: 0x1, def value: None
  bool ___m_HasOpenPaths;

  /// @brief Field <PreserveCollinear>k__BackingField, offset: 0x42, size: 0x1, def value: None
  bool ____PreserveCollinear_k__BackingField;

  /// @brief Field Skip offset 0xffffffff size 0x4
  static constexpr int32_t Skip{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field Unassigned offset 0xffffffff size 0x4
  static constexpr int32_t Unassigned{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field hiRange offset 0xffffffff size 0x8
  static constexpr int64_t hiRange{ static_cast<int64_t>(0x3fffffffffffffff) };

  /// @brief Field horizontal offset 0xffffffff size 0x8
  static constexpr double_t horizontal{ -340000000000000000000000000000000000000.0 };

  /// @brief Field loRange offset 0xffffffff size 0x8
  static constexpr int64_t loRange{ static_cast<int64_t>(0x3fffffff) };

  /// @brief Field tolerance offset 0xffffffff size 0x8
  static constexpr double_t tolerance{ 0.00000000000000000001 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ClipperBase, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_MinimaList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_CurrentLM) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_edges) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_Scanbeam) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_PolyOuts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_ActiveEdges) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_UseFullRange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ___m_HasOpenPaths) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperBase, ____PreserveCollinear_k__BackingField) == 0x42, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClipperBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClipperBase*, "UnityEngine.Rendering.Universal", "ClipperBase");
