#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderQueueType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderObjectsPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering::Universal {
struct RenderQueueType;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjectsPass____c;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjects__CustomCameraSettings;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct URPProfileId;
}
namespace UnityEngine::Rendering::Universal {
class __DebugHandler__DrawFunction;
}
namespace UnityEngine::Rendering {
struct CompareFunction;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct StencilOp;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::Universal {
class RenderObjectsPass;
}
namespace UnityEngine::Experimental::Rendering::Universal {
class __RenderObjectsPass____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: false
// CS Name: ::RenderObjectsPass::<>c*
class CORDL_TYPE __RenderObjectsPass____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c* __9;

  /// @brief Field <>9__19_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__19_0, put = setStaticF___9__19_0))::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* __9__19_0;

  static inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c* New_ctor();

  /// @brief Method <Execute>b__19_0, addr 0x1e21238, size 0x20, virtual false, abstract: false, final false
  inline void _Execute_b__19_0(::UnityEngine::Rendering::ScriptableRenderContext ctx, ByRef<::UnityEngine::Rendering::Universal::RenderingData> data,
                               ByRef<::UnityEngine::Rendering::DrawingSettings> ds, ByRef<::UnityEngine::Rendering::FilteringSettings> fs, ByRef<::UnityEngine::Rendering::RenderStateBlock> rsb);

  /// @brief Method .ctor, addr 0x1e21230, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c* getStaticF___9();

  static inline ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* getStaticF___9__19_0();

  static inline void setStaticF___9(::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c* value);

  static inline void setStaticF___9__19_0(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderObjectsPass____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjectsPass____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderObjectsPass____c(__RenderObjectsPass____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderObjectsPass____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderObjectsPass____c(__RenderObjectsPass____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
// Type: UnityEngine.Experimental.Rendering.Universal::RenderObjectsPass
// SizeInfo { instance_size: 408, native_size: -1, calculated_instance_size: 408, calculated_native_size: 404, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.Universal::RenderObjectsPass*
class CORDL_TYPE RenderObjectsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using __c = ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c;

  /// @brief Field <overrideMaterialPassIndex>k__BackingField, offset 0x118, size 0x4
  __declspec(property(get = __cordl_internal_get__overrideMaterialPassIndex_k__BackingField,
                      put = __cordl_internal_set__overrideMaterialPassIndex_k__BackingField)) int32_t _overrideMaterialPassIndex_k__BackingField;

  /// @brief Field <overrideMaterial>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideMaterial_k__BackingField,
                      put = __cordl_internal_set__overrideMaterial_k__BackingField))::UnityW<::UnityEngine::Material> _overrideMaterial_k__BackingField;

  /// @brief Field m_CameraSettings, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraSettings,
                      put = __cordl_internal_set_m_CameraSettings))::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* m_CameraSettings;

  /// @brief Field m_FilteringSettings, offset 0xdc, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_ProfilerTag, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilerTag, put = __cordl_internal_set_m_ProfilerTag))::StringW m_ProfilerTag;

  /// @brief Field m_ProfilingSampler, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_RenderStateBlock, offset 0x128, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_RenderStateBlock, put = __cordl_internal_set_m_RenderStateBlock))::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;

  /// @brief Field m_ShaderTagIdList, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  __declspec(property(get = get_overrideMaterial, put = set_overrideMaterial))::UnityW<::UnityEngine::Material> overrideMaterial;

  __declspec(property(get = get_overrideMaterialPassIndex, put = set_overrideMaterialPassIndex)) int32_t overrideMaterialPassIndex;

  /// @brief Field renderQueueType, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_renderQueueType, put = __cordl_internal_set_renderQueueType))::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType;

  /// @brief Method Execute, addr 0x1e20a94, size 0x738, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*
  New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
           ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
           ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings);

  static inline ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*
  New_ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
           ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
           ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings);

  /// @brief Method SetDetphState, addr 0x1e203f4, size 0x6c, virtual false, abstract: false, final false
  inline void SetDetphState(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction function);

  /// @brief Method SetStencilState, addr 0x1e20460, size 0xe8, virtual false, abstract: false, final false
  inline void SetStencilState(int32_t reference, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::StencilOp passOp, ::UnityEngine::Rendering::StencilOp failOp,
                              ::UnityEngine::Rendering::StencilOp zFailOp);

  constexpr int32_t const& __cordl_internal_get__overrideMaterialPassIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__overrideMaterialPassIndex_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__overrideMaterial_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__overrideMaterial_k__BackingField();

  constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*& __cordl_internal_get_m_CameraSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*> const& __cordl_internal_get_m_CameraSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::StringW const& __cordl_internal_get_m_ProfilerTag() const;

  constexpr ::StringW& __cordl_internal_get_m_ProfilerTag();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock const& __cordl_internal_get_m_RenderStateBlock() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock& __cordl_internal_get_m_RenderStateBlock();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType const& __cordl_internal_get_renderQueueType() const;

  constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType& __cordl_internal_get_renderQueueType();

  constexpr void __cordl_internal_set__overrideMaterialPassIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__overrideMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CameraSettings(::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_ProfilerTag(::StringW value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  constexpr void __cordl_internal_set_renderQueueType(::UnityEngine::Experimental::Rendering::Universal::RenderQueueType value);

  /// @brief Method .ctor, addr 0x1e209ac, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                    ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                    ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings);

  /// @brief Method .ctor, addr 0x1e20548, size 0x464, virtual false, abstract: false, final false
  inline void _ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                    ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                    ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings);

  /// @brief Method get_overrideMaterial, addr 0x1e203d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_overrideMaterial();

  /// @brief Method get_overrideMaterialPassIndex, addr 0x1e203e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_overrideMaterialPassIndex();

  /// @brief Method set_overrideMaterial, addr 0x1e203dc, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterial(::UnityEngine::Material* value);

  /// @brief Method set_overrideMaterialPassIndex, addr 0x1e203ec, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideMaterialPassIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderObjectsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderObjectsPass(RenderObjectsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderObjectsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderObjectsPass(RenderObjectsPass const&) = delete;

  /// @brief Field renderQueueType, offset: 0xd8, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType ___renderQueueType;

  /// @brief Field m_FilteringSettings, offset: 0xdc, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_CameraSettings, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* ___m_CameraSettings;

  /// @brief Field m_ProfilerTag, offset: 0x100, size: 0x8, def value: None
  ::StringW ___m_ProfilerTag;

  /// @brief Field m_ProfilingSampler, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field <overrideMaterial>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____overrideMaterial_k__BackingField;

  /// @brief Field <overrideMaterialPassIndex>k__BackingField, offset: 0x118, size: 0x4, def value: None
  int32_t ____overrideMaterialPassIndex_k__BackingField;

  /// @brief Field m_ShaderTagIdList, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_RenderStateBlock, offset: 0x128, size: 0x6c, def value: None
  ::UnityEngine::Rendering::RenderStateBlock ___m_RenderStateBlock;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, 0x198>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ___renderQueueType) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ___m_FilteringSettings) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ___m_CameraSettings) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ___m_ProfilerTag) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ___m_ProfilingSampler) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ____overrideMaterial_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ____overrideMaterialPassIndex_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ___m_ShaderTagIdList) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass, ___m_RenderStateBlock) == 0x128, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*, "UnityEngine.Experimental.Rendering.Universal", "RenderObjectsPass");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*, "UnityEngine.Experimental.Rendering.Universal", "RenderObjectsPass/<>c");
