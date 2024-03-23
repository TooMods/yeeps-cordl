#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialHelperBase_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MaterialInstanceHelper)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialInstanceHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering::MaterialInstanceHelper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering::MaterialInstanceHelper*
class CORDL_TYPE MaterialInstanceHelper : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase {
public:
  // Declarations
  /// @brief Field m_MaterialInstance, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialInstance, put = __cordl_internal_set_m_MaterialInstance))::UnityW<::UnityEngine::Material> m_MaterialInstance;

  /// @brief Method Initialize, addr 0x2a2f3c8, size 0x130, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper* New_ctor();

  /// @brief Method OnDestroy, addr 0x2a2f318, size 0x8c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method TryGetMaterialInstance, addr 0x2a2f3a4, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetMaterialInstance(ByRef<::UnityEngine::Material*> materialInstance);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_MaterialInstance() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_MaterialInstance();

  constexpr void __cordl_internal_set_m_MaterialInstance(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x2a2f4f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialInstanceHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialInstanceHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialInstanceHelper(MaterialInstanceHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialInstanceHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialInstanceHelper(MaterialInstanceHelper const&) = delete;

  /// @brief Field m_MaterialInstance, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_MaterialInstance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper, ___m_MaterialInstance) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialInstanceHelper*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering",
                       "MaterialInstanceHelper");
