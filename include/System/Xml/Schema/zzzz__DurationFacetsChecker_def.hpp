#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__FacetsChecker_def.hpp"
CORDL_MODULE_EXPORT(DurationFacetsChecker)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
class DurationFacetsChecker;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DurationFacetsChecker);
// Type: System.Xml.Schema::DurationFacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::DurationFacetsChecker*
class CORDL_TYPE DurationFacetsChecker : public ::System::Xml::Schema::FacetsChecker {
public:
  // Declarations
  /// @brief Method CheckValueFacets, addr 0x2fc55cc, size 0x114, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::Object* value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method CheckValueFacets, addr 0x2fc56e0, size 0x328, virtual true, abstract: false, final false
  inline ::System::Exception* CheckValueFacets(::System::TimeSpan value, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x2fc5b14, size 0x78, virtual true, abstract: false, final false
  inline bool MatchEnumeration(::System::Object* value, ::System::Collections::ArrayList* enumeration, ::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method MatchEnumeration, addr 0x2fc5a08, size 0x10c, virtual false, abstract: false, final false
  inline bool MatchEnumeration(::System::TimeSpan value, ::System::Collections::ArrayList* enumeration);

  static inline ::System::Xml::Schema::DurationFacetsChecker* New_ctor();

  /// @brief Method .ctor, addr 0x2fb1868, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DurationFacetsChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DurationFacetsChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DurationFacetsChecker(DurationFacetsChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DurationFacetsChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DurationFacetsChecker(DurationFacetsChecker const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DurationFacetsChecker, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DurationFacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DurationFacetsChecker*, "System.Xml.Schema", "DurationFacetsChecker");
