#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ExtensionAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class ExtensionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::ExtensionAttribute);
// Type: System.Runtime.CompilerServices::ExtensionAttribute
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::ExtensionAttribute*
class CORDL_TYPE ExtensionAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::System::Runtime::CompilerServices::ExtensionAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x1b444b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtensionAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtensionAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtensionAttribute(ExtensionAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtensionAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtensionAttribute(ExtensionAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::ExtensionAttribute, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::ExtensionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ExtensionAttribute*, "System.Runtime.CompilerServices", "ExtensionAttribute");
