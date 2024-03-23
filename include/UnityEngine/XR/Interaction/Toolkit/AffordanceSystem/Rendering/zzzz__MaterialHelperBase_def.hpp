#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialHelperBase)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialHelperBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering::MaterialHelperBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering::MaterialHelperBase*
class CORDL_TYPE MaterialHelperBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <isInitialized>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized_k__BackingField, put = __cordl_internal_set__isInitialized_k__BackingField)) bool _isInitialized_k__BackingField;

  __declspec(property(get = get_isInitialized, put = set_isInitialized)) bool isInitialized;

  /// @brief Field m_MaterialIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaterialIndex, put = __cordl_internal_set_m_MaterialIndex)) int32_t m_MaterialIndex;

  /// @brief Field m_Renderer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Renderer, put = __cordl_internal_set_m_Renderer))::UnityW<::UnityEngine::Renderer> m_Renderer;

  __declspec(property(get = get_materialIndex, put = set_materialIndex)) int32_t materialIndex;

  __declspec(property(get = get_rendererTarget, put = set_rendererTarget))::UnityW<::UnityEngine::Renderer> rendererTarget;

  /// @brief Method GetSharedMaterialForTarget, addr 0x2a2f2cc, size 0x44, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetSharedMaterialForTarget();

  /// @brief Method Initialize, addr 0x2a2f2c0, size 0xc, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase* New_ctor();

  /// @brief Method OnEnable, addr 0x2a2f09c, size 0x224, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr bool const& __cordl_internal_get__isInitialized_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInitialized_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_MaterialIndex() const;

  constexpr int32_t& __cordl_internal_get_m_MaterialIndex();

  constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_m_Renderer() const;

  constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_m_Renderer();

  constexpr void __cordl_internal_set__isInitialized_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_MaterialIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Renderer(::UnityW<::UnityEngine::Renderer> value);

  /// @brief Method .ctor, addr 0x2a2f310, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isInitialized, addr 0x2a2f088, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_materialIndex, addr 0x2a2f078, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_materialIndex();

  /// @brief Method get_rendererTarget, addr 0x2a2f068, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Renderer> get_rendererTarget();

  /// @brief Method set_isInitialized, addr 0x2a2f090, size 0xc, virtual false, abstract: false, final false
  inline void set_isInitialized(bool value);

  /// @brief Method set_materialIndex, addr 0x2a2f080, size 0x8, virtual false, abstract: false, final false
  inline void set_materialIndex(int32_t value);

  /// @brief Method set_rendererTarget, addr 0x2a2f070, size 0x8, virtual false, abstract: false, final false
  inline void set_rendererTarget(::UnityEngine::Renderer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialHelperBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialHelperBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialHelperBase(MaterialHelperBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialHelperBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialHelperBase(MaterialHelperBase const&) = delete;

  /// @brief Field m_Renderer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Renderer> ___m_Renderer;

  /// @brief Field m_MaterialIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_MaterialIndex;

  /// @brief Field <isInitialized>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____isInitialized_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase, ___m_Renderer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase, ___m_MaterialIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase, ____isInitialized_k__BackingField) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering",
                       "MaterialHelperBase");
