#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_dateTimeBase_def.hpp"
CORDL_MODULE_EXPORT(Datatype_yearMonth)
namespace System::Xml::Schema {
struct XmlTypeCode;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_yearMonth;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_yearMonth);
// Type: System.Xml.Schema::Datatype_yearMonth
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::Datatype_yearMonth*
class CORDL_TYPE Datatype_yearMonth : public ::System::Xml::Schema::Datatype_dateTimeBase {
public:
  // Declarations
  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  static inline ::System::Xml::Schema::Datatype_yearMonth* New_ctor();

  /// @brief Method .ctor, addr 0x2fb2724, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TypeCode, addr 0x2fb8a90, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_yearMonth();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_yearMonth", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_yearMonth(Datatype_yearMonth&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_yearMonth", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_yearMonth(Datatype_yearMonth const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_yearMonth, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_yearMonth);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_yearMonth*, "System.Xml.Schema", "Datatype_yearMonth");
