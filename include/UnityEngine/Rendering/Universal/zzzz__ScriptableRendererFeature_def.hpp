#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ScriptableRendererFeature)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScriptableRendererFeature);
// Type: UnityEngine.Rendering.Universal::ScriptableRendererFeature
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::ScriptableRendererFeature*
class CORDL_TYPE ScriptableRendererFeature : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_isActive)) bool isActive;

  /// @brief Field m_Active, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) bool m_Active;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AddRenderPasses, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x27308a8, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x2730914, size 0x4, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::Rendering::Universal::ScriptableRendererFeature* New_ctor();

  /// @brief Method OnCameraPreCull, addr 0x2730878, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method OnEnable, addr 0x273087c, size 0xc, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x2730888, size 0xc, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetActive, addr 0x273089c, size 0xc, virtual false, abstract: false, final false
  inline void SetActive(bool active);

  /// @brief Method SupportsNativeRenderPass, addr 0x2730894, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsNativeRenderPass();

  constexpr bool const& __cordl_internal_get_m_Active() const;

  constexpr bool& __cordl_internal_get_m_Active();

  constexpr void __cordl_internal_set_m_Active(bool value);

  /// @brief Method .ctor, addr 0x272a948, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isActive, addr 0x2730870, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScriptableRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScriptableRendererFeature(ScriptableRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScriptableRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScriptableRendererFeature(ScriptableRendererFeature const&) = delete;

  /// @brief Field m_Active, offset: 0x18, size: 0x1, def value: None
  bool ___m_Active;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScriptableRendererFeature, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScriptableRendererFeature, ___m_Active) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScriptableRendererFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScriptableRendererFeature*, "UnityEngine.Rendering.Universal", "ScriptableRendererFeature");
