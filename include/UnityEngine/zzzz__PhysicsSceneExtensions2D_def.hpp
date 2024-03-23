#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PhysicsSceneExtensions2D)
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
// Forward declare root types
namespace UnityEngine {
class PhysicsSceneExtensions2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PhysicsSceneExtensions2D);
// Type: UnityEngine::PhysicsSceneExtensions2D
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::PhysicsSceneExtensions2D*
class CORDL_TYPE PhysicsSceneExtensions2D : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetPhysicsScene2D, addr 0x22335a0, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene2D GetPhysicsScene2D(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetPhysicsScene_Internal, addr 0x22336a8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene2D GetPhysicsScene_Internal(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetPhysicsScene_Internal_Injected, addr 0x22336f4, size 0x44, virtual false, abstract: false, final false
  static inline void GetPhysicsScene_Internal_Injected(ByRef<::UnityEngine::SceneManagement::Scene> scene, ByRef<::UnityEngine::PhysicsScene2D> ret);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsSceneExtensions2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsSceneExtensions2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsSceneExtensions2D(PhysicsSceneExtensions2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsSceneExtensions2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsSceneExtensions2D(PhysicsSceneExtensions2D const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsSceneExtensions2D, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::PhysicsSceneExtensions2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsSceneExtensions2D*, "UnityEngine", "PhysicsSceneExtensions2D");
