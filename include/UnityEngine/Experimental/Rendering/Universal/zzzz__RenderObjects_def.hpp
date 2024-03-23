#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderQueueType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderObjects)
namespace UnityEngine::Experimental::Rendering::Universal {
class RenderObjectsPass;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjects__CustomCameraSettings;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjects__FilterSettings;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjects__RenderObjectsSettings;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class StencilStateData;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::Universal {
class RenderObjects;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjects__CustomCameraSettings;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjects__FilterSettings;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjects__RenderObjectsSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::Universal::RenderObjects);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings);
// Type: ::RenderObjectsSettings
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: false
// CS Name: ::RenderObjects::RenderObjectsSettings*
class CORDL_TYPE __RenderObjects__RenderObjectsSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field Event, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Event, put = __cordl_internal_set_Event))::UnityEngine::Rendering::Universal::RenderPassEvent Event;

  /// @brief Field cameraSettings, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraSettings,
                      put = __cordl_internal_set_cameraSettings))::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings;

  /// @brief Field depthCompareFunction, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_depthCompareFunction, put = __cordl_internal_set_depthCompareFunction))::UnityEngine::Rendering::CompareFunction depthCompareFunction;

  /// @brief Field enableWrite, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_enableWrite, put = __cordl_internal_set_enableWrite)) bool enableWrite;

  /// @brief Field filterSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_filterSettings,
                      put = __cordl_internal_set_filterSettings))::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings* filterSettings;

  /// @brief Field overrideDepthState, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideDepthState, put = __cordl_internal_set_overrideDepthState)) bool overrideDepthState;

  /// @brief Field overrideMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_overrideMaterial, put = __cordl_internal_set_overrideMaterial))::UnityW<::UnityEngine::Material> overrideMaterial;

  /// @brief Field overrideMaterialPassIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_overrideMaterialPassIndex, put = __cordl_internal_set_overrideMaterialPassIndex)) int32_t overrideMaterialPassIndex;

  /// @brief Field passTag, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_passTag, put = __cordl_internal_set_passTag))::StringW passTag;

  /// @brief Field stencilSettings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_stencilSettings, put = __cordl_internal_set_stencilSettings))::UnityEngine::Rendering::Universal::StencilStateData* stencilSettings;

  static inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get_Event() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get_Event();

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*& __cordl_internal_get_cameraSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*> const& __cordl_internal_get_cameraSettings() const;

  constexpr ::UnityEngine::Rendering::CompareFunction const& __cordl_internal_get_depthCompareFunction() const;

  constexpr ::UnityEngine::Rendering::CompareFunction& __cordl_internal_get_depthCompareFunction();

  constexpr bool const& __cordl_internal_get_enableWrite() const;

  constexpr bool& __cordl_internal_get_enableWrite();

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*& __cordl_internal_get_filterSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*> const& __cordl_internal_get_filterSettings() const;

  constexpr bool const& __cordl_internal_get_overrideDepthState() const;

  constexpr bool& __cordl_internal_get_overrideDepthState();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_overrideMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_overrideMaterial();

  constexpr int32_t const& __cordl_internal_get_overrideMaterialPassIndex() const;

  constexpr int32_t& __cordl_internal_get_overrideMaterialPassIndex();

  constexpr ::StringW const& __cordl_internal_get_passTag() const;

  constexpr ::StringW& __cordl_internal_get_passTag();

  constexpr ::UnityEngine::Rendering::Universal::StencilStateData*& __cordl_internal_get_stencilSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::StencilStateData*> const& __cordl_internal_get_stencilSettings() const;

  constexpr void __cordl_internal_set_Event(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  constexpr void __cordl_internal_set_cameraSettings(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* value);

  constexpr void __cordl_internal_set_depthCompareFunction(::UnityEngine::Rendering::CompareFunction value);

  constexpr void __cordl_internal_set_enableWrite(bool value);

  constexpr void __cordl_internal_set_filterSettings(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings* value);

  constexpr void __cordl_internal_set_overrideDepthState(bool value);

  constexpr void __cordl_internal_set_overrideMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_overrideMaterialPassIndex(int32_t value);

  constexpr void __cordl_internal_set_passTag(::StringW value);

  constexpr void __cordl_internal_set_stencilSettings(::UnityEngine::Rendering::Universal::StencilStateData* value);

  /// @brief Method .ctor, addr 0x1e2144c, size 0x128, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderObjects__RenderObjectsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjects__RenderObjectsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderObjects__RenderObjectsSettings(__RenderObjects__RenderObjectsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjects__RenderObjectsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderObjects__RenderObjectsSettings(__RenderObjects__RenderObjectsSettings const&) = delete;

  /// @brief Field passTag, offset: 0x10, size: 0x8, def value: None
  ::StringW ___passTag;

  /// @brief Field Event, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ___Event;

  /// @brief Field filterSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings* ___filterSettings;

  /// @brief Field overrideMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___overrideMaterial;

  /// @brief Field overrideMaterialPassIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___overrideMaterialPassIndex;

  /// @brief Field overrideDepthState, offset: 0x34, size: 0x1, def value: None
  bool ___overrideDepthState;

  /// @brief Field depthCompareFunction, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::CompareFunction ___depthCompareFunction;

  /// @brief Field enableWrite, offset: 0x3c, size: 0x1, def value: None
  bool ___enableWrite;

  /// @brief Field stencilSettings, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::StencilStateData* ___stencilSettings;

  /// @brief Field cameraSettings, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* ___cameraSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___passTag) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___Event) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___filterSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___overrideMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___overrideMaterialPassIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___overrideDepthState) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___depthCompareFunction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___enableWrite) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___stencilSettings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings, ___cameraSettings) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
// Type: ::FilterSettings
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: false
// CS Name: ::RenderObjects::FilterSettings*
class CORDL_TYPE __RenderObjects__FilterSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field LayerMask, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_LayerMask, put = __cordl_internal_set_LayerMask))::UnityEngine::LayerMask LayerMask;

  /// @brief Field PassNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_PassNames, put = __cordl_internal_set_PassNames))::ArrayW<::StringW, ::Array<::StringW>*> PassNames;

  /// @brief Field RenderQueueType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_RenderQueueType, put = __cordl_internal_set_RenderQueueType))::UnityEngine::Experimental::Rendering::Universal::RenderQueueType RenderQueueType;

  static inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings* New_ctor();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_LayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_LayerMask();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_PassNames() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_PassNames();

  constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType const& __cordl_internal_get_RenderQueueType() const;

  constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType& __cordl_internal_get_RenderQueueType();

  constexpr void __cordl_internal_set_LayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_PassNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_RenderQueueType(::UnityEngine::Experimental::Rendering::Universal::RenderQueueType value);

  /// @brief Method .ctor, addr 0x1e21574, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderObjects__FilterSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjects__FilterSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderObjects__FilterSettings(__RenderObjects__FilterSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjects__FilterSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderObjects__FilterSettings(__RenderObjects__FilterSettings const&) = delete;

  /// @brief Field RenderQueueType, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType ___RenderQueueType;

  /// @brief Field LayerMask, offset: 0x14, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___LayerMask;

  /// @brief Field PassNames, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___PassNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings, ___RenderQueueType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings, ___LayerMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings, ___PassNames) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
