#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CategoryAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SRCategoryAttribute)
// Forward declare root types
namespace System::ComponentModel {
class SRCategoryAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::SRCategoryAttribute);
// Type: System.ComponentModel::SRCategoryAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// CS Name: ::System.ComponentModel::SRCategoryAttribute*
class CORDL_TYPE SRCategoryAttribute : public ::System::ComponentModel::CategoryAttribute {
public:
  // Declarations
  static inline ::System::ComponentModel::SRCategoryAttribute* New_ctor(::StringW category);

  /// @brief Method .ctor, addr 0x18ea404, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW category);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SRCategoryAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SRCategoryAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SRCategoryAttribute(SRCategoryAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SRCategoryAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SRCategoryAttribute(SRCategoryAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::SRCategoryAttribute, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::SRCategoryAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SRCategoryAttribute*, "System.ComponentModel", "SRCategoryAttribute");
