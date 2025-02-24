#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(FlagsPropertyAttribute)
// Forward declare root types
namespace Unity::XR::CoreUtils::GUI {
class FlagsPropertyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute);
// Type: Unity.XR.CoreUtils.GUI::FlagsPropertyAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::GUI {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.GUI::FlagsPropertyAttribute*
class CORDL_TYPE FlagsPropertyAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x28828f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FlagsPropertyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FlagsPropertyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FlagsPropertyAttribute(FlagsPropertyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FlagsPropertyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FlagsPropertyAttribute(FlagsPropertyAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::XR::CoreUtils::GUI
NEED_NO_BOX(::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::GUI::FlagsPropertyAttribute*, "Unity.XR.CoreUtils.GUI", "FlagsPropertyAttribute");
