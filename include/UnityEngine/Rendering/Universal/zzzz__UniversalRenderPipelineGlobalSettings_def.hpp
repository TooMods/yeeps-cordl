#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderPipelineGlobalSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineGlobalSettings)
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineGlobalSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings);
// Type: UnityEngine.Rendering.Universal::UniversalRenderPipelineGlobalSettings
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::UniversalRenderPipelineGlobalSettings*
class CORDL_TYPE UniversalRenderPipelineGlobalSettings : public ::UnityEngine::Rendering::RenderPipelineGlobalSettings {
public:
  // Declarations
  /// @brief Field cachedInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_cachedInstance, put = setStaticF_cachedInstance))::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> cachedInstance;

  /// @brief Field defaultAssetName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultAssetName, put = setStaticF_defaultAssetName))::StringW defaultAssetName;

  /// @brief Field k_AssetVersion, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_k_AssetVersion, put = __cordl_internal_set_k_AssetVersion)) int32_t k_AssetVersion;

  /// @brief Field k_DefaultLightLayerNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_DefaultLightLayerNames, put = setStaticF_k_DefaultLightLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> k_DefaultLightLayerNames;

  /// @brief Field lightLayerName0, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName0, put = __cordl_internal_set_lightLayerName0))::StringW lightLayerName0;

  /// @brief Field lightLayerName1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName1, put = __cordl_internal_set_lightLayerName1))::StringW lightLayerName1;

  /// @brief Field lightLayerName2, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName2, put = __cordl_internal_set_lightLayerName2))::StringW lightLayerName2;

  /// @brief Field lightLayerName3, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName3, put = __cordl_internal_set_lightLayerName3))::StringW lightLayerName3;

  /// @brief Field lightLayerName4, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName4, put = __cordl_internal_set_lightLayerName4))::StringW lightLayerName4;

  /// @brief Field lightLayerName5, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName5, put = __cordl_internal_set_lightLayerName5))::StringW lightLayerName5;

  /// @brief Field lightLayerName6, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName6, put = __cordl_internal_set_lightLayerName6))::StringW lightLayerName6;

  /// @brief Field lightLayerName7, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lightLayerName7, put = __cordl_internal_set_lightLayerName7))::StringW lightLayerName7;

