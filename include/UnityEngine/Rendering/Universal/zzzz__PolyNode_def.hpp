#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__EndType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__JoinType_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PolyNode)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal {
struct IntPoint;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PolyNode;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PolyNode);
// Type: UnityEngine.Rendering.Universal::PolyNode
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::PolyNode*
class CORDL_TYPE PolyNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ChildCount)) int32_t ChildCount;

  __declspec(property(get = get_Childs))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* Childs;

  __declspec(property(get = get_Contour))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* Contour;

  __declspec(property(get = get_IsHole)) bool IsHole;

  __declspec(property(get = get_IsOpen, put = set_IsOpen)) bool IsOpen;

  __declspec(property(get = get_Parent))::UnityEngine::Rendering::Universal::PolyNode* Parent;

  /// @brief Field <IsOpen>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__IsOpen_k__BackingField, put = __cordl_internal_set__IsOpen_k__BackingField)) bool _IsOpen_k__BackingField;

  /// @brief Field m_Childs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Childs, put = __cordl_internal_set_m_Childs))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* m_Childs;

  /// @brief Field m_Index, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Field m_Parent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Parent, put = __cordl_internal_set_m_Parent))::UnityEngine::Rendering::Universal::PolyNode* m_Parent;

  /// @brief Field m_endtype, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_endtype, put = __cordl_internal_set_m_endtype))::UnityEngine::Rendering::Universal::EndType m_endtype;

  /// @brief Field m_jointype, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_jointype, put = __cordl_internal_set_m_jointype))::UnityEngine::Rendering::Universal::JoinType m_jointype;

  /// @brief Field m_polygon, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_polygon, put = __cordl_internal_set_m_polygon))::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* m_polygon;

  /// @brief Method AddChild, addr 0x1e21a04, size 0xc0, virtual false, abstract: false, final false
  inline void AddChild(::UnityEngine::Rendering::Universal::PolyNode* Child);

  /// @brief Method GetNext, addr 0x1e21ac4, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PolyNode* GetNext();

  /// @brief Method GetNextSiblingUp, addr 0x1e21b40, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PolyNode* GetNextSiblingUp();

  /// @brief Method IsHoleNode, addr 0x1e21998, size 0x1c, virtual false, abstract: false, final false
  inline bool IsHoleNode();

  static inline ::UnityEngine::Rendering::Universal::PolyNode* New_ctor();

  constexpr bool const& __cordl_internal_get__IsOpen_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsOpen_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>*& __cordl_internal_get_m_Childs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>*> const& __cordl_internal_get_m_Childs() const;

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::Rendering::Universal::PolyNode*& __cordl_internal_get_m_Parent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PolyNode*> const& __cordl_internal_get_m_Parent() const;

  constexpr ::UnityEngine::Rendering::Universal::EndType const& __cordl_internal_get_m_endtype() const;

  constexpr ::UnityEngine::Rendering::Universal::EndType& __cordl_internal_get_m_endtype();

  constexpr ::UnityEngine::Rendering::Universal::JoinType const& __cordl_internal_get_m_jointype() const;

  constexpr ::UnityEngine::Rendering::Universal::JoinType& __cordl_internal_get_m_jointype();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*& __cordl_internal_get_m_polygon();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>*> const& __cordl_internal_get_m_polygon() const;

  constexpr void __cordl_internal_set__IsOpen_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_Childs(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  constexpr void __cordl_internal_set_m_Parent(::UnityEngine::Rendering::Universal::PolyNode* value);

  constexpr void __cordl_internal_set_m_endtype(::UnityEngine::Rendering::Universal::EndType value);

  constexpr void __cordl_internal_set_m_jointype(::UnityEngine::Rendering::Universal::JoinType value);

  constexpr void __cordl_internal_set_m_polygon(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* value);

  /// @brief Method .ctor, addr 0x1e218d8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_ChildCount, addr 0x1e219b4, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_ChildCount();

  /// @brief Method get_Childs, addr 0x1e21be0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* get_Childs();

  /// @brief Method get_Contour, addr 0x1e219fc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* get_Contour();

  /// @brief Method get_IsHole, addr 0x1e21bf0, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsHole();

  /// @brief Method get_IsOpen, addr 0x1e21c0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsOpen();

  /// @brief Method get_Parent, addr 0x1e21be8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PolyNode* get_Parent();

  /// @brief Method set_IsOpen, addr 0x1e21c14, size 0xc, virtual false, abstract: false, final false
  inline void set_IsOpen(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PolyNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PolyNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PolyNode(PolyNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PolyNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PolyNode(PolyNode const&) = delete;

  /// @brief Field m_Parent, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PolyNode* ___m_Parent;

  /// @brief Field m_polygon, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::IntPoint>* ___m_polygon;

  /// @brief Field m_Index, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_Index;

  /// @brief Field m_jointype, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::JoinType ___m_jointype;

  /// @brief Field m_endtype, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::EndType ___m_endtype;

  /// @brief Field m_Childs, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::PolyNode*>* ___m_Childs;

  /// @brief Field <IsOpen>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____IsOpen_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PolyNode, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyNode, ___m_Parent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyNode, ___m_polygon) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyNode, ___m_Index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyNode, ___m_jointype) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyNode, ___m_endtype) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyNode, ___m_Childs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PolyNode, ____IsOpen_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PolyNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PolyNode*, "UnityEngine.Rendering.Universal", "PolyNode");
