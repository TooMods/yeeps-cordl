#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OutPt)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class OutPt;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::OutPt);
// Type: UnityEngine.Rendering.Universal::OutPt
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::OutPt*
class CORDL_TYPE OutPt : public ::System::Object {
public:
  // Declarations
  /// @brief Field Idx, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_Idx, put = __cordl_internal_set_Idx)) int32_t Idx;

  /// @brief Field Next, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Next, put = __cordl_internal_set_Next))::UnityEngine::Rendering::Universal::OutPt* Next;

  /// @brief Field Prev, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_Prev, put = __cordl_internal_set_Prev))::UnityEngine::Rendering::Universal::OutPt* Prev;

  /// @brief Field Pt, offset 0x18, size 0x30
  __declspec(property(get = __cordl_internal_get_Pt, put = __cordl_internal_set_Pt))::UnityEngine::Rendering::Universal::IntPoint Pt;

  static inline ::UnityEngine::Rendering::Universal::OutPt* New_ctor();

  constexpr int32_t const& __cordl_internal_get_Idx() const;

  constexpr int32_t& __cordl_internal_get_Idx();

  constexpr ::UnityEngine::Rendering::Universal::OutPt*& __cordl_internal_get_Next();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& __cordl_internal_get_Next() const;

  constexpr ::UnityEngine::Rendering::Universal::OutPt*& __cordl_internal_get_Prev();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& __cordl_internal_get_Prev() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_Pt() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_Pt();

  constexpr void __cordl_internal_set_Idx(int32_t value);

  constexpr void __cordl_internal_set_Next(::UnityEngine::Rendering::Universal::OutPt* value);

  constexpr void __cordl_internal_set_Prev(::UnityEngine::Rendering::Universal::OutPt* value);

  constexpr void __cordl_internal_set_Pt(::UnityEngine::Rendering::Universal::IntPoint value);

  /// @brief Method .ctor, addr 0x1e22174, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OutPt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OutPt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OutPt(OutPt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OutPt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OutPt(OutPt const&) = delete;

  /// @brief Field Idx, offset: 0x10, size: 0x4, def value: None
  int32_t ___Idx;

  /// @brief Field Pt, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___Pt;

  /// @brief Field Next, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::OutPt* ___Next;

  /// @brief Field Prev, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::OutPt* ___Prev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::OutPt, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutPt, ___Idx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutPt, ___Pt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutPt, ___Next) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OutPt, ___Prev) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::OutPt);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::OutPt*, "UnityEngine.Rendering.Universal", "OutPt");
