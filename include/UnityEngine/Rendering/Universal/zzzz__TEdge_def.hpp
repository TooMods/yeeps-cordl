#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__EdgeSide_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PolyType_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TEdge)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class TEdge;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TEdge);
// Type: UnityEngine.Rendering.Universal::TEdge
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::TEdge*
class CORDL_TYPE TEdge : public ::System::Object {
public:
  // Declarations
  /// @brief Field Bot, offset 0x10, size 0x30
  __declspec(property(get = __cordl_internal_get_Bot, put = __cordl_internal_set_Bot))::UnityEngine::Rendering::Universal::IntPoint Bot;

  /// @brief Field Curr, offset 0x40, size 0x30
  __declspec(property(get = __cordl_internal_get_Curr, put = __cordl_internal_set_Curr))::UnityEngine::Rendering::Universal::IntPoint Curr;

  /// @brief Field Delta, offset 0xa0, size 0x30
  __declspec(property(get = __cordl_internal_get_Delta, put = __cordl_internal_set_Delta))::UnityEngine::Rendering::Universal::IntPoint Delta;

  /// @brief Field Dx, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_Dx, put = __cordl_internal_set_Dx)) double_t Dx;

  /// @brief Field Next, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::UnityEngine::Rendering::Universal::TEdge* Next;

  /// @brief Field NextInAEL, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_NextInAEL, put = __cordl_internal_set_NextInAEL))::UnityEngine::Rendering::Universal::TEdge* NextInAEL;

  /// @brief Field NextInLML, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_NextInLML, put = __cordl_internal_set_NextInLML))::UnityEngine::Rendering::Universal::TEdge* NextInLML;

  /// @brief Field NextInSEL, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_NextInSEL, put = __cordl_internal_set_NextInSEL))::UnityEngine::Rendering::Universal::TEdge* NextInSEL;

  /// @brief Field OutIdx, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_OutIdx, put = __cordl_internal_set_OutIdx)) int32_t OutIdx;

  /// @brief Field PolyTyp, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_PolyTyp, put = __cordl_internal_set_PolyTyp))::UnityEngine::Rendering::Universal::PolyType PolyTyp;

  /// @brief Field Prev, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_Prev, put = __cordl_internal_set_Prev))::UnityEngine::Rendering::Universal::TEdge* Prev;

  /// @brief Field PrevInAEL, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_PrevInAEL, put = __cordl_internal_set_PrevInAEL))::UnityEngine::Rendering::Universal::TEdge* PrevInAEL;

  /// @brief Field PrevInSEL, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_PrevInSEL, put = __cordl_internal_set_PrevInSEL))::UnityEngine::Rendering::Universal::TEdge* PrevInSEL;

  /// @brief Field Side, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_Side, put = __cordl_internal_set_Side))::UnityEngine::Rendering::Universal::EdgeSide Side;

  /// @brief Field Top, offset 0x70, size 0x30
  __declspec(property(get = __cordl_internal_get_Top, put = __cordl_internal_set_Top))::UnityEngine::Rendering::Universal::IntPoint Top;

  /// @brief Field WindCnt, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_WindCnt, put = __cordl_internal_set_WindCnt)) int32_t WindCnt;

  /// @brief Field WindCnt2, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_WindCnt2, put = __cordl_internal_set_WindCnt2)) int32_t WindCnt2;

  /// @brief Field WindDelta, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_WindDelta, put = __cordl_internal_set_WindDelta)) int32_t WindDelta;

  static inline ::UnityEngine::Rendering::Universal::TEdge* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_Bot() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_Bot();

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_Curr() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_Curr();

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_Delta() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_Delta();

  constexpr double_t const& __cordl_internal_get_Dx() const;

  constexpr double_t& __cordl_internal_get_Dx();

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_Next() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_NextInAEL();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_NextInAEL() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_NextInLML();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_NextInLML() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_NextInSEL();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_NextInSEL() const;

  constexpr int32_t const& __cordl_internal_get_OutIdx() const;

  constexpr int32_t& __cordl_internal_get_OutIdx();

  constexpr ::UnityEngine::Rendering::Universal::PolyType const& __cordl_internal_get_PolyTyp() const;

