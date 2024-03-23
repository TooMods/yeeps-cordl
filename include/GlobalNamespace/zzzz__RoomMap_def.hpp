#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMap)
namespace GlobalNamespace {
struct RoomMapNodeData;
}
namespace GlobalNamespace {
struct __RoomManager__TravelDirection;
}
namespace GlobalNamespace {
class __RoomMap__CheckDestination;
}
namespace GlobalNamespace {
class __RoomMap__Node;
}
namespace GlobalNamespace {
class __RoomMap____c__DisplayClass15_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace GlobalNamespace {
class RoomMap;
}
namespace GlobalNamespace {
class __RoomMap__CheckDestination;
}
namespace GlobalNamespace {
class __RoomMap__Node;
}
namespace GlobalNamespace {
class __RoomMap____c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RoomMap);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMap__CheckDestination);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMap__Node);
MARK_REF_PTR_T(::GlobalNamespace::__RoomMap____c__DisplayClass15_0);
// Type: ::Node
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMap::Node*
class CORDL_TYPE __RoomMap__Node : public ::System::Object {
public:
  // Declarations
  /// @brief Field downNode, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_downNode, put = __cordl_internal_set_downNode))::GlobalNamespace::__RoomMap__Node* downNode;

  __declspec(property(get = get_isOfficial)) bool isOfficial;

  __declspec(property(get = get_isTransition)) bool isTransition;

  __declspec(property(get = get_isWilds)) bool isWilds;

  /// @brief Field leftNode, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_leftNode, put = __cordl_internal_set_leftNode))::GlobalNamespace::__RoomMap__Node* leftNode;

  /// @brief Field position, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position))::UnityEngine::Vector2Int position;

  /// @brief Field rightNode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rightNode, put = __cordl_internal_set_rightNode))::GlobalNamespace::__RoomMap__Node* rightNode;

  /// @brief Field roomKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_roomKey, put = __cordl_internal_set_roomKey))::StringW roomKey;

  /// @brief Field roomMap, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_roomMap, put = __cordl_internal_set_roomMap))::GlobalNamespace::RoomMap* roomMap;

  /// @brief Field themeKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_themeKey, put = __cordl_internal_set_themeKey))::StringW themeKey;

  /// @brief Field transitionKey, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionKey, put = __cordl_internal_set_transitionKey))::StringW transitionKey;

  /// @brief Field upNode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_upNode, put = __cordl_internal_set_upNode))::GlobalNamespace::__RoomMap__Node* upNode;

  /// @brief Method CanTravelDown, addr 0x1632f78, size 0x10, virtual false, abstract: false, final false
  inline bool CanTravelDown();

  /// @brief Method CanTravelLeft, addr 0x1632f88, size 0x10, virtual false, abstract: false, final false
  inline bool CanTravelLeft();

  /// @brief Method CanTravelRight, addr 0x1632f68, size 0x10, virtual false, abstract: false, final false
  inline bool CanTravelRight();

  /// @brief Method CanTravelUp, addr 0x1632f58, size 0x10, virtual false, abstract: false, final false
  inline bool CanTravelUp();

  /// @brief Method GetNeighbor, addr 0x1640b18, size 0x110, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomMap__Node* GetNeighbor(::GlobalNamespace::__RoomManager__TravelDirection direction);

  static inline ::GlobalNamespace::__RoomMap__Node* New_ctor(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int position, ::GlobalNamespace::RoomMap* roomMap, ::StringW transitionKey);

  /// @brief Method SetConnections, addr 0x1642050, size 0xc, virtual false, abstract: false, final false
  inline void SetConnections(::GlobalNamespace::__RoomMap__Node* upNode, ::GlobalNamespace::__RoomMap__Node* rightNode, ::GlobalNamespace::__RoomMap__Node* downNode,
                             ::GlobalNamespace::__RoomMap__Node* leftNode);

  /// @brief Method ToString, addr 0x1642a2c, size 0x1a8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get_downNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get_downNode() const;

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get_leftNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get_leftNode() const;

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_position();

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get_rightNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get_rightNode() const;

  constexpr ::StringW const& __cordl_internal_get_roomKey() const;

  constexpr ::StringW& __cordl_internal_get_roomKey();

  constexpr ::GlobalNamespace::RoomMap*& __cordl_internal_get_roomMap();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RoomMap*> const& __cordl_internal_get_roomMap() const;

  constexpr ::StringW const& __cordl_internal_get_themeKey() const;

  constexpr ::StringW& __cordl_internal_get_themeKey();

  constexpr ::StringW const& __cordl_internal_get_transitionKey() const;

  constexpr ::StringW& __cordl_internal_get_transitionKey();

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get_upNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get_upNode() const;

  constexpr void __cordl_internal_set_downNode(::GlobalNamespace::__RoomMap__Node* value);

