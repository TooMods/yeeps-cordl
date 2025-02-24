#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__ArrayList_def.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapElementInfoList)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapElementInfoList;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapElementInfoList);
// Type: System.Xml.Serialization::XmlTypeMapElementInfoList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapElementInfoList*
class CORDL_TYPE XmlTypeMapElementInfoList : public ::System::Collections::ArrayList {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* New_ctor();

  /// @brief Method .ctor, addr 0x304486c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapElementInfoList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapElementInfoList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapElementInfoList(XmlTypeMapElementInfoList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapElementInfoList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapElementInfoList(XmlTypeMapElementInfoList const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapElementInfoList, 0x28>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapElementInfoList);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapElementInfoList*, "System.Xml.Serialization", "XmlTypeMapElementInfoList");
