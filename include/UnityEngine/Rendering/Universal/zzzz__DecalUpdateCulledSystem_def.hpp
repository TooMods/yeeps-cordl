#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalUpdateCulledSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalUpdateCulledSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem);
// Type: UnityEngine.Rendering.Universal::DecalUpdateCulledSystem
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalUpdateCulledSystem*
class CORDL_TYPE DecalUpdateCulledSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_EntityManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntityManager, put = __cordl_internal_set_m_EntityManager))::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;

  /// @brief Field m_Sampler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sampler, put = __cordl_internal_set_m_Sampler))::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  /// @brief Method Execute, addr 0x2e18268, size 0x168, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method Execute, addr 0x2e183d0, size 0xa0, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk, int32_t count);

  static inline ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalEntityManager*> const& __cordl_internal_get_m_EntityManager() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_Sampler() const;

  constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x2e181d4, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalUpdateCulledSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCulledSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalUpdateCulledSystem(DecalUpdateCulledSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCulledSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalUpdateCulledSystem(DecalUpdateCulledSystem const&) = delete;

  /// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_EntityManager;

  /// @brief Field m_Sampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_Sampler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem, ___m_Sampler) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem*, "UnityEngine.Rendering.Universal", "DecalUpdateCulledSystem");
