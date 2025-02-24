#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyKeyFileAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyKeyFileAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyKeyFileAttribute);
// Type: System.Reflection::AssemblyKeyFileAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::AssemblyKeyFileAttribute*
class CORDL_TYPE AssemblyKeyFileAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <KeyFile>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__KeyFile_k__BackingField, put = __cordl_internal_set__KeyFile_k__BackingField))::StringW _KeyFile_k__BackingField;

  static inline ::System::Reflection::AssemblyKeyFileAttribute* New_ctor(::StringW keyFile);

  constexpr ::StringW const& __cordl_internal_get__KeyFile_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__KeyFile_k__BackingField();

  constexpr void __cordl_internal_set__KeyFile_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x260ed98, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW keyFile);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyKeyFileAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssemblyKeyFileAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyKeyFileAttribute(AssemblyKeyFileAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyKeyFileAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyKeyFileAttribute(AssemblyKeyFileAttribute const&) = delete;

  /// @brief Field <KeyFile>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____KeyFile_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyKeyFileAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::AssemblyKeyFileAttribute, ____KeyFile_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyKeyFileAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyKeyFileAttribute*, "System.Reflection", "AssemblyKeyFileAttribute");
