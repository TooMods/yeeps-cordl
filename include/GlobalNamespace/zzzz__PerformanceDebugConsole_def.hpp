#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PerformanceDebugConsole)
namespace GlobalNamespace {
class SimpleButtonController;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineAsset;
}
// Forward declare root types
namespace GlobalNamespace {
class PerformanceDebugConsole;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PerformanceDebugConsole);
// Type: ::PerformanceDebugConsole
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PerformanceDebugConsole*
class CORDL_TYPE PerformanceDebugConsole : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field dynamicBatchingDisableButton, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_dynamicBatchingDisableButton,
                      put = __cordl_internal_set_dynamicBatchingDisableButton))::UnityW<::GlobalNamespace::SimpleButtonController> dynamicBatchingDisableButton;

  /// @brief Field dynamicBatchingEnableButton, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dynamicBatchingEnableButton,
                      put = __cordl_internal_set_dynamicBatchingEnableButton))::UnityW<::GlobalNamespace::SimpleButtonController> dynamicBatchingEnableButton;

  /// @brief Field dynamicBatchingEnabled, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_dynamicBatchingEnabled, put = __cordl_internal_set_dynamicBatchingEnabled)) bool dynamicBatchingEnabled;

  /// @brief Field lightmappingDisableButton, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lightmappingDisableButton,
                      put = __cordl_internal_set_lightmappingDisableButton))::UnityW<::GlobalNamespace::SimpleButtonController> lightmappingDisableButton;

  /// @brief Field lightmappingEnableButton, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_lightmappingEnableButton,
                      put = __cordl_internal_set_lightmappingEnableButton))::UnityW<::GlobalNamespace::SimpleButtonController> lightmappingEnableButton;

  /// @brief Field lightmappingEnabled, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_lightmappingEnabled, put = __cordl_internal_set_lightmappingEnabled)) bool lightmappingEnabled;

  /// @brief Field nextUpdateTime, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextUpdateTime, put = __cordl_internal_set_nextUpdateTime)) float_t nextUpdateTime;

  /// @brief Field srpBatcherDisableButton, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_srpBatcherDisableButton,
                      put = __cordl_internal_set_srpBatcherDisableButton))::UnityW<::GlobalNamespace::SimpleButtonController> srpBatcherDisableButton;

  /// @brief Field srpBatcherEnableButton, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_srpBatcherEnableButton, put = __cordl_internal_set_srpBatcherEnableButton))::UnityW<::GlobalNamespace::SimpleButtonController> srpBatcherEnableButton;

  /// @brief Field srpBatcherEnabled, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_srpBatcherEnabled, put = __cordl_internal_set_srpBatcherEnabled)) bool srpBatcherEnabled;

  /// @brief Field triplanarDisableButton, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_triplanarDisableButton, put = __cordl_internal_set_triplanarDisableButton))::UnityW<::GlobalNamespace::SimpleButtonController> triplanarDisableButton;

  /// @brief Field triplanarEnableButton, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_triplanarEnableButton, put = __cordl_internal_set_triplanarEnableButton))::UnityW<::GlobalNamespace::SimpleButtonController> triplanarEnableButton;

  /// @brief Field triplanarEnabled, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_triplanarEnabled, put = __cordl_internal_set_triplanarEnabled)) bool triplanarEnabled;

  /// @brief Field urpPipeline, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_urpPipeline, put = __cordl_internal_set_urpPipeline))::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> urpPipeline;

  static inline ::GlobalNamespace::PerformanceDebugConsole* New_ctor();

  /// @brief Method OnDynamicBatchingButtonPressed, addr 0x14445a4, size 0x24, virtual false, abstract: false, final false
  inline void OnDynamicBatchingButtonPressed(bool enable);

  /// @brief Method OnLightmappingButtonPressed, addr 0x14446ec, size 0x6c, virtual false, abstract: false, final false
  inline void OnLightmappingButtonPressed(bool enable);

  /// @brief Method OnSRPBatcherButtonPressed, addr 0x1444580, size 0x24, virtual false, abstract: false, final false
  inline void OnSRPBatcherButtonPressed(bool enable);

  /// @brief Method OnTriplanarButtonPressed, addr 0x14445c8, size 0x124, virtual false, abstract: false, final false
  inline void OnTriplanarButtonPressed(bool enable);

  /// @brief Method RefreshButtons, addr 0x1444380, size 0x1b8, virtual false, abstract: false, final false
  inline void RefreshButtons(bool force);

  /// @brief Method Start, addr 0x1444378, size 0x8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x1444538, size 0x48, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_dynamicBatchingDisableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_dynamicBatchingDisableButton();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_dynamicBatchingEnableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_dynamicBatchingEnableButton();

  constexpr bool const& __cordl_internal_get_dynamicBatchingEnabled() const;

  constexpr bool& __cordl_internal_get_dynamicBatchingEnabled();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_lightmappingDisableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_lightmappingDisableButton();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_lightmappingEnableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_lightmappingEnableButton();

  constexpr bool const& __cordl_internal_get_lightmappingEnabled() const;

  constexpr bool& __cordl_internal_get_lightmappingEnabled();

  constexpr float_t const& __cordl_internal_get_nextUpdateTime() const;

  constexpr float_t& __cordl_internal_get_nextUpdateTime();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_srpBatcherDisableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_srpBatcherDisableButton();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_srpBatcherEnableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_srpBatcherEnableButton();

  constexpr bool const& __cordl_internal_get_srpBatcherEnabled() const;

  constexpr bool& __cordl_internal_get_srpBatcherEnabled();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_triplanarDisableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_triplanarDisableButton();

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController> const& __cordl_internal_get_triplanarEnableButton() const;

  constexpr ::UnityW<::GlobalNamespace::SimpleButtonController>& __cordl_internal_get_triplanarEnableButton();

  constexpr bool const& __cordl_internal_get_triplanarEnabled() const;

  constexpr bool& __cordl_internal_get_triplanarEnabled();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> const& __cordl_internal_get_urpPipeline() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset>& __cordl_internal_get_urpPipeline();

  constexpr void __cordl_internal_set_dynamicBatchingDisableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_dynamicBatchingEnableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_dynamicBatchingEnabled(bool value);

  constexpr void __cordl_internal_set_lightmappingDisableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_lightmappingEnableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_lightmappingEnabled(bool value);

  constexpr void __cordl_internal_set_nextUpdateTime(float_t value);

  constexpr void __cordl_internal_set_srpBatcherDisableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_srpBatcherEnableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_srpBatcherEnabled(bool value);

  constexpr void __cordl_internal_set_triplanarDisableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_triplanarEnableButton(::UnityW<::GlobalNamespace::SimpleButtonController> value);

  constexpr void __cordl_internal_set_triplanarEnabled(bool value);

  constexpr void __cordl_internal_set_urpPipeline(::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> value);

  /// @brief Method .ctor, addr 0x1444758, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PerformanceDebugConsole();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PerformanceDebugConsole", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PerformanceDebugConsole(PerformanceDebugConsole&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PerformanceDebugConsole", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PerformanceDebugConsole(PerformanceDebugConsole const&) = delete;

  /// @brief Field urpPipeline, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset> ___urpPipeline;

  /// @brief Field srpBatcherEnableButton, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___srpBatcherEnableButton;

  /// @brief Field srpBatcherDisableButton, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___srpBatcherDisableButton;

  /// @brief Field srpBatcherEnabled, offset: 0x30, size: 0x1, def value: None
  bool ___srpBatcherEnabled;

  /// @brief Field dynamicBatchingEnableButton, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___dynamicBatchingEnableButton;

  /// @brief Field dynamicBatchingDisableButton, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___dynamicBatchingDisableButton;

  /// @brief Field dynamicBatchingEnabled, offset: 0x48, size: 0x1, def value: None
  bool ___dynamicBatchingEnabled;

  /// @brief Field triplanarEnableButton, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___triplanarEnableButton;

  /// @brief Field triplanarDisableButton, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___triplanarDisableButton;

  /// @brief Field triplanarEnabled, offset: 0x60, size: 0x1, def value: None
  bool ___triplanarEnabled;

  /// @brief Field lightmappingEnableButton, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___lightmappingEnableButton;

  /// @brief Field lightmappingDisableButton, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SimpleButtonController> ___lightmappingDisableButton;

  /// @brief Field lightmappingEnabled, offset: 0x78, size: 0x1, def value: None
  bool ___lightmappingEnabled;

  /// @brief Field nextUpdateTime, offset: 0x7c, size: 0x4, def value: None
  float_t ___nextUpdateTime;

  /// @brief Field timeBetweenAutoRefresh offset 0xffffffff size 0x4
  static constexpr float_t timeBetweenAutoRefresh{ 1.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PerformanceDebugConsole, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___urpPipeline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___srpBatcherEnableButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___srpBatcherDisableButton) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___srpBatcherEnabled) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___dynamicBatchingEnableButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___dynamicBatchingDisableButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___dynamicBatchingEnabled) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___triplanarEnableButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___triplanarDisableButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___triplanarEnabled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___lightmappingEnableButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___lightmappingDisableButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___lightmappingEnabled) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PerformanceDebugConsole, ___nextUpdateTime) == 0x7c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PerformanceDebugConsole);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PerformanceDebugConsole*, "", "PerformanceDebugConsole");
