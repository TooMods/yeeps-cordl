#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawFowardEmissiveSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawFowardEmissiveSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem);
// Type: UnityEngine.Rendering.Universal::DecalDrawFowardEmissiveSystem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalDrawFowardEmissiveSystem*
class CORDL_TYPE DecalDrawFowardEmissiveSystem : public ::UnityEngine::Rendering::Universal::DecalDrawSystem {
public:
  // Declarations
  /// @brief Method GetPassIndex, addr 0x2c66b34, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);

  static inline ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  /// @brief Method .ctor, addr 0x2c66adc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawFowardEmissiveSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawFowardEmissiveSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawFowardEmissiveSystem(DecalDrawFowardEmissiveSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawFowardEmissiveSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawFowardEmissiveSystem(DecalDrawFowardEmissiveSystem const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*, "UnityEngine.Rendering.Universal", "DecalDrawFowardEmissiveSystem");
