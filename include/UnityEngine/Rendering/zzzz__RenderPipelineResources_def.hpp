#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderPipelineResources)
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineResources);
// Type: UnityEngine.Rendering::RenderPipelineResources
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::RenderPipelineResources*
class CORDL_TYPE RenderPipelineResources : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_packagePath))::StringW packagePath;

  __declspec(property(get = get_packagePath_Internal))::StringW packagePath_Internal;

  static inline ::UnityEngine::Rendering::RenderPipelineResources* New_ctor();

  /// @brief Method .ctor, addr 0x1a04674, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_packagePath, addr 0x1a04660, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_packagePath();

  /// @brief Method get_packagePath_Internal, addr 0x1a04668, size 0xc, virtual false, abstract: false, final false
  inline ::StringW get_packagePath_Internal();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineResources(RenderPipelineResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineResources(RenderPipelineResources const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineResources, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineResources*, "UnityEngine.Rendering", "RenderPipelineResources");
