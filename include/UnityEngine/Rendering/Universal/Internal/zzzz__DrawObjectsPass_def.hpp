#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrawObjectsPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __DrawObjectsPass____c;
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
class CommandBuffer;
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
struct RenderQueueRange;
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
struct StencilState;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class __DrawObjectsPass____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::DrawObjectsPass::<>c*
class CORDL_TYPE __DrawObjectsPass____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c* __9;

  /// @brief Field <>9__12_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__12_0, put = setStaticF___9__12_0))::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* __9__12_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c* New_ctor();

  /// @brief Method <Execute>b__12_0, addr 0x29b7478, size 0x20, virtual false, abstract: false, final false
  inline void _Execute_b__12_0(::UnityEngine::Rendering::ScriptableRenderContext ctx, ByRef<::UnityEngine::Rendering::Universal::RenderingData> data,
                               ByRef<::UnityEngine::Rendering::DrawingSettings> ds, ByRef<::UnityEngine::Rendering::FilteringSettings> fs, ByRef<::UnityEngine::Rendering::RenderStateBlock> rsb);

  /// @brief Method .ctor, addr 0x29b7470, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c* getStaticF___9();

  static inline ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* getStaticF___9__12_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c* value);

  static inline void setStaticF___9__12_0(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DrawObjectsPass____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DrawObjectsPass____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DrawObjectsPass____c(__DrawObjectsPass____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DrawObjectsPass____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DrawObjectsPass____c(__DrawObjectsPass____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Type: UnityEngine.Rendering.Universal.Internal::DrawObjectsPass
// SizeInfo { instance_size: 384, native_size: -1, calculated_instance_size: 384, calculated_native_size: 378, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::DrawObjectsPass*
class CORDL_TYPE DrawObjectsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c;

  /// @brief Field m_FilteringSettings, offset 0xd8, size 0x18
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings))::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_IsOpaque, offset 0x178, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOpaque, put = __cordl_internal_set_m_IsOpaque)) bool m_IsOpaque;

  /// @brief Field m_ProfilerTag, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilerTag, put = __cordl_internal_set_m_ProfilerTag))::StringW m_ProfilerTag;

  /// @brief Field m_ProfilingSampler, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_RenderStateBlock, offset 0xf0, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_RenderStateBlock, put = __cordl_internal_set_m_RenderStateBlock))::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock;

  /// @brief Field m_ShaderTagIdList, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList))::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Field m_UseDepthPriming, offset 0x179, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseDepthPriming, put = __cordl_internal_set_m_UseDepthPriming)) bool m_UseDepthPriming;

  /// @brief Field s_DrawObjectPassDataPropID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_DrawObjectPassDataPropID, put = setStaticF_s_DrawObjectPassDataPropID)) int32_t s_DrawObjectPassDataPropID;

  /// @brief Method Execute, addr 0x29b6f5c, size 0x448, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, bool opaque,
                                                                                         ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                         ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                         ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* New_ctor(::StringW profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                         ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                         ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* New_ctor(::StringW profilerTag,
                                                                                         ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> shaderTagIds,
                                                                                         bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                         ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                                                                                         ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  /// @brief Method OnCameraSetup, addr 0x29b6e84, size 0xd8, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr bool const& __cordl_internal_get_m_IsOpaque() const;

  constexpr bool& __cordl_internal_get_m_IsOpaque();

  constexpr ::StringW const& __cordl_internal_get_m_ProfilerTag() const;

  constexpr ::StringW& __cordl_internal_get_m_ProfilerTag();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock const& __cordl_internal_get_m_RenderStateBlock() const;

  constexpr ::UnityEngine::Rendering::RenderStateBlock& __cordl_internal_get_m_RenderStateBlock();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr bool const& __cordl_internal_get_m_UseDepthPriming() const;

  constexpr bool& __cordl_internal_get_m_UseDepthPriming();

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_IsOpaque(bool value);

  constexpr void __cordl_internal_set_m_ProfilerTag(::StringW value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  constexpr void __cordl_internal_set_m_UseDepthPriming(bool value);

  /// @brief Method .ctor, addr 0x29b6d84, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                    ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  /// @brief Method .ctor, addr 0x29b6c04, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(::StringW profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                    ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  /// @brief Method .ctor, addr 0x29b692c, size 0x2d8, virtual false, abstract: false, final false
  inline void _ctor(::StringW profilerTag, ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> shaderTagIds, bool opaque,
                    ::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask,
                    ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  static inline int32_t getStaticF_s_DrawObjectPassDataPropID();

  static inline void setStaticF_s_DrawObjectPassDataPropID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawObjectsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawObjectsPass(DrawObjectsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawObjectsPass(DrawObjectsPass const&) = delete;

  /// @brief Field m_FilteringSettings, offset: 0xd8, size: 0x18, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_RenderStateBlock, offset: 0xf0, size: 0x6c, def value: None
  ::UnityEngine::Rendering::RenderStateBlock ___m_RenderStateBlock;

  /// @brief Field m_ShaderTagIdList, offset: 0x160, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_ProfilerTag, offset: 0x168, size: 0x8, def value: None
  ::StringW ___m_ProfilerTag;

  /// @brief Field m_ProfilingSampler, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field m_IsOpaque, offset: 0x178, size: 0x1, def value: None
  bool ___m_IsOpaque;

  /// @brief Field m_UseDepthPriming, offset: 0x179, size: 0x1, def value: None
  bool ___m_UseDepthPriming;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, 0x180>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_FilteringSettings) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_RenderStateBlock) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_ShaderTagIdList) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_ProfilerTag) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_ProfilingSampler) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_IsOpaque) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass, ___m_UseDepthPriming) == 0x179, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*, "UnityEngine.Rendering.Universal.Internal", "DrawObjectsPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::__DrawObjectsPass____c*, "UnityEngine.Rendering.Universal.Internal", "DrawObjectsPass/<>c");
