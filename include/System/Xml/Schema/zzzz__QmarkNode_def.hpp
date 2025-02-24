#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(QmarkNode)
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class QmarkNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::QmarkNode);
// Type: System.Xml.Schema::QmarkNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::QmarkNode*
class CORDL_TYPE QmarkNode : public ::System::Xml::Schema::InteriorNode {
public:
  // Declarations
  __declspec(property(get = get_IsNullable)) bool IsNullable;

  /// @brief Method ConstructPos, addr 0x30523a0, size 0x20, virtual true, abstract: false, final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  static inline ::System::Xml::Schema::QmarkNode* New_ctor();

  /// @brief Method .ctor, addr 0x30523c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNullable, addr 0x30523c0, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNullable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QmarkNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QmarkNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QmarkNode(QmarkNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QmarkNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QmarkNode(QmarkNode const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::QmarkNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::QmarkNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::QmarkNode*, "System.Xml.Schema", "QmarkNode");
