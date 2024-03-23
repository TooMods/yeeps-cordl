#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(EnumMemberAttribute)
// Forward declare root types
namespace System::Runtime::Serialization {
class EnumMemberAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::EnumMemberAttribute);
// Type: System.Runtime.Serialization::EnumMemberAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::EnumMemberAttribute*
class CORDL_TYPE EnumMemberAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field isValueSetExplicitly, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_isValueSetExplicitly, put = __cordl_internal_set_isValueSetExplicitly)) bool isValueSetExplicitly;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::StringW value;

  static inline ::System::Runtime::Serialization::EnumMemberAttribute* New_ctor();

  constexpr bool const& __cordl_internal_get_isValueSetExplicitly() const;

  constexpr bool& __cordl_internal_get_isValueSetExplicitly();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_isValueSetExplicitly(bool value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x1a54f20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Value, addr 0x1a54f28, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x1a54f30, size 0x35f94, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnumMemberAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnumMemberAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnumMemberAttribute(EnumMemberAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnumMemberAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnumMemberAttribute(EnumMemberAttribute const&) = delete;

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field isValueSetExplicitly, offset: 0x18, size: 0x1, def value: None
  bool ___isValueSetExplicitly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::EnumMemberAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumMemberAttribute, ___value) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::EnumMemberAttribute, ___isValueSetExplicitly) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::EnumMemberAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::EnumMemberAttribute*, "System.Runtime.Serialization", "EnumMemberAttribute");
