#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CopyColorPass)
namespace UnityEngine::Rendering::Universal {
struct Downsampling;
}
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
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyColorPass);
// Type: UnityEngine.Rendering.Universal.Internal::CopyColorPass
// SizeInfo { instance_size: 336, native_size: -1, calculated_instance_size: 336, calculated_native_size: 336, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::CopyColorPass*
class CORDL_TYPE CopyColorPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  /// @brief Field <destination>k__BackingField, offset 0x120, size 0x30
  __declspec(property(get = __cordl_internal_get__destination_k__BackingField,
                      put = __cordl_internal_set__destination_k__BackingField))::UnityEngine::Rendering::Universal::RenderTargetHandle _destination_k__BackingField;

  /// @brief Field <source>k__BackingField, offset 0xf8, size 0x28
  __declspec(property(get = __cordl_internal_get__source_k__BackingField, put = __cordl_internal_set__source_k__BackingField))::UnityEngine::Rendering::RenderTargetIdentifier _source_k__BackingField;

  __declspec(property(get = get_destination, put = set_destination))::UnityEngine::Rendering::Universal::RenderTargetHandle destination;

  /// @brief Field m_CopyColorMaterial, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyColorMaterial, put = __cordl_internal_set_m_CopyColorMaterial))::UnityW<::UnityEngine::Material> m_CopyColorMaterial;

  /// @brief Field m_DownsamplingMethod, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DownsamplingMethod, put = __cordl_internal_set_m_DownsamplingMethod))::UnityEngine::Rendering::Universal::Downsampling m_DownsamplingMethod;

  /// @brief Field m_SampleOffsetShaderHandle, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SampleOffsetShaderHandle, put = __cordl_internal_set_m_SampleOffsetShaderHandle)) int32_t m_SampleOffsetShaderHandle;

  /// @brief Field m_SamplingMaterial, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial))::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  __declspec(property(get = get_source, put = set_source))::UnityEngine::Rendering::RenderTargetIdentifier source;

  /// @brief Method Execute, addr 0x29b3ed8, size 0x6c0, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* samplingMaterial,
                                                                                       ::UnityEngine::Material* copyColorMaterial);

  /// @brief Method OnCameraCleanup, addr 0x29b4598, size 0x138, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x29b3d84, size 0x154, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Setup, addr 0x29b3d54, size 0x30, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::Universal::RenderTargetHandle destination,
                    ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle const& __cordl_internal_get__destination_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderTargetHandle& __cordl_internal_get__destination_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__source_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__source_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CopyColorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CopyColorMaterial();

  constexpr ::UnityEngine::Rendering::Universal::Downsampling const& __cordl_internal_get_m_DownsamplingMethod() const;

  constexpr ::UnityEngine::Rendering::Universal::Downsampling& __cordl_internal_get_m_DownsamplingMethod();

  constexpr int32_t const& __cordl_internal_get_m_SampleOffsetShaderHandle() const;

  constexpr int32_t& __cordl_internal_get_m_SampleOffsetShaderHandle();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial();

  constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  constexpr void __cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_CopyColorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DownsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value);

  constexpr void __cordl_internal_set_m_SampleOffsetShaderHandle(int32_t value);

  constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x29b3c7c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* samplingMaterial, ::UnityEngine::Material* copyColorMaterial);

  /// @brief Method get_destination, addr 0x29b3c54, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderTargetHandle get_destination();

  /// @brief Method get_source, addr 0x29b3c1c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_source();

  /// @brief Method set_destination, addr 0x29b3c68, size 0x14, virtual false, abstract: false, final false
  inline void set_destination(::UnityEngine::Rendering::Universal::RenderTargetHandle value);

  /// @brief Method set_source, addr 0x29b3c38, size 0x1c, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Rendering::RenderTargetIdentifier value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyColorPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyColorPass(CopyColorPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyColorPass(CopyColorPass const&) = delete;

  /// @brief Field m_SampleOffsetShaderHandle, offset: 0xd8, size: 0x4, def value: None
  int32_t ___m_SampleOffsetShaderHandle;

  /// @brief Field m_SamplingMaterial, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_DownsamplingMethod, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::Downsampling ___m_DownsamplingMethod;

  /// @brief Field m_CopyColorMaterial, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CopyColorMaterial;

  /// @brief Field <source>k__BackingField, offset: 0xf8, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____source_k__BackingField;

  /// @brief Field <destination>k__BackingField, offset: 0x120, size: 0x30, def value: None
  ::UnityEngine::Rendering::Universal::RenderTargetHandle ____destination_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyColorPass, 0x150>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_SampleOffsetShaderHandle) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_SamplingMaterial) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_DownsamplingMethod) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_CopyColorMaterial) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ____source_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ____destination_k__BackingField) == 0x120, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyColorPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass");
