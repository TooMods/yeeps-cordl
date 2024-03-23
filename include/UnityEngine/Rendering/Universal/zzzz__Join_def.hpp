#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntPoint_def.hpp"
CORDL_MODULE_EXPORT(Join)
namespace UnityEngine::Rendering::Universal {
class OutPt;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class Join;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Join);
// Type: UnityEngine.Rendering.Universal::Join
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::Join*
class CORDL_TYPE Join : public ::System::Object {
public:
  // Declarations
  /// @brief Field OffPt, offset 0x20, size 0x30
  __declspec(property(get = __cordl_internal_get_OffPt, put = __cordl_internal_set_OffPt))::UnityEngine::Rendering::Universal::IntPoint OffPt;

  /// @brief Field OutPt1, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_OutPt1, put = __cordl_internal_set_OutPt1))::UnityEngine::Rendering::Universal::OutPt* OutPt1;

  /// @brief Field OutPt2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_OutPt2, put = __cordl_internal_set_OutPt2))::UnityEngine::Rendering::Universal::OutPt* OutPt2;

  static inline ::UnityEngine::Rendering::Universal::Join* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::IntPoint const& __cordl_internal_get_OffPt() const;

  constexpr ::UnityEngine::Rendering::Universal::IntPoint& __cordl_internal_get_OffPt();

  constexpr ::UnityEngine::Rendering::Universal::OutPt*& __cordl_internal_get_OutPt1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& __cordl_internal_get_OutPt1() const;

  constexpr ::UnityEngine::Rendering::Universal::OutPt*& __cordl_internal_get_OutPt2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::OutPt*> const& __cordl_internal_get_OutPt2() const;

  constexpr void __cordl_internal_set_OffPt(::UnityEngine::Rendering::Universal::IntPoint value);

  constexpr void __cordl_internal_set_OutPt1(::UnityEngine::Rendering::Universal::OutPt* value);

  constexpr void __cordl_internal_set_OutPt2(::UnityEngine::Rendering::Universal::OutPt* value);

  /// @brief Method .ctor, addr 0x1e2217c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Join();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Join", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Join(Join&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Join", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Join(Join const&) = delete;

  /// @brief Field OutPt1, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::OutPt* ___OutPt1;

  /// @brief Field OutPt2, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::OutPt* ___OutPt2;

  /// @brief Field OffPt, offset: 0x20, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::IntPoint ___OffPt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Join, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Join, ___OutPt1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Join, ___OutPt2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Join, ___OffPt) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Join);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Join*, "UnityEngine.Rendering.Universal", "Join");
