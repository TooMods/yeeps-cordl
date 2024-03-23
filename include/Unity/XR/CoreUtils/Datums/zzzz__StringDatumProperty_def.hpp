#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__DatumProperty_2_def.hpp"
#include "Unity/XR/CoreUtils/Datums/zzzz__StringDatum_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringDatumProperty)
namespace Unity::XR::CoreUtils::Datums {
class StringDatum;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class StringDatumProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Datums::StringDatumProperty);
// Type: Unity.XR.CoreUtils.Datums::StringDatumProperty
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::StringDatumProperty*
class CORDL_TYPE StringDatumProperty : public ::Unity::XR::CoreUtils::Datums::DatumProperty_2<::StringW, ::UnityW<::Unity::XR::CoreUtils::Datums::StringDatum>> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* New_ctor(::Unity::XR::CoreUtils::Datums::StringDatum* datum);

  static inline ::Unity::XR::CoreUtils::Datums::StringDatumProperty* New_ctor(::StringW value);

  /// @brief Method .ctor, addr 0x2882034, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::Unity::XR::CoreUtils::Datums::StringDatum* datum);

  /// @brief Method .ctor, addr 0x2881fdc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringDatumProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringDatumProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringDatumProperty(StringDatumProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringDatumProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringDatumProperty(StringDatumProperty const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Datums::StringDatumProperty, 0x28>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils::Datums
NEED_NO_BOX(::Unity::XR::CoreUtils::Datums::StringDatumProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Datums::StringDatumProperty*, "Unity.XR.CoreUtils.Datums", "StringDatumProperty");
