#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PreserveDependencyAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class PreserveDependencyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::PreserveDependencyAttribute);
// Type: System.Runtime.CompilerServices::PreserveDependencyAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::PreserveDependencyAttribute*
class CORDL_TYPE PreserveDependencyAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Condition, put = set_Condition))::StringW Condition;

  /// @brief Field <Condition>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Condition_k__BackingField, put = __cordl_internal_set__Condition_k__BackingField))::StringW _Condition_k__BackingField;

  static inline ::System::Runtime::CompilerServices::PreserveDependencyAttribute* New_ctor(::StringW memberSignature);

  static inline ::System::Runtime::CompilerServices::PreserveDependencyAttribute* New_ctor(::StringW memberSignature, ::StringW typeName);

  static inline ::System::Runtime::CompilerServices::PreserveDependencyAttribute* New_ctor(::StringW memberSignature, ::StringW typeName, ::StringW assembly);

  constexpr ::StringW const& __cordl_internal_get__Condition_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Condition_k__BackingField();

  constexpr void __cordl_internal_set__Condition_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x23b9ce4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW memberSignature);

  /// @brief Method .ctor, addr 0x23b9cec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW memberSignature, ::StringW typeName);

  /// @brief Method .ctor, addr 0x23b9cf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW memberSignature, ::StringW typeName, ::StringW assembly);

  /// @brief Method get_Condition, addr 0x23b9cfc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Condition();

  /// @brief Method set_Condition, addr 0x23b9d04, size 0x8, virtual false, abstract: false, final false
  inline void set_Condition(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreserveDependencyAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreserveDependencyAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreserveDependencyAttribute(PreserveDependencyAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreserveDependencyAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreserveDependencyAttribute(PreserveDependencyAttribute const&) = delete;

  /// @brief Field <Condition>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Condition_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::PreserveDependencyAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::PreserveDependencyAttribute, ____Condition_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::PreserveDependencyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::PreserveDependencyAttribute*, "System.Runtime.CompilerServices", "PreserveDependencyAttribute");
