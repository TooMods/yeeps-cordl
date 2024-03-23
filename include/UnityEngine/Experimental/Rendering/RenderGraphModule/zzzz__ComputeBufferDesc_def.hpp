#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ComputeBufferType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBufferDesc)
namespace UnityEngine {
struct ComputeBufferType;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ComputeBufferDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferDesc
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::ComputeBufferDesc
struct CORDL_TYPE ComputeBufferDesc {
public:
  // Declarations
  /// @brief Method GetHashCode, addr 0x1bc901c, size 0x24, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x1bc8ff4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride);

  /// @brief Method .ctor, addr 0x1bc9008, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBufferDesc();

  // Ctor Parameters [CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "stride", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type",
  // ty: "::UnityEngine::ComputeBufferType", modifiers: "", def_value: None }, CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr ComputeBufferDesc(int32_t count, int32_t stride, ::UnityEngine::ComputeBufferType type, ::StringW name) noexcept;

  /// @brief Field count, offset: 0x0, size: 0x4, def value: None
  int32_t count;

  /// @brief Field stride, offset: 0x4, size: 0x4, def value: None
  int32_t stride;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::ComputeBufferType type;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW name;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, count) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, stride) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, name) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, "UnityEngine.Experimental.Rendering.RenderGraphModule", "ComputeBufferDesc");
