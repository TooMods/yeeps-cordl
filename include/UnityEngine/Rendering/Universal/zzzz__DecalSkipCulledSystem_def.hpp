#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalSkipCulledSystem)
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalSkipCulledSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem);
// Type: UnityEngine.Rendering.Universal::DecalSkipCulledSystem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalSkipCulledSystem*
class CORDL_TYPE DecalSkipCulledSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Camera, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Camera, put = __cordl_internal_set_m_Camera))::UnityW<::UnityEngine::Camera> m_Camera;

  /// @brief Field m_EntityManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntityManager, put = __cordl_internal_set_m_EntityManager))::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;

  /// @brief Field m_Sampler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sampler, put = __cordl_internal_set_m_Sampler))::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  /// @brief Method Execute, addr 0x2e1695c, size 0x174, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Camera* camera);

  /// @brief Method Execute, addr 0x2e16ad0, size 0xac, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk, int32_t count);

  /// @brief Method GetSceneCullingMaskFromCamera, addr 0x2e16b7c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t GetSceneCullingMaskFromCamera(::UnityEngine::Camera* camera);

  static inline ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera();

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalEntityManager*> const& __cordl_internal_get_m_EntityManager() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_Sampler() const;

  constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x2e168c8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalSkipCulledSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalSkipCulledSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalSkipCulledSystem(DecalSkipCulledSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalSkipCulledSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalSkipCulledSystem(DecalSkipCulledSystem const&) = delete;

  /// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_EntityManager;

  /// @brief Field m_Sampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_Sampler;

  /// @brief Field m_Camera, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_Camera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalSkipCulledSystem, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem, ___m_Sampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem, ___m_Camera) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem*, "UnityEngine.Rendering.Universal", "DecalSkipCulledSystem");
