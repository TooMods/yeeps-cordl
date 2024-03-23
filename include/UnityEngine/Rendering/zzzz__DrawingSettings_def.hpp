#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__DrawRendererFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__PerObjectData_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingSettings_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct DrawRendererFlags;
}
namespace UnityEngine::Rendering {
struct PerObjectData;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct SortingSettings;
}
namespace UnityEngine::Rendering {
struct __DrawingSettings___shaderPassNames_e__FixedBuffer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct __DrawingSettings___shaderPassNames_e__FixedBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::DrawingSettings);
MARK_VAL_T(::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer);
// Type: ::<shaderPassNames>e__FixedBuffer
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: Some(0) }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::DrawingSettings::<shaderPassNames>e__FixedBuffer
#pragma pack(push, 0)
struct CORDL_TYPE __DrawingSettings___shaderPassNames_e__FixedBuffer {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DrawingSettings___shaderPassNames_e__FixedBuffer();

  // Ctor Parameters [CppParam { name: "FixedElementField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DrawingSettings___shaderPassNames_e__FixedBuffer(int32_t FixedElementField) noexcept;

  /// @brief Field FixedElementField, offset: 0x0, size: 0x4, def value: None
  int32_t FixedElementField;

  /// @brief Size padding 0x40 - 0x4 = 0x3c, packed as 0x3c
  uint8_t _cordl_size_padding[0x3c];

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer, FixedElementField) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::DrawingSettings
// SizeInfo { instance_size: 316, native_size: 316, calculated_instance_size: 316, calculated_native_size: 332, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::DrawingSettings
struct CORDL_TYPE DrawingSettings {
public:
  // Declarations
  using _shaderPassNames_e__FixedBuffer = ::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer;

  __declspec(property(put = set_enableDynamicBatching)) bool enableDynamicBatching;

  __declspec(property(put = set_enableInstancing)) bool enableInstancing;

  __declspec(property(put = set_fallbackMaterial))::UnityW<::UnityEngine::Material> fallbackMaterial;

  __declspec(property(put = set_mainLightIndex)) int32_t mainLightIndex;

  /// @brief Field maxShaderPasses, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maxShaderPasses, put = setStaticF_maxShaderPasses)) int32_t maxShaderPasses;

  __declspec(property(put = set_overrideMaterial))::UnityW<::UnityEngine::Material> overrideMaterial;

  __declspec(property(put = set_overrideMaterialPassIndex)) int32_t overrideMaterialPassIndex;

  __declspec(property(put = set_perObjectData))::UnityEngine::Rendering::PerObjectData perObjectData;

  __declspec(property(get = get_sortingSettings, put = set_sortingSettings))::UnityEngine::Rendering::SortingSettings sortingSettings;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>*();

  /// @brief Method Equals, addr 0x29dbcb4, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x29dbb70, size 0x144, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::DrawingSettings other);

  /// @brief Method GetHashCode, addr 0x29dbd6c, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetShaderPassName, addr 0x29db8a8, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderTagId GetShaderPassName(int32_t index);

  /// @brief Method SetShaderPassName, addr 0x29dba10, size 0x160, virtual false, abstract: false, final false
  inline void SetShaderPassName(int32_t index, ::UnityEngine::Rendering::ShaderTagId shaderPassName);

  /// @brief Method .ctor, addr 0x29db6f8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ShaderTagId shaderPassName, ::UnityEngine::Rendering::SortingSettings sortingSettings);

  static inline int32_t getStaticF_maxShaderPasses();

  /// @brief Method get_sortingSettings, addr 0x29db7d0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::SortingSettings get_sortingSettings();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::DrawingSettings>* i___System__IEquatable_1___UnityEngine__Rendering__DrawingSettings_();

  static inline void setStaticF_maxShaderPasses(int32_t value);

  /// @brief Method set_enableDynamicBatching, addr 0x29db808, size 0x1c, virtual false, abstract: false, final false
  inline void set_enableDynamicBatching(bool value);

  /// @brief Method set_enableInstancing, addr 0x29db824, size 0x1c, virtual false, abstract: false, final false
  inline void set_enableInstancing(bool value);

