#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(CapturePass)
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class CapturePass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::CapturePass);
// Type: UnityEngine.Rendering.Universal::CapturePass
// SizeInfo { instance_size: 264, native_size: -1, calculated_instance_size: 264, calculated_native_size: 264, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::CapturePass*
class CORDL_TYPE CapturePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_CameraColorHandle, offset 0xd8, size 0x30
  __declspec(property(get = __cordl_internal_get_m_CameraColorHandle, put = __cordl_internal_set_m_CameraColorHandle))::UnityEngine::Rendering::Universal::RenderTargetHandle m_CameraColorHandle;

  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Method Execute, addr 0x2727be8, size 0x324, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::CapturePass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method Setup, addr 0x2727bd0, size 0x18, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::RenderTargetHandle colorHandle);

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get_m_CameraColorHandle() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get_m_CameraColorHandle();

  constexpr void __cordl_internal_set_m_CameraColorHandle(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method .ctor, addr 0x2727b3c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CapturePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CapturePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CapturePass(CapturePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CapturePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CapturePass(CapturePass const&) = delete;

  /// @brief Field m_CameraColorHandle, offset: 0xd8, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ___m_CameraColorHandle;

  /// @brief Field m_ProfilerTag offset 0xffffffff size 0x8
  static constexpr ::ConstString m_ProfilerTag{ u"Capture Pass" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CapturePass, 0x108>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::CapturePass, ___m_CameraColorHandle) == 0xd8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::CapturePass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CapturePass*, "UnityEngine.Rendering.Universal", "CapturePass");
