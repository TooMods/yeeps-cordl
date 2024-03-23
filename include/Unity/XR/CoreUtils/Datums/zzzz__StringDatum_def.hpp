#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/XR/CoreUtils/Datums/zzzz__Datum_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringDatum)
// Forward declare root types
namespace Unity::XR::CoreUtils::Datums {
class StringDatum;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::Datums::StringDatum);
// Type: Unity.XR.CoreUtils.Datums::StringDatum
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Datums {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Datums::StringDatum*
class CORDL_TYPE StringDatum : public ::Unity::XR::CoreUtils::Datums::Datum_1<::StringW> {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::Datums::StringDatum* New_ctor();

  /// @brief Method .ctor, addr 0x2881f94, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringDatum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringDatum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringDatum(StringDatum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringDatum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringDatum(StringDatum const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::Datums::StringDatum, 0x38>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils::Datums
NEED_NO_BOX(::Unity::XR::CoreUtils::Datums::StringDatum);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::Datums::StringDatum*, "Unity.XR.CoreUtils.Datums", "StringDatum");
