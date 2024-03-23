#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CellTree)
namespace Photon::Pun::UtilityScripts {
class CellTreeNode;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class CellTree;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::CellTree);
// Type: Photon.Pun.UtilityScripts::CellTree
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::CellTree*
class CORDL_TYPE CellTree : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_RootNode, put = set_RootNode))::Photon::Pun::UtilityScripts::CellTreeNode* RootNode;

  /// @brief Field <RootNode>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__RootNode_k__BackingField,
                      put = __cordl_internal_set__RootNode_k__BackingField))::Photon::Pun::UtilityScripts::CellTreeNode* _RootNode_k__BackingField;

  static inline ::Photon::Pun::UtilityScripts::CellTree* New_ctor();

  static inline ::Photon::Pun::UtilityScripts::CellTree* New_ctor(::Photon::Pun::UtilityScripts::CellTreeNode* root);

  constexpr ::Photon::Pun::UtilityScripts::CellTreeNode*& __cordl_internal_get__RootNode_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::CellTreeNode*> const& __cordl_internal_get__RootNode_k__BackingField() const;

  constexpr void __cordl_internal_set__RootNode_k__BackingField(::Photon::Pun::UtilityScripts::CellTreeNode* value);

  /// @brief Method .ctor, addr 0x1ebe720, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1ebe0e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Photon::Pun::UtilityScripts::CellTreeNode* root);

  /// @brief Method get_RootNode, addr 0x1ebe710, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Pun::UtilityScripts::CellTreeNode* get_RootNode();

  /// @brief Method set_RootNode, addr 0x1ebe718, size 0x8, virtual false, abstract: false, final false
  inline void set_RootNode(::Photon::Pun::UtilityScripts::CellTreeNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CellTree();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CellTree", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CellTree(CellTree&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CellTree", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CellTree(CellTree const&) = delete;

  /// @brief Field <RootNode>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Photon::Pun::UtilityScripts::CellTreeNode* ____RootNode_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::CellTree, 0x18>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTree, ____RootNode_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::CellTree);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::CellTree*, "Photon.Pun.UtilityScripts", "CellTree");
