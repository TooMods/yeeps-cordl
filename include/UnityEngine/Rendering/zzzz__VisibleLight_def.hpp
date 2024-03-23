#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__VisibleLightFlags_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LightType_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisibleLight)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct VisibleLightFlags;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct VisibleLight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VisibleLight);
// Type: UnityEngine.Rendering::VisibleLight
// SizeInfo { instance_size: 116, native_size: 116, calculated_instance_size: 116, calculated_native_size: 132, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::VisibleLight
struct CORDL_TYPE VisibleLight {
public:
  // Declarations
  __declspec(property(get = get_finalColor))::UnityEngine::Color finalColor;

  __declspec(property(get = get_light))::UnityW<::UnityEngine::Light> light;

  __declspec(property(get = get_lightType))::UnityEngine::LightType lightType;

  __declspec(property(get = get_localToWorldMatrix))::UnityEngine::Matrix4x4 localToWorldMatrix;

  __declspec(property(get = get_range)) float_t range;

  __declspec(property(get = get_spotAngle)) float_t spotAngle;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>*();

  /// @brief Method Equals, addr 0x2a92484, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a9220c, size 0x278, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::VisibleLight other);

  /// @brief Method GetHashCode, addr 0x2a92514, size 0x2b4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_finalColor, addr 0x2a921d4, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_finalColor();

  /// @brief Method get_light, addr 0x2a92140, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Light> get_light();

  /// @brief Method get_lightType, addr 0x2a921cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LightType get_lightType();

  /// @brief Method get_localToWorldMatrix, addr 0x2a921e0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_localToWorldMatrix();

  /// @brief Method get_range, addr 0x2a921fc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_range();

  /// @brief Method get_spotAngle, addr 0x2a92204, size 0x8, virtual false, abstract: false, final false
  inline float_t get_spotAngle();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::VisibleLight>* i___System__IEquatable_1___UnityEngine__Rendering__VisibleLight_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisibleLight();

  // Ctor Parameters [CppParam { name: "m_LightType", ty: "::UnityEngine::LightType", modifiers: "", def_value: None }, CppParam { name: "m_FinalColor", ty: "::UnityEngine::Color", modifiers: "",
  // def_value: None }, CppParam { name: "m_ScreenRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "m_LocalToWorldMatrix", ty: "::UnityEngine::Matrix4x4",
  // modifiers: "", def_value: None }, CppParam { name: "m_Range", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_SpotAngle", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_InstanceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Rendering::VisibleLightFlags", modifiers: "", def_value: None }]
  constexpr VisibleLight(::UnityEngine::LightType m_LightType, ::UnityEngine::Color m_FinalColor, ::UnityEngine::Rect m_ScreenRect, ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix, float_t m_Range,
                         float_t m_SpotAngle, int32_t m_InstanceId, ::UnityEngine::Rendering::VisibleLightFlags m_Flags) noexcept;

  /// @brief Field m_LightType, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::LightType m_LightType;

  /// @brief Field m_FinalColor, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Color m_FinalColor;

  /// @brief Field m_ScreenRect, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Rect m_ScreenRect;

  /// @brief Field m_LocalToWorldMatrix, offset: 0x24, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 m_LocalToWorldMatrix;

  /// @brief Field m_Range, offset: 0x64, size: 0x4, def value: None
  float_t m_Range;

  /// @brief Field m_SpotAngle, offset: 0x68, size: 0x4, def value: None
  float_t m_SpotAngle;

  /// @brief Field m_InstanceId, offset: 0x6c, size: 0x4, def value: None
  int32_t m_InstanceId;

  /// @brief Field m_Flags, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::Rendering::VisibleLightFlags m_Flags;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x74 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VisibleLight, 0x74>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_LightType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_FinalColor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_ScreenRect) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_LocalToWorldMatrix) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_Range) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_SpotAngle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_InstanceId) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VisibleLight, m_Flags) == 0x70, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VisibleLight, "UnityEngine.Rendering", "VisibleLight");
