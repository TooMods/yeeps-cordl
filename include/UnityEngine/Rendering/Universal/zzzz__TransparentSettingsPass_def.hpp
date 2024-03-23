#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(TransparentSettingsPass)
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
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
class TransparentSettingsPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::TransparentSettingsPass);
// Type: UnityEngine.Rendering.Universal::TransparentSettingsPass
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 217, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::TransparentSettingsPass*
class CORDL_TYPE TransparentSettingsPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field m_ProfilingSampler, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_ProfilingSampler, put = setStaticF_m_ProfilingSampler))::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_shouldReceiveShadows, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_shouldReceiveShadows, put = __cordl_internal_set_m_shouldReceiveShadows)) bool m_shouldReceiveShadows;

  /// @brief Method Execute, addr 0x27285a4, size 0x200, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::TransparentSettingsPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool shadowReceiveSupported);

  /// @brief Method Setup, addr 0x2728594, size 0x10, virtual false, abstract: false, final false
  inline bool Setup(ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  constexpr bool const& __cordl_internal_get_m_shouldReceiveShadows() const;

  constexpr bool& __cordl_internal_get_m_shouldReceiveShadows();

  constexpr void __cordl_internal_set_m_shouldReceiveShadows(bool value);

  /// @brief Method .ctor, addr 0x27284f4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool shadowReceiveSupported);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingSampler();

  static inline void setStaticF_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransparentSettingsPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransparentSettingsPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransparentSettingsPass(TransparentSettingsPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransparentSettingsPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransparentSettingsPass(TransparentSettingsPass const&) = delete;

  /// @brief Field m_shouldReceiveShadows, offset: 0xd8, size: 0x1, def value: None
  bool ___m_shouldReceiveShadows;

  /// @brief Field m_ProfilerTag offset 0xffffffff size 0x8
  static constexpr ::ConstString m_ProfilerTag{ u"Transparent Settings Pass" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::TransparentSettingsPass, 0xe0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::TransparentSettingsPass, ___m_shouldReceiveShadows) == 0xd8, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TransparentSettingsPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TransparentSettingsPass*, "UnityEngine.Rendering.Universal", "TransparentSettingsPass");
