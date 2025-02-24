#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RuntimeAnimatorController)
// Forward declare root types
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RuntimeAnimatorController);
// Type: UnityEngine::RuntimeAnimatorController
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::RuntimeAnimatorController*
class CORDL_TYPE RuntimeAnimatorController : public ::UnityEngine::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeAnimatorController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeAnimatorController(RuntimeAnimatorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeAnimatorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeAnimatorController(RuntimeAnimatorController const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RuntimeAnimatorController, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::RuntimeAnimatorController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RuntimeAnimatorController*, "UnityEngine", "RuntimeAnimatorController");
