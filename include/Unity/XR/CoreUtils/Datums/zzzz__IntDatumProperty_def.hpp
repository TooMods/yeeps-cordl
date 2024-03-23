#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__IntDatum_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class IntDatum;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class IntDatumProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Datums::IntDatumProperty);
// Type: Unity.XR.CoreUtils.Datums::IntDatumProperty
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::IntDatumProperty*
class CORDL_TYPE IntDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<int32_t, ::UnityW<::Unity::XR::CoreUtils::Datums::IntDatum>> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::IntDatum* datum);

  static inline ::Unity::XR::CoreUtils::Datums::IntDatumProperty* New_ctor(int32_t value);

  /// @brief Method .ctor, addr 0x2881f3c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::XR::CoreUtils::Datums::IntDatum* datum);

  /// @brief Method .ctor, addr 0x2881ee4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntDatumProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntDatumProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntDatumProperty(IntDatumProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntDatumProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntDatumProperty(IntDatumProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Datums::IntDatumProperty, 0x20>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils::Datums
NEED_NO_BOX(::Unity::XR::CoreUtils::Datums::IntDatumProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Datums::IntDatumProperty*, "Unity.XR.CoreUtils.Datums", "IntDatumProperty");
