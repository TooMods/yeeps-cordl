#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/UtilityScripts/zzzz__CellTreeNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CellTreeNode)
namespace Photon::Pun::UtilityScripts {
struct __CellTreeNode__ENodeType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
struct __CellTreeNode__ENodeType;
}
namespace Photon::Pun::UtilityScripts {
class CellTreeNode;
}
// Write type traits
MARK_VAL_T(::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType);
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::CellTreeNode);
// Type: ::ENodeType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: true
// CS Name: ::CellTreeNode::ENodeType
struct CORDL_TYPE __CellTreeNode__ENodeType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct ____CellTreeNode__ENodeType_Unwrapped
  enum struct ____CellTreeNode__ENodeType_Unwrapped : uint8_t {
    __E_Root = static_cast<uint8_t>(0x0u),
    __E_Node = static_cast<uint8_t>(0x1u),
    __E_Leaf = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CellTreeNode__ENodeType_Unwrapped() const noexcept {
    return static_cast<____CellTreeNode__ENodeType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CellTreeNode__ENodeType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr __CellTreeNode__ENodeType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Leaf value: static_cast<uint8_t>(0x2u)
  static ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType const Leaf;

  /// @brief Field Node value: static_cast<uint8_t>(0x1u)
  static ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType const Node;

  /// @brief Field Root value: static_cast<uint8_t>(0x0u)
  static ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType const Root;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType, 0x1>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType, value__) == 0x0, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
// Type: Photon.Pun.UtilityScripts::CellTreeNode
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::CellTreeNode*
class CORDL_TYPE CellTreeNode : public ::System::Object {
public:
  // Declarations
  using ENodeType = ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType;

  /// @brief Field BottomRight, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_BottomRight, put = __cordl_internal_set_BottomRight))::UnityEngine::Vector3 BottomRight;

  /// @brief Field Center, offset 0x14, size 0xc
  __declspec(property(get = __cordl_internal_get_Center, put = __cordl_internal_set_Center))::UnityEngine::Vector3 Center;

  /// @brief Field Childs, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Childs, put = __cordl_internal_set_Childs))::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>* Childs;

  /// @brief Field Id, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_Id, put = __cordl_internal_set_Id)) uint8_t Id;

  /// @brief Field NodeType, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_NodeType, put = __cordl_internal_set_NodeType))::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType NodeType;

  /// @brief Field Parent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Parent, put = __cordl_internal_set_Parent))::Photon::Pun::UtilityScripts::CellTreeNode* Parent;

  /// @brief Field Size, offset 0x20, size 0xc
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size))::UnityEngine::Vector3 Size;

  /// @brief Field TopLeft, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get_TopLeft, put = __cordl_internal_set_TopLeft))::UnityEngine::Vector3 TopLeft;

  /// @brief Field maxDistance, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_maxDistance, put = __cordl_internal_set_maxDistance)) float_t maxDistance;

  /// @brief Method AddChild, addr 0x1ebe110, size 0xf4, virtual false, abstract: false, final false
  inline void AddChild(::Photon::Pun::UtilityScripts::CellTreeNode* child);

  /// @brief Method Draw, addr 0x1ebe204, size 0x4, virtual false, abstract: false, final false
  inline void Draw();

  /// @brief Method GetActiveCells, addr 0x1ebe348, size 0x298, virtual false, abstract: false, final false
  inline void GetActiveCells(::System::Collections::Generic::List_1<uint8_t>* activeCells, bool yIsUpAxis, ::UnityEngine::Vector3 position);

  /// @brief Method IsPointInsideCell, addr 0x1ebe790, size 0x60, virtual false, abstract: false, final false
  inline bool IsPointInsideCell(bool yIsUpAxis, ::UnityEngine::Vector3 point);

  /// @brief Method IsPointNearCell, addr 0x1ebe730, size 0x60, virtual false, abstract: false, final false
  inline bool IsPointNearCell(bool yIsUpAxis, ::UnityEngine::Vector3 point);

  static inline ::Photon::Pun::UtilityScripts::CellTreeNode* New_ctor();

  static inline ::Photon::Pun::UtilityScripts::CellTreeNode* New_ctor(uint8_t id, ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType nodeType,
                                                                      ::Photon::Pun::UtilityScripts::CellTreeNode* parent);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_BottomRight() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_BottomRight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center();

  constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*& __cordl_internal_get_Childs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>*> const& __cordl_internal_get_Childs() const;

  constexpr uint8_t const& __cordl_internal_get_Id() const;

  constexpr uint8_t& __cordl_internal_get_Id();

  constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType const& __cordl_internal_get_NodeType() const;

  constexpr ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType& __cordl_internal_get_NodeType();

  constexpr ::Photon::Pun::UtilityScripts::CellTreeNode*& __cordl_internal_get_Parent();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::CellTreeNode*> const& __cordl_internal_get_Parent() const;

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Size() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_Size();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_TopLeft() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_TopLeft();

  constexpr float_t const& __cordl_internal_get_maxDistance() const;

  constexpr float_t& __cordl_internal_get_maxDistance();

  constexpr void __cordl_internal_set_BottomRight(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_Childs(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>* value);

  constexpr void __cordl_internal_set_Id(uint8_t value);

  constexpr void __cordl_internal_set_NodeType(::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType value);

  constexpr void __cordl_internal_set_Parent(::Photon::Pun::UtilityScripts::CellTreeNode* value);

  constexpr void __cordl_internal_set_Size(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_TopLeft(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_maxDistance(float_t value);

  /// @brief Method .ctor, addr 0x1ebe728, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1ebde30, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(uint8_t id, ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType nodeType, ::Photon::Pun::UtilityScripts::CellTreeNode* parent);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CellTreeNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CellTreeNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CellTreeNode(CellTreeNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CellTreeNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CellTreeNode(CellTreeNode const&) = delete;

  /// @brief Field Id, offset: 0x10, size: 0x1, def value: None
  uint8_t ___Id;

  /// @brief Field Center, offset: 0x14, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___Center;

  /// @brief Field Size, offset: 0x20, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___Size;

  /// @brief Field TopLeft, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___TopLeft;

  /// @brief Field BottomRight, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___BottomRight;

  /// @brief Field NodeType, offset: 0x44, size: 0x1, def value: None
  ::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType ___NodeType;

  /// @brief Field Parent, offset: 0x48, size: 0x8, def value: None
  ::Photon::Pun::UtilityScripts::CellTreeNode* ___Parent;

  /// @brief Field Childs, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::CellTreeNode*>* ___Childs;

  /// @brief Field maxDistance, offset: 0x58, size: 0x4, def value: None
  float_t ___maxDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::CellTreeNode, 0x60>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Center) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Size) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___TopLeft) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___BottomRight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___NodeType) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Parent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___Childs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTreeNode, ___maxDistance) == 0x58, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::__CellTreeNode__ENodeType, "Photon.Pun.UtilityScripts", "CellTreeNode/ENodeType");
NEED_NO_BOX(::Photon::Pun::UtilityScripts::CellTreeNode);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::CellTreeNode*, "Photon.Pun.UtilityScripts", "CellTreeNode");
