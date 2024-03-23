#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Curve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(QuadraticBezierCurve)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class QuadraticBezierCurve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuadraticBezierCurve);
// Type: ::QuadraticBezierCurve
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuadraticBezierCurve*
class CORDL_TYPE QuadraticBezierCurve : public ::GlobalNamespace::Curve {
public:
  // Declarations
  /// @brief Field endingDirection, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_endingDirection, put = __cordl_internal_set_endingDirection))::UnityEngine::Vector3 endingDirection;

  /// @brief Field p0, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_p0, put = __cordl_internal_set_p0))::UnityEngine::Vector3 p0;

  /// @brief Field p1, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_p1, put = __cordl_internal_set_p1))::UnityEngine::Vector3 p1;

  /// @brief Field p2, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_p2, put = __cordl_internal_set_p2))::UnityEngine::Vector3 p2;

  /// @brief Method GetEnd, addr 0xf29f90, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetEnd(ByRef<::UnityEngine::Vector3> endingDirection);

  /// @brief Method GetExactHeading, addr 0xf29f2c, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetExactHeading(float_t ratio);

  /// @brief Method GetExactPoint, addr 0xf29ecc, size 0x60, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetExactPoint(float_t ratio);

  /// @brief Method GetStart, addr 0xf29f84, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetStart();

  static inline ::GlobalNamespace::QuadraticBezierCurve* New_ctor();

  static inline ::GlobalNamespace::QuadraticBezierCurve* New_ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 startDirection, ::UnityEngine::Vector3 end);

  /// @brief Method Update, addr 0xf29ea0, size 0x2c, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 startDirection, ::UnityEngine::Vector3 end);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endingDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_endingDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p0() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_p0();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p1() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_p1();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_p2() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_p2();

  constexpr void __cordl_internal_set_endingDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_p0(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_p1(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_p2(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0xf29e18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0xf29e20, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 startDirection, ::UnityEngine::Vector3 end);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QuadraticBezierCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QuadraticBezierCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QuadraticBezierCurve(QuadraticBezierCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QuadraticBezierCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QuadraticBezierCurve(QuadraticBezierCurve const&) = delete;

  /// @brief Field p0, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___p0;

  /// @brief Field p1, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___p1;

  /// @brief Field p2, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___p2;

  /// @brief Field endingDirection, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___endingDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuadraticBezierCurve, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuadraticBezierCurve, ___p0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuadraticBezierCurve, ___p1) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuadraticBezierCurve, ___p2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuadraticBezierCurve, ___endingDirection) == 0x34, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuadraticBezierCurve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuadraticBezierCurve*, "", "QuadraticBezierCurve");
