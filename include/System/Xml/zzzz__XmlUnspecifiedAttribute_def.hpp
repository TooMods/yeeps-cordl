#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlUnspecifiedAttribute)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlUnspecifiedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUnspecifiedAttribute);
// Type: System.Xml::XmlUnspecifiedAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlUnspecifiedAttribute*
class CORDL_TYPE XmlUnspecifiedAttribute : public ::System::Xml::XmlAttribute {
public:
  // Declarations
  __declspec(property(put = set_InnerText))::StringW InnerText;

  __declspec(property(get = get_Specified)) bool Specified;

  /// @brief Field fSpecified, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_fSpecified, put = __cordl_internal_set_fSpecified)) bool fSpecified;

  /// @brief Method AppendChild, addr 0xfa6a5c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild);

  /// @brief Method CloneNode, addr 0xfa68ac, size 0x130, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method InsertAfter, addr 0xfa6a1c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method InsertBefore, addr 0xfa69fc, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  static inline ::System::Xml::XmlUnspecifiedAttribute* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method RemoveChild, addr 0xfa6a3c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild);

  /// @brief Method SetSpecified, addr 0xfa6a90, size 0xc, virtual false, abstract: false, final false
  inline void SetSpecified(bool f);

  /// @brief Method WriteTo, addr 0xfa6a7c, size 0x14, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr bool const& __cordl_internal_get_fSpecified() const;

  constexpr bool& __cordl_internal_get_fSpecified();

  constexpr void __cordl_internal_set_fSpecified(bool value);

  /// @brief Method .ctor, addr 0xfa689c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Specified, addr 0xfa68a4, size 0x8, virtual true, abstract: false, final false
  inline bool get_Specified();

  /// @brief Method set_InnerText, addr 0xfa69dc, size 0x20, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUnspecifiedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUnspecifiedAttribute(XmlUnspecifiedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUnspecifiedAttribute(XmlUnspecifiedAttribute const&) = delete;

  /// @brief Field fSpecified, offset: 0x28, size: 0x1, def value: None
  bool ___fSpecified;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUnspecifiedAttribute, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlUnspecifiedAttribute, ___fSpecified) == 0x28, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUnspecifiedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUnspecifiedAttribute*, "System.Xml", "XmlUnspecifiedAttribute");
