#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilteringSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
}
namespace UnityEngine::Rendering {
struct SortingLayerRange;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FilteringSettings);
// Type: UnityEngine.Rendering::FilteringSettings
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::FilteringSettings
struct CORDL_TYPE FilteringSettings {
public:
  // Declarations
  __declspec(property(put = set_excludeMotionVectorObjects)) bool excludeMotionVectorObjects;

  __declspec(property(put = set_layerMask)) int32_t layerMask;

  __declspec(property(put = set_renderQueueRange))::UnityEngine::Rendering::RenderQueueRange renderQueueRange;

  __declspec(property(put = set_renderingLayerMask)) uint32_t renderingLayerMask;

  __declspec(property(put = set_sortingLayerRange))::UnityEngine::Rendering::SortingLayerRange sortingLayerRange;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>*();

  /// @brief Method Equals, addr 0x2a965f0, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2a96594, size 0x5c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::FilteringSettings other);

  /// @brief Method GetHashCode, addr 0x2a966a8, size 0x38, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x2a964a0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange> renderQueueRange, int32_t layerMask, uint32_t renderingLayerMask, int32_t excludeMotionVectorObjects);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>* i___System__IEquatable_1___UnityEngine__Rendering__FilteringSettings_();

  /// @brief Method set_excludeMotionVectorObjects, addr 0x2a96580, size 0xc, virtual false, abstract: false, final false
  inline void set_excludeMotionVectorObjects(bool value);

  /// @brief Method set_layerMask, addr 0x2a96570, size 0x8, virtual false, abstract: false, final false
  inline void set_layerMask(int32_t value);

  /// @brief Method set_renderQueueRange, addr 0x2a96568, size 0x8, virtual false, abstract: false, final false
  inline void set_renderQueueRange(::UnityEngine::Rendering::RenderQueueRange value);

  /// @brief Method set_renderingLayerMask, addr 0x2a96578, size 0x8, virtual false, abstract: false, final false
  inline void set_renderingLayerMask(uint32_t value);

  /// @brief Method set_sortingLayerRange, addr 0x2a9658c, size 0x8, virtual false, abstract: false, final false
  inline void set_sortingLayerRange(::UnityEngine::Rendering::SortingLayerRange value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilteringSettings();

  // Ctor Parameters [CppParam { name: "m_RenderQueueRange", ty: "::UnityEngine::Rendering::RenderQueueRange", modifiers: "", def_value: None }, CppParam { name: "m_LayerMask", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_RenderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_ExcludeMotionVectorObjects", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_SortingLayerRange", ty: "::UnityEngine::Rendering::SortingLayerRange", modifiers: "", def_value: None }]
  constexpr FilteringSettings(::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange, int32_t m_LayerMask, uint32_t m_RenderingLayerMask, int32_t m_ExcludeMotionVectorObjects,
                              ::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange) noexcept;

  /// @brief Field m_RenderQueueRange, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange;

  /// @brief Field m_LayerMask, offset: 0x8, size: 0x4, def value: None
  int32_t m_LayerMask;

  /// @brief Field m_RenderingLayerMask, offset: 0xc, size: 0x4, def value: None
  uint32_t m_RenderingLayerMask;

  /// @brief Field m_ExcludeMotionVectorObjects, offset: 0x10, size: 0x4, def value: None
  int32_t m_ExcludeMotionVectorObjects;

  /// @brief Field m_SortingLayerRange, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FilteringSettings, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_RenderQueueRange) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_LayerMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_RenderingLayerMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_ExcludeMotionVectorObjects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_SortingLayerRange) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FilteringSettings, "UnityEngine.Rendering", "FilteringSettings");
