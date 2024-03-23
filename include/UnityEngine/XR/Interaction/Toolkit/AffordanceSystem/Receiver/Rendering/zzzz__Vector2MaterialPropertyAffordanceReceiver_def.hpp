#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__Vector2AffordanceReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector2MaterialPropertyAffordanceReceiver)
namespace Unity::Mathematics {
struct float2;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class Vector2MaterialPropertyAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::Vector2MaterialPropertyAffordanceReceiver
// SizeInfo { instance_size: 184, native_size: -1, calculated_instance_size: 184, calculated_native_size: 180, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::Vector2MaterialPropertyAffordanceReceiver*
class CORDL_TYPE Vector2MaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver {
public:
  // Declarations
  /// @brief Field m_MaterialPropertyBlockHelper, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialPropertyBlockHelper, put = __cordl_internal_set_m_MaterialPropertyBlockHelper))::UnityW<
      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> m_MaterialPropertyBlockHelper;

  /// @brief Field m_Vector2Property, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Vector2Property, put = __cordl_internal_set_m_Vector2Property)) int32_t m_Vector2Property;

  /// @brief Field m_Vector2PropertyName, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vector2PropertyName, put = __cordl_internal_set_m_Vector2PropertyName))::StringW m_Vector2PropertyName;

  __declspec(property(get = get_materialPropertyBlockHelper,
                      put = set_materialPropertyBlockHelper))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> materialPropertyBlockHelper;

  __declspec(property(get = get_vector2PropertyName, put = set_vector2PropertyName))::StringW vector2PropertyName;

  /// @brief Method Awake, addr 0x2a304b4, size 0xc4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCurrentValueForCapture, addr 0x2a30674, size 0x34, virtual true, abstract: false, final false
  inline ::Unity::Mathematics::float2 GetCurrentValueForCapture();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a30578, size 0x7c, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::Unity::Mathematics::float2 newValue);

  /// @brief Method OnValidate, addr 0x2a30428, size 0x8c, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> const& __cordl_internal_get_m_MaterialPropertyBlockHelper() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>& __cordl_internal_get_m_MaterialPropertyBlockHelper();

  constexpr int32_t const& __cordl_internal_get_m_Vector2Property() const;

  constexpr int32_t& __cordl_internal_get_m_Vector2Property();

  constexpr ::StringW const& __cordl_internal_get_m_Vector2PropertyName() const;

  constexpr ::StringW& __cordl_internal_get_m_Vector2PropertyName();

  constexpr void __cordl_internal_set_m_MaterialPropertyBlockHelper(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> value);

  constexpr void __cordl_internal_set_m_Vector2Property(int32_t value);

  constexpr void __cordl_internal_set_m_Vector2PropertyName(::StringW value);

  /// @brief Method .ctor, addr 0x2a306a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_materialPropertyBlockHelper, addr 0x2a303ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> get_materialPropertyBlockHelper();

  /// @brief Method get_vector2PropertyName, addr 0x2a303fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_vector2PropertyName();

  /// @brief Method set_materialPropertyBlockHelper, addr 0x2a303f4, size 0x8, virtual false, abstract: false, final false
  inline void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* value);

  /// @brief Method set_vector2PropertyName, addr 0x2a30404, size 0x24, virtual false, abstract: false, final false
  inline void set_vector2PropertyName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2MaterialPropertyAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2MaterialPropertyAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2MaterialPropertyAffordanceReceiver(Vector2MaterialPropertyAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2MaterialPropertyAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2MaterialPropertyAffordanceReceiver(Vector2MaterialPropertyAffordanceReceiver const&) = delete;

  /// @brief Field m_MaterialPropertyBlockHelper, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> ___m_MaterialPropertyBlockHelper;

  /// @brief Field m_Vector2PropertyName, offset: 0xa8, size: 0x8, def value: None
  ::StringW ___m_Vector2PropertyName;

  /// @brief Field m_Vector2Property, offset: 0xb0, size: 0x4, def value: None
  int32_t ___m_Vector2Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver, 0xb8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver, ___m_MaterialPropertyBlockHelper) == 0xa0,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver, ___m_Vector2PropertyName) == 0xa8,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver, ___m_Vector2Property) == 0xb0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector2MaterialPropertyAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "Vector2MaterialPropertyAffordanceReceiver");
