#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaFacet_def.hpp"
CORDL_MODULE_EXPORT(XmlSchemaEnumerationFacet)
// Forward declare root types
namespace System::Xml::Schema {
class XmlSchemaEnumerationFacet;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaEnumerationFacet);
// Type: System.Xml.Schema::XmlSchemaEnumerationFacet
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::XmlSchemaEnumerationFacet*
class CORDL_TYPE XmlSchemaEnumerationFacet : public ::System::Xml::Schema::XmlSchemaFacet {
public:
  // Declarations
  static inline ::System::Xml::Schema::XmlSchemaEnumerationFacet* New_ctor();

  /// @brief Method .ctor, addr 0x1ce71e4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaEnumerationFacet();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaEnumerationFacet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaEnumerationFacet(XmlSchemaEnumerationFacet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaEnumerationFacet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaEnumerationFacet(XmlSchemaEnumerationFacet const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaEnumerationFacet, 0x60>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaEnumerationFacet);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaEnumerationFacet*, "System.Xml.Schema", "XmlSchemaEnumerationFacet");
