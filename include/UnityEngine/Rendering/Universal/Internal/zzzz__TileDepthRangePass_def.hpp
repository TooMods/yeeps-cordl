#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TileDepthRangePass)
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class TileDepthRangePass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass);
// Type: UnityEngine.Rendering.Universal.Internal::TileDepthRangePass
// SizeInfo { instance_size: 232, native_size: -1, calculated_instance_size: 232, calculated_native_size: 228, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::TileDepthRangePass*
class CORDL_TYPE TileDepthRangePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_DeferredLights, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights))::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_PassIndex, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PassIndex, put = __cordl_internal_set_m_PassIndex)) int32_t m_PassIndex;

  /// @brief Method Configure, addr 0x1614994, size 0x184, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x1614b18, size 0x34, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                            ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights, int32_t passIndex);

  /// @brief Method OnCameraCleanup, addr 0x1614b4c, size 0xf8, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const& __cordl_internal_get_m_DeferredLights() const;

  constexpr int32_t const& __cordl_internal_get_m_PassIndex() const;

  constexpr int32_t& __cordl_internal_get_m_PassIndex();

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_PassIndex(int32_t value);

  /// @brief Method .ctor, addr 0x16148e8, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights, int32_t passIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TileDepthRangePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TileDepthRangePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TileDepthRangePass(TileDepthRangePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TileDepthRangePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TileDepthRangePass(TileDepthRangePass const&) = delete;

  /// @brief Field m_DeferredLights, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_PassIndex, offset: 0xe0, size: 0x4, def value: None
  int32_t ___m_PassIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass, 0xe8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass, ___m_DeferredLights) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass, ___m_PassIndex) == 0xe0, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::TileDepthRangePass*, "UnityEngine.Rendering.Universal.Internal", "TileDepthRangePass");
