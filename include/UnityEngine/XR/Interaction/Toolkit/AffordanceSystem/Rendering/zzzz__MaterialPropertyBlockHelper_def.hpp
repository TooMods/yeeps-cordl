#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Rendering/zzzz__MaterialHelperBase_def.hpp"
CORDL_MODULE_EXPORT(MaterialPropertyBlockHelper)
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering::MaterialPropertyBlockHelper
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering::MaterialPropertyBlockHelper*
class CORDL_TYPE MaterialPropertyBlockHelper : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialHelperBase {
public:
  // Declarations
  /// @brief Field m_IsDirty, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDirty, put = __cordl_internal_set_m_IsDirty)) bool m_IsDirty;

  /// @brief Field m_PropertyBlock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PropertyBlock, put = __cordl_internal_set_m_PropertyBlock))::UnityEngine::MaterialPropertyBlock* m_PropertyBlock;

  /// @brief Method GetMaterialPropertyBlock, addr 0x2a2f548, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::MaterialPropertyBlock* GetMaterialPropertyBlock(bool markPropertyBlockAsDirty);

  /// @brief Method Initialize, addr 0x2a2f55c, size 0x7c, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method LateUpdate, addr 0x2a2f508, size 0x40, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* New_ctor();

  /// @brief Method OnDestroy, addr 0x2a2f500, size 0x8, virtual false, abstract: false, final false
  inline void OnDestroy();

  constexpr bool const& __cordl_internal_get_m_IsDirty() const;

  constexpr bool& __cordl_internal_get_m_IsDirty();

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_PropertyBlock();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get_m_PropertyBlock() const;

  constexpr void __cordl_internal_set_m_IsDirty(bool value);

  constexpr void __cordl_internal_set_m_PropertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  /// @brief Method .ctor, addr 0x2a2f5d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockHelper(MaterialPropertyBlockHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockHelper(MaterialPropertyBlockHelper const&) = delete;

  /// @brief Field m_PropertyBlock, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_PropertyBlock;

  /// @brief Field m_IsDirty, offset: 0x30, size: 0x1, def value: None
  bool ___m_IsDirty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper, ___m_PropertyBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper, ___m_IsDirty) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering",
                       "MaterialPropertyBlockHelper");
