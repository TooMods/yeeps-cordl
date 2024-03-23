#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Light2DBase)
// Forward declare root types
namespace UnityEngine::U2D {
class Light2DBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::U2D::Light2DBase);
// Type: UnityEngine.U2D::Light2DBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::U2D {
// Is value type: false
// CS Name: ::UnityEngine.U2D::Light2DBase*
class CORDL_TYPE Light2DBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  static inline ::UnityEngine::U2D::Light2DBase* New_ctor();

  /// @brief Method .ctor, addr 0x2a86fe4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Light2DBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Light2DBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Light2DBase(Light2DBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Light2DBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Light2DBase(Light2DBase const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::U2D::Light2DBase, 0x18>, "Size mismatch!");

} // namespace UnityEngine::U2D
NEED_NO_BOX(::UnityEngine::U2D::Light2DBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::U2D::Light2DBase*, "UnityEngine.U2D", "Light2DBase");
