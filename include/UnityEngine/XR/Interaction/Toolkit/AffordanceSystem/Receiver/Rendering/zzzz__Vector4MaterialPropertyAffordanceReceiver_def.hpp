#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector4AffordanceReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector4MaterialPropertyAffordanceReceiver)
namespace Unity::Mathematics {
struct float4;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class Vector4MaterialPropertyAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::Vector4MaterialPropertyAffordanceReceiver
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 188, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::Vector4MaterialPropertyAffordanceReceiver*
class CORDL_TYPE Vector4MaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector4AffordanceReceiver {
public:
  // Declarations
  /// @brief Field m_MaterialPropertyBlockHelper, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialPropertyBlockHelper, put = __cordl_internal_set_m_MaterialPropertyBlockHelper))::UnityW<
      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> m_MaterialPropertyBlockHelper;

  /// @brief Field m_Vector4Property, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Vector4Property, put = __cordl_internal_set_m_Vector4Property)) int32_t m_Vector4Property;

  /// @brief Field m_Vector4PropertyName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vector4PropertyName, put = __cordl_internal_set_m_Vector4PropertyName))::StringW m_Vector4PropertyName;

  __declspec(property(get = get_materialPropertyBlockHelper,
                      put = set_materialPropertyBlockHelper))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> materialPropertyBlockHelper;

  __declspec(property(get = get_vector4PropertyName, put = set_vector4PropertyName))::StringW vector4PropertyName;

  /// @brief Method Awake, addr 0x2a30ba4, size 0xc4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCurrentValueForCapture, addr 0x2a30d98, size 0x34, virtual true, abstract: false, final false
  inline ::Unity::Mathematics::float4 GetCurrentValueForCapture();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a30c68, size 0x94, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::Unity::Mathematics::float4 newValue);

  /// @brief Method OnValidate, addr 0x2a30b18, size 0x8c, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> const& __cordl_internal_get_m_MaterialPropertyBlockHelper() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>& __cordl_internal_get_m_MaterialPropertyBlockHelper();

  constexpr int32_t const& __cordl_internal_get_m_Vector4Property() const;

  constexpr int32_t& __cordl_internal_get_m_Vector4Property();

  constexpr ::StringW const& __cordl_internal_get_m_Vector4PropertyName() const;

  constexpr ::StringW& __cordl_internal_get_m_Vector4PropertyName();

  constexpr void __cordl_internal_set_m_MaterialPropertyBlockHelper(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> value);

  constexpr void __cordl_internal_set_m_Vector4Property(int32_t value);

  constexpr void __cordl_internal_set_m_Vector4PropertyName(::StringW value);

  /// @brief Method .ctor, addr 0x2a30dcc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_materialPropertyBlockHelper, addr 0x2a30adc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> get_materialPropertyBlockHelper();

  /// @brief Method get_vector4PropertyName, addr 0x2a30aec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_vector4PropertyName();

  /// @brief Method set_materialPropertyBlockHelper, addr 0x2a30ae4, size 0x8, virtual false, abstract: false, final false
  inline void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* value);

  /// @brief Method set_vector4PropertyName, addr 0x2a30af4, size 0x24, virtual false, abstract: false, final false
  inline void set_vector4PropertyName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4MaterialPropertyAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4MaterialPropertyAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4MaterialPropertyAffordanceReceiver(Vector4MaterialPropertyAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4MaterialPropertyAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4MaterialPropertyAffordanceReceiver(Vector4MaterialPropertyAffordanceReceiver const&) = delete;

  /// @brief Field m_MaterialPropertyBlockHelper, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> ___m_MaterialPropertyBlockHelper;

  /// @brief Field m_Vector4PropertyName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_Vector4PropertyName;

  /// @brief Field m_Vector4Property, offset: 0xb8, size: 0x4, def value: None
  int32_t ___m_Vector4Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver, ___m_MaterialPropertyBlockHelper) == 0xa8,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver, ___m_Vector4PropertyName) == 0xb0,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver, ___m_Vector4Property) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector4MaterialPropertyAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "Vector4MaterialPropertyAffordanceReceiver");
