#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphResourceRegistry)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ComputeBufferDesc;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ComputeBufferHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class ComputeBufferResource;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class IRenderGraphResourcePool;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class IRenderGraphResource;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphContext;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphResourceType;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RendererListResource;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class TextureResource;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphResourceRegistry__RenderGraphResourcesData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphResourceRegistry__ResourceCallback;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererList;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphResourceRegistry__RenderGraphResourcesData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraphResourceRegistry__ResourceCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback);
// Type: ::ResourceCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraphResourceRegistry::ResourceCallback*
class CORDL_TYPE __RenderGraphResourceRegistry__ResourceCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1bcc814, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext,
                                             ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1bcc83c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1bcc800, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1bca78c, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphResourceRegistry__ResourceCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphResourceRegistry__ResourceCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraphResourceRegistry__ResourceCallback(__RenderGraphResourceRegistry__ResourceCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphResourceRegistry__ResourceCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraphResourceRegistry__ResourceCallback(__RenderGraphResourceRegistry__ResourceCallback const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::RenderGraphResourcesData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraphResourceRegistry::RenderGraphResourcesData*
class CORDL_TYPE __RenderGraphResourceRegistry__RenderGraphResourcesData : public ::System::Object {
public:
  // Declarations
  /// @brief Field createResourceCallback, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_createResourceCallback,
               put = __cordl_internal_set_createResourceCallback))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* createResourceCallback;

  /// @brief Field pool, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_pool, put = __cordl_internal_set_pool))::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* pool;

  /// @brief Field releaseResourceCallback, offset 0x30, size 0x8
  __declspec(
      property(get = __cordl_internal_get_releaseResourceCallback,
               put = __cordl_internal_set_releaseResourceCallback))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* releaseResourceCallback;

  /// @brief Field resourceArray, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_resourceArray,
               put = __cordl_internal_set_resourceArray))::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>* resourceArray;

  /// @brief Field sharedResourcesCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_sharedResourcesCount, put = __cordl_internal_set_sharedResourcesCount)) int32_t sharedResourcesCount;

  /// @brief Method AddNewRenderGraphResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename ResType> inline int32_t AddNewRenderGraphResource(ByRef<ResType> outRes, bool pooledResource);

  /// @brief Method Cleanup, addr 0x1bcc6f4, size 0x9c, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x1bcc550, size 0x84, virtual false, abstract: false, final false
  inline void Clear(bool onException, int32_t frameIndex);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData* New_ctor();

  /// @brief Method PurgeUnusedGraphicsResources, addr 0x1bcc63c, size 0x20, virtual false, abstract: false, final false
  inline void PurgeUnusedGraphicsResources(int32_t frameIndex);

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*& __cordl_internal_get_createResourceCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*> const&
  __cordl_internal_get_createResourceCallback() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*& __cordl_internal_get_pool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*> const& __cordl_internal_get_pool() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*& __cordl_internal_get_releaseResourceCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*> const&
  __cordl_internal_get_releaseResourceCallback() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>*& __cordl_internal_get_resourceArray();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>*> const&
  __cordl_internal_get_resourceArray() const;

  constexpr int32_t const& __cordl_internal_get_sharedResourcesCount() const;

  constexpr int32_t& __cordl_internal_get_sharedResourcesCount();

  constexpr void __cordl_internal_set_createResourceCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* value);

  constexpr void __cordl_internal_set_pool(::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* value);

  constexpr void __cordl_internal_set_releaseResourceCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* value);

  constexpr void __cordl_internal_set_resourceArray(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>* value);

  constexpr void __cordl_internal_set_sharedResourcesCount(int32_t value);

  /// @brief Method .ctor, addr 0x1bca710, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraphResourceRegistry__RenderGraphResourcesData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphResourceRegistry__RenderGraphResourcesData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraphResourceRegistry__RenderGraphResourcesData(__RenderGraphResourceRegistry__RenderGraphResourcesData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraphResourceRegistry__RenderGraphResourcesData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraphResourceRegistry__RenderGraphResourcesData(__RenderGraphResourceRegistry__RenderGraphResourcesData const&) = delete;

  /// @brief Field resourceArray, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>* ___resourceArray;

  /// @brief Field sharedResourcesCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___sharedResourcesCount;

  /// @brief Field pool, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* ___pool;

  /// @brief Field createResourceCallback, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* ___createResourceCallback;

  /// @brief Field releaseResourceCallback, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* ___releaseResourceCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData, ___resourceArray) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData, ___sharedResourcesCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData, ___pool) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData, ___createResourceCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData, ___releaseResourceCallback) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphResourceRegistry
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphResourceRegistry*
class CORDL_TYPE RenderGraphResourceRegistry : public ::System::Object {
public:
  // Declarations
  using RenderGraphResourcesData = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData;

