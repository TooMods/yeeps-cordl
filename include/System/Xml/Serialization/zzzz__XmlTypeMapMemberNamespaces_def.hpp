#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__XmlTypeMapMember_def.hpp"
CORDL_MODULE_EXPORT(XmlTypeMapMemberNamespaces)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlTypeMapMemberNamespaces;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlTypeMapMemberNamespaces);
// Type: System.Xml.Serialization::XmlTypeMapMemberNamespaces
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlTypeMapMemberNamespaces*
class CORDL_TYPE XmlTypeMapMemberNamespaces : public ::System::Xml::Serialization::XmlTypeMapMember {
public:
  // Declarations
  static inline ::System::Xml::Serialization::XmlTypeMapMemberNamespaces* New_ctor();

  /// @brief Method .ctor, addr 0x30457a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTypeMapMemberNamespaces();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberNamespaces", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTypeMapMemberNamespaces(XmlTypeMapMemberNamespaces&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTypeMapMemberNamespaces", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTypeMapMemberNamespaces(XmlTypeMapMemberNamespaces const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlTypeMapMemberNamespaces, 0x58>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlTypeMapMemberNamespaces);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlTypeMapMemberNamespaces*, "System.Xml.Serialization", "XmlTypeMapMemberNamespaces");
