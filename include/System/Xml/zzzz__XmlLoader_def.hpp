#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlLoader)
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class XmlAttribute;
}
namespace System::Xml {
class XmlDeclaration;
}
namespace System::Xml {
class XmlDocumentType;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlElement;
}
namespace System::Xml {
class XmlEntityReference;
}
namespace System::Xml {
class XmlEntity;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlParserContext;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class XmlLoader;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlLoader);
// Type: System.Xml::XmlLoader
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlLoader*
class CORDL_TYPE XmlLoader : public ::System::Object {
public:
  // Declarations
  /// @brief Field doc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_doc, put = __cordl_internal_set_doc))::System::Xml::XmlDocument* doc;

  /// @brief Field preserveWhitespace, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_preserveWhitespace, put = __cordl_internal_set_preserveWhitespace)) bool preserveWhitespace;

  /// @brief Field reader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::Xml::XmlReader* reader;

  /// @brief Method CreateInnerXmlReader, addr 0xffd474, size 0x27c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlReader* CreateInnerXmlReader(::StringW xmlFragment, ::System::Xml::XmlNodeType nt, ::System::Xml::XmlParserContext* context, ::System::Xml::XmlDocument* doc);

  /// @brief Method EntitizeName, addr 0xffd97c, size 0x32a20, virtual false, abstract: false, final false
  inline ::StringW EntitizeName(::StringW name);

  /// @brief Method ExpandEntity, addr 0xff9464, size 0x4c, virtual false, abstract: false, final false
  inline void ExpandEntity(::System::Xml::XmlEntity* ent);

  /// @brief Method ExpandEntityReference, addr 0xff9700, size 0x634, virtual false, abstract: false, final false
  inline void ExpandEntityReference(::System::Xml::XmlEntityReference* eref);

  /// @brief Method GetContext, addr 0xffcba0, size 0x8d4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlParserContext* GetContext(::System::Xml::XmlNode* node);

  /// @brief Method Load, addr 0xff60f0, size 0x240, virtual false, abstract: false, final false
  inline void Load(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader, bool preserveWhitespace);

  /// @brief Method LoadAttributeNode, addr 0xffa994, size 0x32c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* LoadAttributeNode();

  /// @brief Method LoadAttributeNodeDirect, addr 0xffc794, size 0x144, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* LoadAttributeNodeDirect();

  /// @brief Method LoadAttributeValue, addr 0xffb4c4, size 0x318, virtual false, abstract: false, final false
  inline void LoadAttributeValue(::System::Xml::XmlNode* parent, bool direct);

  /// @brief Method LoadDeclarationNode, addr 0xffaeb4, size 0x1b4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDeclaration* LoadDeclarationNode();

  /// @brief Method LoadDefaultAttribute, addr 0xffb32c, size 0x198, virtual false, abstract: false, final false
  inline ::System::Xml::XmlAttribute* LoadDefaultAttribute();

  /// @brief Method LoadDocSequence, addr 0xffa394, size 0x6c, virtual false, abstract: false, final false
  inline void LoadDocSequence(::System::Xml::XmlDocument* parentDoc);

  /// @brief Method LoadDocumentType, addr 0xffbc64, size 0xb30, virtual false, abstract: false, final false
  inline void LoadDocumentType(::System::Xml::IDtdInfo* dtdInfo, ::System::Xml::XmlDocumentType* dtNode);

  /// @brief Method LoadDocumentTypeNode, addr 0xffb068, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDocumentType* LoadDocumentTypeNode();

  /// @brief Method LoadEntityReferenceNode, addr 0xffacc0, size 0x1f4, virtual false, abstract: false, final false
  inline ::System::Xml::XmlEntityReference* LoadEntityReferenceNode(bool direct);

  /// @brief Method LoadInnerXmlAttribute, addr 0xff032c, size 0x8, virtual false, abstract: false, final false
  inline void LoadInnerXmlAttribute(::System::Xml::XmlAttribute* node, ::StringW innerxmltext);

  /// @brief Method LoadInnerXmlElement, addr 0xff90f0, size 0x74, virtual false, abstract: false, final false
  inline void LoadInnerXmlElement(::System::Xml::XmlElement* node, ::StringW innerxmltext);

  /// @brief Method LoadNode, addr 0xffa400, size 0x594, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* LoadNode(bool skipOverWhitespace);

  /// @brief Method LoadNodeDirect, addr 0xffb7dc, size 0x488, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* LoadNodeDirect();

  static inline ::System::Xml::XmlLoader* New_ctor();

  /// @brief Method ParseDocumentType, addr 0xff79c4, size 0x68, virtual false, abstract: false, final false
  inline void ParseDocumentType(::System::Xml::XmlDocumentType* dtNode);

  /// @brief Method ParseDocumentType, addr 0xffc8d8, size 0x2c8, virtual false, abstract: false, final false
  inline void ParseDocumentType(::System::Xml::XmlDocumentType* dtNode, bool bUseResolver, ::System::Xml::XmlResolver* resolver);

  /// @brief Method ParsePartialContent, addr 0xff72d4, size 0x204, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNamespaceManager* ParsePartialContent(::System::Xml::XmlNode* parentNode, ::StringW innerxmltext, ::System::Xml::XmlNodeType nt);

  /// @brief Method ParseXmlDeclarationValue, addr 0xff2c0c, size 0x208, virtual false, abstract: false, final false
  static inline void ParseXmlDeclarationValue(::StringW strValue, ByRef<::StringW> version, ByRef<::StringW> encoding, ByRef<::StringW> standalone);

  /// @brief Method ReadCurrentNode, addr 0xff5e58, size 0x128, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* ReadCurrentNode(::System::Xml::XmlDocument* doc, ::System::Xml::XmlReader* reader);

  /// @brief Method RemoveDuplicateNamespace, addr 0xffd6f0, size 0x28c, virtual false, abstract: false, final false
  inline void RemoveDuplicateNamespace(::System::Xml::XmlElement* elem, ::System::Xml::XmlNamespaceManager* mgr, bool fCheckElemAttrs);

  /// @brief Method UnexpectedNodeType, addr 0xffb214, size 0x118, virtual false, abstract: false, final false
  static inline ::System::Exception* UnexpectedNodeType(::System::Xml::XmlNodeType nodetype);

  constexpr ::System::Xml::XmlDocument*& __cordl_internal_get_doc();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlDocument*> const& __cordl_internal_get_doc() const;

  constexpr bool const& __cordl_internal_get_preserveWhitespace() const;

  constexpr bool& __cordl_internal_get_preserveWhitespace();

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get_reader() const;

  constexpr void __cordl_internal_set_doc(::System::Xml::XmlDocument* value);

  constexpr void __cordl_internal_set_preserveWhitespace(bool value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  /// @brief Method .ctor, addr 0xff0324, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlLoader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlLoader(XmlLoader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlLoader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlLoader(XmlLoader const&) = delete;

  /// @brief Field doc, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlDocument* ___doc;

  /// @brief Field reader, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field preserveWhitespace, offset: 0x20, size: 0x1, def value: None
  bool ___preserveWhitespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlLoader, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlLoader, ___doc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlLoader, ___reader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlLoader, ___preserveWhitespace) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlLoader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlLoader*, "System.Xml", "XmlLoader");
