#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DecalDrawSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawErrorSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering::Universal {
struct DecalTechnique;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawErrorSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem);
// Type: UnityEngine.Rendering.Universal::DecalDrawErrorSystem
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalDrawErrorSystem*
class CORDL_TYPE DecalDrawErrorSystem : public ::UnityEngine::Rendering::Universal::DecalDrawSystem {
public:
  // Declarations
  /// @brief Field m_Technique, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Technique, put = __cordl_internal_set_m_Technique))::UnityEngine::Rendering::Universal::DecalTechnique m_Technique;

  /// @brief Method GetMaterial, addr 0x2c6701c, size 0x1c, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk);

  /// @brief Method GetPassIndex, addr 0x2c66fac, size 0x70, virtual true, abstract: false, final false
  inline int32_t GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);

  static inline ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager,
                                                                                    ::UnityEngine::Rendering::Universal::DecalTechnique technique);

  constexpr ::UnityEngine::Rendering::Universal::DecalTechnique const& __cordl_internal_get_m_Technique() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalTechnique& __cordl_internal_get_m_Technique();

  constexpr void __cordl_internal_set_m_Technique(::UnityEngine::Rendering::Universal::DecalTechnique value);

  /// @brief Method .ctor, addr 0x2c66f48, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, ::UnityEngine::Rendering::Universal::DecalTechnique technique);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawErrorSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawErrorSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawErrorSystem(DecalDrawErrorSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawErrorSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawErrorSystem(DecalDrawErrorSystem const&) = delete;

  /// @brief Field m_Technique, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalTechnique ___m_Technique;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawErrorSystem, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem, ___m_Technique) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*, "UnityEngine.Rendering.Universal", "DecalDrawErrorSystem");
