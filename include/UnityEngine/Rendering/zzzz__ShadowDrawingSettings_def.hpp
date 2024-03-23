#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/zzzz__ShadowObjectsFilter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowDrawingSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct ShadowSplitData;
}
namespace UnityEngine {
struct ShadowObjectsFilter;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadowDrawingSettings);
// Type: UnityEngine.Rendering::ShadowDrawingSettings
// SizeInfo { instance_size: 216, native_size: 216, calculated_instance_size: 216, calculated_native_size: 232, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::ShadowDrawingSettings
struct CORDL_TYPE ShadowDrawingSettings {
public:
  // Declarations
  __declspec(property(put = set_splitData))::UnityEngine::Rendering::ShadowSplitData splitData;

  __declspec(property(put = set_useRenderingLayerMaskTest)) bool useRenderingLayerMaskTest;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>*();

  /// @brief Method Equals, addr 0x2a93a0c, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a93710, size 0x130, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ShadowDrawingSettings other);

  /// @brief Method GetHashCode, addr 0x2a93ac4, size 0x60, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2a935e0, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CullingResults cullingResults, int32_t lightIndex);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>* i___System__IEquatable_1___UnityEngine__Rendering__ShadowDrawingSettings_();

  /// @brief Method set_splitData, addr 0x2a935c8, size 0x18, virtual false, abstract: false, final false
  inline void set_splitData(::UnityEngine::Rendering::ShadowSplitData value);

  /// @brief Method set_useRenderingLayerMaskTest, addr 0x2a935bc, size 0xc, virtual false, abstract: false, final false
  inline void set_useRenderingLayerMaskTest(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowDrawingSettings();

  // Ctor Parameters [CppParam { name: "m_CullingResults", ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: None }, CppParam { name: "m_LightIndex", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_UseRenderingLayerMaskTest", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SplitData", ty:
  // "::UnityEngine::Rendering::ShadowSplitData", modifiers: "", def_value: None }, CppParam { name: "m_ObjectsFilter", ty: "::UnityEngine::ShadowObjectsFilter", modifiers: "", def_value: None }]
  constexpr ShadowDrawingSettings(::UnityEngine::Rendering::CullingResults m_CullingResults, int32_t m_LightIndex, int32_t m_UseRenderingLayerMaskTest,
                                  ::UnityEngine::Rendering::ShadowSplitData m_SplitData, ::UnityEngine::ShadowObjectsFilter m_ObjectsFilter) noexcept;

  /// @brief Field m_CullingResults, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults m_CullingResults;

  /// @brief Field m_LightIndex, offset: 0x10, size: 0x4, def value: None
  int32_t m_LightIndex;

  /// @brief Field m_UseRenderingLayerMaskTest, offset: 0x14, size: 0x4, def value: None
  int32_t m_UseRenderingLayerMaskTest;

  /// @brief Field m_SplitData, offset: 0x18, size: 0xbc, def value: None
  ::UnityEngine::Rendering::ShadowSplitData m_SplitData;

  /// @brief Field m_ObjectsFilter, offset: 0xd4, size: 0x4, def value: None
  ::UnityEngine::ShadowObjectsFilter m_ObjectsFilter;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShadowDrawingSettings, 0xd8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_CullingResults) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_LightIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_UseRenderingLayerMaskTest) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_SplitData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_ObjectsFilter) == 0xd4, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowDrawingSettings, "UnityEngine.Rendering", "ShadowDrawingSettings");
