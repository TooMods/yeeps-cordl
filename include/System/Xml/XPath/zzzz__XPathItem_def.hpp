#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathItem)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathItem;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XPath::XPathItem);
// Type: System.Xml.XPath::XPathItem
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::XPath {
// Is value type: false
// CS Name: ::System.Xml.XPath::XPathItem*
class CORDL_TYPE XPathItem : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_TypedValue))::System::Object* TypedValue;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(get = get_ValueAsBoolean)) bool ValueAsBoolean;

  __declspec(property(get = get_ValueAsDateTime))::System::DateTime ValueAsDateTime;

  __declspec(property(get = get_ValueAsDouble)) double_t ValueAsDouble;

  __declspec(property(get = get_ValueAsInt)) int32_t ValueAsInt;

  __declspec(property(get = get_ValueAsLong)) int64_t ValueAsLong;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_XmlType))::System::Xml::Schema::XmlSchemaType* XmlType;

  static inline ::System::Xml::XPath::XPathItem* New_ctor();

  /// @brief Method ValueAs, addr 0x1253f48, size 0x14, virtual true, abstract: false, final false
  inline ::System::Object* ValueAs(::System::Type* returnType);

  /// @brief Method ValueAs, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* ValueAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method .ctor, addr 0x1253f5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypedValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* get_TypedValue();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Value();

  /// @brief Method get_ValueAsBoolean, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_ValueAsBoolean();

  /// @brief Method get_ValueAsDateTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::DateTime get_ValueAsDateTime();

  /// @brief Method get_ValueAsDouble, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline double_t get_ValueAsDouble();

  /// @brief Method get_ValueAsInt, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ValueAsInt();

  /// @brief Method get_ValueAsLong, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_ValueAsLong();

  /// @brief Method get_ValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_XmlType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::XmlSchemaType* get_XmlType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XPathItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathItem(XPathItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathItem(XPathItem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathItem, 0x10>, "Size mismatch!");

} // namespace System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathItem);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathItem*, "System.Xml.XPath", "XPathItem");
