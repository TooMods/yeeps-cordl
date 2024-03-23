#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OutRec)
namespace UnityEngine::Rendering::Universal {
class OutPt;
}
namespace UnityEngine::Rendering::Universal {
class PolyNode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class OutRec;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::OutRec);
// Type: UnityEngine.Rendering.Universal::OutRec
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::OutRec*
class CORDL_TYPE OutRec : public ::System::Object {
public:
  // Declarations
  /// @brief Field BottomPt, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_BottomPt, put = __cordl_internal_set_BottomPt))::UnityEngine::Rendering::Universal::OutPt* BottomPt;

  /// @brief Field FirstLeft, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_FirstLeft, put = __cordl_internal_set_FirstLeft))::UnityEngine::Rendering::Universal::OutRec* FirstLeft;

  /// @brief Field Idx, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Idx, put = __cordl_internal_set_Idx)) int32_t Idx;

  /// @brief Field IsHole, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_IsHole, put = __cordl_internal_set_IsHole)) bool IsHole;

  /// @brief Field IsOpen, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_IsOpen, put = __cordl_internal_set_IsOpen)) bool IsOpen;

  /// @brief Field PolyNode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_PolyNode, put = __cordl_internal_set_PolyNode))::UnityEngine::Rendering::Universal::PolyNode* PolyNode;

  /// @brief Field Pts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Pts, put = __cordl_internal_set_Pts))::UnityEngine::Rendering::Universal::OutPt* Pts;

  static inline ::UnityEngine::Rendering::Universal::OutRec* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::OutPt*& __cordl_internal_get_BottomPt();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& __cordl_internal_get_BottomPt() const;

  constexpr ::UnityEngine::Rendering::Universal::OutRec*& __cordl_internal_get_FirstLeft();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutRec*> const& __cordl_internal_get_FirstLeft() const;

  constexpr int32_t const& __cordl_internal_get_Idx() const;

  constexpr int32_t& __cordl_internal_get_Idx();

  constexpr bool const& __cordl_internal_get_IsHole() const;

  constexpr bool& __cordl_internal_get_IsHole();

  constexpr bool const& __cordl_internal_get_IsOpen() const;

  constexpr bool& __cordl_internal_get_IsOpen();

  constexpr ::UnityEngine::Rendering::Universal::PolyNode*& __cordl_internal_get_PolyNode();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::PolyNode*> const& __cordl_internal_get_PolyNode() const;

  constexpr ::UnityEngine::Rendering::Universal::OutPt*& __cordl_internal_get_Pts();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& __cordl_internal_get_Pts() const;

  constexpr void __cordl_internal_set_BottomPt(::UnityEngine::Rendering::Universal::OutPt* value);

  constexpr void __cordl_internal_set_FirstLeft(::UnityEngine::Rendering::Universal::OutRec* value);

  constexpr void __cordl_internal_set_Idx(int32_t value);

  constexpr void __cordl_internal_set_IsHole(bool value);

  constexpr void __cordl_internal_set_IsOpen(bool value);

  constexpr void __cordl_internal_set_PolyNode(::UnityEngine::Rendering::Universal::PolyNode* value);

  constexpr void __cordl_internal_set_Pts(::UnityEngine::Rendering::Universal::OutPt* value);

  /// @brief Method .ctor, addr 0x1e2216c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OutRec();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OutRec", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OutRec(OutRec&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OutRec", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OutRec(OutRec const&) = delete;

  /// @brief Field Idx, offset: 0x10, size: 0x4, def value: None
  int32_t ___Idx;

  /// @brief Field IsHole, offset: 0x14, size: 0x1, def value: None
  bool ___IsHole;

  /// @brief Field IsOpen, offset: 0x15, size: 0x1, def value: None
  bool ___IsOpen;

  /// @brief Field FirstLeft, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::OutRec* ___FirstLeft;

  /// @brief Field Pts, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::OutPt* ___Pts;

  /// @brief Field BottomPt, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::OutPt* ___BottomPt;

  /// @brief Field PolyNode, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PolyNode* ___PolyNode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::OutRec, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutRec, ___Idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutRec, ___IsHole) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutRec, ___IsOpen) == 0x15, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutRec, ___FirstLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutRec, ___Pts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutRec, ___BottomPt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutRec, ___PolyNode) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::OutRec);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::OutRec*, "UnityEngine.Rendering.Universal", "OutRec");
