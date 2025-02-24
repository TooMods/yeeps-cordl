#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlEntityReference)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlLinkedNode;
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
class XmlEntityReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlEntityReference);
// Type: System.Xml::XmlEntityReference
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlEntityReference*
class CORDL_TYPE XmlEntityReference : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_ChildBaseURI))::StringW ChildBaseURI;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  /// @brief Field lastChild, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild))::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Field name, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Method CloneNode, addr 0xff95fc, size 0x38, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method ConstructBaseURI, addr 0xffa0d0, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW ConstructBaseURI(::StringW baseURI, ::StringW systemId);

  /// @brief Method IsValidChildType, addr 0xff9d54, size 0x24, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  static inline ::System::Xml::XmlEntityReference* New_ctor(::StringW name, ::System::Xml::XmlDocument* doc);

  /// @brief Method SetParent, addr 0xff9644, size 0xbc, virtual true, abstract: false, final false
  inline void SetParent(::System::Xml::XmlNode* node);

  /// @brief Method SetParentForLoad, addr 0xff9d34, size 0x10, virtual true, abstract: false, final false
  inline void SetParentForLoad(::System::Xml::XmlNode* node);

  /// @brief Method WriteContentTo, addr 0xff9da4, size 0x2fc, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0xff9d78, size 0x2c, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __cordl_internal_get_lastChild() const;

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0xff4f8c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_BaseURI, addr 0xffa0a0, size 0x30, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_ChildBaseURI, addr 0xffa1a4, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW get_ChildBaseURI();

  /// @brief Method get_IsContainer, addr 0xff963c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_IsReadOnly, addr 0xff9634, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_LastNode, addr 0xff9d44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method get_LocalName, addr 0xff9584, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0xff957c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0xff95f4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value, addr 0xff958c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_LastNode, addr 0xff9d4c, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method set_Value, addr 0xff9594, size 0x60, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlEntityReference();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlEntityReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlEntityReference(XmlEntityReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlEntityReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlEntityReference(XmlEntityReference const&) = delete;

  /// @brief Field name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field lastChild, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlEntityReference, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlEntityReference, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlEntityReference, ___lastChild) == 0x28, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlEntityReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlEntityReference*, "System.Xml", "XmlEntityReference");
