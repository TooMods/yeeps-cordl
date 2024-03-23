#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__FastMemoryFlags_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(FastMemoryDesc)
namespace UnityEngine::Rendering {
struct FastMemoryFlags;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct FastMemoryDesc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::FastMemoryDesc
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::FastMemoryDesc
struct CORDL_TYPE FastMemoryDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FastMemoryDesc();

  // Ctor Parameters [CppParam { name: "inFastMemory", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::Rendering::FastMemoryFlags", modifiers: "",
  // def_value: None }, CppParam { name: "residencyFraction", ty: "float_t", modifiers: "", def_value: None }]
  constexpr FastMemoryDesc(bool inFastMemory, ::UnityEngine::Rendering::FastMemoryFlags flags, float_t residencyFraction) noexcept;

  /// @brief Field inFastMemory, offset: 0x0, size: 0x1, def value: None
  bool inFastMemory;

  /// @brief Field flags, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::FastMemoryFlags flags;

  /// @brief Field residencyFraction, offset: 0x8, size: 0x4, def value: None
  float_t residencyFraction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc, inFastMemory) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc, flags) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc, residencyFraction) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::FastMemoryDesc, "UnityEngine.Experimental.Rendering.RenderGraphModule", "FastMemoryDesc");
