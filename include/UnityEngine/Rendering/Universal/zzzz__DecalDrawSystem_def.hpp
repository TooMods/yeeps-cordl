#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawSystem)
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawCallChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawSystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawSystem);
// Type: UnityEngine.Rendering.Universal::DecalDrawSystem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DecalDrawSystem*
class CORDL_TYPE DecalDrawSystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field <overrideMaterial>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideMaterial_k__BackingField,
                      put = __cordl_internal_set__overrideMaterial_k__BackingField))::UnityW<::UnityEngine::Material> _overrideMaterial_k__BackingField;

  /// @brief Field m_EntityManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntityManager, put = __cordl_internal_set_m_EntityManager))::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;

  /// @brief Field m_NormalToDecals, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NormalToDecals, put = __cordl_internal_set_m_NormalToDecals))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_NormalToDecals;

  /// @brief Field m_Sampler, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sampler, put = __cordl_internal_set_m_Sampler))::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  /// @brief Field m_WorldToDecals, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldToDecals, put = __cordl_internal_set_m_WorldToDecals))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_WorldToDecals;

  __declspec(property(get = get_overrideMaterial, put = set_overrideMaterial))::UnityW<::UnityEngine::Material> overrideMaterial;

  /// @brief Method Draw, addr 0x2c698ac, size 0x228, virtual false, abstract: false, final false
  inline void Draw(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                   ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk);

  /// @brief Method Draw, addr 0x2c690f4, size 0x228, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                   ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t passIndex);

  /// @brief Method DrawInstanced, addr 0x2c69694, size 0x218, virtual false, abstract: false, final false
  inline void DrawInstanced(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                            ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk);

  /// @brief Method DrawInstanced, addr 0x2c68f10, size 0x1e4, virtual false, abstract: false, final false
  inline void DrawInstanced(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                            ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t passIndex);

  /// @brief Method Execute, addr 0x2c6931c, size 0x224, virtual false, abstract: false, final false
  inline void Execute(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method Execute, addr 0x2c69540, size 0x154, virtual false, abstract: false, final false
  inline void Execute(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                      ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t count);

  /// @brief Method Execute, addr 0x2c66520, size 0x224, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Execute, addr 0x2c68d90, size 0x168, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk,
                      ::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk, ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* decalDrawCallChunk, int32_t count);

  /// @brief Method GetMaterial, addr 0x2c68ef8, size 0x18, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetMaterial(::UnityEngine::Rendering::Universal::DecalEntityChunk* decalEntityChunk);

  /// @brief Method GetPassIndex, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetPassIndex(::UnityEngine::Rendering::Universal::DecalCachedChunk* decalCachedChunk);

  static inline ::UnityEngine::Rendering::Universal::DecalDrawSystem* New_ctor(::StringW sampler, ::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__overrideMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__overrideMaterial_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DecalEntityManager*> const& __cordl_internal_get_m_EntityManager() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_NormalToDecals() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_NormalToDecals();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_Sampler() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_WorldToDecals() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_WorldToDecals();

  constexpr void __cordl_internal_set__overrideMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_NormalToDecals(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_WorldToDecals(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method .ctor, addr 0x2c65594, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::StringW sampler, ::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  /// @brief Method get_overrideMaterial, addr 0x2c68d80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_overrideMaterial();

  /// @brief Method set_overrideMaterial, addr 0x2c68d88, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterial(::UnityEngine::Material* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawSystem(DecalDrawSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawSystem(DecalDrawSystem const&) = delete;

  /// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_EntityManager;

  /// @brief Field m_WorldToDecals, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_WorldToDecals;

  /// @brief Field m_NormalToDecals, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_NormalToDecals;

  /// @brief Field m_Sampler, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_Sampler;

  /// @brief Field <overrideMaterial>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____overrideMaterial_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawSystem, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_WorldToDecals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_NormalToDecals) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ___m_Sampler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawSystem, ____overrideMaterial_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawSystem*, "UnityEngine.Rendering.Universal", "DecalDrawSystem");
