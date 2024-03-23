#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__FloatAffordanceReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatMaterialPropertyAffordanceReceiver)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class FloatMaterialPropertyAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::FloatMaterialPropertyAffordanceReceiver
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::FloatMaterialPropertyAffordanceReceiver*
class CORDL_TYPE FloatMaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver {
public:
  // Declarations
  __declspec(property(get = get_floatPropertyName, put = set_floatPropertyName))::StringW floatPropertyName;

  /// @brief Field m_FloatProperty, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FloatProperty, put = __cordl_internal_set_m_FloatProperty)) int32_t m_FloatProperty;

  /// @brief Field m_FloatPropertyName, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FloatPropertyName, put = __cordl_internal_set_m_FloatPropertyName))::StringW m_FloatPropertyName;

  /// @brief Field m_MaterialPropertyBlockHelper, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialPropertyBlockHelper, put = __cordl_internal_set_m_MaterialPropertyBlockHelper))::UnityW<
      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> m_MaterialPropertyBlockHelper;

  __declspec(property(get = get_materialPropertyBlockHelper,
                      put = set_materialPropertyBlockHelper))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> materialPropertyBlockHelper;

  /// @brief Method Awake, addr 0x2a302a8, size 0xc4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCurrentValueForCapture, addr 0x2a303bc, size 0x2c, virtual true, abstract: false, final false
  inline float_t GetCurrentValueForCapture();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a3036c, size 0x50, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(float_t newValue);

  /// @brief Method OnValidate, addr 0x2a3021c, size 0x8c, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr int32_t const& __cordl_internal_get_m_FloatProperty() const;

  constexpr int32_t& __cordl_internal_get_m_FloatProperty();

  constexpr ::StringW const& __cordl_internal_get_m_FloatPropertyName() const;

  constexpr ::StringW& __cordl_internal_get_m_FloatPropertyName();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> const& __cordl_internal_get_m_MaterialPropertyBlockHelper() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>& __cordl_internal_get_m_MaterialPropertyBlockHelper();

  constexpr void __cordl_internal_set_m_FloatProperty(int32_t value);

  constexpr void __cordl_internal_set_m_FloatPropertyName(::StringW value);

  constexpr void __cordl_internal_set_m_MaterialPropertyBlockHelper(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> value);

  /// @brief Method .ctor, addr 0x2a303e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_floatPropertyName, addr 0x2a301f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_floatPropertyName();

  /// @brief Method get_materialPropertyBlockHelper, addr 0x2a301e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> get_materialPropertyBlockHelper();

  /// @brief Method set_floatPropertyName, addr 0x2a301f8, size 0x24, virtual false, abstract: false, final false
  inline void set_floatPropertyName(::StringW value);

  /// @brief Method set_materialPropertyBlockHelper, addr 0x2a301e8, size 0x8, virtual false, abstract: false, final false
  inline void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatMaterialPropertyAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatMaterialPropertyAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatMaterialPropertyAffordanceReceiver(FloatMaterialPropertyAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatMaterialPropertyAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatMaterialPropertyAffordanceReceiver(FloatMaterialPropertyAffordanceReceiver const&) = delete;

  /// @brief Field m_MaterialPropertyBlockHelper, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> ___m_MaterialPropertyBlockHelper;

  /// @brief Field m_FloatPropertyName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___m_FloatPropertyName;

  /// @brief Field m_FloatProperty, offset: 0xb0, size: 0x4, def value: None
  int32_t ___m_FloatProperty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver, ___m_MaterialPropertyBlockHelper) == 0xa0,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver, ___m_FloatPropertyName) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver, ___m_FloatProperty) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::FloatMaterialPropertyAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "FloatMaterialPropertyAffordanceReceiver");
