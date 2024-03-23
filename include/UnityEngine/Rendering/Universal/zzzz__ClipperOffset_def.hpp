#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipperOffset)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct DoublePoint;
}
namespace UnityEngine::Rendering::Universal {
struct EndType;
}
namespace UnityEngine::Rendering::Universal {
struct IntPoint;
}
namespace UnityEngine::Rendering::Universal {
struct JoinType;
}
namespace UnityEngine::Rendering::Universal {
class PolyNode;
}
namespace UnityEngine::Rendering::Universal {
class PolyTree;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ClipperOffset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ClipperOffset);
// Type: UnityEngine.Rendering.Universal::ClipperOffset
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ClipperOffset*
class CORDL_TYPE ClipperOffset : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ArcTolerance, put = set_ArcTolerance)) double_t ArcTolerance;

  /// @brief Field <ArcTolerance>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__ArcTolerance_k__BackingField, put = __cordl_internal_set__ArcTolerance_k__BackingField)) double_t _ArcTolerance_k__BackingField;

  /// @brief Field m_StepsPerRad, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StepsPerRad, put = __cordl_internal_set_m_StepsPerRad)) double_t m_StepsPerRad;

  /// @brief Field m_cos, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_cos, put = __cordl_internal_set_m_cos)) double_t m_cos;

  /// @brief Field m_delta, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_delta, put = __cordl_internal_set_m_delta)) double_t m_delta;

  /// @brief Field m_destPoly, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_destPoly, put = __cordl_internal_set_m_destPoly))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* m_destPoly;

  /// @brief Field m_destPolys, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_destPolys,
               put = __cordl_internal_set_m_destPolys))::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* m_destPolys;

  /// @brief Field m_lowest, offset 0x58, size 0x30
  __declspec(property(get = __cordl_internal_get_m_lowest, put = __cordl_internal_set_m_lowest))::UnityEngine::Rendering::Universal::IntPoint m_lowest;

  /// @brief Field m_normals, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_normals, put = __cordl_internal_set_m_normals))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DoublePoint>* m_normals;

  /// @brief Field m_polyNodes, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_polyNodes, put = __cordl_internal_set_m_polyNodes))::UnityEngine::Rendering::Universal::PolyNode* m_polyNodes;

  /// @brief Field m_sin, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_sin, put = __cordl_internal_set_m_sin)) double_t m_sin;

  /// @brief Field m_sinA, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_sinA, put = __cordl_internal_set_m_sinA)) double_t m_sinA;

  /// @brief Field m_srcPoly, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_srcPoly, put = __cordl_internal_set_m_srcPoly))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* m_srcPoly;

  /// @brief Method AddPath, addr 0x2f2f0e4, size 0x588, virtual false, abstract: false, final false
  inline void AddPath(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* path, ::UnityEngine::Rendering::Universal::JoinType joinType,
                      ::UnityEngine::Rendering::Universal::EndType endType);

  /// @brief Method AddPaths, addr 0x2f2f66c, size 0x154, virtual false, abstract: false, final false
  inline void AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* paths,
                       ::UnityEngine::Rendering::Universal::JoinType joinType, ::UnityEngine::Rendering::Universal::EndType endType);

  /// @brief Method Clear, addr 0x2f2f038, size 0x78, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DoMiter, addr 0x2f32654, size 0x2dc, virtual false, abstract: false, final false
  inline void DoMiter(int32_t j, int32_t k, double_t r);

  /// @brief Method DoOffset, addr 0x2f2fa0c, size 0xdcc, virtual false, abstract: false, final false
  inline void DoOffset(double_t delta);

  /// @brief Method DoRound, addr 0x2f31050, size 0x530, virtual false, abstract: false, final false
  inline void DoRound(int32_t j, int32_t k);

  /// @brief Method DoSquare, addr 0x2f32088, size 0x5cc, virtual false, abstract: false, final false
  inline void DoSquare(int32_t j, int32_t k);

  /// @brief Method Execute, addr 0x2f31580, size 0x4ec, virtual false, abstract: false, final false
  inline void Execute(ByRef<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*> solution, double_t delta,
                      int32_t inputSize);

  /// @brief Method Execute, addr 0x2f31a6c, size 0x61c, virtual false, abstract: false, final false
  inline void Execute(ByRef<::UnityEngine::Rendering::Universal::PolyTree*> solution, double_t delta);

  /// @brief Method FixOrientations, addr 0x2f2f7c0, size 0x18c, virtual false, abstract: false, final false
  inline void FixOrientations();

  /// @brief Method GetUnitNormal, addr 0x2f2f94c, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::DoublePoint GetUnitNormal(::UnityEngine::Rendering::Universal::IntPoint pt1, ::UnityEngine::Rendering::Universal::IntPoint pt2);

  static inline ::UnityEngine::Rendering::Universal::ClipperOffset* New_ctor(double_t arcTolerance);

  /// @brief Method OffsetPoint, addr 0x2f307d8, size 0x878, virtual false, abstract: false, final false
  inline void OffsetPoint(int32_t j, ByRef<int32_t> k, ::UnityEngine::Rendering::Universal::JoinType jointype);

  /// @brief Method Round, addr 0x2f2f0b0, size 0x34, virtual false, abstract: false, final false
  static inline int64_t Round(double_t value);

  constexpr double_t const& __cordl_internal_get__ArcTolerance_k__BackingField() const;

  constexpr double_t& __cordl_internal_get__ArcTolerance_k__BackingField();

  constexpr double_t const& __cordl_internal_get_m_StepsPerRad() const;

  constexpr double_t& __cordl_internal_get_m_StepsPerRad();

  constexpr double_t const& __cordl_internal_get_m_cos() const;

  constexpr double_t& __cordl_internal_get_m_cos();

  constexpr double_t const& __cordl_internal_get_m_delta() const;

  constexpr double_t& __cordl_internal_get_m_delta();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*& __cordl_internal_get_m_destPoly();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*> const& __cordl_internal_get_m_destPoly() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*& __cordl_internal_get_m_destPolys();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>*> const&
  __cordl_internal_get_m_destPolys() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_m_lowest() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_m_lowest();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DoublePoint>*& __cordl_internal_get_m_normals();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DoublePoint>*> const& __cordl_internal_get_m_normals() const;

  constexpr ::UnityEngine::Rendering::Universal::PolyNode*& __cordl_internal_get_m_polyNodes();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PolyNode*> const& __cordl_internal_get_m_polyNodes() const;

  constexpr double_t const& __cordl_internal_get_m_sin() const;

  constexpr double_t& __cordl_internal_get_m_sin();

  constexpr double_t const& __cordl_internal_get_m_sinA() const;

  constexpr double_t& __cordl_internal_get_m_sinA();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*& __cordl_internal_get_m_srcPoly();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*> const& __cordl_internal_get_m_srcPoly() const;

  constexpr void __cordl_internal_set__ArcTolerance_k__BackingField(double_t value);

  constexpr void __cordl_internal_set_m_StepsPerRad(double_t value);

  constexpr void __cordl_internal_set_m_cos(double_t value);

  constexpr void __cordl_internal_set_m_delta(double_t value);

  constexpr void __cordl_internal_set_m_destPoly(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* value);

  constexpr void __cordl_internal_set_m_destPolys(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* value);

  constexpr void __cordl_internal_set_m_lowest(::UnityEngine::Rendering::Universal::IntPoint value);

  constexpr void __cordl_internal_set_m_normals(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DoublePoint>* value);

  constexpr void __cordl_internal_set_m_polyNodes(::UnityEngine::Rendering::Universal::PolyNode* value);

  constexpr void __cordl_internal_set_m_sin(double_t value);

  constexpr void __cordl_internal_set_m_sinA(double_t value);

  constexpr void __cordl_internal_set_m_srcPoly(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* value);

  /// @brief Method .ctor, addr 0x2f2ef70, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(double_t arcTolerance);

  /// @brief Method get_ArcTolerance, addr 0x2f2ef60, size 0x8, virtual false, abstract: false, final false
  inline double_t get_ArcTolerance();

  /// @brief Method set_ArcTolerance, addr 0x2f2ef68, size 0x8, virtual false, abstract: false, final false
  inline void set_ArcTolerance(double_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClipperOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClipperOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClipperOffset(ClipperOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClipperOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClipperOffset(ClipperOffset const&) = delete;

  /// @brief Field m_destPolys, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*>* ___m_destPolys;

  /// @brief Field m_srcPoly, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* ___m_srcPoly;

  /// @brief Field m_destPoly, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* ___m_destPoly;

  /// @brief Field m_normals, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DoublePoint>* ___m_normals;

  /// @brief Field m_delta, offset: 0x30, size: 0x8, def value: None
  double_t ___m_delta;

  /// @brief Field m_sinA, offset: 0x38, size: 0x8, def value: None
  double_t ___m_sinA;

  /// @brief Field m_sin, offset: 0x40, size: 0x8, def value: None
  double_t ___m_sin;

  /// @brief Field m_cos, offset: 0x48, size: 0x8, def value: None
  double_t ___m_cos;

  /// @brief Field m_StepsPerRad, offset: 0x50, size: 0x8, def value: None
  double_t ___m_StepsPerRad;

  /// @brief Field m_lowest, offset: 0x58, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___m_lowest;

  /// @brief Field m_polyNodes, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PolyNode* ___m_polyNodes;

  /// @brief Field <ArcTolerance>k__BackingField, offset: 0x90, size: 0x8, def value: None
  double_t ____ArcTolerance_k__BackingField;

  /// @brief Field def_arc_tolerance offset 0xffffffff size 0x8
  static constexpr double_t def_arc_tolerance{ 0.25 };

  /// @brief Field two_pi offset 0xffffffff size 0x8
  static constexpr double_t two_pi{ 6.283185307179586 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ClipperOffset, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_destPolys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_srcPoly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_destPoly) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_normals) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_delta) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_sinA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_sin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_cos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_StepsPerRad) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_lowest) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ___m_polyNodes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ClipperOffset, ____ArcTolerance_k__BackingField) == 0x90, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ClipperOffset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ClipperOffset*, "UnityEngine.Rendering.Universal", "ClipperOffset");
