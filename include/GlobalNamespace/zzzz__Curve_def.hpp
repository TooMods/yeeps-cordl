#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Curve)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Curve;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Curve);
// Type: ::Curve
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Curve*
class CORDL_TYPE Curve : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetEnd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 GetEnd(ByRef<::UnityEngine::Vector3> endingDirection);

  /// @brief Method GetExactHeading, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 GetExactHeading(float_t ratio);

  /// @brief Method GetExactPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 GetExactPoint(float_t ratio);

  /// @brief Method GetExactPoints, addr 0xf29ae8, size 0xd0, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetExactPoints(int32_t count);

  /// @brief Method GetExactPointsBiased, addr 0xf29bb8, size 0xc8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> GetExactPointsBiased(int32_t count);

  /// @brief Method GetStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Vector3 GetStart();

  static inline ::GlobalNamespace::Curve* New_ctor();

  /// @brief Method .ctor, addr 0xf29c80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Curve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Curve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Curve(Curve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Curve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Curve(Curve const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Curve, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Curve);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Curve*, "", "Curve");
