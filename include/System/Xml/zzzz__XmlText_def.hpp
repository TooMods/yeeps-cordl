#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharacterData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlText)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlText;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlText);
// Type: System.Xml::XmlText
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlText*
class CORDL_TYPE XmlText : public ::System::Xml::XmlCharacterData {
public:
  // Declarations
  __declspec(property(get = get_IsText)) bool IsText;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Method CloneNode, addr 0xfa6710, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  static inline ::System::Xml::XmlText* New_ctor(::StringW strData);

  static inline ::System::Xml::XmlText* New_ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method WriteContentTo, addr 0xfa6890, size 0x4, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0xfa6850, size 0x40, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  /// @brief Method .ctor, addr 0xfa6620, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW strData);

  /// @brief Method .ctor, addr 0xfa662c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW strData, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_IsText, addr 0xfa6894, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsText();

  /// @brief Method get_LocalName, addr 0xfa665c, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0xfa6634, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0xfa6684, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode, addr 0xfa668c, size 0x84, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_Value, addr 0xfa676c, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0xfa677c, size 0xd4, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlText(XmlText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlText(XmlText const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlText, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlText);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlText*, "System.Xml", "XmlText");
