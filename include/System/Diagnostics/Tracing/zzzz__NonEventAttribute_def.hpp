#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NonEventAttribute)
// Forward declare root types
namespace System::Diagnostics::Tracing {
class NonEventAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Diagnostics::Tracing::NonEventAttribute);
// Type: System.Diagnostics.Tracing::NonEventAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Diagnostics::Tracing {
// Is value type: false
// CS Name: ::System.Diagnostics.Tracing::NonEventAttribute*
class CORDL_TYPE NonEventAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Diagnostics::Tracing::NonEventAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x21c7470, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NonEventAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NonEventAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NonEventAttribute(NonEventAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NonEventAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NonEventAttribute(NonEventAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::NonEventAttribute, 0x10>, "Size mismatch!");

} // namespace System::Diagnostics::Tracing
NEED_NO_BOX(::System::Diagnostics::Tracing::NonEventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::NonEventAttribute*, "System.Diagnostics.Tracing", "NonEventAttribute");