  constexpr void __cordl_internal_set_leftNode(::GlobalNamespace::__RoomMap__Node* value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_rightNode(::GlobalNamespace::__RoomMap__Node* value);

  constexpr void __cordl_internal_set_roomKey(::StringW value);

  constexpr void __cordl_internal_set_roomMap(::GlobalNamespace::RoomMap* value);

  constexpr void __cordl_internal_set_themeKey(::StringW value);

  constexpr void __cordl_internal_set_transitionKey(::StringW value);

  constexpr void __cordl_internal_set_upNode(::GlobalNamespace::__RoomMap__Node* value);

  /// @brief Method .ctor, addr 0x1642000, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW roomKey, ::StringW themeKey, ::UnityEngine::Vector2Int position, ::GlobalNamespace::RoomMap* roomMap, ::StringW transitionKey);

  /// @brief Method get_isOfficial, addr 0x16429c8, size 0x64, virtual false, abstract: false, final false
  inline bool get_isOfficial();

  /// @brief Method get_isTransition, addr 0x1640c28, size 0x20, virtual false, abstract: false, final false
  inline bool get_isTransition();

  /// @brief Method get_isWilds, addr 0x164296c, size 0x5c, virtual false, abstract: false, final false
  inline bool get_isWilds();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMap__Node();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMap__Node", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMap__Node(__RoomMap__Node&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMap__Node", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMap__Node(__RoomMap__Node const&) = delete;

  /// @brief Field roomKey, offset: 0x10, size: 0x8, def value: None
  ::StringW ___roomKey;

  /// @brief Field themeKey, offset: 0x18, size: 0x8, def value: None
  ::StringW ___themeKey;

  /// @brief Field position, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___position;

  /// @brief Field roomMap, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::RoomMap* ___roomMap;

  /// @brief Field transitionKey, offset: 0x30, size: 0x8, def value: None
  ::StringW ___transitionKey;

  /// @brief Field upNode, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ___upNode;

  /// @brief Field rightNode, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ___rightNode;

  /// @brief Field downNode, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ___downNode;

  /// @brief Field leftNode, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ___leftNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMap__Node, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___roomKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___themeKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___roomMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___transitionKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___upNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___rightNode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___downNode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap__Node, ___leftNode) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::CheckDestination
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMap::CheckDestination*
class CORDL_TYPE __RoomMap__CheckDestination : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1642be8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::__RoomMap__Node* node, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1642c08, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1642bd4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::GlobalNamespace::__RoomMap__Node* node);

  static inline ::GlobalNamespace::__RoomMap__CheckDestination* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x16422b8, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMap__CheckDestination();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMap__CheckDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMap__CheckDestination(__RoomMap__CheckDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMap__CheckDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMap__CheckDestination(__RoomMap__CheckDestination const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMap__CheckDestination, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMap::<>c__DisplayClass15_0*
class CORDL_TYPE __RoomMap____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field destination, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination))::GlobalNamespace::__RoomMap__Node* destination;

  static inline ::GlobalNamespace::__RoomMap____c__DisplayClass15_0* New_ctor();

  /// @brief Method <GetTravelDirectionToNode>b__0, addr 0x1642c30, size 0x10, virtual false, abstract: false, final false
  inline bool _GetTravelDirectionToNode_b__0(::GlobalNamespace::__RoomMap__Node* node);

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get_destination();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get_destination() const;

  constexpr void __cordl_internal_set_destination(::GlobalNamespace::__RoomMap__Node* value);

  /// @brief Method .ctor, addr 0x16422b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RoomMap____c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RoomMap____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RoomMap____c__DisplayClass15_0(__RoomMap____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RoomMap____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RoomMap____c__DisplayClass15_0(__RoomMap____c__DisplayClass15_0 const&) = delete;

  /// @brief Field destination, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ___destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__RoomMap____c__DisplayClass15_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__RoomMap____c__DisplayClass15_0, ___destination) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RoomMap
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RoomMap*
class CORDL_TYPE RoomMap : public ::System::Object {
public:
  // Declarations
  using CheckDestination = ::GlobalNamespace::__RoomMap__CheckDestination;

  using Node = ::GlobalNamespace::__RoomMap__Node;

  using __c__DisplayClass15_0 = ::GlobalNamespace::__RoomMap____c__DisplayClass15_0;

  /// @brief Field <roomMapKey>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__roomMapKey_k__BackingField, put = __cordl_internal_set__roomMapKey_k__BackingField))::StringW _roomMapKey_k__BackingField;

