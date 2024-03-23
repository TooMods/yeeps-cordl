#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererListHandle)
namespace UnityEngine::Rendering::RendererUtils {
struct RendererList;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RendererListHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RendererListHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RendererListHandle
struct CORDL_TYPE RendererListHandle {
public:
  // Declarations
  __declspec(property(get = get_handle, put = set_handle)) int32_t handle;

  /// @brief Method IsValid, addr 0x1bcc908, size 0x8, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x1bcb860, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle);

  /// @brief Method get_handle, addr 0x1bcc848, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_handle();

  /// @brief Method op_Implicit, addr 0x1bcc858, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RendererUtils::RendererList
  op_Implicit___UnityEngine__Rendering__RendererUtils__RendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle rendererList);

  /// @brief Method op_Implicit, addr 0x1bca1fc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle handle);

  /// @brief Method set_handle, addr 0x1bcc850, size 0x8, virtual false, abstract: false, final false
  inline void set_handle(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListHandle();

  // Ctor Parameters [CppParam { name: "m_IsValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_handle_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RendererListHandle(bool m_IsValid, int32_t _handle_k__BackingField) noexcept;

  /// @brief Field m_IsValid, offset: 0x0, size: 0x1, def value: None
  bool m_IsValid;

  /// @brief Field <handle>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, m_IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, _handle_k__BackingField) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RendererListHandle");
