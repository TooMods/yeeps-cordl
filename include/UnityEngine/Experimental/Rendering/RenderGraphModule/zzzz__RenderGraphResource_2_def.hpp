#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__IRenderGraphResource_def.hpp"
CORDL_MODULE_EXPORT(RenderGraphResource_2)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename DescType, typename ResType> class RenderGraphResource_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphResource`2
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// cpp template
template <typename DescType, typename ResType>
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphResource`2<DescType,ResType>*
class CORDL_TYPE RenderGraphResource_2 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource {
public:
  // Declarations
  /// @brief Field desc, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_desc, put = __cordl_internal_set_desc)) DescType desc;

  /// @brief Field graphicsResource, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_graphicsResource, put = __cordl_internal_set_graphicsResource)) ResType graphicsResource;

  /// @brief Method IsCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsCreated();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2<DescType, ResType>* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool);

  constexpr DescType const& __cordl_internal_get_desc() const;

  constexpr DescType& __cordl_internal_get_desc();

  constexpr ResType const& __cordl_internal_get_graphicsResource() const;

  constexpr ResType& __cordl_internal_get_graphicsResource();

  constexpr void __cordl_internal_set_desc(DescType value);

  constexpr void __cordl_internal_set_graphicsResource(ResType value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResource_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResource_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResource_2(RenderGraphResource_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResource_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResource_2(RenderGraphResource_2 const&) = delete;

  /// @brief Field desc, offset: 0x30, size: 0x8, def value: None
  DescType ___desc;

  /// @brief Field graphicsResource, offset: 0x38, size: 0x8, def value: None
  ResType ___graphicsResource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResource_2, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphResource`2");
