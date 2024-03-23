#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Curve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LinearCurve)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LinearCurve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LinearCurve);
// Type: ::LinearCurve
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LinearCurve*
class CORDL_TYPE LinearCurve : public ::GlobalNamespace::Curve {
public:
  // Declarations
  /// @brief Field end, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_end, put = __cordl_internal_set_end))::UnityEngine::Vector3 end;

  /// @brief Field endingDirection, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_endingDirection, put = __cordl_internal_set_endingDirection))::UnityEngine::Vector3 endingDirection;

  /// @brief Field start, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_start, put = __cordl_internal_set_start))::UnityEngine::Vector3 start;

  /// @brief Method GetEnd, addr 0xf29dfc, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetEnd(ByRef<::UnityEngine::Vector3> endingDirection);

  /// @brief Method GetExactHeading, addr 0xf29de4, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetExactHeading(float_t ratio);

  /// @brief Method GetExactPoint, addr 0xf29da0, size 0x44, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetExactPoint(float_t ratio);

  /// @brief Method GetStart, addr 0xf29df0, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetStart();

  static inline ::GlobalNamespace::LinearCurve* New_ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_end() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_end();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_endingDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_endingDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_start() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_start();

  constexpr void __cordl_internal_set_end(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_endingDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_start(::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0xf29c88, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinearCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LinearCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinearCurve(LinearCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinearCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinearCurve(LinearCurve const&) = delete;

  /// @brief Field start, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___start;

  /// @brief Field end, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___end;

  /// @brief Field endingDirection, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___endingDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LinearCurve, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearCurve, ___start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearCurve, ___end) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LinearCurve, ___endingDirection) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LinearCurve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LinearCurve*, "", "LinearCurve");
