#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(XmlUnionConverter)
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlUnionConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlUnionConverter);
// Type: System.Xml.Schema::XmlUnionConverter
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 50, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlUnionConverter*
class CORDL_TYPE XmlUnionConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Field converters, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_converters,
                      put = __cordl_internal_set_converters))::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*> converters;

  /// @brief Field hasAtomicMember, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_hasAtomicMember, put = __cordl_internal_set_hasAtomicMember)) bool hasAtomicMember;

  /// @brief Field hasListMember, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_hasListMember, put = __cordl_internal_set_hasListMember)) bool hasListMember;

  /// @brief Method ChangeType, addr 0x1925ba4, size 0x420, virtual true, abstract: false, final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method Create, addr 0x1925b44, size 0x60, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);

  static inline ::System::Xml::Schema::XmlUnionConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

  constexpr ::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*> const& __cordl_internal_get_converters() const;

  constexpr ::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*>& __cordl_internal_get_converters();

  constexpr bool const& __cordl_internal_get_hasAtomicMember() const;

  constexpr bool& __cordl_internal_get_hasAtomicMember();

  constexpr bool const& __cordl_internal_get_hasListMember() const;

  constexpr bool& __cordl_internal_get_hasListMember();

  constexpr void __cordl_internal_set_converters(::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*> value);

  constexpr void __cordl_internal_set_hasAtomicMember(bool value);

  constexpr void __cordl_internal_set_hasListMember(bool value);

  /// @brief Method .ctor, addr 0x19258fc, size 0x248, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUnionConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUnionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUnionConverter(XmlUnionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUnionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUnionConverter(XmlUnionConverter const&) = delete;

  /// @brief Field converters, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*> ___converters;

  /// @brief Field hasAtomicMember, offset: 0x30, size: 0x1, def value: None
  bool ___hasAtomicMember;

  /// @brief Field hasListMember, offset: 0x31, size: 0x1, def value: None
  bool ___hasListMember;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlUnionConverter, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlUnionConverter, ___converters) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlUnionConverter, ___hasAtomicMember) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlUnionConverter, ___hasListMember) == 0x31, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlUnionConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlUnionConverter*, "System.Xml.Schema", "XmlUnionConverter");
