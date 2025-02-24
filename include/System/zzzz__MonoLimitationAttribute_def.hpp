#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MonoTODOAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MonoLimitationAttribute)
// Forward declare root types
namespace System {
class MonoLimitationAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoLimitationAttribute);
// Type: System::MonoLimitationAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::MonoLimitationAttribute*
class CORDL_TYPE MonoLimitationAttribute : public ::System::MonoTODOAttribute {
public:
  // Declarations
  static inline ::System::MonoLimitationAttribute* New_ctor(::StringW comment);

  /// @brief Method .ctor, addr 0x2bf5158, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW comment);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoLimitationAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoLimitationAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoLimitationAttribute(MonoLimitationAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoLimitationAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoLimitationAttribute(MonoLimitationAttribute const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoLimitationAttribute, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoLimitationAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoLimitationAttribute*, "System", "MonoLimitationAttribute");