// Type: ::CustomCameraSettings
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: false
// CS Name: ::RenderObjects::CustomCameraSettings*
class CORDL_TYPE __RenderObjects__CustomCameraSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraFieldOfView, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_cameraFieldOfView, put = __cordl_internal_set_cameraFieldOfView)) float_t cameraFieldOfView;

  /// @brief Field offset, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector4 offset;

  /// @brief Field overrideCamera, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideCamera, put = __cordl_internal_set_overrideCamera)) bool overrideCamera;

  /// @brief Field restoreCamera, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_restoreCamera, put = __cordl_internal_set_restoreCamera)) bool restoreCamera;

  static inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* New_ctor();

  constexpr float_t const& __cordl_internal_get_cameraFieldOfView() const;

  constexpr float_t& __cordl_internal_get_cameraFieldOfView();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_offset();

  constexpr bool const& __cordl_internal_get_overrideCamera() const;

  constexpr bool& __cordl_internal_get_overrideCamera();

  constexpr bool const& __cordl_internal_get_restoreCamera() const;

  constexpr bool& __cordl_internal_get_restoreCamera();

  constexpr void __cordl_internal_set_cameraFieldOfView(float_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_overrideCamera(bool value);

  constexpr void __cordl_internal_set_restoreCamera(bool value);

  /// @brief Method .ctor, addr 0x1e215a0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderObjects__CustomCameraSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjects__CustomCameraSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderObjects__CustomCameraSettings(__RenderObjects__CustomCameraSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjects__CustomCameraSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderObjects__CustomCameraSettings(__RenderObjects__CustomCameraSettings const&) = delete;

  /// @brief Field overrideCamera, offset: 0x10, size: 0x1, def value: None
  bool ___overrideCamera;

  /// @brief Field restoreCamera, offset: 0x11, size: 0x1, def value: None
  bool ___restoreCamera;

  /// @brief Field offset, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___offset;

  /// @brief Field cameraFieldOfView, offset: 0x24, size: 0x4, def value: None
  float_t ___cameraFieldOfView;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings, ___overrideCamera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings, ___restoreCamera) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings, ___offset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings, ___cameraFieldOfView) == 0x24, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
