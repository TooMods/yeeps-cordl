#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
CORDL_MODULE_EXPORT(IntersectNode)
namespace UnityEngine::Rendering::Universal {
class TEdge;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class IntersectNode;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::IntersectNode);
// Type: UnityEngine.Rendering.Universal::IntersectNode
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::IntersectNode*
class CORDL_TYPE IntersectNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field Edge1, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Edge1, put = __cordl_internal_set_Edge1))::UnityEngine::Rendering::Universal::TEdge* Edge1;

  /// @brief Field Edge2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Edge2, put = __cordl_internal_set_Edge2))::UnityEngine::Rendering::Universal::TEdge* Edge2;

  /// @brief Field Pt, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_Pt, put = __cordl_internal_set_Pt))::UnityEngine::Rendering::Universal::IntPoint Pt;

  static inline ::UnityEngine::Rendering::Universal::IntersectNode* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_Edge1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_Edge1() const;

  constexpr ::UnityEngine::Rendering::Universal::TEdge*& __cordl_internal_get_Edge2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::TEdge*> const& __cordl_internal_get_Edge2() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_Pt() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_Pt();

  constexpr void __cordl_internal_set_Edge1(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_Edge2(::UnityEngine::Rendering::Universal::TEdge* value);

  constexpr void __cordl_internal_set_Pt(::UnityEngine::Rendering::Universal::IntPoint value);

  /// @brief Method .ctor, addr 0x1e2210c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntersectNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntersectNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntersectNode(IntersectNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntersectNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntersectNode(IntersectNode const&) = delete;

  /// @brief Field Edge1, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___Edge1;

  /// @brief Field Edge2, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TEdge* ___Edge2;

  /// @brief Field Pt, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___Pt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::IntersectNode, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntersectNode, ___Edge1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntersectNode, ___Edge2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::IntersectNode, ___Pt) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::IntersectNode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::IntersectNode*, "UnityEngine.Rendering.Universal", "IntersectNode");