  constexpr ::UnityEngine::Rendering::Universal::PolyType& __cordl_internal_get_PolyTyp();

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_Prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_Prev() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_PrevInAEL();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_PrevInAEL() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_PrevInSEL();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_PrevInSEL() const;

  constexpr ::UnityEngine::Rendering::Universal::EdgeSide const& __cordl_internal_get_Side() const;

  constexpr ::UnityEngine::Rendering::Universal::EdgeSide& __cordl_internal_get_Side();

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_Top() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_Top();

  constexpr int32_t const& __cordl_internal_get_WindCnt() const;

  constexpr int32_t& __cordl_internal_get_WindCnt();

  constexpr int32_t const& __cordl_internal_get_WindCnt2() const;

  constexpr int32_t& __cordl_internal_get_WindCnt2();

  constexpr int32_t const& __cordl_internal_get_WindDelta() const;

  constexpr int32_t& __cordl_internal_get_WindDelta();

  constexpr void __cordl_internal_set_Bot(::UnityEngine::Rendering::Universal::IntPoint value);

  constexpr void __cordl_internal_set_Curr(::UnityEngine::Rendering::Universal::IntPoint value);

  constexpr void __cordl_internal_set_Delta(::UnityEngine::Rendering::Universal::IntPoint value);

  constexpr void __cordl_internal_set_Dx(double_t value);

  constexpr void __cordl_internal_set_Next(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_NextInAEL(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_NextInLML(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_NextInSEL(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_OutIdx(int32_t value);

  constexpr void __cordl_internal_set_PolyTyp(::UnityEngine::Rendering::Universal::PolyType value);

  constexpr void __cordl_internal_set_Prev(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_PrevInAEL(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_PrevInSEL(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_Side(::UnityEngine::Rendering::Universal::EdgeSide value);

  constexpr void __cordl_internal_set_Top(::UnityEngine::Rendering::Universal::IntPoint value);

  constexpr void __cordl_internal_set_WindCnt(int32_t value);

  constexpr void __cordl_internal_set_WindCnt2(int32_t value);

  constexpr void __cordl_internal_set_WindDelta(int32_t value);

  /// @brief Method .ctor, addr 0x1e22104, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TEdge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TEdge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TEdge(TEdge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TEdge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TEdge(TEdge const&) = delete;

  /// @brief Field Bot, offset: 0x10, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___Bot;

  /// @brief Field Curr, offset: 0x40, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___Curr;

  /// @brief Field Top, offset: 0x70, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___Top;

  /// @brief Field Delta, offset: 0xa0, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___Delta;

  /// @brief Field Dx, offset: 0xd0, size: 0x8, def value: None
  double_t ___Dx;

  /// @brief Field PolyTyp, offset: 0xd8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::PolyType ___PolyTyp;

  /// @brief Field Side, offset: 0xdc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::EdgeSide ___Side;

  /// @brief Field WindDelta, offset: 0xe0, size: 0x4, def value: None
  int32_t ___WindDelta;

  /// @brief Field WindCnt, offset: 0xe4, size: 0x4, def value: None
  int32_t ___WindCnt;

  /// @brief Field WindCnt2, offset: 0xe8, size: 0x4, def value: None
  int32_t ___WindCnt2;

  /// @brief Field OutIdx, offset: 0xec, size: 0x4, def value: None
  int32_t ___OutIdx;

  /// @brief Field Next, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___Next;

  /// @brief Field Prev, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___Prev;

  /// @brief Field NextInLML, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___NextInLML;

  /// @brief Field NextInAEL, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___NextInAEL;

  /// @brief Field PrevInAEL, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___PrevInAEL;

  /// @brief Field NextInSEL, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___NextInSEL;

  /// @brief Field PrevInSEL, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___PrevInSEL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TEdge, 0x128>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Bot) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Curr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Top) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Delta) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Dx) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___PolyTyp) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Side) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___WindDelta) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___WindCnt) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___WindCnt2) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___OutIdx) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Next) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___Prev) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___NextInLML) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___NextInAEL) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___PrevInAEL) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___NextInSEL) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TEdge, ___PrevInSEL) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TEdge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TEdge*, "UnityEngine.Rendering.Universal", "TEdge");