// Type: UnityEngine.Experimental.Rendering.Universal::RenderObjects
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.Universal::RenderObjects*
class CORDL_TYPE RenderObjects : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  using CustomCameraSettings = ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings;

  using FilterSettings = ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings;

  using RenderObjectsSettings = ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings;

  /// @brief Field renderObjectsPass, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_renderObjectsPass,
                      put = __cordl_internal_set_renderObjectsPass))::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass* renderObjectsPass;

  /// @brief Field settings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings))::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings* settings;

  /// @brief Method AddRenderPasses, addr 0x1e213a0, size 0x24, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x1e21258, size 0x148, virtual true, abstract: false, final false
  inline void Create();

  static inline ::UnityEngine::Experimental::Rendering::Universal::RenderObjects* New_ctor();

  /// @brief Method SupportsNativeRenderPass, addr 0x1e213c4, size 0x24, virtual true, abstract: false, final false
  inline bool SupportsNativeRenderPass();

  constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*& __cordl_internal_get_renderObjectsPass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*> const& __cordl_internal_get_renderObjectsPass() const;

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*& __cordl_internal_get_settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*> const& __cordl_internal_get_settings() const;

  constexpr void __cordl_internal_set_renderObjectsPass(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass* value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings* value);

  /// @brief Method .ctor, addr 0x1e213e8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjects();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjects(RenderObjects&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjects", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjects(RenderObjects const&) = delete;

  /// @brief Field settings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings* ___settings;

  /// @brief Field renderObjectsPass, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass* ___renderObjectsPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::RenderObjects, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjects, ___settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjects, ___renderObjectsPass) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::RenderObjects);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::RenderObjects*, "UnityEngine.Experimental.Rendering.Universal", "RenderObjects");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*, "UnityEngine.Experimental.Rendering.Universal", "RenderObjects/CustomCameraSettings");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__FilterSettings*, "UnityEngine.Experimental.Rendering.Universal", "RenderObjects/FilterSettings");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__RenderObjectsSettings*, "UnityEngine.Experimental.Rendering.Universal",
                       "RenderObjects/RenderObjectsSettings");
