#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraph)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
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
template <typename PassData> class RenderFunc_1;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphBuilder;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphContext;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphDebugData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphDebugParams;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphDefaultResources;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphExecution;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphLogger;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphObjectPool;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RenderGraphParameters;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraphResourceRegistry;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraphDebugData__ResourceDebugData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraph__CompiledPassInfo;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraph__CompiledResourceInfo;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph__OnExecutionRegisteredDelegate;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph__OnGraphRegisteredDelegate;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph__ProfilingScopePassData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph____c;
}
namespace UnityEngine::Rendering::RendererUtils {
struct RendererListDesc;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
struct GraphicsFence;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
class __DebugUI__Panel;
}
namespace UnityEngine {
class ComputeBuffer;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph__OnExecutionRegisteredDelegate;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph__OnGraphRegisteredDelegate;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph__ProfilingScopePassData;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
class __RenderGraph____c;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraph__CompiledPassInfo;
}
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
struct __RenderGraph__CompiledResourceInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData);
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo);
MARK_VAL_T(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo);
// Type: ::CompiledResourceInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::RenderGraph::CompiledResourceInfo
struct CORDL_TYPE __RenderGraph__CompiledResourceInfo {
public:
  // Declarations
  /// @brief Method Reset, addr 0x1bc5d84, size 0xe0, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraph__CompiledResourceInfo();

  // Ctor Parameters [CppParam { name: "producers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "consumers", ty:
  // "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "imported",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr __RenderGraph__CompiledResourceInfo(::System::Collections::Generic::List_1<int32_t>* producers, ::System::Collections::Generic::List_1<int32_t>* consumers, int32_t refCount,
                                                bool imported) noexcept;

  /// @brief Field producers, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* producers;

  /// @brief Field consumers, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* consumers;

  /// @brief Field refCount, offset: 0x10, size: 0x4, def value: None
  int32_t refCount;

  /// @brief Field imported, offset: 0x14, size: 0x1, def value: None
  bool imported;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo, producers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo, consumers) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo, refCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo, imported) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::CompiledPassInfo
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: ::RenderGraph::CompiledPassInfo
struct CORDL_TYPE __RenderGraph__CompiledPassInfo {
public:
  // Declarations
  __declspec(property(get = get_allowPassCulling)) bool allowPassCulling;

  /// @brief Method Reset, addr 0x1bc5e80, size 0x1ec, virtual false, abstract: false, final false
  inline void Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method get_allowPassCulling, addr 0x1bc5e64, size 0x1c, virtual false, abstract: false, final false
  inline bool get_allowPassCulling();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraph__CompiledPassInfo();

  // Ctor Parameters [CppParam { name: "pass", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*", modifiers: "", def_value: None }, CppParam { name:
  // "resourceCreateList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None }, CppParam {
  // name: "resourceReleaseList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: None },
  // CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasSideEffect", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "syncFromPassIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "needGraphicsFence", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "fence", ty: "::UnityEngine::Rendering::GraphicsFence", modifiers: "",
  // def_value: None }, CppParam { name: "enableAsyncCompute", ty: "bool", modifiers: "", def_value: None }]
  constexpr __RenderGraph__CompiledPassInfo(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass,
                                            ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceCreateList,
                                            ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReleaseList,
                                            int32_t refCount, bool culled, bool hasSideEffect, int32_t syncToPassIndex, int32_t syncFromPassIndex, bool needGraphicsFence,
                                            ::UnityEngine::Rendering::GraphicsFence fence, bool enableAsyncCompute) noexcept;

  /// @brief Field pass, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass;

  /// @brief Field resourceCreateList, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceCreateList;

  /// @brief Field resourceReleaseList, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReleaseList;

  /// @brief Field refCount, offset: 0x18, size: 0x4, def value: None
  int32_t refCount;

  /// @brief Field culled, offset: 0x1c, size: 0x1, def value: None
  bool culled;

  /// @brief Field hasSideEffect, offset: 0x1d, size: 0x1, def value: None
  bool hasSideEffect;

  /// @brief Field syncToPassIndex, offset: 0x20, size: 0x4, def value: None
  int32_t syncToPassIndex;

  /// @brief Field syncFromPassIndex, offset: 0x24, size: 0x4, def value: None
  int32_t syncFromPassIndex;

  /// @brief Field needGraphicsFence, offset: 0x28, size: 0x1, def value: None
  bool needGraphicsFence;

