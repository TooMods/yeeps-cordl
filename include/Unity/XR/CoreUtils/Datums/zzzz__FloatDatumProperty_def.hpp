#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__FloatDatum_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class FloatDatum;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class FloatDatumProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Datums::FloatDatumProperty);
// Type: Unity.XR.CoreUtils.Datums::FloatDatumProperty
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::FloatDatumProperty*
class CORDL_TYPE FloatDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<float_t, ::UnityW<::Unity::XR::CoreUtils::Datums::FloatDatum>> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::FloatDatum* datum);

  static inline ::Unity::XR::CoreUtils::Datums::FloatDatumProperty* New_ctor(float_t value);

  /// @brief Method .ctor, addr 0x2881d34, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::XR::CoreUtils::Datums::FloatDatum* datum);

  /// @brief Method .ctor, addr 0x2881cdc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatDatumProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatDatumProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatDatumProperty(FloatDatumProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatDatumProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatDatumProperty(FloatDatumProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Datums::FloatDatumProperty, 0x20>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils::Datums
NEED_NO_BOX(::Unity::XR::CoreUtils::Datums::FloatDatumProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Datums::FloatDatumProperty*, "Unity.XR.CoreUtils.Datums", "FloatDatumProperty");
