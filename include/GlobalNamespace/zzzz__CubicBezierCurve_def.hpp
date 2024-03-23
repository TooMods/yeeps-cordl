#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Curve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CubicBezierCurve)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CubicBezierCurve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CubicBezierCurve);
// Type: ::CubicBezierCurve
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::CubicBezierCurve*
class CORDL_TYPE CubicBezierCurve : public ::GlobalNamespace::Curve {
public:
  // Declarations
  /// @brief Field endingDirection, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_endingDirection, put = __cordl_internal_set_endingDirection))::UnityEngine::Vector3 endingDirection;

  /// @brief Field p0, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_p0, put = __cordl_internal_set_p0))::UnityEngine::Vector3 p0;

  /// @brief Field p1, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_p1, put = __cordl_internal_set_p1))::UnityEngine::Vector3 p1;

  /// @brief Field p2, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_p2, put = __cordl_internal_set_p2))::UnityEngine::Vector3 p2;

  /// @brief Field p3, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_p3, put = __cordl_internal_set_p3))::UnityEngine::Vector3 p3;

  /// @brief Method GetEnd, addr 0xf2a234, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetEnd(ByRef<::UnityEngine::Vector3> endingDirection);

  /// @brief Method GetExactHeading, addr 0xf2a198, size 0x90, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetExactHeading(float_t ratio);

  /// @brief Method GetExactPoint, addr 0xf2a108, size 0x90, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetExactPoint(float_t ratio);

  /// @brief Method GetStart, addr 0xf2a228, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetStart();

  static inline ::GlobalNamespace::CubicBezierCurve* New_ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 startDirection, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 endDirection);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endingDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_endingDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p0() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_p0();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p1() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_p1();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p2() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_p2();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p3() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_p3();

  constexpr void __cordl_internal_set_endingDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_p0(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_p1(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_p2(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_p3(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0xf29fac, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 startDirection, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 endDirection);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubicBezierCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CubicBezierCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubicBezierCurve(CubicBezierCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubicBezierCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubicBezierCurve(CubicBezierCurve const&) = delete;

  /// @brief Field p0, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___p0;

  /// @brief Field p1, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___p1;

  /// @brief Field p2, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___p2;

  /// @brief Field p3, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___p3;

  /// @brief Field endingDirection, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___endingDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CubicBezierCurve, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CubicBezierCurve, ___p0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubicBezierCurve, ___p1) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubicBezierCurve, ___p2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubicBezierCurve, ___p3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CubicBezierCurve, ___endingDirection) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CubicBezierCurve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubicBezierCurve*, "", "CubicBezierCurve");
