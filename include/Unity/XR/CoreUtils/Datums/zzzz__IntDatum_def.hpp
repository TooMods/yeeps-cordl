#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IntDatum)
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class IntDatum;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Datums::IntDatum);
// Type: Unity.XR.CoreUtils.Datums::IntDatum
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::IntDatum*
class CORDL_TYPE IntDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<int32_t> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Datums::IntDatum* New_ctor();

  /// @brief Method SetValueRounded, addr 0x2881d8c, size 0x110, virtual false, abstract: false, final false
  inline void SetValueRounded(float_t value);

  /// @brief Method .ctor, addr 0x2881e9c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntDatum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntDatum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntDatum(IntDatum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntDatum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntDatum(IntDatum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Datums::IntDatum, 0x30>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils::Datums
NEED_NO_BOX(::Unity::XR::CoreUtils::Datums::IntDatum);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Datums::IntDatum*, "Unity.XR.CoreUtils.Datums", "IntDatum");
