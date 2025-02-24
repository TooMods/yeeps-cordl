#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_duration)
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct RestrictionFlags;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_duration;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_duration);
// Type: System.Xml.Schema::Datatype_duration
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_duration*
class CORDL_TYPE Datatype_duration : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_ListValueType))::System::Type* ListValueType;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValidRestrictionFlags))::System::Xml::Schema::RestrictionFlags ValidRestrictionFlags;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType))::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType))::System::Type* listValueType;

  /// @brief Method Compare, addr 0x2fb7d4c, size 0x94, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method CreateValueConverter, addr 0x2fb7c20, size 0xc, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::Datatype_duration* New_ctor();

  /// @brief Method TryParseValue, addr 0x2fb7de0, size 0x1c8, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ByRef<::System::Object*> typedValue);

  /// @brief Method .ctor, addr 0x2fb1d20, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x2fb7d3c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_FacetsChecker, addr 0x2fb7c2c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_ListValueType, addr 0x2fb7ce4, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_TypeCode, addr 0x2fb7c84, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ValidRestrictionFlags, addr 0x2fb7d44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();

  /// @brief Method get_ValueType, addr 0x2fb7c8c, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline void setStaticF_listValueType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_duration();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_duration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_duration(Datatype_duration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_duration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_duration(Datatype_duration const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_duration, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_duration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_duration*, "System.Xml.Schema", "Datatype_duration");
