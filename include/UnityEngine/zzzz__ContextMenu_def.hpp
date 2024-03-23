#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(ContextMenu)
// Forward declare root types
namespace UnityEngine {
class ContextMenu;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ContextMenu);
// Type: UnityEngine::ContextMenu
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ContextMenu*
class CORDL_TYPE ContextMenu : public ::System::Attribute {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextMenu();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextMenu(ContextMenu&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextMenu", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextMenu(ContextMenu const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ContextMenu, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ContextMenu);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ContextMenu*, "UnityEngine", "ContextMenu");
