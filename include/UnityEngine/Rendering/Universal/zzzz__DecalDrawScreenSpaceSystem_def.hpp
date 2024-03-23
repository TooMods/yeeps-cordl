#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawScreenSpaceSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawScreenSpaceSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem);
// Type: UnityEngine.Rendering.Universal::DecalDrawScreenSpaceSystem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalDrawScreenSpaceSystem*
class CORDL_TYPE DecalDrawScreenSpaceSystem : public ::UnityEngine::Rendering::Universal::DecalDrawSystem {
public:
  // Declarations
  /// @brief Method GetPassIndex, addr 0x2e19d5c, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);

  static inline ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  /// @brief Method .ctor, addr 0x2e19d00, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawScreenSpaceSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawScreenSpaceSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawScreenSpaceSystem(DecalDrawScreenSpaceSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawScreenSpaceSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawScreenSpaceSystem(DecalDrawScreenSpaceSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*, "UnityEngine.Rendering.Universal", "DecalDrawScreenSpaceSystem");
