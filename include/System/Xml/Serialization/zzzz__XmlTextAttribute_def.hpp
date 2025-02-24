#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlTextAttribute)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTextAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTextAttribute);
// Type: System.Xml.Serialization::XmlTextAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTextAttribute*
class CORDL_TYPE XmlTextAttribute : public ::System::Attribute {
public:
  // Declarations
  __declspec(property(get = get_DataType))::StringW DataType;

  __declspec(property(get = get_Type))::System::Type* Type;

  /// @brief Field dataType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dataType, put = __cordl_internal_set_dataType))::StringW dataType;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Method AddKeyHash, addr 0x3044224, size 0x90, virtual false, abstract: false, final false
  inline void AddKeyHash(::System::Text::StringBuilder* sb);

  static inline ::System::Xml::Serialization::XmlTextAttribute* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_dataType() const;

  constexpr ::StringW& __cordl_internal_get_dataType();

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_dataType(::StringW value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x30441c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DataType, addr 0x30441c8, size 0x54, virtual false, abstract: false, final false
  inline ::StringW get_DataType();

  /// @brief Method get_Type, addr 0x304421c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTextAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextAttribute(XmlTextAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextAttribute(XmlTextAttribute const&) = delete;

  /// @brief Field dataType, offset: 0x10, size: 0x8, def value: None
  ::StringW ___dataType;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTextAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTextAttribute, ___dataType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlTextAttribute, ___type) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTextAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTextAttribute*, "System.Xml.Serialization", "XmlTextAttribute");
