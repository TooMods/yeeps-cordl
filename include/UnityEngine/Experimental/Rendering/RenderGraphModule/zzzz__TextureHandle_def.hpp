#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureHandle)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::TextureHandle
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::TextureHandle
struct CORDL_TYPE TextureHandle {
public:
  // Declarations
  /// @brief Field s_NullHandle, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_NullHandle, put = setStaticF_s_NullHandle))::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle s_NullHandle;

  /// @brief Method IsValid, addr 0x1bca038, size 0x4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method SetFallBackResource, addr 0x1bccc7c, size 0x8, virtual false, abstract: false, final false
  inline void SetFallBackResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method .ctor, addr 0x1bcb250, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle, bool shared);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle getStaticF_s_NullHandle();

  /// @brief Method get_nullHandle, addr 0x1bcca28, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_nullHandle();

  /// @brief Method op_Implicit, addr 0x1bccc0c, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* op_Implicit___UnityEngine__Rendering__RTHandle_(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x1bcca80, size 0xa4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier
  op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x1bccb98, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> op_Implicit___UnityW___UnityEngine__RenderTexture_(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x1bccb24, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> op_Implicit___UnityW___UnityEngine__Texture_(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  static inline void setStaticF_s_NullHandle(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }, CppParam { name: "fallBackResource",
  // ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }]
  constexpr TextureHandle(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle handle,
                          ::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle fallBackResource) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle handle;

  /// @brief Field fallBackResource, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle fallBackResource;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, fallBackResource) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, "UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureHandle");