  __declspec(property(get = get_lightLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> lightLayerNames;

  /// @brief Field m_LightLayerNames, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightLayerNames, put = __cordl_internal_set_m_LightLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> m_LightLayerNames;

  /// @brief Field m_PrefixedLightLayerNames, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrefixedLightLayerNames, put = __cordl_internal_set_m_PrefixedLightLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> m_PrefixedLightLayerNames;

  /// @brief Field m_PrefixedRenderingLayerNames, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrefixedRenderingLayerNames,
                      put = __cordl_internal_set_m_PrefixedRenderingLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> m_PrefixedRenderingLayerNames;

  /// @brief Field m_RenderingLayerNames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderingLayerNames, put = __cordl_internal_set_m_RenderingLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> m_RenderingLayerNames;

  /// @brief Field m_StripDebugVariants, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripDebugVariants, put = __cordl_internal_set_m_StripDebugVariants)) bool m_StripDebugVariants;

  /// @brief Field m_StripUnusedPostProcessingVariants, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripUnusedPostProcessingVariants, put = __cordl_internal_set_m_StripUnusedPostProcessingVariants)) bool m_StripUnusedPostProcessingVariants;

  /// @brief Field m_StripUnusedVariants, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripUnusedVariants, put = __cordl_internal_set_m_StripUnusedVariants)) bool m_StripUnusedVariants;

  __declspec(property(get = get_prefixedLightLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> prefixedLightLayerNames;

  __declspec(property(get = get_prefixedRenderingLayerMaskNames))::ArrayW<::StringW, ::Array<::StringW>*> prefixedRenderingLayerMaskNames;

  __declspec(property(get = get_prefixedRenderingLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> prefixedRenderingLayerNames;

  __declspec(property(get = get_renderingLayerMaskNames))::ArrayW<::StringW, ::Array<::StringW>*> renderingLayerMaskNames;

  __declspec(property(get = get_renderingLayerNames))::ArrayW<::StringW, ::Array<::StringW>*> renderingLayerNames;

  __declspec(property(get = get_stripDebugVariants, put = set_stripDebugVariants)) bool stripDebugVariants;

  __declspec(property(get = get_stripUnusedPostProcessingVariants, put = set_stripUnusedPostProcessingVariants)) bool stripUnusedPostProcessingVariants;

  __declspec(property(get = get_stripUnusedVariants, put = set_stripUnusedVariants)) bool stripUnusedVariants;

  /// @brief Field supportRuntimeDebugDisplay, offset 0x83, size 0x1
  __declspec(property(get = __cordl_internal_get_supportRuntimeDebugDisplay, put = __cordl_internal_set_supportRuntimeDebugDisplay)) bool supportRuntimeDebugDisplay;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x288d1e0, size 0x4, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x288d1dc, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method Reset, addr 0x288d304, size 0x4, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ResetRenderingLayerNames, addr 0x288d9c0, size 0xe8, virtual false, abstract: false, final false
  inline void ResetRenderingLayerNames();

  /// @brief Method UpdateGraphicsSettings, addr 0x288d1e4, size 0x120, virtual false, abstract: false, final false
  static inline void UpdateGraphicsSettings(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings* newSettings);

  /// @brief Method UpdateRenderingLayerNames, addr 0x288d308, size 0x3f8, virtual false, abstract: false, final false
  inline void UpdateRenderingLayerNames();

  constexpr int32_t const& __cordl_internal_get_k_AssetVersion() const;

  constexpr int32_t& __cordl_internal_get_k_AssetVersion();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName0() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName0();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName1() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName1();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName2() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName2();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName3() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName3();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName4() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName4();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName5() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName5();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName6() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName6();

  constexpr ::StringW const& __cordl_internal_get_lightLayerName7() const;

  constexpr ::StringW& __cordl_internal_get_lightLayerName7();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_LightLayerNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_LightLayerNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_PrefixedLightLayerNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_PrefixedLightLayerNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_PrefixedRenderingLayerNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_PrefixedRenderingLayerNames();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_m_RenderingLayerNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_m_RenderingLayerNames();

  constexpr bool const& __cordl_internal_get_m_StripDebugVariants() const;

  constexpr bool& __cordl_internal_get_m_StripDebugVariants();

  constexpr bool const& __cordl_internal_get_m_StripUnusedPostProcessingVariants() const;

  constexpr bool& __cordl_internal_get_m_StripUnusedPostProcessingVariants();

  constexpr bool const& __cordl_internal_get_m_StripUnusedVariants() const;

  constexpr bool& __cordl_internal_get_m_StripUnusedVariants();

  constexpr bool const& __cordl_internal_get_supportRuntimeDebugDisplay() const;

  constexpr bool& __cordl_internal_get_supportRuntimeDebugDisplay();

  constexpr void __cordl_internal_set_k_AssetVersion(int32_t value);

  constexpr void __cordl_internal_set_lightLayerName0(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName1(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName2(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName3(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName4(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName5(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName6(::StringW value);

  constexpr void __cordl_internal_set_lightLayerName7(::StringW value);

  constexpr void __cordl_internal_set_m_LightLayerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_PrefixedLightLayerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_PrefixedRenderingLayerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_RenderingLayerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_m_StripDebugVariants(bool value);

  constexpr void __cordl_internal_set_m_StripUnusedPostProcessingVariants(bool value);

  constexpr void __cordl_internal_set_m_StripUnusedVariants(bool value);

  constexpr void __cordl_internal_set_supportRuntimeDebugDisplay(bool value);

  /// @brief Method .ctor, addr 0x288dae4, size 0x104, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> getStaticF_cachedInstance();

  static inline ::StringW getStaticF_defaultAssetName();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_k_DefaultLightLayerNames();

  /// @brief Method get_instance, addr 0x288330c, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> get_instance();

  /// @brief Method get_lightLayerNames, addr 0x288d7b4, size 0x20c, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_lightLayerNames();

  /// @brief Method get_prefixedLightLayerNames, addr 0x288d790, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedLightLayerNames();

  /// @brief Method get_prefixedRenderingLayerMaskNames, addr 0x288d76c, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedRenderingLayerMaskNames();

  /// @brief Method get_prefixedRenderingLayerNames, addr 0x288d724, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedRenderingLayerNames();

  /// @brief Method get_renderingLayerMaskNames, addr 0x288d748, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_renderingLayerMaskNames();

  /// @brief Method get_renderingLayerNames, addr 0x288d700, size 0x24, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_renderingLayerNames();

  /// @brief Method get_stripDebugVariants, addr 0x288daa8, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripDebugVariants();

  /// @brief Method get_stripUnusedPostProcessingVariants, addr 0x288dabc, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripUnusedPostProcessingVariants();

  /// @brief Method get_stripUnusedVariants, addr 0x288dad0, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripUnusedVariants();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  static inline void setStaticF_cachedInstance(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings> value);

  static inline void setStaticF_defaultAssetName(::StringW value);

  static inline void setStaticF_k_DefaultLightLayerNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_stripDebugVariants, addr 0x288dab0, size 0xc, virtual false, abstract: false, final false
  inline void set_stripDebugVariants(bool value);

  /// @brief Method set_stripUnusedPostProcessingVariants, addr 0x288dac4, size 0xc, virtual false, abstract: false, final false
  inline void set_stripUnusedPostProcessingVariants(bool value);

  /// @brief Method set_stripUnusedVariants, addr 0x288dad8, size 0xc, virtual false, abstract: false, final false
  inline void set_stripUnusedVariants(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineGlobalSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineGlobalSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineGlobalSettings(UniversalRenderPipelineGlobalSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineGlobalSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineGlobalSettings(UniversalRenderPipelineGlobalSettings const&) = delete;

  /// @brief Field k_AssetVersion, offset: 0x18, size: 0x4, def value: None
  int32_t ___k_AssetVersion;

  /// @brief Field m_RenderingLayerNames, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_RenderingLayerNames;

  /// @brief Field m_PrefixedRenderingLayerNames, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_PrefixedRenderingLayerNames;

  /// @brief Field m_PrefixedLightLayerNames, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_PrefixedLightLayerNames;

  /// @brief Field lightLayerName0, offset: 0x38, size: 0x8, def value: None
  ::StringW ___lightLayerName0;

  /// @brief Field lightLayerName1, offset: 0x40, size: 0x8, def value: None
  ::StringW ___lightLayerName1;

  /// @brief Field lightLayerName2, offset: 0x48, size: 0x8, def value: None
  ::StringW ___lightLayerName2;

  /// @brief Field lightLayerName3, offset: 0x50, size: 0x8, def value: None
  ::StringW ___lightLayerName3;

  /// @brief Field lightLayerName4, offset: 0x58, size: 0x8, def value: None
  ::StringW ___lightLayerName4;

  /// @brief Field lightLayerName5, offset: 0x60, size: 0x8, def value: None
  ::StringW ___lightLayerName5;

  /// @brief Field lightLayerName6, offset: 0x68, size: 0x8, def value: None
  ::StringW ___lightLayerName6;

  /// @brief Field lightLayerName7, offset: 0x70, size: 0x8, def value: None
  ::StringW ___lightLayerName7;

  /// @brief Field m_LightLayerNames, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___m_LightLayerNames;

  /// @brief Field m_StripDebugVariants, offset: 0x80, size: 0x1, def value: None
  bool ___m_StripDebugVariants;

  /// @brief Field m_StripUnusedPostProcessingVariants, offset: 0x81, size: 0x1, def value: None
  bool ___m_StripUnusedPostProcessingVariants;

  /// @brief Field m_StripUnusedVariants, offset: 0x82, size: 0x1, def value: None
  bool ___m_StripUnusedVariants;

  /// @brief Field supportRuntimeDebugDisplay, offset: 0x83, size: 0x1, def value: None
  bool ___supportRuntimeDebugDisplay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___k_AssetVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_RenderingLayerNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_PrefixedRenderingLayerNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_PrefixedLightLayerNames) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___lightLayerName7) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_LightLayerNames) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_StripDebugVariants) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_StripUnusedPostProcessingVariants) == 0x81, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___m_StripUnusedVariants) == 0x82, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings, ___supportRuntimeDebugDisplay) == 0x83, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineGlobalSettings*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineGlobalSettings");
