#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResource_2_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextureResource)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class TextureResource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::TextureResource
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::TextureResource*
class CORDL_TYPE TextureResource : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc,
                                                                                                                           ::UnityEngine::Rendering::RTHandle*> {
public:
  // Declarations
  /// @brief Field m_TextureCreationIndex, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_TextureCreationIndex, put = setStaticF_m_TextureCreationIndex)) int32_t m_TextureCreationIndex;

  /// @brief Method CreateGraphicsResource, addr 0x1bcd2a0, size 0x3bc, virtual true, abstract: false, final false
  inline void CreateGraphicsResource(::StringW name);

  /// @brief Method CreatePooledGraphicsResource, addr 0x1bccfb0, size 0x180, virtual true, abstract: false, final false
  inline void CreatePooledGraphicsResource();

  /// @brief Method GetName, addr 0x1bccf44, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method LogCreation, addr 0x1bcd6b4, size 0x110, virtual true, abstract: false, final false
  inline void LogCreation(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method LogRelease, addr 0x1bcd7c4, size 0xd0, virtual true, abstract: false, final false
  inline void LogRelease(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x1bcd65c, size 0x58, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method ReleasePooledGraphicsResource, addr 0x1bcd130, size 0x170, virtual true, abstract: false, final false
  inline void ReleasePooledGraphicsResource(int32_t frameIndex);

  /// @brief Method .ctor, addr 0x1bcd894, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_m_TextureCreationIndex();

  static inline void setStaticF_m_TextureCreationIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureResource(TextureResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureResource(TextureResource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "TextureResource");