  /// @brief Field fence, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::GraphicsFence fence;

  /// @brief Field enableAsyncCompute, offset: 0x40, size: 0x1, def value: None
  bool enableAsyncCompute;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, pass) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, resourceCreateList) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, resourceReleaseList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, refCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, culled) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, hasSideEffect) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, syncToPassIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, syncFromPassIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, needGraphicsFence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, fence) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, enableAsyncCompute) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::ProfilingScopePassData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraph::ProfilingScopePassData*
class CORDL_TYPE __RenderGraph__ProfilingScopePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field sampler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sampler, put = __cordl_internal_set_sampler))::UnityEngine::Rendering::ProfilingSampler* sampler;

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_sampler();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const& __cordl_internal_get_sampler() const;

  constexpr void __cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x1bc606c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraph__ProfilingScopePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph__ProfilingScopePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraph__ProfilingScopePassData(__RenderGraph__ProfilingScopePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph__ProfilingScopePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraph__ProfilingScopePassData(__RenderGraph__ProfilingScopePassData const&) = delete;

  /// @brief Field sampler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___sampler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData, ___sampler) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::OnGraphRegisteredDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraph::OnGraphRegisteredDelegate*
class CORDL_TYPE __RenderGraph__OnGraphRegisteredDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1bc61b4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1bc61d4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1bc61a0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1bc6074, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraph__OnGraphRegisteredDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph__OnGraphRegisteredDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraph__OnGraphRegisteredDelegate(__RenderGraph__OnGraphRegisteredDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph__OnGraphRegisteredDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraph__OnGraphRegisteredDelegate(__RenderGraph__OnGraphRegisteredDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::OnExecutionRegisteredDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraph::OnExecutionRegisteredDelegate*
class CORDL_TYPE __RenderGraph__OnExecutionRegisteredDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x1bc6324, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph, ::StringW executionName, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x1bc634c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x1bc6310, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph, ::StringW executionName);

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x1bc61e0, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraph__OnExecutionRegisteredDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph__OnExecutionRegisteredDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraph__OnExecutionRegisteredDelegate(__RenderGraph__OnExecutionRegisteredDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph__OnExecutionRegisteredDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraph__OnExecutionRegisteredDelegate(__RenderGraph__OnExecutionRegisteredDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::RenderGraph::<>c*
class CORDL_TYPE __RenderGraph____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c* __9;

  /// @brief Field <>9__61_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__61_0, put = setStaticF___9__61_0))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>* __9__61_0;

  /// @brief Field <>9__62_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__62_0, put = setStaticF___9__62_0))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>* __9__62_0;

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c* New_ctor();

  /// @brief Method <BeginProfilingSampler>b__61_0, addr 0x1bc63c4, size 0x28, virtual false, abstract: false, final false
  inline void _BeginProfilingSampler_b__61_0(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData* data,
                                             ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* ctx);

  /// @brief Method <EndProfilingSampler>b__62_0, addr 0x1bc63ec, size 0x28, virtual false, abstract: false, final false
  inline void _EndProfilingSampler_b__62_0(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData* data,
                                           ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* ctx);

  /// @brief Method .ctor, addr 0x1bc63bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c* getStaticF___9();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*
  getStaticF___9__61_0();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*
  getStaticF___9__62_0();

  static inline void setStaticF___9(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c* value);

  static inline void setStaticF___9__61_0(
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>* value);

  static inline void setStaticF___9__62_0(
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RenderGraph____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RenderGraph____c(__RenderGraph____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RenderGraph____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RenderGraph____c(__RenderGraph____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
// Type: UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraph
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Experimental::Rendering::RenderGraphModule {
// Is value type: false
// CS Name: ::UnityEngine.Experimental.Rendering.RenderGraphModule::RenderGraph*
class CORDL_TYPE RenderGraph : public ::System::Object {
public:
  // Declarations
  using CompiledPassInfo = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo;

  using CompiledResourceInfo = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo;

  using OnExecutionRegisteredDelegate = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate;

  using OnGraphRegisteredDelegate = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate;

  using ProfilingScopePassData = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData;

  using __c = ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c;

  /// @brief Field <name>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__name_k__BackingField, put = __cordl_internal_set__name_k__BackingField))::StringW _name_k__BackingField;

  /// @brief Field <requireDebugData>k__BackingField, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__requireDebugData_k__BackingField, put = setStaticF__requireDebugData_k__BackingField)) bool _requireDebugData_k__BackingField;

  __declspec(property(get = get_defaultResources))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* defaultResources;

  /// @brief Field kMaxMRTCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kMaxMRTCount, put = setStaticF_kMaxMRTCount)) int32_t kMaxMRTCount;

  /// @brief Field m_CompiledPassInfos, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompiledPassInfos, put = __cordl_internal_set_m_CompiledPassInfos))::UnityEngine::Rendering::DynamicArray_1<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>* m_CompiledPassInfos;

  /// @brief Field m_CompiledResourcesInfos, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CompiledResourcesInfos, put = __cordl_internal_set_m_CompiledResourcesInfos))::ArrayW<
      ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
      ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*> m_CompiledResourcesInfos;

  /// @brief Field m_CullingStack, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CullingStack, put = __cordl_internal_set_m_CullingStack))::System::Collections::Generic::Stack_1<int32_t>* m_CullingStack;

  /// @brief Field m_CurrentExecutionName, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentExecutionName, put = __cordl_internal_set_m_CurrentExecutionName))::StringW m_CurrentExecutionName;

  /// @brief Field m_CurrentFrameIndex, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentFrameIndex, put = __cordl_internal_set_m_CurrentFrameIndex)) int32_t m_CurrentFrameIndex;

  /// @brief Field m_CurrentImmediatePassIndex, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentImmediatePassIndex, put = __cordl_internal_set_m_CurrentImmediatePassIndex)) int32_t m_CurrentImmediatePassIndex;

  /// @brief Field m_DebugData, offset 0xb0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_DebugData,
      put = __cordl_internal_set_m_DebugData))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>* m_DebugData;

  /// @brief Field m_DebugParameters, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugParameters,
                      put = __cordl_internal_set_m_DebugParameters))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* m_DebugParameters;

  /// @brief Field m_DefaultProfilingSamplers, offset 0x48, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_DefaultProfilingSamplers,
               put = __cordl_internal_set_m_DefaultProfilingSamplers))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* m_DefaultProfilingSamplers;

  /// @brief Field m_DefaultResources, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultResources,
                      put = __cordl_internal_set_m_DefaultResources))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* m_DefaultResources;

  /// @brief Field m_ExecutionCount, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ExecutionCount, put = __cordl_internal_set_m_ExecutionCount)) int32_t m_ExecutionCount;

  /// @brief Field m_ExecutionExceptionWasRaised, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExecutionExceptionWasRaised, put = __cordl_internal_set_m_ExecutionExceptionWasRaised)) bool m_ExecutionExceptionWasRaised;

  /// @brief Field m_FrameInformationLogger, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FrameInformationLogger,
                      put = __cordl_internal_set_m_FrameInformationLogger))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* m_FrameInformationLogger;

  /// @brief Field m_HasRenderGraphBegun, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasRenderGraphBegun, put = __cordl_internal_set_m_HasRenderGraphBegun)) bool m_HasRenderGraphBegun;

  /// @brief Field m_ImmediateModeResourceList, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ImmediateModeResourceList,
                      put = __cordl_internal_set_m_ImmediateModeResourceList))::ArrayW<::System::Collections::Generic::List_1<int32_t>*,
                                                                                       ::Array<::System::Collections::Generic::List_1<int32_t>*>*> m_ImmediateModeResourceList;

  /// @brief Field m_PreviousCommandBuffer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousCommandBuffer, put = __cordl_internal_set_m_PreviousCommandBuffer))::UnityEngine::Rendering::CommandBuffer* m_PreviousCommandBuffer;

  /// @brief Field m_RenderGraphContext, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphContext,
                      put = __cordl_internal_set_m_RenderGraphContext))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* m_RenderGraphContext;

  /// @brief Field m_RenderGraphPool, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderGraphPool,
                      put = __cordl_internal_set_m_RenderGraphPool))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* m_RenderGraphPool;

  /// @brief Field m_RenderPasses, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderPasses,
                      put = __cordl_internal_set_m_RenderPasses))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>* m_RenderPasses;

  /// @brief Field m_RendererListCulling, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RendererListCulling, put = __cordl_internal_set_m_RendererListCulling)) bool m_RendererListCulling;

  /// @brief Field m_RendererLists, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_RendererLists,
               put = __cordl_internal_set_m_RendererLists))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* m_RendererLists;

  /// @brief Field m_Resources, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Resources,
                      put = __cordl_internal_set_m_Resources))::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* m_Resources;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  /// @brief Field onExecutionRegistered, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onExecutionRegistered,
                             put = setStaticF_onExecutionRegistered))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* onExecutionRegistered;

  /// @brief Field onExecutionUnregistered, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onExecutionUnregistered,
                             put = setStaticF_onExecutionUnregistered))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* onExecutionUnregistered;

  /// @brief Field onGraphRegistered, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onGraphRegistered,
                             put = setStaticF_onGraphRegistered))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* onGraphRegistered;

  /// @brief Field onGraphUnregistered, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_onGraphUnregistered,
                             put = setStaticF_onGraphUnregistered))::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* onGraphUnregistered;

  /// @brief Field s_RegisteredGraphs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_RegisteredGraphs,
                             put = setStaticF_s_RegisteredGraphs))::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>* s_RegisteredGraphs;

  /// @brief Method AddRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData> inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(::StringW passName, ByRef<PassData> passData);

  /// @brief Method AddRenderPass, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename PassData>
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder AddRenderPass(::StringW passName, ByRef<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler);

  /// @brief Method AreRendererListsEmpty, addr 0x23cff0c, size 0x1d8, virtual false, abstract: false, final false
  inline bool AreRendererListsEmpty(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* rendererLists);

  /// @brief Method BeginProfilingSampler, addr 0x23ccea4, size 0x218, virtual false, abstract: false, final false
  inline void BeginProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler);

  /// @brief Method Cleanup, addr 0x23cc1c0, size 0xe0, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupDebugData, addr 0x23d2ffc, size 0x1d0, virtual false, abstract: false, final false
  inline void CleanupDebugData();

  /// @brief Method ClearCompiledGraph, addr 0x23cd2dc, size 0xe4, virtual false, abstract: false, final false
  inline void ClearCompiledGraph();

  /// @brief Method ClearRenderPasses, addr 0x23cd3c0, size 0x18c, virtual false, abstract: false, final false
  inline void ClearRenderPasses();

  /// @brief Method CompilePassImmediatly, addr 0x23d03f0, size 0x8f8, virtual false, abstract: false, final false
  inline ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>
  CompilePassImmediatly(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method CompileRenderGraph, addr 0x23ccc28, size 0x124, virtual false, abstract: false, final false
  inline void CompileRenderGraph();

  /// @brief Method CountReferences, addr 0x23cded8, size 0x7c4, virtual false, abstract: false, final false
  inline void CountReferences();

  /// @brief Method CreateComputeBuffer, addr 0x23cc750, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
  CreateComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> computeBuffer);

  /// @brief Method CreateComputeBuffer, addr 0x23cc730, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle CreateComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc);

  /// @brief Method CreateRendererList, addr 0x23cc6f8, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle CreateRendererList(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc);

  /// @brief Method CreateRendererLists, addr 0x23cf590, size 0xe4, virtual false, abstract: false, final false
  inline void CreateRendererLists();

  /// @brief Method CreateSharedTexture, addr 0x23cc4fc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateSharedTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                                      bool explicitRelease);

  /// @brief Method CreateTexture, addr 0x23cc4dc, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc);

  /// @brief Method CreateTexture, addr 0x23cc5e0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method CreateTextureIfInvalid, addr 0x23cc660, size 0x50, virtual false, abstract: false, final false
  inline void CreateTextureIfInvalid(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc,
                                     ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> texture);

  /// @brief Method CullRendererLists, addr 0x23d01dc, size 0x100, virtual false, abstract: false, final false
  inline void CullRendererLists();

  /// @brief Method CullUnusedPasses, addr 0x23ce69c, size 0x5e8, virtual false, abstract: false, final false
  inline void CullUnusedPasses();

  /// @brief Method EndFrame, addr 0x23cc3ac, size 0xc8, virtual false, abstract: false, final false
  inline void EndFrame();

  /// @brief Method EndProfilingSampler, addr 0x23cd0bc, size 0x218, virtual false, abstract: false, final false
  inline void EndProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler);

  /// @brief Method Execute, addr 0x23cad60, size 0x218, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method ExecuteCompiledPass, addr 0x23d0ce8, size 0x360, virtual false, abstract: false, final false
  inline void ExecuteCompiledPass(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo, int32_t passIndex);

  /// @brief Method ExecutePassImmediatly, addr 0x23cd5ac, size 0x24, virtual false, abstract: false, final false
  inline void ExecutePassImmediatly(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method ExecuteRenderGraph, addr 0x23ccd4c, size 0x158, virtual false, abstract: false, final false
  inline void ExecuteRenderGraph();

  /// @brief Method GenerateDebugData, addr 0x23d2020, size 0xfdc, virtual false, abstract: false, final false
  inline void GenerateDebugData();

  /// @brief Method GetCompiledPassInfos, addr 0x23cd2d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>* GetCompiledPassInfos();

  /// @brief Method GetComputeBufferDesc, addr 0x23cc7ac, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc
  GetComputeBufferDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> computeBuffer);

  /// @brief Method GetDebugData, addr 0x23cc334, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* GetDebugData(::StringW executionName);

  /// @brief Method GetDefaultProfilingSampler, addr 0x23d1d5c, size 0xf0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProfilingSampler* GetDefaultProfilingSampler(::StringW name);

  /// @brief Method GetFirstValidWriteIndex, addr 0x23cf3b8, size 0xf4, virtual false, abstract: false, final false
  inline int32_t GetFirstValidWriteIndex(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info);

  /// @brief Method GetLatestProducerIndex, addr 0x23cf184, size 0x150, virtual false, abstract: false, final false
  inline int32_t GetLatestProducerIndex(int32_t passIndex, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info);

  /// @brief Method GetLatestValidReadIndex, addr 0x23cf2d4, size 0xe4, virtual false, abstract: false, final false
  inline int32_t GetLatestValidReadIndex(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info);

  /// @brief Method GetLatestValidWriteIndex, addr 0x23cf4ac, size 0xe4, virtual false, abstract: false, final false
  inline int32_t GetLatestValidWriteIndex(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info);

  /// @brief Method GetRegisteredRenderGraphs, addr 0x23cc2dc, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>* GetRegisteredRenderGraphs();

  /// @brief Method GetTextureDesc, addr 0x23cc6b0, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc GetTextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method ImportBackbuffer, addr 0x23cc490, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method ImportComputeBuffer, addr 0x23cc714, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle ImportComputeBuffer(::UnityEngine::ComputeBuffer* computeBuffer);

  /// @brief Method ImportTexture, addr 0x23cc474, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle ImportTexture(::UnityEngine::Rendering::RTHandle* rt);

  /// @brief Method InitResourceInfosData, addr 0x23cdcb0, size 0xb8, virtual false, abstract: false, final false
  inline void InitResourceInfosData(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>* resourceInfos,
                                    int32_t count);

  /// @brief Method InitializeCompilationData, addr 0x23cdd68, size 0x170, virtual false, abstract: false, final false
  inline void InitializeCompilationData();

  /// @brief Method InvalidateContext, addr 0x23cd54c, size 0x20, virtual false, abstract: false, final false
  inline void InvalidateContext();

  /// @brief Method LogCulledPasses, addr 0x23cec84, size 0x3ac, virtual false, abstract: false, final false
  inline void LogCulledPasses();

  /// @brief Method LogFrameInformation, addr 0x23cca4c, size 0x1dc, virtual false, abstract: false, final false
  inline void LogFrameInformation();

  /// @brief Method LogRenderPassBegin, addr 0x23d1048, size 0x2f8, virtual false, abstract: false, final false
  inline void LogRenderPassBegin(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo);

  /// @brief Method LogRendererListsCreation, addr 0x23d02dc, size 0x114, virtual false, abstract: false, final false
  inline void LogRendererListsCreation();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* New_ctor(::StringW name);

  /// @brief Method OnPassAdded, addr 0x23cd56c, size 0x40, virtual false, abstract: false, final false
  inline void OnPassAdded(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass);

  /// @brief Method PostRenderPassExecute, addr 0x23d15d0, size 0x234, virtual false, abstract: false, final false
  inline void PostRenderPassExecute(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo,
                                    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext);

  /// @brief Method PreRenderPassExecute, addr 0x23d1340, size 0x290, virtual false, abstract: false, final false
  inline void PreRenderPassExecute(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo,
                                   ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext);

  /// @brief Method PreRenderPassSetRenderTargets, addr 0x23d1804, size 0x3c0, virtual false, abstract: false, final false
  inline void PreRenderPassSetRenderTargets(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo,
                                            ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext);

  /// @brief Method RecordAndExecute, addr 0x23cc7ec, size 0x260, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution
  RecordAndExecute(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters> parameters);

  /// @brief Method RegisterDebug, addr 0x23cc2a0, size 0x24, virtual false, abstract: false, final false
  inline void RegisterDebug(::UnityEngine::Rendering::__DebugUI__Panel* panel);

  /// @brief Method ReleaseImmediateModeResources, addr 0x23d1bc4, size 0x198, virtual false, abstract: false, final false
  inline void ReleaseImmediateModeResources();

  /// @brief Method ReleaseSharedTexture, addr 0x23cc570, size 0x70, virtual false, abstract: false, final false
  inline void ReleaseSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method TryCullPassAtIndex, addr 0x23d00e4, size 0xf8, virtual false, abstract: false, final false
  inline void TryCullPassAtIndex(int32_t passIndex);

  /// @brief Method UnRegisterDebug, addr 0x23cc2c4, size 0x18, virtual false, abstract: false, final false
  inline void UnRegisterDebug();

  /// @brief Method UpdateImportedResourceLifeTime, addr 0x23d1e4c, size 0x1d4, virtual false, abstract: false, final false
  inline void UpdateImportedResourceLifeTime(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData> data,
                                             ::System::Collections::Generic::List_1<int32_t>* passList);

  /// @brief Method UpdatePassSynchronization, addr 0x23cf030, size 0x28, virtual false, abstract: false, final false
  inline void UpdatePassSynchronization(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> currentPassInfo,
                                        ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> producerPassInfo, int32_t currentPassIndex,
                                        int32_t lastProducer, ByRef<int32_t> intLastSyncIndex);

  /// @brief Method UpdateResourceAllocationAndSynchronization, addr 0x23cf674, size 0x898, virtual false, abstract: false, final false
  inline void UpdateResourceAllocationAndSynchronization();

  /// @brief Method UpdateResourceSynchronization, addr 0x23cf058, size 0x12c, virtual false, abstract: false, final false
  inline void UpdateResourceSynchronization(ByRef<int32_t> lastGraphicsPipeSync, ByRef<int32_t> lastComputePipeSync, int32_t currentPassIndex,
                                            ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> resource);

  constexpr ::StringW const& __cordl_internal_get__name_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__name_k__BackingField();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>*& __cordl_internal_get_m_CompiledPassInfos();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>*> const&
  __cordl_internal_get_m_CompiledPassInfos() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
                     ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*> const&
  __cordl_internal_get_m_CompiledResourcesInfos() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
                     ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*>&
  __cordl_internal_get_m_CompiledResourcesInfos();

  constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_m_CullingStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<int32_t>*> const& __cordl_internal_get_m_CullingStack() const;

  constexpr ::StringW const& __cordl_internal_get_m_CurrentExecutionName() const;

  constexpr ::StringW& __cordl_internal_get_m_CurrentExecutionName();

  constexpr int32_t const& __cordl_internal_get_m_CurrentFrameIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentFrameIndex();

  constexpr int32_t const& __cordl_internal_get_m_CurrentImmediatePassIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentImmediatePassIndex();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>*& __cordl_internal_get_m_DebugData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>*> const&
  __cordl_internal_get_m_DebugData() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*& __cordl_internal_get_m_DebugParameters();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*> const& __cordl_internal_get_m_DebugParameters() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>*& __cordl_internal_get_m_DefaultProfilingSamplers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>*> const&
  __cordl_internal_get_m_DefaultProfilingSamplers() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*& __cordl_internal_get_m_DefaultResources();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*> const& __cordl_internal_get_m_DefaultResources() const;

  constexpr int32_t const& __cordl_internal_get_m_ExecutionCount() const;

  constexpr int32_t& __cordl_internal_get_m_ExecutionCount();

  constexpr bool const& __cordl_internal_get_m_ExecutionExceptionWasRaised() const;

  constexpr bool& __cordl_internal_get_m_ExecutionExceptionWasRaised();

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*& __cordl_internal_get_m_FrameInformationLogger();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*> const& __cordl_internal_get_m_FrameInformationLogger() const;

  constexpr bool const& __cordl_internal_get_m_HasRenderGraphBegun() const;

  constexpr bool& __cordl_internal_get_m_HasRenderGraphBegun();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> const& __cordl_internal_get_m_ImmediateModeResourceList() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*>& __cordl_internal_get_m_ImmediateModeResourceList();

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_PreviousCommandBuffer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const& __cordl_internal_get_m_PreviousCommandBuffer() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*& __cordl_internal_get_m_RenderGraphContext();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*> const& __cordl_internal_get_m_RenderGraphContext() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*& __cordl_internal_get_m_RenderGraphPool();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*> const& __cordl_internal_get_m_RenderGraphPool() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>*& __cordl_internal_get_m_RenderPasses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>*> const&
  __cordl_internal_get_m_RenderPasses() const;

  constexpr bool const& __cordl_internal_get_m_RendererListCulling() const;

  constexpr bool& __cordl_internal_get_m_RendererListCulling();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*& __cordl_internal_get_m_RendererLists();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*> const&
  __cordl_internal_get_m_RendererLists() const;

  constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*& __cordl_internal_get_m_Resources();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*> const& __cordl_internal_get_m_Resources() const;

  constexpr void __cordl_internal_set__name_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_m_CompiledPassInfos(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>* value);

  constexpr void __cordl_internal_set_m_CompiledResourcesInfos(
      ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
               ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*>
          value);

  constexpr void __cordl_internal_set_m_CullingStack(::System::Collections::Generic::Stack_1<int32_t>* value);

  constexpr void __cordl_internal_set_m_CurrentExecutionName(::StringW value);

  constexpr void __cordl_internal_set_m_CurrentFrameIndex(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentImmediatePassIndex(int32_t value);

  constexpr void __cordl_internal_set_m_DebugData(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>* value);

  constexpr void __cordl_internal_set_m_DebugParameters(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* value);

  constexpr void __cordl_internal_set_m_DefaultProfilingSamplers(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* value);

  constexpr void __cordl_internal_set_m_DefaultResources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* value);

  constexpr void __cordl_internal_set_m_ExecutionCount(int32_t value);

  constexpr void __cordl_internal_set_m_ExecutionExceptionWasRaised(bool value);

  constexpr void __cordl_internal_set_m_FrameInformationLogger(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* value);

  constexpr void __cordl_internal_set_m_HasRenderGraphBegun(bool value);

  constexpr void __cordl_internal_set_m_ImmediateModeResourceList(::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> value);

  constexpr void __cordl_internal_set_m_PreviousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_RenderGraphContext(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* value);

  constexpr void __cordl_internal_set_m_RenderGraphPool(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* value);

  constexpr void __cordl_internal_set_m_RenderPasses(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>* value);

  constexpr void __cordl_internal_set_m_RendererListCulling(bool value);

  constexpr void __cordl_internal_set_m_RendererLists(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* value);

  constexpr void __cordl_internal_set_m_Resources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value);

  /// @brief Method .ctor, addr 0x23cbcd4, size 0x4ec, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method add_onExecutionRegistered, addr 0x23cd940, size 0xdc, virtual false, abstract: false, final false
  static inline void add_onExecutionRegistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value);

  /// @brief Method add_onExecutionUnregistered, addr 0x23cdaf8, size 0xdc, virtual false, abstract: false, final false
  static inline void add_onExecutionUnregistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value);

  /// @brief Method add_onGraphRegistered, addr 0x23cd5d0, size 0xdc, virtual false, abstract: false, final false
  static inline void add_onGraphRegistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value);

  /// @brief Method add_onGraphUnregistered, addr 0x23cd788, size 0xdc, virtual false, abstract: false, final false
  static inline void add_onGraphUnregistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value);

  static inline bool getStaticF__requireDebugData_k__BackingField();

  static inline int32_t getStaticF_kMaxMRTCount();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* getStaticF_onExecutionRegistered();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* getStaticF_onExecutionUnregistered();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* getStaticF_onGraphRegistered();

  static inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* getStaticF_onGraphUnregistered();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>* getStaticF_s_RegisteredGraphs();

  /// @brief Method get_defaultResources, addr 0x23cbccc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* get_defaultResources();

  /// @brief Method get_name, addr 0x23cbc08, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_requireDebugData, addr 0x23cbc18, size 0x58, virtual false, abstract: false, final false
  static inline bool get_requireDebugData();

  /// @brief Method remove_onExecutionRegistered, addr 0x23cda1c, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_onExecutionRegistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value);

  /// @brief Method remove_onExecutionUnregistered, addr 0x23cdbd4, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_onExecutionUnregistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value);

  /// @brief Method remove_onGraphRegistered, addr 0x23cd6ac, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_onGraphRegistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value);

  /// @brief Method remove_onGraphUnregistered, addr 0x23cd864, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_onGraphUnregistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value);

  static inline void setStaticF__requireDebugData_k__BackingField(bool value);

  static inline void setStaticF_kMaxMRTCount(int32_t value);

  static inline void setStaticF_onExecutionRegistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value);

  static inline void setStaticF_onExecutionUnregistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value);

  static inline void setStaticF_onGraphRegistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value);

  static inline void setStaticF_onGraphUnregistered(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value);

  static inline void setStaticF_s_RegisteredGraphs(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>* value);

  /// @brief Method set_name, addr 0x23cbc10, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_requireDebugData, addr 0x23cbc70, size 0x5c, virtual false, abstract: false, final false
  static inline void set_requireDebugData(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraph(RenderGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraph(RenderGraph const&) = delete;

  /// @brief Field m_Resources, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* ___m_Resources;

  /// @brief Field m_RenderGraphPool, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* ___m_RenderGraphPool;

  /// @brief Field m_RenderPasses, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>* ___m_RenderPasses;

  /// @brief Field m_RendererLists, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* ___m_RendererLists;

  /// @brief Field m_DebugParameters, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* ___m_DebugParameters;

  /// @brief Field m_FrameInformationLogger, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* ___m_FrameInformationLogger;

  /// @brief Field m_DefaultResources, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* ___m_DefaultResources;

  /// @brief Field m_DefaultProfilingSamplers, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* ___m_DefaultProfilingSamplers;

  /// @brief Field m_ExecutionExceptionWasRaised, offset: 0x50, size: 0x1, def value: None
  bool ___m_ExecutionExceptionWasRaised;

  /// @brief Field m_RenderGraphContext, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* ___m_RenderGraphContext;

  /// @brief Field m_PreviousCommandBuffer, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_PreviousCommandBuffer;

  /// @brief Field m_CurrentImmediatePassIndex, offset: 0x68, size: 0x4, def value: None
  int32_t ___m_CurrentImmediatePassIndex;

  /// @brief Field m_ImmediateModeResourceList, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> ___m_ImmediateModeResourceList;

  /// @brief Field m_CompiledResourcesInfos, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
           ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*>
      ___m_CompiledResourcesInfos;

  /// @brief Field m_CompiledPassInfos, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>* ___m_CompiledPassInfos;

  /// @brief Field m_CullingStack, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<int32_t>* ___m_CullingStack;

  /// @brief Field m_ExecutionCount, offset: 0x90, size: 0x4, def value: None
  int32_t ___m_ExecutionCount;

  /// @brief Field m_CurrentFrameIndex, offset: 0x94, size: 0x4, def value: None
  int32_t ___m_CurrentFrameIndex;

  /// @brief Field m_HasRenderGraphBegun, offset: 0x98, size: 0x1, def value: None
  bool ___m_HasRenderGraphBegun;

  /// @brief Field m_CurrentExecutionName, offset: 0xa0, size: 0x8, def value: None
  ::StringW ___m_CurrentExecutionName;

  /// @brief Field m_RendererListCulling, offset: 0xa8, size: 0x1, def value: None
  bool ___m_RendererListCulling;

  /// @brief Field m_DebugData, offset: 0xb0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>* ___m_DebugData;

  /// @brief Field <name>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::StringW ____name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, 0xc0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_Resources) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_RenderGraphPool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_RenderPasses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_RendererLists) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_DebugParameters) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_FrameInformationLogger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultResources) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_DefaultProfilingSamplers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_ExecutionExceptionWasRaised) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_RenderGraphContext) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_PreviousCommandBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentImmediatePassIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_ImmediateModeResourceList) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_CompiledResourcesInfos) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_CompiledPassInfos) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_CullingStack) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_ExecutionCount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentFrameIndex) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_HasRenderGraphBegun) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_CurrentExecutionName) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_RendererListCulling) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ___m_DebugData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph, ____name_k__BackingField) == 0xb8, "Offset mismatch!");

} // namespace UnityEngine::Experimental::Rendering::RenderGraphModule
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraph/OnExecutionRegisteredDelegate");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraph/OnGraphRegisteredDelegate");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraph/ProfilingScopePassData");
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*, "UnityEngine.Experimental.Rendering.RenderGraphModule", "RenderGraph/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraph/CompiledPassInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo, "UnityEngine.Experimental.Rendering.RenderGraphModule",
                       "RenderGraph/CompiledResourceInfo");
