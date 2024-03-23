#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CullArea)
namespace Photon::Pun::UtilityScripts {
class CellTreeNode;
}
namespace Photon::Pun::UtilityScripts {
class CellTree;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class CullArea;
}
// Write type traits
MARK_REF_PTR_T(::Photon::Pun::UtilityScripts::CullArea);
// Type: Photon.Pun.UtilityScripts::CullArea
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 107, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: ::Photon.Pun.UtilityScripts::CullArea*
class CORDL_TYPE CullArea : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_CellCount, put = set_CellCount)) int32_t CellCount;

  __declspec(property(get = get_CellTree, put = set_CellTree))::Photon::Pun::UtilityScripts::CellTree* CellTree;

  /// @brief Field Center, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Center, put = __cordl_internal_set_Center))::UnityEngine::Vector2 Center;

  /// @brief Field FIRST_GROUP_ID, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_FIRST_GROUP_ID, put = __cordl_internal_set_FIRST_GROUP_ID)) uint8_t FIRST_GROUP_ID;

  __declspec(property(get = get_Map, put = set_Map))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>* Map;

  /// @brief Field NumberOfSubdivisions, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_NumberOfSubdivisions, put = __cordl_internal_set_NumberOfSubdivisions)) int32_t NumberOfSubdivisions;

  /// @brief Field RecreateCellHierarchy, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_RecreateCellHierarchy, put = __cordl_internal_set_RecreateCellHierarchy)) bool RecreateCellHierarchy;

  /// @brief Field SUBDIVISION_FIRST_LEVEL_ORDER, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_SUBDIVISION_FIRST_LEVEL_ORDER,
                      put = __cordl_internal_set_SUBDIVISION_FIRST_LEVEL_ORDER))::ArrayW<int32_t, ::Array<int32_t>*> SUBDIVISION_FIRST_LEVEL_ORDER;

  /// @brief Field SUBDIVISION_SECOND_LEVEL_ORDER, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_SUBDIVISION_SECOND_LEVEL_ORDER,
                      put = __cordl_internal_set_SUBDIVISION_SECOND_LEVEL_ORDER))::ArrayW<int32_t, ::Array<int32_t>*> SUBDIVISION_SECOND_LEVEL_ORDER;

  /// @brief Field SUBDIVISION_THIRD_LEVEL_ORDER, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_SUBDIVISION_THIRD_LEVEL_ORDER,
                      put = __cordl_internal_set_SUBDIVISION_THIRD_LEVEL_ORDER))::ArrayW<int32_t, ::Array<int32_t>*> SUBDIVISION_THIRD_LEVEL_ORDER;

  /// @brief Field Size, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size))::UnityEngine::Vector2 Size;

  /// @brief Field Subdivisions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Subdivisions, put = __cordl_internal_set_Subdivisions))::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> Subdivisions;

  /// @brief Field YIsUpAxis, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_YIsUpAxis, put = __cordl_internal_set_YIsUpAxis)) bool YIsUpAxis;

  /// @brief Field <CellCount>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__CellCount_k__BackingField, put = __cordl_internal_set__CellCount_k__BackingField)) int32_t _CellCount_k__BackingField;

  /// @brief Field <CellTree>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__CellTree_k__BackingField, put = __cordl_internal_set__CellTree_k__BackingField))::Photon::Pun::UtilityScripts::CellTree* _CellTree_k__BackingField;

  /// @brief Field <Map>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__Map_k__BackingField,
                      put = __cordl_internal_set__Map_k__BackingField))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>* _Map_k__BackingField;

  /// @brief Field idCounter, offset 0x6a, size 0x1
  __declspec(property(get = __cordl_internal_get_idCounter, put = __cordl_internal_set_idCounter)) uint8_t idCounter;

  /// @brief Method Awake, addr 0x1ebd8ec, size 0xc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CreateCellHierarchy, addr 0x1ebd8f8, size 0x424, virtual false, abstract: false, final false
  inline void CreateCellHierarchy();

  /// @brief Method CreateChildCells, addr 0x1ebde70, size 0x278, virtual false, abstract: false, final false
  inline void CreateChildCells(::Photon::Pun::UtilityScripts::CellTreeNode* parent, int32_t cellLevelInHierarchy);

  /// @brief Method DrawCells, addr 0x1ebdd5c, size 0x20, virtual false, abstract: false, final false
  inline void DrawCells();

  /// @brief Method GetActiveCells, addr 0x1ebe208, size 0x140, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<uint8_t>* GetActiveCells(::UnityEngine::Vector3 position);

  /// @brief Method IsCellCountAllowed, addr 0x1ebdd7c, size 0xb4, virtual false, abstract: false, final false
  inline bool IsCellCountAllowed();

  static inline ::Photon::Pun::UtilityScripts::CullArea* New_ctor();

  /// @brief Method OnDrawGizmos, addr 0x1ebdd1c, size 0x40, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Center() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_Center();

  constexpr uint8_t const& __cordl_internal_get_FIRST_GROUP_ID() const;

  constexpr uint8_t& __cordl_internal_get_FIRST_GROUP_ID();

  constexpr int32_t const& __cordl_internal_get_NumberOfSubdivisions() const;

  constexpr int32_t& __cordl_internal_get_NumberOfSubdivisions();

  constexpr bool const& __cordl_internal_get_RecreateCellHierarchy() const;

  constexpr bool& __cordl_internal_get_RecreateCellHierarchy();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_SUBDIVISION_FIRST_LEVEL_ORDER() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_SUBDIVISION_FIRST_LEVEL_ORDER();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_SUBDIVISION_SECOND_LEVEL_ORDER() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_SUBDIVISION_SECOND_LEVEL_ORDER();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_SUBDIVISION_THIRD_LEVEL_ORDER() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_SUBDIVISION_THIRD_LEVEL_ORDER();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_Size() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_Size();

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> const& __cordl_internal_get_Subdivisions() const;

  constexpr ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>& __cordl_internal_get_Subdivisions();

  constexpr bool const& __cordl_internal_get_YIsUpAxis() const;

  constexpr bool& __cordl_internal_get_YIsUpAxis();

  constexpr int32_t const& __cordl_internal_get__CellCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__CellCount_k__BackingField();

  constexpr ::Photon::Pun::UtilityScripts::CellTree*& __cordl_internal_get__CellTree_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Photon::Pun::UtilityScripts::CellTree*> const& __cordl_internal_get__CellTree_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__Map_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__Map_k__BackingField() const;

  constexpr uint8_t const& __cordl_internal_get_idCounter() const;

  constexpr uint8_t& __cordl_internal_get_idCounter();

  constexpr void __cordl_internal_set_Center(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_FIRST_GROUP_ID(uint8_t value);

  constexpr void __cordl_internal_set_NumberOfSubdivisions(int32_t value);

  constexpr void __cordl_internal_set_RecreateCellHierarchy(bool value);

  constexpr void __cordl_internal_set_SUBDIVISION_FIRST_LEVEL_ORDER(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_SUBDIVISION_SECOND_LEVEL_ORDER(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_SUBDIVISION_THIRD_LEVEL_ORDER(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_Size(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_Subdivisions(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value);

  constexpr void __cordl_internal_set_YIsUpAxis(bool value);

  constexpr void __cordl_internal_set__CellCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__CellTree_k__BackingField(::Photon::Pun::UtilityScripts::CellTree* value);

  constexpr void __cordl_internal_set__Map_k__BackingField(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_idCounter(uint8_t value);

  /// @brief Method .ctor, addr 0x1ebe5e8, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CellCount, addr 0x1ebd8bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CellCount();

  /// @brief Method get_CellTree, addr 0x1ebd8cc, size 0x8, virtual false, abstract: false, final false
  inline ::Photon::Pun::UtilityScripts::CellTree* get_CellTree();

  /// @brief Method get_Map, addr 0x1ebd8dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>* get_Map();

  /// @brief Method set_CellCount, addr 0x1ebd8c4, size 0x8, virtual false, abstract: false, final false
  inline void set_CellCount(int32_t value);

  /// @brief Method set_CellTree, addr 0x1ebd8d4, size 0x8, virtual false, abstract: false, final false
  inline void set_CellTree(::Photon::Pun::UtilityScripts::CellTree* value);

  /// @brief Method set_Map, addr 0x1ebd8e4, size 0x8, virtual false, abstract: false, final false
  inline void set_Map(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullArea();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CullArea", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CullArea(CullArea&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CullArea", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CullArea(CullArea const&) = delete;

  /// @brief Field FIRST_GROUP_ID, offset: 0x18, size: 0x1, def value: None
  uint8_t ___FIRST_GROUP_ID;

  /// @brief Field SUBDIVISION_FIRST_LEVEL_ORDER, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___SUBDIVISION_FIRST_LEVEL_ORDER;

  /// @brief Field SUBDIVISION_SECOND_LEVEL_ORDER, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___SUBDIVISION_SECOND_LEVEL_ORDER;

  /// @brief Field SUBDIVISION_THIRD_LEVEL_ORDER, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___SUBDIVISION_THIRD_LEVEL_ORDER;

  /// @brief Field Center, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___Center;

  /// @brief Field Size, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___Size;

  /// @brief Field Subdivisions, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> ___Subdivisions;

  /// @brief Field NumberOfSubdivisions, offset: 0x50, size: 0x4, def value: None
  int32_t ___NumberOfSubdivisions;

  /// @brief Field <CellCount>k__BackingField, offset: 0x54, size: 0x4, def value: None
  int32_t ____CellCount_k__BackingField;

  /// @brief Field <CellTree>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::Photon::Pun::UtilityScripts::CellTree* ____CellTree_k__BackingField;

  /// @brief Field <Map>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::UnityEngine::GameObject>>* ____Map_k__BackingField;

  /// @brief Field YIsUpAxis, offset: 0x68, size: 0x1, def value: None
  bool ___YIsUpAxis;

  /// @brief Field RecreateCellHierarchy, offset: 0x69, size: 0x1, def value: None
  bool ___RecreateCellHierarchy;

  /// @brief Field idCounter, offset: 0x6a, size: 0x1, def value: None
  uint8_t ___idCounter;

  /// @brief Field MAX_NUMBER_OF_ALLOWED_CELLS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_NUMBER_OF_ALLOWED_CELLS{ static_cast<int32_t>(0xfa) };

  /// @brief Field MAX_NUMBER_OF_SUBDIVISIONS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_NUMBER_OF_SUBDIVISIONS{ static_cast<int32_t>(0x3) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Photon::Pun::UtilityScripts::CullArea, 0x70>, "Size mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___FIRST_GROUP_ID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___SUBDIVISION_FIRST_LEVEL_ORDER) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___SUBDIVISION_SECOND_LEVEL_ORDER) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___SUBDIVISION_THIRD_LEVEL_ORDER) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___Center) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___Size) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___Subdivisions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___NumberOfSubdivisions) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ____CellCount_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ____CellTree_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ____Map_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___YIsUpAxis) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___RecreateCellHierarchy) == 0x69, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::UtilityScripts::CullArea, ___idCounter) == 0x6a, "Offset mismatch!");

} // namespace Photon::Pun::UtilityScripts
NEED_NO_BOX(::Photon::Pun::UtilityScripts::CullArea);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::UtilityScripts::CullArea*, "Photon.Pun.UtilityScripts", "CullArea");
