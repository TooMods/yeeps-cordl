#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_double_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Datatype_doubleXdr)
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_doubleXdr;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_doubleXdr);
// Type: System.Xml.Schema::Datatype_doubleXdr
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_doubleXdr*
class CORDL_TYPE Datatype_doubleXdr : public ::System::Xml::Schema::Datatype_double {
public:
  // Declarations
  static inline ::System::Xml::Schema::Datatype_doubleXdr* New_ctor();

  /// @brief Method ParseValue, addr 0x2fbcf8c, size 0x284, virtual true, abstract: false, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);

  /// @brief Method .ctor, addr 0x2fb1ccc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_doubleXdr();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_doubleXdr", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_doubleXdr(Datatype_doubleXdr&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_doubleXdr", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_doubleXdr(Datatype_doubleXdr const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_doubleXdr, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_doubleXdr);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_doubleXdr*, "System.Xml.Schema", "Datatype_doubleXdr");
