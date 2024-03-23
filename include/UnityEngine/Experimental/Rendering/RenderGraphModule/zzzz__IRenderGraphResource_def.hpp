#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IRenderGraphResource)
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class IRenderGraphResource;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::IRenderGraphResource
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::IRenderGraphResource*
class CORDL_TYPE IRenderGraphResource : public ::System::Object {
public:
  // Declarations
  /// @brief Field cachedHash, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_cachedHash, put = __cordl_internal_set_cachedHash)) int32_t cachedHash;

  /// @brief Field imported, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_imported, put = __cordl_internal_set_imported)) bool imported;

  /// @brief Field m_Pool, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool))::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* m_Pool;

  /// @brief Field requestFallBack, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_requestFallBack, put = __cordl_internal_set_requestFallBack)) bool requestFallBack;

  /// @brief Field shared, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_shared, put = __cordl_internal_set_shared)) bool shared;

  /// @brief Field sharedExplicitRelease, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_sharedExplicitRelease, put = __cordl_internal_set_sharedExplicitRelease)) bool sharedExplicitRelease;

  /// @brief Field sharedResourceLastFrameUsed, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedResourceLastFrameUsed, put = __cordl_internal_set_sharedResourceLastFrameUsed)) int32_t sharedResourceLastFrameUsed;

  /// @brief Field transientPassIndex, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_transientPassIndex, put = __cordl_internal_set_transientPassIndex)) int32_t transientPassIndex;

  /// @brief Field writeCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_writeCount, put = __cordl_internal_set_writeCount)) uint32_t writeCount;

  /// @brief Method CreateGraphicsResource, addr 0x1bcca04, size 0x4, virtual true, abstract: false, final false
  inline void CreateGraphicsResource(::StringW name);

  /// @brief Method CreatePooledGraphicsResource, addr 0x1bcca00, size 0x4, virtual true, abstract: false, final false
  inline void CreatePooledGraphicsResource();

  /// @brief Method GetName, addr 0x1bcc988, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetName();

  /// @brief Method GetSortIndex, addr 0x1bcca18, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetSortIndex();

  /// @brief Method IncrementWriteCount, addr 0x1bcc9d0, size 0x10, virtual true, abstract: false, final false
  inline void IncrementWriteCount();

  /// @brief Method IsCreated, addr 0x1bcc9c8, size 0x8, virtual true, abstract: false, final false
  inline bool IsCreated();

  /// @brief Method LogCreation, addr 0x1bcca10, size 0x4, virtual true, abstract: false, final false
  inline void LogCreation(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method LogRelease, addr 0x1bcca14, size 0x4, virtual true, abstract: false, final false
  inline void LogRelease(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* logger);

  /// @brief Method NeedsFallBack, addr 0x1bcc9e0, size 0x20, virtual true, abstract: false, final false
  inline bool NeedsFallBack();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* New_ctor();

  /// @brief Method ReleaseGraphicsResource, addr 0x1bcca0c, size 0x4, virtual true, abstract: false, final false
  inline void ReleaseGraphicsResource();

  /// @brief Method ReleasePooledGraphicsResource, addr 0x1bcca08, size 0x4, virtual true, abstract: false, final false
  inline void ReleasePooledGraphicsResource(int32_t frameIndex);

  /// @brief Method Reset, addr 0x1bcc970, size 0x18, virtual true, abstract: false, final false
  inline void Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool);

  constexpr int32_t const& __cordl_internal_get_cachedHash() const;

  constexpr int32_t& __cordl_internal_get_cachedHash();

  constexpr bool const& __cordl_internal_get_imported() const;

  constexpr bool& __cordl_internal_get_imported();

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*& __cordl_internal_get_m_Pool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*> const& __cordl_internal_get_m_Pool() const;

  constexpr bool const& __cordl_internal_get_requestFallBack() const;

  constexpr bool& __cordl_internal_get_requestFallBack();

  constexpr bool const& __cordl_internal_get_shared() const;

  constexpr bool& __cordl_internal_get_shared();

  constexpr bool const& __cordl_internal_get_sharedExplicitRelease() const;

  constexpr bool& __cordl_internal_get_sharedExplicitRelease();

  constexpr int32_t const& __cordl_internal_get_sharedResourceLastFrameUsed() const;

  constexpr int32_t& __cordl_internal_get_sharedResourceLastFrameUsed();

  constexpr int32_t const& __cordl_internal_get_transientPassIndex() const;

  constexpr int32_t& __cordl_internal_get_transientPassIndex();

  constexpr uint32_t const& __cordl_internal_get_writeCount() const;

  constexpr uint32_t& __cordl_internal_get_writeCount();

  constexpr void __cordl_internal_set_cachedHash(int32_t value);

  constexpr void __cordl_internal_set_imported(bool value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* value);

  constexpr void __cordl_internal_set_requestFallBack(bool value);

  constexpr void __cordl_internal_set_shared(bool value);

  constexpr void __cordl_internal_set_sharedExplicitRelease(bool value);

  constexpr void __cordl_internal_set_sharedResourceLastFrameUsed(int32_t value);

  constexpr void __cordl_internal_set_transientPassIndex(int32_t value);

  constexpr void __cordl_internal_set_writeCount(uint32_t value);

  /// @brief Method .ctor, addr 0x1bcca20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IRenderGraphResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRenderGraphResource(IRenderGraphResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRenderGraphResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRenderGraphResource(IRenderGraphResource const&) = delete;

  /// @brief Field imported, offset: 0x10, size: 0x1, def value: None
  bool ___imported;

  /// @brief Field shared, offset: 0x11, size: 0x1, def value: None
  bool ___shared;

  /// @brief Field sharedExplicitRelease, offset: 0x12, size: 0x1, def value: None
  bool ___sharedExplicitRelease;

  /// @brief Field requestFallBack, offset: 0x13, size: 0x1, def value: None
  bool ___requestFallBack;

  /// @brief Field writeCount, offset: 0x14, size: 0x4, def value: None
  uint32_t ___writeCount;

  /// @brief Field cachedHash, offset: 0x18, size: 0x4, def value: None
  int32_t ___cachedHash;

  /// @brief Field transientPassIndex, offset: 0x1c, size: 0x4, def value: None
  int32_t ___transientPassIndex;

  /// @brief Field sharedResourceLastFrameUsed, offset: 0x20, size: 0x4, def value: None
  int32_t ___sharedResourceLastFrameUsed;

  /// @brief Field m_Pool, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* ___m_Pool;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___imported) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___shared) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___sharedExplicitRelease) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___requestFallBack) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___writeCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___cachedHash) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___transientPassIndex) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___sharedResourceLastFrameUsed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource, ___m_Pool) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "IRenderGraphResource");