  using ResourceCallback = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback;

  /// @brief Field m_ActiveRendererLists, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveRendererLists,
                      put = __cordl_internal_set_m_ActiveRendererLists))::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>* m_ActiveRendererLists;

  /// @brief Field m_CurrentBackbuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentBackbuffer, put = __cordl_internal_set_m_CurrentBackbuffer))::UnityEngine::Rendering::RTHandle* m_CurrentBackbuffer;

  /// @brief Field m_CurrentFrameIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameIndex, put = __cordl_internal_set_m_CurrentFrameIndex)) int32_t m_CurrentFrameIndex;

  /// @brief Field m_CurrentRegistry, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_CurrentRegistry,
                             put = setStaticF_m_CurrentRegistry))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_CurrentRegistry;

  /// @brief Field m_ExecutionCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExecutionCount, put = __cordl_internal_set_m_ExecutionCount)) int32_t m_ExecutionCount;

  /// @brief Field m_FrameInformationLogger, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameInformationLogger,
                      put = __cordl_internal_set_m_FrameInformationLogger))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_FrameInformationLogger;

  /// @brief Field m_RenderGraphDebug, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphDebug,
                      put = __cordl_internal_set_m_RenderGraphDebug))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_RenderGraphDebug;

  /// @brief Field m_RenderGraphResources, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphResources, put = __cordl_internal_set_m_RenderGraphResources))::ArrayW<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
      ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*> m_RenderGraphResources;

  /// @brief Field m_RendererListResources, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RendererListResources, put = __cordl_internal_set_m_RendererListResources))::UnityEngine::Rendering::DynamicArray_1<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>* m_RendererListResources;

  /// @brief Field m_ResourceLogger, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ResourceLogger,
                      put = __cordl_internal_set_m_ResourceLogger))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_ResourceLogger;

  /// @brief Method BeginExecute, addr 0x1bcaa70, size 0x54, virtual false, abstract: false, final false
  inline void BeginExecute(int32_t currentFrameIndex);

  /// @brief Method BeginRenderGraph, addr 0x1bca904, size 0xac, virtual false, abstract: false, final false
  inline void BeginRenderGraph(int32_t executionCount);

  /// @brief Method CheckHandleValidity, addr 0x1bcac60, size 0x10, virtual false, abstract: false, final false
  inline void CheckHandleValidity(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method CheckHandleValidity, addr 0x1bcac78, size 0x11c, virtual false, abstract: false, final false
  inline void CheckHandleValidity(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method Cleanup, addr 0x1bcc65c, size 0x98, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x1bcc304, size 0xcc, virtual false, abstract: false, final false
  inline void Clear(bool onException);

  /// @brief Method CreateComputeBuffer, addr 0x1bc712c, size 0xd4, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle CreateComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc,
                                                                                                            int32_t transientPassIndex);

  /// @brief Method CreatePooledResource, addr 0x1bcba2c, size 0x128, virtual false, abstract: false, final false
  inline void CreatePooledResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, int32_t type, int32_t index);

  /// @brief Method CreateRendererList, addr 0x1bcb7a0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  /// @brief Method CreateRendererLists, addr 0x1bcc088, size 0x27c, virtual false, abstract: false, final false
  inline void CreateRendererLists(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* rendererLists,
                                  ::UnityEngine::Rendering::ScriptableRenderContext context, bool manualDispatch);

  /// @brief Method CreateSharedTexture, addr 0x1bcb2e8, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateSharedTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                                      bool explicitRelease);

  /// @brief Method CreateTexture, addr 0x1bc6d6c, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                                int32_t transientPassIndex);

  /// @brief Method CreateTextureCallback, addr 0x1bcbb54, size 0x244, virtual false, abstract: false, final false
  inline void CreateTextureCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext,
                                    ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res);

  /// @brief Method EndExecute, addr 0x1bcac20, size 0x40, virtual false, abstract: false, final false
  inline void EndExecute();

  /// @brief Method FlushLogs, addr 0x1bcc790, size 0x70, virtual false, abstract: false, final false
  inline void FlushLogs();

  /// @brief Method ForceTextureClear, addr 0x1bc6ab8, size 0x68, virtual false, abstract: false, final false
  inline void ForceTextureClear(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle, ::UnityEngine::Color clearColor);

  /// @brief Method GetComputeBuffer, addr 0x1bc8eb4, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::ComputeBuffer* GetComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> handle);

  /// @brief Method GetComputeBufferResource, addr 0x1bca204, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource*
  GetComputeBufferResource(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method GetComputeBufferResourceCount, addr 0x1bcb928, size 0x68, virtual false, abstract: false, final false
  inline int32_t GetComputeBufferResourceCount();

  /// @brief Method GetComputeBufferResourceDesc, addr 0x1bc7274, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc
  GetComputeBufferResourceDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method GetRenderGraphResourceName, addr 0x1bcad94, size 0xac, virtual false, abstract: false, final false
  inline ::StringW GetRenderGraphResourceName(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetRenderGraphResourceName, addr 0x1bcae40, size 0xac, virtual false, abstract: false, final false
  inline ::StringW GetRenderGraphResourceName(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method GetRenderGraphResourceTransientIndex, addr 0x1bcb0fc, size 0xa8, virtual false, abstract: false, final false
  inline int32_t GetRenderGraphResourceTransientIndex(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method GetRendererList, addr 0x1bca138, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererUtils::RendererList GetRendererList(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> handle);

  /// @brief Method GetTexture, addr 0x1bc9e74, size 0x1c4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> handle);

  /// @brief Method GetTextureResource, addr 0x1bca03c, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource* GetTextureResource(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method GetTextureResourceCount, addr 0x1bcb73c, size 0x64, virtual false, abstract: false, final false
  inline int32_t GetTextureResourceCount();

  /// @brief Method GetTextureResourceDesc, addr 0x1bc69b4, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc GetTextureResourceDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle);

  /// @brief Method ImportBackbuffer, addr 0x1bcb5f4, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method ImportComputeBuffer, addr 0x1bcb870, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle ImportComputeBuffer(::UnityEngine::ComputeBuffer* computeBuffer);

  /// @brief Method ImportTexture, addr 0x1bcb1a4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt);

  /// @brief Method IncrementWriteCount, addr 0x1bc64cc, size 0xac, virtual false, abstract: false, final false
  inline void IncrementWriteCount(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsGraphicsResourceCreated, addr 0x1bcaf44, size 0xac, virtual false, abstract: false, final false
  inline bool IsGraphicsResourceCreated(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsRenderGraphResourceImported, addr 0x1bc66c4, size 0xa8, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceImported(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method IsRenderGraphResourceImported, addr 0x1bcb054, size 0xa8, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceImported(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method IsRenderGraphResourceShared, addr 0x1bcaeec, size 0x58, virtual false, abstract: false, final false
  inline bool IsRenderGraphResourceShared(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index);

  /// @brief Method IsRendererListCreated, addr 0x1bcaff0, size 0x64, virtual false, abstract: false, final false
  inline bool IsRendererListCreated(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> res);

  /// @brief Method LogResources, addr 0x1bcc3d0, size 0x180, virtual false, abstract: false, final false
  inline void LogResources();

  /// @brief Method ManageSharedRenderGraphResources, addr 0x1bcaac4, size 0x15c, virtual false, abstract: false, final false
  inline void ManageSharedRenderGraphResources();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* New_ctor();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*
  New_ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
           ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger);

  /// @brief Method PurgeUnusedGraphicsResources, addr 0x1bcc5d4, size 0x68, virtual false, abstract: false, final false
  inline void PurgeUnusedGraphicsResources();

  /// @brief Method ReleasePooledResource, addr 0x1bcbd98, size 0x12c, virtual false, abstract: false, final false
  inline void ReleasePooledResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, int32_t type, int32_t index);

  /// @brief Method ReleaseSharedTexture, addr 0x1bcb4bc, size 0x138, virtual false, abstract: false, final false
  inline void ReleaseSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method ReleaseTextureCallback, addr 0x1bcbec4, size 0x1c4, virtual false, abstract: false, final false
  inline void ReleaseTextureCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext,
                                     ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res);

  /// @brief Method TextureNeedsFallback, addr 0x1bc676c, size 0x64, virtual false, abstract: false, final false
  inline bool TextureNeedsFallback(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> handle);

  /// @brief Method UpdateSharedResourceLastFrameIndex, addr 0x1bcb990, size 0x9c, virtual false, abstract: false, final false
  inline void UpdateSharedResourceLastFrameIndex(int32_t type, int32_t index);

  /// @brief Method ValidateComputeBufferDesc, addr 0x1bcb924, size 0x4, virtual false, abstract: false, final false
  inline void ValidateComputeBufferDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc);

  /// @brief Method ValidateRendererListDesc, addr 0x1bcb840, size 0x4, virtual false, abstract: false, final false
  inline void ValidateRendererListDesc(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  /// @brief Method ValidateTextureDesc, addr 0x1bcb738, size 0x4, virtual false, abstract: false, final false
  inline void ValidateTextureDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>*& __cordl_internal_get_m_ActiveRendererLists();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>*> const&
  __cordl_internal_get_m_ActiveRendererLists() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CurrentBackbuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::RTHandle*> const& __cordl_internal_get_m_CurrentBackbuffer() const;

  constexpr int32_t const& __cordl_internal_get_m_CurrentFrameIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentFrameIndex();

  constexpr int32_t const& __cordl_internal_get_m_ExecutionCount() const;

  constexpr int32_t& __cordl_internal_get_m_ExecutionCount();

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*& __cordl_internal_get_m_FrameInformationLogger();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*> const& __cordl_internal_get_m_FrameInformationLogger() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*& __cordl_internal_get_m_RenderGraphDebug();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*> const& __cordl_internal_get_m_RenderGraphDebug() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
                     ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*> const&
  __cordl_internal_get_m_RenderGraphResources() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
                     ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*>&
  __cordl_internal_get_m_RenderGraphResources();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>*& __cordl_internal_get_m_RendererListResources();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>*> const&
  __cordl_internal_get_m_RendererListResources() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*& __cordl_internal_get_m_ResourceLogger();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*> const& __cordl_internal_get_m_ResourceLogger() const;

  constexpr void __cordl_internal_set_m_ActiveRendererLists(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>* value);

  constexpr void __cordl_internal_set_m_CurrentBackbuffer(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CurrentFrameIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ExecutionCount(int32_t value);

  constexpr void __cordl_internal_set_m_FrameInformationLogger(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* value);

  constexpr void __cordl_internal_set_m_RenderGraphDebug(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* value);

  constexpr void __cordl_internal_set_m_RenderGraphResources(::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
                                                                      ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*>
                                                                 value);

  constexpr void __cordl_internal_set_m_RendererListResources(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>* value);

  constexpr void __cordl_internal_set_m_ResourceLogger(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* value);

  /// @brief Method .ctor, addr 0x1bca2fc, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1bca418, size 0x2f8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* getStaticF_m_CurrentRegistry();

  /// @brief Method get_current, addr 0x1bc9de0, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* get_current();

  static inline void setStaticF_m_CurrentRegistry(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

  /// @brief Method set_current, addr 0x1bc9e28, size 0x4c, virtual false, abstract: false, final false
  static inline void set_current(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphResourceRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphResourceRegistry(RenderGraphResourceRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphResourceRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphResourceRegistry(RenderGraphResourceRegistry const&) = delete;

  /// @brief Field m_RenderGraphResources, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
           ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*>
      ___m_RenderGraphResources;

  /// @brief Field m_RendererListResources, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>* ___m_RendererListResources;

  /// @brief Field m_RenderGraphDebug, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* ___m_RenderGraphDebug;

  /// @brief Field m_ResourceLogger, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* ___m_ResourceLogger;

  /// @brief Field m_FrameInformationLogger, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* ___m_FrameInformationLogger;

  /// @brief Field m_CurrentFrameIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_CurrentFrameIndex;

  /// @brief Field m_ExecutionCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_ExecutionCount;

  /// @brief Field m_CurrentBackbuffer, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CurrentBackbuffer;

  /// @brief Field m_ActiveRendererLists, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>* ___m_ActiveRendererLists;

  /// @brief Field kInitialRendererListCount offset 0xffffffff size 0x4
  static constexpr int32_t kInitialRendererListCount{ static_cast<int32_t>(0x100) };

  /// @brief Field kSharedResourceLifetime offset 0xffffffff size 0x4
  static constexpr int32_t kSharedResourceLifetime{ static_cast<int32_t>(0x1e) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_RenderGraphResources) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_RendererListResources) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_RenderGraphDebug) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_ResourceLogger) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_FrameInformationLogger) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_CurrentFrameIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_ExecutionCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_CurrentBackbuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry, ___m_ActiveRendererLists) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphResourceRegistry");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraphResourceRegistry/RenderGraphResourcesData");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraphResourceRegistry/ResourceCallback");
