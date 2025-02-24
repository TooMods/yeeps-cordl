#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Variable)
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Variable;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Variable);
// Type: MS.Internal.Xml.XPath::Variable
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::Variable*
class CORDL_TYPE Variable : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  __declspec(property(get = get_ReturnType))::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type))::MS::Internal::Xml::XPath::__AstNode__AstType Type;

  /// @brief Field _localname, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__localname, put = __cordl_internal_set__localname))::StringW _localname;

  /// @brief Field _prefix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__prefix, put = __cordl_internal_set__prefix))::StringW _prefix;

  static inline ::MS::Internal::Xml::XPath::Variable* New_ctor(::StringW name, ::StringW prefix);

  constexpr ::StringW const& __cordl_internal_get__localname() const;

  constexpr ::StringW& __cordl_internal_get__localname();

  constexpr ::StringW const& __cordl_internal_get__prefix() const;

  constexpr ::StringW& __cordl_internal_get__prefix();

  constexpr void __cordl_internal_set__localname(::StringW value);

  constexpr void __cordl_internal_set__prefix(::StringW value);

  /// @brief Method .ctor, addr 0x1b2e8f0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::StringW prefix);

  /// @brief Method get_ReturnType, addr 0x1b2e924, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x1b2e91c, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__AstNode__AstType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Variable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Variable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Variable(Variable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Variable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Variable(Variable const&) = delete;

  /// @brief Field _localname, offset: 0x10, size: 0x8, def value: None
  ::StringW ____localname;

  /// @brief Field _prefix, offset: 0x18, size: 0x8, def value: None
  ::StringW ____prefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Variable, 0x20>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Variable, ____localname) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Variable, ____prefix) == 0x18, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
NEED_NO_BOX(::MS::Internal::Xml::XPath::Variable);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Variable*, "MS.Internal.Xml.XPath", "Variable");