  /// @brief Field nodes, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes,
                      put = __cordl_internal_set_nodes))::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>* nodes;

  /// @brief Field roomKeyToNode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_roomKeyToNode,
                      put = __cordl_internal_set_roomKeyToNode))::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>* roomKeyToNode;

  __declspec(property(get = get_roomMapKey, put = set_roomMapKey))::StringW roomMapKey;

  /// @brief Field transitionNode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionNode, put = __cordl_internal_set_transitionNode))::GlobalNamespace::__RoomMap__Node* transitionNode;

  /// @brief Method GetNumNonTransitionNodes, addr 0x164218c, size 0x64, virtual false, abstract: false, final false
  inline int32_t GetNumNonTransitionNodes();

  /// @brief Method GetTravelDirection, addr 0x16423e4, size 0x4e0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomManager__TravelDirection GetTravelDirection(::GlobalNamespace::__RoomMap__Node* origin, ::GlobalNamespace::__RoomMap__CheckDestination* checkDestination,
                                                                              ByRef<int32_t> distance);

  /// @brief Method GetTravelDirectionToNode, addr 0x16421f0, size 0xc0, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__RoomManager__TravelDirection GetTravelDirectionToNode(::GlobalNamespace::__RoomMap__Node* origin, ::GlobalNamespace::__RoomMap__Node* destination,
                                                                                    ByRef<int32_t> distance);

  static inline ::GlobalNamespace::RoomMap* New_ctor(::StringW roomMapKey, ::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*> nodeDatas);

  /// @brief Method ToString, addr 0x16428c4, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetNode, addr 0x164205c, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetNode(::UnityEngine::Vector2Int gridPosition, ByRef<::GlobalNamespace::__RoomMap__Node*> node);

  /// @brief Method TryGetNode, addr 0x16420c4, size 0x68, virtual false, abstract: false, final false
  inline bool TryGetNode(::StringW roomKey, ByRef<::GlobalNamespace::__RoomMap__Node*> node);

  /// @brief Method TryGetNodeBeforeTransitionNode, addr 0x164212c, size 0x4c, virtual false, abstract: false, final false
  inline bool TryGetNodeBeforeTransitionNode(ByRef<::GlobalNamespace::__RoomMap__Node*> node);

  /// @brief Method TryGetTransitionNode, addr 0x1642178, size 0x14, virtual false, abstract: false, final false
  inline bool TryGetTransitionNode(ByRef<::GlobalNamespace::__RoomMap__Node*> node);

  /// @brief Method UpdateRoomMap, addr 0x1641660, size 0x9a0, virtual false, abstract: false, final false
  inline void UpdateRoomMap(::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*> nodeDatas, bool isInitial);

  constexpr ::StringW const& __cordl_internal_get__roomMapKey_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__roomMapKey_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>*& __cordl_internal_get_nodes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>*> const&
  __cordl_internal_get_nodes() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>*& __cordl_internal_get_roomKeyToNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>*> const& __cordl_internal_get_roomKeyToNode() const;

  constexpr ::GlobalNamespace::__RoomMap__Node*& __cordl_internal_get_transitionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RoomMap__Node*> const& __cordl_internal_get_transitionNode() const;

  constexpr void __cordl_internal_set__roomMapKey_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>* value);

  constexpr void __cordl_internal_set_roomKeyToNode(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>* value);

  constexpr void __cordl_internal_set_transitionNode(::GlobalNamespace::__RoomMap__Node* value);

  /// @brief Method .ctor, addr 0x164157c, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::StringW roomMapKey, ::ArrayW<::GlobalNamespace::RoomMapNodeData, ::Array<::GlobalNamespace::RoomMapNodeData>*> nodeDatas);

  /// @brief Method get_roomMapKey, addr 0x164156c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_roomMapKey();

  /// @brief Method set_roomMapKey, addr 0x1641574, size 0x8, virtual false, abstract: false, final false
  inline void set_roomMapKey(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RoomMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RoomMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RoomMap(RoomMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RoomMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RoomMap(RoomMap const&) = delete;

  /// @brief Field <roomMapKey>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____roomMapKey_k__BackingField;

  /// @brief Field nodes, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Vector2Int, ::GlobalNamespace::__RoomMap__Node*>* ___nodes;

  /// @brief Field roomKeyToNode, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__RoomMap__Node*>* ___roomKeyToNode;

  /// @brief Field transitionNode, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__RoomMap__Node* ___transitionNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RoomMap, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMap, ____roomMapKey_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMap, ___nodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMap, ___roomKeyToNode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMap, ___transitionNode) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RoomMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomMap*, "", "RoomMap");
NEED_NO_BOX(::GlobalNamespace::__RoomMap__CheckDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMap__CheckDestination*, "", "RoomMap/CheckDestination");
NEED_NO_BOX(::GlobalNamespace::__RoomMap__Node);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMap__Node*, "", "RoomMap/Node");
NEED_NO_BOX(::GlobalNamespace::__RoomMap____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__RoomMap____c__DisplayClass15_0*, "", "RoomMap/<>c__DisplayClass15_0");