  /// @brief Method set_fallbackMaterial, addr 0x29db874, size 0x2c, virtual false, abstract: false, final false
  inline void set_fallbackMaterial(::UnityEngine::Material* value);

  /// @brief Method set_mainLightIndex, addr 0x29db8a0, size 0x8, virtual false, abstract: false, final false
  inline void set_mainLightIndex(int32_t value);

  /// @brief Method set_overrideMaterial, addr 0x29db840, size 0x2c, virtual false, abstract: false, final false
  inline void set_overrideMaterial(::UnityEngine::Material* value);

  /// @brief Method set_overrideMaterialPassIndex, addr 0x29db86c, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterialPassIndex(int32_t value);

  /// @brief Method set_perObjectData, addr 0x29db800, size 0x8, virtual false, abstract: false, final false
  inline void set_perObjectData(::UnityEngine::Rendering::PerObjectData value);

  /// @brief Method set_sortingSettings, addr 0x29db7ec, size 0x14, virtual false, abstract: false, final false
  inline void set_sortingSettings(::UnityEngine::Rendering::SortingSettings value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawingSettings();

  // Ctor Parameters [CppParam { name: "m_SortingSettings", ty: "::UnityEngine::Rendering::SortingSettings", modifiers: "", def_value: None }, CppParam { name: "shaderPassNames", ty:
  // "::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_PerObjectData", ty:
  // "::UnityEngine::Rendering::PerObjectData", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::UnityEngine::Rendering::DrawRendererFlags", modifiers: "", def_value: None },
  // CppParam { name: "m_OverrideMaterialInstanceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OverrideMaterialPassIndex", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_fallbackMaterialInstanceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_MainLightIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_UseSrpBatcher", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DrawingSettings(::UnityEngine::Rendering::SortingSettings m_SortingSettings, ::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer shaderPassNames,
                            ::UnityEngine::Rendering::PerObjectData m_PerObjectData, ::UnityEngine::Rendering::DrawRendererFlags m_Flags, int32_t m_OverrideMaterialInstanceId,
                            int32_t m_OverrideMaterialPassIndex, int32_t m_fallbackMaterialInstanceId, int32_t m_MainLightIndex, int32_t m_UseSrpBatcher) noexcept;

  /// @brief Field m_SortingSettings, offset: 0x0, size: 0xe0, def value: None
  ::UnityEngine::Rendering::SortingSettings m_SortingSettings;

  /// @brief Field shaderPassNames, offset: 0xe0, size: 0x40, def value: None
  ::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer shaderPassNames;

  /// @brief Field m_PerObjectData, offset: 0x120, size: 0x4, def value: None
  ::UnityEngine::Rendering::PerObjectData m_PerObjectData;

  /// @brief Field m_Flags, offset: 0x124, size: 0x4, def value: None
  ::UnityEngine::Rendering::DrawRendererFlags m_Flags;

  /// @brief Field m_OverrideMaterialInstanceId, offset: 0x128, size: 0x4, def value: None
  int32_t m_OverrideMaterialInstanceId;

  /// @brief Field m_OverrideMaterialPassIndex, offset: 0x12c, size: 0x4, def value: None
  int32_t m_OverrideMaterialPassIndex;

  /// @brief Field m_fallbackMaterialInstanceId, offset: 0x130, size: 0x4, def value: None
  int32_t m_fallbackMaterialInstanceId;

  /// @brief Field m_MainLightIndex, offset: 0x134, size: 0x4, def value: None
  int32_t m_MainLightIndex;

  /// @brief Field m_UseSrpBatcher, offset: 0x138, size: 0x4, def value: None
  int32_t m_UseSrpBatcher;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x13c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DrawingSettings, 0x13c>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_SortingSettings) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, shaderPassNames) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_PerObjectData) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_Flags) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_OverrideMaterialInstanceId) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_OverrideMaterialPassIndex) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_fallbackMaterialInstanceId) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_MainLightIndex) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::DrawingSettings, m_UseSrpBatcher) == 0x138, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DrawingSettings, "UnityEngine.Rendering", "DrawingSettings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__DrawingSettings___shaderPassNames_e__FixedBuffer, "UnityEngine.Rendering", "DrawingSettings/<shaderPassNames>e__FixedBuffer");
