#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(DoNotNormalizeAttribute)
// Forward declare root types
namespace Unity::Mathematics {
class DoNotNormalizeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Mathematics::DoNotNormalizeAttribute);
// Type: Unity.Mathematics::DoNotNormalizeAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::Mathematics {
// Is value type: false
// CS Name: ::Unity.Mathematics::DoNotNormalizeAttribute*
class CORDL_TYPE DoNotNormalizeAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  static inline ::Unity::Mathematics::DoNotNormalizeAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x1a2d884, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DoNotNormalizeAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DoNotNormalizeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DoNotNormalizeAttribute(DoNotNormalizeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DoNotNormalizeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DoNotNormalizeAttribute(DoNotNormalizeAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Mathematics::DoNotNormalizeAttribute, 0x10>, "Size mismatch!");

} // namespace Unity::Mathematics
NEED_NO_BOX(::Unity::Mathematics::DoNotNormalizeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::DoNotNormalizeAttribute*, "Unity.Mathematics", "DoNotNormalizeAttribute");
