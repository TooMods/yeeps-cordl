#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/zzzz__ColorAffordanceReceiver_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorMaterialPropertyAffordanceReceiver)
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
struct __ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
class MaterialPropertyBlockHelper;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
class ColorMaterialPropertyAffordanceReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
struct __ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::__ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup);
// Type: ::ShaderPropertyLookup
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 0, calculated_native_size: 16, minimum_alignment: 1, natural_alignment: 0, packing: None, specified_packing: Some(0) }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: true
// CS Name: ::ColorMaterialPropertyAffordanceReceiver::ShaderPropertyLookup
#pragma pack(push, 0)
struct CORDL_TYPE __ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup {
public:
  // Declarations
  /// @brief Field baseColor, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_baseColor, put = setStaticF_baseColor)) int32_t baseColor;

  /// @brief Field color, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_color, put = setStaticF_color)) int32_t color;

  static inline int32_t getStaticF_baseColor();

  static inline int32_t getStaticF_color();

  static inline void setStaticF_baseColor(int32_t value);

  static inline void setStaticF_color(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup();

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::__ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup, 0x1>,
              "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::ColorMaterialPropertyAffordanceReceiver
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 188, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering::ColorMaterialPropertyAffordanceReceiver*
class CORDL_TYPE ColorMaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver {
public:
  // Declarations
  using ShaderPropertyLookup = ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::__ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup;

  __declspec(property(get = get_colorPropertyName, put = set_colorPropertyName))::StringW colorPropertyName;

  /// @brief Field m_ColorProperty, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColorProperty, put = __cordl_internal_set_m_ColorProperty)) int32_t m_ColorProperty;

  /// @brief Field m_ColorPropertyName, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorPropertyName, put = __cordl_internal_set_m_ColorPropertyName))::StringW m_ColorPropertyName;

  /// @brief Field m_MaterialPropertyBlockHelper, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaterialPropertyBlockHelper, put = __cordl_internal_set_m_MaterialPropertyBlockHelper))::UnityW<
      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> m_MaterialPropertyBlockHelper;

  __declspec(property(get = get_materialPropertyBlockHelper,
                      put = set_materialPropertyBlockHelper))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> materialPropertyBlockHelper;

  /// @brief Method Awake, addr 0x2a2ffe0, size 0xb8, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCurrentValueForCapture, addr 0x2a30114, size 0x2c, virtual true, abstract: false, final false
  inline ::UnityEngine::Color GetCurrentValueForCapture();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a30098, size 0x7c, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::UnityEngine::Color newValue);

  /// @brief Method OnValidate, addr 0x2a2ff54, size 0x8c, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method UpdateColorPropertyID, addr 0x2a2fe7c, size 0xd8, virtual false, abstract: false, final false
  inline void UpdateColorPropertyID();

  constexpr int32_t const& __cordl_internal_get_m_ColorProperty() const;

  constexpr int32_t& __cordl_internal_get_m_ColorProperty();

  constexpr ::StringW const& __cordl_internal_get_m_ColorPropertyName() const;

  constexpr ::StringW& __cordl_internal_get_m_ColorPropertyName();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> const& __cordl_internal_get_m_MaterialPropertyBlockHelper() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper>& __cordl_internal_get_m_MaterialPropertyBlockHelper();

  constexpr void __cordl_internal_set_m_ColorProperty(int32_t value);

  constexpr void __cordl_internal_set_m_ColorPropertyName(::StringW value);

  constexpr void __cordl_internal_set_m_MaterialPropertyBlockHelper(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> value);

  /// @brief Method .ctor, addr 0x2a30140, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_colorPropertyName, addr 0x2a2fe6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_colorPropertyName();

  /// @brief Method get_materialPropertyBlockHelper, addr 0x2a2fe5c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> get_materialPropertyBlockHelper();

  /// @brief Method set_colorPropertyName, addr 0x2a2fe74, size 0x8, virtual false, abstract: false, final false
  inline void set_colorPropertyName(::StringW value);

  /// @brief Method set_materialPropertyBlockHelper, addr 0x2a2fe64, size 0x8, virtual false, abstract: false, final false
  inline void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorMaterialPropertyAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorMaterialPropertyAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorMaterialPropertyAffordanceReceiver(ColorMaterialPropertyAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorMaterialPropertyAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorMaterialPropertyAffordanceReceiver(ColorMaterialPropertyAffordanceReceiver const&) = delete;

  /// @brief Field m_MaterialPropertyBlockHelper, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper> ___m_MaterialPropertyBlockHelper;

  /// @brief Field m_ColorPropertyName, offset: 0xb0, size: 0x8, def value: None
  ::StringW ___m_ColorPropertyName;

  /// @brief Field m_ColorProperty, offset: 0xb8, size: 0x4, def value: None
  int32_t ___m_ColorProperty;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver, ___m_MaterialPropertyBlockHelper) == 0xa8,
              "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver, ___m_ColorPropertyName) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver, ___m_ColorProperty) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::ColorMaterialPropertyAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "ColorMaterialPropertyAffordanceReceiver");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::__ColorMaterialPropertyAffordanceReceiver__ShaderPropertyLookup,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "ColorMaterialPropertyAffordanceReceiver/ShaderPropertyLookup");
