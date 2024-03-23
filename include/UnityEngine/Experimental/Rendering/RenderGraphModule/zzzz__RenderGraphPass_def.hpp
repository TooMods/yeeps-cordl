#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct DepthAccess;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
template <typename PassData> class RenderFunc_1;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphContext;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass);
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphPass
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraphPass*
class CORDL_TYPE RenderGraphPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field <allowPassCulling>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__allowPassCulling_k__BackingField, put = __cordl_internal_set__allowPassCulling_k__BackingField)) bool _allowPassCulling_k__BackingField;

  /// @brief Field <allowRendererListCulling>k__BackingField, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__allowRendererListCulling_k__BackingField,
                      put = __cordl_internal_set__allowRendererListCulling_k__BackingField)) bool _allowRendererListCulling_k__BackingField;

  /// @brief Field <colorBufferMaxIndex>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__colorBufferMaxIndex_k__BackingField, put = __cordl_internal_set__colorBufferMaxIndex_k__BackingField)) int32_t _colorBufferMaxIndex_k__BackingField;

  /// @brief Field <colorBuffers>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__colorBuffers_k__BackingField, put = __cordl_internal_set__colorBuffers_k__BackingField))::ArrayW<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> _colorBuffers_k__BackingField;

  /// @brief Field <customSampler>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__customSampler_k__BackingField,
                      put = __cordl_internal_set__customSampler_k__BackingField))::UnityEngine::Rendering::ProfilingSampler* _customSampler_k__BackingField;

  /// @brief Field <depthBuffer>k__BackingField, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get__depthBuffer_k__BackingField,
                      put = __cordl_internal_set__depthBuffer_k__BackingField))::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle _depthBuffer_k__BackingField;

  /// @brief Field <enableAsyncCompute>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__enableAsyncCompute_k__BackingField, put = __cordl_internal_set__enableAsyncCompute_k__BackingField)) bool _enableAsyncCompute_k__BackingField;

  /// @brief Field <generateDebugData>k__BackingField, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__generateDebugData_k__BackingField, put = __cordl_internal_set__generateDebugData_k__BackingField)) bool _generateDebugData_k__BackingField;

  /// @brief Field <index>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__index_k__BackingField, put = __cordl_internal_set__index_k__BackingField)) int32_t _index_k__BackingField;

  /// @brief Field <name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField))::StringW _name_k__BackingField;

  /// @brief Field <refCount>k__BackingField, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get__refCount_k__BackingField, put = __cordl_internal_set__refCount_k__BackingField)) int32_t _refCount_k__BackingField;

  __declspec(property(get = get_allowPassCulling, put = set_allowPassCulling)) bool allowPassCulling;

  __declspec(property(get = get_allowRendererListCulling, put = set_allowRendererListCulling)) bool allowRendererListCulling;

  __declspec(property(get = get_colorBufferMaxIndex, put = set_colorBufferMaxIndex)) int32_t colorBufferMaxIndex;

  __declspec(property(get = get_colorBuffers, put = set_colorBuffers))::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle,
                                                                               ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> colorBuffers;

  __declspec(property(get = get_customSampler, put = set_customSampler))::UnityEngine::Rendering::ProfilingSampler* customSampler;

  /// @brief Field dependsOnRendererListList, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_dependsOnRendererListList, put = __cordl_internal_set_dependsOnRendererListList))::System::Collections::Generic::List_1<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* dependsOnRendererListList;

  __declspec(property(get = get_depthBuffer, put = set_depthBuffer))::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle depthBuffer;

  __declspec(property(get = get_enableAsyncCompute, put = set_enableAsyncCompute)) bool enableAsyncCompute;

  __declspec(property(get = get_generateDebugData, put = set_generateDebugData)) bool generateDebugData;

  __declspec(property(get = get_index, put = set_index)) int32_t index;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_refCount, put = set_refCount)) int32_t refCount;

  /// @brief Field resourceReadLists, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceReadLists, put = __cordl_internal_set_resourceReadLists))::ArrayW<
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
      ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> resourceReadLists;

  /// @brief Field resourceWriteLists, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_resourceWriteLists, put = __cordl_internal_set_resourceWriteLists))::ArrayW<
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
      ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> resourceWriteLists;

  /// @brief Field transientResourceList, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_transientResourceList, put = __cordl_internal_set_transientResourceList))::ArrayW<
      ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
      ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> transientResourceList;

  /// @brief Field usedRendererListList, offset 0x70, size 0x8
  __declspec(property(
      get = __cordl_internal_get_usedRendererListList,
      put = __cordl_internal_set_usedRendererListList))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* usedRendererListList;

  /// @brief Method AddResourceRead, addr 0x1bc6b20, size 0xcc, virtual false, abstract: false, final false
  inline void AddResourceRead(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method AddResourceWrite, addr 0x1bc6bec, size 0xcc, virtual false, abstract: false, final false
  inline void AddResourceWrite(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method AddTransientResource, addr 0x1bc6e48, size 0xcc, virtual false, abstract: false, final false
  inline void AddTransientResource(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res);

  /// @brief Method AllowPassCulling, addr 0x1bc73cc, size 0xc, virtual false, abstract: false, final false
  inline void AllowPassCulling(bool value);

  /// @brief Method AllowRendererListCulling, addr 0x1bc7438, size 0xc, virtual false, abstract: false, final false
  inline void AllowRendererListCulling(bool value);

  /// @brief Method Clear, addr 0x1bc8a1c, size 0x258, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method DependsOnRendererList, addr 0x1bc8c7c, size 0xa8, virtual false, abstract: false, final false
  inline void DependsOnRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle rendererList);

  /// @brief Method EnableAsyncCompute, addr 0x1bc73a0, size 0xc, virtual false, abstract: false, final false
  inline void EnableAsyncCompute(bool value);

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Execute(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* renderGraphContext);

  /// @brief Method GenerateDebugData, addr 0x1bc749c, size 0xc, virtual false, abstract: false, final false
  inline void GenerateDebugData(bool value);

  /// @brief Method GetExecuteDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData> inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<PassData>* GetExecuteDelegate();

  /// @brief Method HasRenderFunc, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasRenderFunc();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* New_ctor();

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Release(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* pool);

  /// @brief Method SetColorBuffer, addr 0x1bc6578, size 0xc4, virtual false, abstract: false, final false
  inline void SetColorBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle resource, int32_t index);

  /// @brief Method SetDepthBuffer, addr 0x1bc6810, size 0x50, virtual false, abstract: false, final false
  inline void SetDepthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle resource, ::UnityEngine::Experimental::Rendering::RenderGraphModule::DepthAccess flags);

  /// @brief Method UseRendererList, addr 0x1bc6fcc, size 0xa8, virtual false, abstract: false, final false
  inline void UseRendererList(::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle rendererList);

  constexpr bool const& __cordl_internal_get__allowPassCulling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allowPassCulling_k__BackingField();

  constexpr bool const& __cordl_internal_get__allowRendererListCulling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__allowRendererListCulling_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__colorBufferMaxIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__colorBufferMaxIndex_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> const&
  __cordl_internal_get__colorBuffers_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>&
  __cordl_internal_get__colorBuffers_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get__customSampler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get__customSampler_k__BackingField() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get__depthBuffer_k__BackingField() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get__depthBuffer_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableAsyncCompute_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableAsyncCompute_k__BackingField();

  constexpr bool const& __cordl_internal_get__generateDebugData_k__BackingField() const;

  constexpr bool& __cordl_internal_get__generateDebugData_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__index_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__index_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__refCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__refCount_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*& __cordl_internal_get_dependsOnRendererListList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*> const&
  __cordl_internal_get_dependsOnRendererListList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
  __cordl_internal_get_resourceReadLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>&
  __cordl_internal_get_resourceReadLists();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
  __cordl_internal_get_resourceWriteLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>&
  __cordl_internal_get_resourceWriteLists();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*> const&
  __cordl_internal_get_transientResourceList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>&
  __cordl_internal_get_transientResourceList();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*& __cordl_internal_get_usedRendererListList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*> const&
  __cordl_internal_get_usedRendererListList() const;

  constexpr void __cordl_internal_set__allowPassCulling_k__BackingField(bool value);

  constexpr void __cordl_internal_set__allowRendererListCulling_k__BackingField(bool value);

  constexpr void __cordl_internal_set__colorBufferMaxIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__colorBuffers_k__BackingField(
      ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set__customSampler_k__BackingField(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set__depthBuffer_k__BackingField(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set__enableAsyncCompute_k__BackingField(bool value);

  constexpr void __cordl_internal_set__generateDebugData_k__BackingField(bool value);

  constexpr void __cordl_internal_set__index_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__refCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_dependsOnRendererListList(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* value);

  constexpr void __cordl_internal_set_resourceReadLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                 ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
                                                            value);

  constexpr void __cordl_internal_set_resourceWriteLists(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                  ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
                                                             value);

  constexpr void __cordl_internal_set_transientResourceList(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
                                                                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
                                                                value);

  constexpr void __cordl_internal_set_usedRendererListList(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* value);

  /// @brief Method .ctor, addr 0x1bc87bc, size 0x260, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowPassCulling, addr 0x1bc8734, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowPassCulling();

  /// @brief Method get_allowRendererListCulling, addr 0x1bc87a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowRendererListCulling();

  /// @brief Method get_colorBufferMaxIndex, addr 0x1bc8774, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_colorBufferMaxIndex();

  /// @brief Method get_colorBuffers, addr 0x1bc8764, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> get_colorBuffers();

  /// @brief Method get_customSampler, addr 0x1bc8710, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* get_customSampler();

  /// @brief Method get_depthBuffer, addr 0x1bc8748, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle get_depthBuffer();

  /// @brief Method get_enableAsyncCompute, addr 0x1bc8720, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableAsyncCompute();

  /// @brief Method get_generateDebugData, addr 0x1bc8794, size 0x8, virtual false, abstract: false, final false
  inline bool get_generateDebugData();

  /// @brief Method get_index, addr 0x1bc8700, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_name, addr 0x1bc86f0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_refCount, addr 0x1bc8784, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_refCount();

  /// @brief Method set_allowPassCulling, addr 0x1bc873c, size 0xc, virtual false, abstract: false, final false
  inline void set_allowPassCulling(bool value);

  /// @brief Method set_allowRendererListCulling, addr 0x1bc87b0, size 0xc, virtual false, abstract: false, final false
  inline void set_allowRendererListCulling(bool value);

  /// @brief Method set_colorBufferMaxIndex, addr 0x1bc877c, size 0x8, virtual false, abstract: false, final false
  inline void set_colorBufferMaxIndex(int32_t value);

  /// @brief Method set_colorBuffers, addr 0x1bc876c, size 0x8, virtual false, abstract: false, final false
  inline void
  set_colorBuffers(::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*> value);

  /// @brief Method set_customSampler, addr 0x1bc8718, size 0x8, virtual false, abstract: false, final false
  inline void set_customSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method set_depthBuffer, addr 0x1bc8758, size 0xc, virtual false, abstract: false, final false
  inline void set_depthBuffer(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method set_enableAsyncCompute, addr 0x1bc8728, size 0xc, virtual false, abstract: false, final false
  inline void set_enableAsyncCompute(bool value);

  /// @brief Method set_generateDebugData, addr 0x1bc879c, size 0xc, virtual false, abstract: false, final false
  inline void set_generateDebugData(bool value);

  /// @brief Method set_index, addr 0x1bc8708, size 0x8, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  /// @brief Method set_name, addr 0x1bc86f8, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_refCount, addr 0x1bc878c, size 0x8, virtual false, abstract: false, final false
  inline void set_refCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphPass(RenderGraphPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphPass(RenderGraphPass const&) = delete;

  /// @brief Field <name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  /// @brief Field <index>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____index_k__BackingField;

  /// @brief Field <customSampler>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ____customSampler_k__BackingField;

  /// @brief Field <enableAsyncCompute>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____enableAsyncCompute_k__BackingField;

  /// @brief Field <allowPassCulling>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____allowPassCulling_k__BackingField;

  /// @brief Field <depthBuffer>k__BackingField, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ____depthBuffer_k__BackingField;

  /// @brief Field <colorBuffers>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>*>
      ____colorBuffers_k__BackingField;

  /// @brief Field <colorBufferMaxIndex>k__BackingField, offset: 0x48, size: 0x4, def value: None
  int32_t ____colorBufferMaxIndex_k__BackingField;

  /// @brief Field <refCount>k__BackingField, offset: 0x4c, size: 0x4, def value: None
  int32_t ____refCount_k__BackingField;

  /// @brief Field <generateDebugData>k__BackingField, offset: 0x50, size: 0x1, def value: None
  bool ____generateDebugData_k__BackingField;

  /// @brief Field <allowRendererListCulling>k__BackingField, offset: 0x51, size: 0x1, def value: None
  bool ____allowRendererListCulling_k__BackingField;

  /// @brief Field resourceReadLists, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
      ___resourceReadLists;

  /// @brief Field resourceWriteLists, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
      ___resourceWriteLists;

  /// @brief Field transientResourceList, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*,
           ::Array<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>*>*>
      ___transientResourceList;

  /// @brief Field usedRendererListList, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* ___usedRendererListList;

  /// @brief Field dependsOnRendererListList, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* ___dependsOnRendererListList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, 0x80>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____name_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____index_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____customSampler_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____enableAsyncCompute_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____allowPassCulling_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____depthBuffer_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____colorBuffers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____colorBufferMaxIndex_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____refCount_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____generateDebugData_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ____allowRendererListCulling_k__BackingField) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ___resourceReadLists) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ___resourceWriteLists) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ___transientResourceList) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ___usedRendererListList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass, ___dependsOnRendererListList) == 0x78, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraphPass");
