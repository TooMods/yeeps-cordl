#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
CORDL_MODULE_EXPORT(Filter)
namespace MS::Internal::Xml::XPath {
class AstNode;
}
namespace MS::Internal::Xml::XPath {
struct __AstNode__AstType;
}
namespace System::Xml::XPath {
struct XPathResultType;
}
// Forward declare root types
namespace MS::Internal::Xml::XPath {
class Filter;
}
// Write type traits
MARK_REF_PTR_T(::MS::Internal::Xml::XPath::Filter);
// Type: MS.Internal.Xml.XPath::Filter
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace MS::Internal::Xml::XPath {
// Is value type: false
// CS Name: ::MS.Internal.Xml.XPath::Filter*
class CORDL_TYPE Filter : public ::MS::Internal::Xml::XPath::AstNode {
public:
  // Declarations
  __declspec(property(get = get_ReturnType))::System::Xml::XPath::XPathResultType ReturnType;

  __declspec(property(get = get_Type))::MS::Internal::Xml::XPath::__AstNode__AstType Type;

  /// @brief Field _condition, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__condition, put = __cordl_internal_set__condition))::MS::Internal::Xml::XPath::AstNode* _condition;

  /// @brief Field _input, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__input, put = __cordl_internal_set__input))::MS::Internal::Xml::XPath::AstNode* _input;

  static inline ::MS::Internal::Xml::XPath::Filter* New_ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition);

  constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__condition();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::AstNode*> const& __cordl_internal_get__condition() const;

  constexpr ::MS::Internal::Xml::XPath::AstNode*& __cordl_internal_get__input();

  constexpr ::cordl_internals::to_const_pointer<::MS::Internal::Xml::XPath::AstNode*> const& __cordl_internal_get__input() const;

  constexpr void __cordl_internal_set__condition(::MS::Internal::Xml::XPath::AstNode* value);

  constexpr void __cordl_internal_set__input(::MS::Internal::Xml::XPath::AstNode* value);

  /// @brief Method .ctor, addr 0x1b2e350, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::MS::Internal::Xml::XPath::AstNode* input, ::MS::Internal::Xml::XPath::AstNode* condition);

  /// @brief Method get_ReturnType, addr 0x1b2e384, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathResultType get_ReturnType();

  /// @brief Method get_Type, addr 0x1b2e37c, size 0x8, virtual true, abstract: false, final false
  inline ::MS::Internal::Xml::XPath::__AstNode__AstType get_Type();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Filter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Filter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Filter(Filter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Filter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Filter(Filter const&) = delete;

  /// @brief Field _input, offset: 0x10, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::AstNode* ____input;

  /// @brief Field _condition, offset: 0x18, size: 0x8, def value: None
  ::MS::Internal::Xml::XPath::AstNode* ____condition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MS::Internal::Xml::XPath::Filter, 0x20>, "Size mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Filter, ____input) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MS::Internal::Xml::XPath::Filter, ____condition) == 0x18, "Offset mismatch!");

} // namespace MS::Internal::Xml::XPath
NEED_NO_BOX(::MS::Internal::Xml::XPath::Filter);
DEFINE_IL2CPP_ARG_TYPE(::MS::Internal::Xml::XPath::Filter*, "MS.Internal.Xml.XPath", "Filter");
