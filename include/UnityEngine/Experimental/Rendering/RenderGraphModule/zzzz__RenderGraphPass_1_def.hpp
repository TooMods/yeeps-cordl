#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphPass_1)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename PassData> class RenderFunc_1;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphContext;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename PassData> class RenderGraphPass_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphPass`1
// SizeInfo { instance_size: 144, native_size: 144, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// cpp template
template <typename PassData>
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphPass`1<PassData>*
class CORDL_TYPE RenderGraphPass_1 : public ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass {
public:
  // Declarations
  /// @brief Field data, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) PassData data;

  /// @brief Field renderFunc, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_renderFunc, put = __cordl_internal_set_renderFunc))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* renderFunc;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext);

  /// @brief Method HasRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool HasRenderFunc();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize(int32_t passIndex, PassData passData, ::StringW passName, ::UnityEngine::Rendering::ProfilingSampler* sampler);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1<PassData>* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* pool);

  constexpr PassData const& __cordl_internal_get_data() const;

  constexpr PassData& __cordl_internal_get_data();

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*& __cordl_internal_get_renderFunc();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>*> const& __cordl_internal_get_renderFunc() const;

  constexpr void __cordl_internal_set_data(PassData value);

  constexpr void __cordl_internal_set_renderFunc(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphPass_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphPass_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphPass_1(RenderGraphPass_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphPass_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphPass_1(RenderGraphPass_1 const&) = delete;

  /// @brief Field data, offset: 0x80, size: 0x8, def value: None
  PassData ___data;

  /// @brief Field renderFunc, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* ___renderFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass_1, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphPass`1");
