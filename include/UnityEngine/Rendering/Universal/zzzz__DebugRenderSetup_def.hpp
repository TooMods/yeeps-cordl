#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugRenderSetup)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugRenderSetup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugRenderSetup);
// Type: UnityEngine.Rendering.Universal::DebugRenderSetup
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::DebugRenderSetup*
class CORDL_TYPE DebugRenderSetup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LightingSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* LightingSettings;

  __declspec(property(get = get_MaterialSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* MaterialSettings;

  __declspec(property(get = get_RenderingSettings))::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* RenderingSettings;

  /// @brief Field m_CommandBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandBuffer, put = __cordl_internal_set_m_CommandBuffer))::UnityEngine::Rendering::CommandBuffer* m_CommandBuffer;

  /// @brief Field m_Context, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Context, put = __cordl_internal_set_m_Context))::UnityEngine::Rendering::ScriptableRenderContext m_Context;

  /// @brief Field m_DebugHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugHandler, put = __cordl_internal_set_m_DebugHandler))::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler;

  /// @brief Field m_Index, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Begin, addr 0x2c65438, size 0x94, virtual false, abstract: false, final false
  inline void Begin();

  /// @brief Method CreateDrawingSettings, addr 0x2c64828, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::DrawingSettings drawingSettings);

  /// @brief Method Dispose, addr 0x2c650fc, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method End, addr 0x2c654cc, size 0x70, virtual false, abstract: false, final false
  inline void End();

  /// @brief Method GetRenderStateBlock, addr 0x2c648fc, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderStateBlock GetRenderStateBlock(::UnityEngine::Rendering::RenderStateBlock renderStateBlock);

  static inline ::UnityEngine::Rendering::Universal::DebugRenderSetup* New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                                ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer,
                                                                                int32_t index);

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_CommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get_m_CommandBuffer() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext const& __cordl_internal_get_m_Context() const;

  constexpr ::UnityEngine::Rendering::ScriptableRenderContext& __cordl_internal_get_m_Context();

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get_m_DebugHandler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::DebugHandler*> const& __cordl_internal_get_m_DebugHandler() const;

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr void __cordl_internal_set_m_CommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_Context(::UnityEngine::Rendering::ScriptableRenderContext value);

  constexpr void __cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  /// @brief Method .ctor, addr 0x2c65100, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* commandBuffer,
                    int32_t index);

  /// @brief Method get_LightingSettings, addr 0x2c65414, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings();

  /// @brief Method get_MaterialSettings, addr 0x2c653cc, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings();

  /// @brief Method get_RenderingSettings, addr 0x2c653f0, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugRenderSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugRenderSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugRenderSetup(DebugRenderSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugRenderSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugRenderSetup(DebugRenderSetup const&) = delete;

  /// @brief Field m_DebugHandler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ___m_DebugHandler;

  /// @brief Field m_Context, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ScriptableRenderContext ___m_Context;

  /// @brief Field m_CommandBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_CommandBuffer;

  /// @brief Field m_Index, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugRenderSetup, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRenderSetup, ___m_DebugHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRenderSetup, ___m_Context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRenderSetup, ___m_CommandBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRenderSetup, ___m_Index) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugRenderSetup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugRenderSetup*, "UnityEngine.Rendering.Universal", "DebugRenderSetup");
