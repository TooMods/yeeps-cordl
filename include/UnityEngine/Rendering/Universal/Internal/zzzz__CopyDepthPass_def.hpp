#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CopyDepthPass)
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
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass);
// Type: UnityEngine.Rendering.Universal.Internal::CopyDepthPass
// SizeInfo { instance_size: 328, native_size: -1, calculated_instance_size: 328, calculated_native_size: 328, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::CopyDepthPass*
class CORDL_TYPE CopyDepthPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  __declspec(property(get = get_AllocateRT, put = set_AllocateRT)) bool AllocateRT;

  __declspec(property(get = get_MssaSamples, put = set_MssaSamples)) int32_t MssaSamples;

  /// @brief Field <AllocateRT>k__BackingField, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get__AllocateRT_k__BackingField, put = __cordl_internal_set__AllocateRT_k__BackingField)) bool _AllocateRT_k__BackingField;

  /// @brief Field <MssaSamples>k__BackingField, offset 0x13c, size 0x4
  __declspec(property(get = __cordl_internal_get__MssaSamples_k__BackingField, put = __cordl_internal_set__MssaSamples_k__BackingField)) int32_t _MssaSamples_k__BackingField;

  /// @brief Field <destination>k__BackingField, offset 0x108, size 0x30
  __declspec(property(get = __cordl_internal_get__destination_k__BackingField,
                      put = __cordl_internal_set__destination_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _destination_k__BackingField;

  /// @brief Field <source>k__BackingField, offset 0xd8, size 0x30
  __declspec(property(get = __cordl_internal_get__source_k__BackingField,
                      put = __cordl_internal_set__source_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _source_k__BackingField;

  __declspec(property(get = get_destination, put = set_destination))::UnityEngine::Rendering::Universal::RenderTargetHandle destination;

  /// @brief Field m_CopyDepthMaterial, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMaterial, put = __cordl_internal_set_m_CopyDepthMaterial))::UnityW<::UnityEngine::Material> m_CopyDepthMaterial;

  __declspec(property(get = get_source, put = set_source))::UnityEngine::Rendering::Universal::RenderTargetHandle source;

  /// @brief Method Execute, addr 0x29b49e8, size 0x838, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* copyDepthMaterial);

  /// @brief Method OnCameraCleanup, addr 0x29b5220, size 0xd8, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x29b4850, size 0x198, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x29b47f8, size 0x58, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::RenderTargetHandle source, ::UnityEngine::Rendering::Universal::RenderTargetHandle destination);

  constexpr bool const& __cordl_internal_get__AllocateRT_k__BackingField() const;

  constexpr bool& __cordl_internal_get__AllocateRT_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__MssaSamples_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MssaSamples_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__destination_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__destination_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__source_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__source_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CopyDepthMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CopyDepthMaterial();

  constexpr void __cordl_internal_set__AllocateRT_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MssaSamples_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x29b4754, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* copyDepthMaterial);

  /// @brief Method get_AllocateRT, addr 0x29b4730, size 0x8, virtual false, abstract: false, final false
  inline bool get_AllocateRT();

  /// @brief Method get_MssaSamples, addr 0x29b4744, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MssaSamples();

  /// @brief Method get_destination, addr 0x29b4700, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_destination();

  /// @brief Method get_source, addr 0x29b46d0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_source();

  /// @brief Method set_AllocateRT, addr 0x29b4738, size 0xc, virtual false, abstract: false, final false
  inline void set_AllocateRT(bool value);

  /// @brief Method set_MssaSamples, addr 0x29b474c, size 0x8, virtual false, abstract: false, final false
  inline void set_MssaSamples(int32_t value);

  /// @brief Method set_destination, addr 0x29b4718, size 0x18, virtual false, abstract: false, final false
  inline void set_destination(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_source, addr 0x29b46e8, size 0x18, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass(CopyDepthPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass(CopyDepthPass const&) = delete;

  /// @brief Field <source>k__BackingField, offset: 0xd8, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____source_k__BackingField;

  /// @brief Field <destination>k__BackingField, offset: 0x108, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____destination_k__BackingField;

  /// @brief Field <AllocateRT>k__BackingField, offset: 0x138, size: 0x1, def value: None
  bool ____AllocateRT_k__BackingField;

  /// @brief Field <MssaSamples>k__BackingField, offset: 0x13c, size: 0x4, def value: None
  int32_t ____MssaSamples_k__BackingField;

  /// @brief Field m_CopyDepthMaterial, offset: 0x140, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CopyDepthMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, 0x148>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____source_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____destination_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____AllocateRT_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____MssaSamples_k__BackingField) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ___m_CopyDepthMaterial) == 0x140, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass");
