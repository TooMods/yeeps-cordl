#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBufferHandle)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ComputeBufferHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferHandle
struct CORDL_TYPE ComputeBufferHandle {
public:
  // Declarations
  /// @brief Field s_NullHandle, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NullHandle, put = setStaticF_s_NullHandle))::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle s_NullHandle;

  /// @brief Method IsValid, addr 0x1bc8eb0, size 0x4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x1bc8d7c, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle, bool shared);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle getStaticF_s_NullHandle();

  /// @brief Method get_nullHandle, addr 0x1bc8d24, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle get_nullHandle();

  /// @brief Method op_Implicit, addr 0x1bc8e40, size 0x70, virtual false, abstract: false, final false
  static inline ::UnityEngine::ComputeBuffer* op_Implicit___UnityEngine__ComputeBuffer_(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle buffer);

  static inline void setStaticF_s_NullHandle(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBufferHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None }]
  constexpr ComputeBufferHandle(::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, "UnityEngine.Experimental.Rendering.RenderGraphModule", "ComputeBufferHandle");
