#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderFunc_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphBuilder_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphDebugData_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphDebugParams_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphDefaultResources_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphExecution_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphObjectPool_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphParameters_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugUI_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo::Reset)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1bc5d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>::get(),
                                    "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo::Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>::get(),
                                  "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "producers", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "consumers", ty:
// "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "imported", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo::__RenderGraph__CompiledResourceInfo(
    ::System::Collections::Generic::List_1<int32_t>* producers, ::System::Collections::Generic::List_1<int32_t>* consumers, int32_t refCount, bool imported) noexcept {
  this->producers = producers;
  this->consumers = consumers;
  this->refCount = refCount;
  this->imported = imported;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo::__RenderGraph__CompiledResourceInfo() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo.get_allowPassCulling
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::get_allowPassCulling)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1bc5e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>::get(),
                                    "get_allowPassCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::Reset)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x1bc5e80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>::get(), "Reset",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::get_allowPassCulling() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>::get(),
                                  "get_allowPassCulling", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::Reset(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>::get(), "Reset",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pass);
}
// Ctor Parameters [CppParam { name: "pass", ty: "::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "resourceCreateList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "resourceReleaseList", ty: "::ArrayW<::System::Collections::Generic::List_1<int32_t>*,::Array<::System::Collections::Generic::List_1<int32_t>*>*>", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "refCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "culled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "hasSideEffect", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "syncToPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "syncFromPassIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "needGraphicsFence", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "fence", ty:
// "::UnityEngine::Rendering::GraphicsFence", modifiers: "", def_value: Some("{}") }, CppParam { name: "enableAsyncCompute", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::__RenderGraph__CompiledPassInfo(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass,
    ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceCreateList,
    ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> resourceReleaseList, int32_t refCount, bool culled, bool hasSideEffect,
    int32_t syncToPassIndex, int32_t syncFromPassIndex, bool needGraphicsFence, ::UnityEngine::Rendering::GraphicsFence fence, bool enableAsyncCompute) noexcept {
  this->pass = pass;
  this->resourceCreateList = resourceCreateList;
  this->resourceReleaseList = resourceReleaseList;
  this->refCount = refCount;
  this->culled = culled;
  this->hasSideEffect = hasSideEffect;
  this->syncToPassIndex = syncToPassIndex;
  this->syncFromPassIndex = syncFromPassIndex;
  this->needGraphicsFence = needGraphicsFence;
  this->fence = fence;
  this->enableAsyncCompute = enableAsyncCompute;
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo::__RenderGraph__CompiledPassInfo() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc606c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::__cordl_internal_get_sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::__cordl_internal_get_sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sampler;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::__cordl_internal_set_sampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData::__RenderGraph__ProfilingScopePassData() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::*)(
    ::System::Object*, void*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1bc6074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1bc61a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*,
                                                                                                            ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bc61b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc61d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>(object, method));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graph);
}
inline ::System::IAsyncResult*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::BeginInvoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, graph, callback, object);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate::__RenderGraph__OnGraphRegisteredDelegate() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::*)(
    ::System::Object*, void*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1bc61e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::StringW)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1bc6310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*, ::StringW,
                                                                                                                ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bc6324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bc634c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>(object, method));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::Invoke(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph,
                                                                                                                          ::StringW executionName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, graph, executionName);
}
inline ::System::IAsyncResult* UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::BeginInvoke(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* graph, ::StringW executionName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, graph, executionName, callback, object);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate::__RenderGraph__OnExecutionRegisteredDelegate() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1bc63bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c._BeginProfilingSampler_b__61_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::_BeginProfilingSampler_b__61_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bc63c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get(),
                                    "<BeginProfilingSampler>b__61_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c._EndProfilingSampler_b__62_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::_EndProfilingSampler_b__62_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bc63ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get(),
                                    "<EndProfilingSampler>b__62_0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::setStaticF___9(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c* UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::setStaticF___9__61_0(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*, "<>9__61_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::getStaticF___9__61_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*, "<>9__61_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::setStaticF___9__62_0(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>* value) {
  ::cordl_internals::setStaticField<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*, "<>9__62_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::getStaticF___9__62_0() {
  return ::cordl_internals::getStaticField<
      ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderFunc_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>*, "<>9__62_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get>();
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c* UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::_BeginProfilingSampler_b__61_0(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData* data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get(),
                                  "<BeginProfilingSampler>b__61_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, ctx);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::_EndProfilingSampler_b__62_0(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData* data, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* ctx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c*>::get(),
                                  "<EndProfilingSampler>b__62_0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__ProfilingScopePassData*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, ctx);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph____c::__RenderGraph____c() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cbc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "get_name",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.set_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cbc10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "set_name",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.get_requireDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::get_requireDebugData)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23cbc18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "get_requireDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.set_requireDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::set_requireDebugData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23cbc70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "set_requireDebugData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.get_defaultResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::get_defaultResources)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cbccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "get_defaultResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::_ctor)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x23cbcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::Cleanup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x23cc1c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "Cleanup",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.RegisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::__DebugUI__Panel*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::RegisterDebug)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23cc2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "RegisterDebug",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Panel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.UnRegisterDebug
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UnRegisterDebug)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23cc2c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "UnRegisterDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetRegisteredRenderGraphs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>* (*)()>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetRegisteredRenderGraphs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23cc2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "GetRegisteredRenderGraphs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetDebugData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x23cc334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetDebugData",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.EndFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::EndFrame)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x23cc3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "EndFrame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ImportTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ImportTexture)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23cc474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ImportTexture",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ImportBackbuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ImportBackbuffer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23cc490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ImportBackbuffer",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateTexture)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23cc4dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateSharedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>, bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateSharedTexture)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23cc4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateSharedTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ReleaseSharedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ReleaseSharedTexture)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23cc570;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ReleaseSharedTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateTexture)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23cc5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateTextureIfInvalid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateTextureIfInvalid)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x23cc660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateTextureIfInvalid",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetTextureDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetTextureDesc)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x23cc6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetTextureDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateRendererList)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23cc6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ImportComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ImportComputeBuffer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23cc714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ImportComputeBuffer",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateComputeBuffer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23cc730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateComputeBuffer)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23cc750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetComputeBufferDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetComputeBufferDesc)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23cc7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetComputeBufferDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.RecordAndExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::RecordAndExecute)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x23cc7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "RecordAndExecute",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::Execute)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x23cad60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.BeginProfilingSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::ProfilingSampler*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::BeginProfilingSampler)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x23ccea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "BeginProfilingSampler",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.EndProfilingSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::ProfilingSampler*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::EndProfilingSampler)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x23cd0bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "EndProfilingSampler",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetCompiledPassInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>* (
        ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetCompiledPassInfos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cd2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "GetCompiledPassInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ClearCompiledGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ClearCompiledGraph)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23cd2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "ClearCompiledGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.InvalidateContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::InvalidateContext)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x23cd54c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "InvalidateContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.OnPassAdded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::OnPassAdded)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x23cd56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "OnPassAdded", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.add_onGraphRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onGraphRegistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cd5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onGraphRegistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.remove_onGraphRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onGraphRegistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cd6ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onGraphRegistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.add_onGraphUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onGraphUnregistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cd788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onGraphUnregistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.remove_onGraphUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onGraphUnregistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cd864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onGraphUnregistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.add_onExecutionRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onExecutionRegistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cd940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onExecutionRegistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.remove_onExecutionRegistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionRegistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cda1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onExecutionRegistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.add_onExecutionUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onExecutionUnregistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cdaf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onExecutionUnregistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.remove_onExecutionUnregistered
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionUnregistered)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23cdbd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onExecutionUnregistered",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.InitResourceInfosData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::InitResourceInfosData)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x23cdcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "InitResourceInfosData",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.InitializeCompilationData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::InitializeCompilationData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x23cdd68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "InitializeCompilationData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CountReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CountReferences)> {
  constexpr static std::size_t size = 0x7c4;
  constexpr static std::size_t addrs = 0x23cded8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "CountReferences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CullUnusedPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CullUnusedPasses)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x23ce69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "CullUnusedPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.UpdatePassSynchronization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>,
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>, int32_t, int32_t, ByRef<int32_t>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdatePassSynchronization)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23cf030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "UpdatePassSynchronization",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.UpdateResourceSynchronization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<int32_t>, ByRef<int32_t>, int32_t, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdateResourceSynchronization)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x23cf058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "UpdateResourceSynchronization",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetLatestProducerIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    int32_t, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetLatestProducerIndex)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x23cf184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetLatestProducerIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetLatestValidReadIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetLatestValidReadIndex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23cf2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetLatestValidReadIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetFirstValidWriteIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetFirstValidWriteIndex)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23cf3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetFirstValidWriteIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetLatestValidWriteIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetLatestValidWriteIndex)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23cf4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetLatestValidWriteIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CreateRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateRendererLists)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x23cf590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "CreateRendererLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.UpdateResourceAllocationAndSynchronization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdateResourceAllocationAndSynchronization)> {
  constexpr static std::size_t size = 0x898;
  constexpr static std::size_t addrs = 0x23cf674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "UpdateResourceAllocationAndSynchronization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.AreRendererListsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::AreRendererListsEmpty)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x23cff0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "AreRendererListsEmpty",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.TryCullPassAtIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::TryCullPassAtIndex)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x23d00e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "TryCullPassAtIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CullRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CullRendererLists)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x23d01dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "CullRendererLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CompileRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CompileRenderGraph)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x23ccc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "CompileRenderGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CompilePassImmediatly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CompilePassImmediatly)> {
  constexpr static std::size_t size = 0x8f8;
  constexpr static std::size_t addrs = 0x23d03f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CompilePassImmediatly",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ExecutePassImmediatly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ExecutePassImmediatly)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x23cd5ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ExecutePassImmediatly",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ExecuteCompiledPass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ExecuteCompiledPass)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x23d0ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ExecuteCompiledPass",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ExecuteRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ExecuteRenderGraph)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x23ccd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "ExecuteRenderGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.PreRenderPassSetRenderTargets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::PreRenderPassSetRenderTargets)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x23d1804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                    "PreRenderPassSetRenderTargets", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.PreRenderPassExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::PreRenderPassExecute)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x23d1340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "PreRenderPassExecute",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.PostRenderPassExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::PostRenderPassExecute)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x23d15d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "PostRenderPassExecute",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ClearRenderPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ClearRenderPasses)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x23cd3c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "ClearRenderPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.ReleaseImmediateModeResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ReleaseImmediateModeResources)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x23d1bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "ReleaseImmediateModeResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.LogFrameInformation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogFrameInformation)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x23cca4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "LogFrameInformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.LogRendererListsCreation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogRendererListsCreation)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x23d02dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "LogRendererListsCreation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.LogRenderPassBegin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogRenderPassBegin)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x23d1048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "LogRenderPassBegin",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.LogCulledPasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogCulledPasses)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x23cec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "LogCulledPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GetDefaultProfilingSampler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(::StringW)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetDefaultProfilingSampler)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23d1d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetDefaultProfilingSampler",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.UpdateImportedResourceLifeTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>, ::System::Collections::Generic::List_1<int32_t>*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdateImportedResourceLifeTime)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x23d1e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "UpdateImportedResourceLifeTime",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.GenerateDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GenerateDebugData)> {
  constexpr static std::size_t size = 0xfdc;
  constexpr static std::size_t addrs = 0x23d2020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "GenerateDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph.CleanupDebugData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CleanupDebugData)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x23d2ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                                 "CleanupDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_Resources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_Resources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Resources;
}
constexpr void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_Resources(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Resources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphPool;
}
constexpr void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RenderGraphPool(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphObjectPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderGraphPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderPasses() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPasses;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderPasses() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderPasses;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RenderPasses(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderPasses)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererLists;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererLists;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RendererLists(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RendererLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugParameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugParameters;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugParameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugParameters;
}
constexpr void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DebugParameters(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_FrameInformationLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_FrameInformationLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_FrameInformationLogger(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FrameInformationLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultResources;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultResources;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DefaultResources(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultProfilingSamplers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultProfilingSamplers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DefaultProfilingSamplers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DefaultProfilingSamplers;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DefaultProfilingSamplers(
    ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProfilingSampler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DefaultProfilingSamplers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionExceptionWasRaised() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionExceptionWasRaised;
}
constexpr bool const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionExceptionWasRaised() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionExceptionWasRaised;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_ExecutionExceptionWasRaised(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionExceptionWasRaised = value;
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphContext;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RenderGraphContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphContext;
}
constexpr void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RenderGraphContext(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderGraphContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::CommandBuffer*& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_PreviousCommandBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousCommandBuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::CommandBuffer*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_PreviousCommandBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousCommandBuffer;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_PreviousCommandBuffer(::UnityEngine::Rendering::CommandBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousCommandBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentImmediatePassIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentImmediatePassIndex;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentImmediatePassIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentImmediatePassIndex;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CurrentImmediatePassIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentImmediatePassIndex = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ImmediateModeResourceList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImmediateModeResourceList;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ImmediateModeResourceList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImmediateModeResourceList;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_ImmediateModeResourceList(
    ::ArrayW<::System::Collections::Generic::List_1<int32_t>*, ::Array<::System::Collections::Generic::List_1<int32_t>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ImmediateModeResourceList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
                   ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CompiledResourcesInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompiledResourcesInfos;
}
constexpr ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
                   ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CompiledResourcesInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompiledResourcesInfos;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CompiledResourcesInfos(
    ::ArrayW<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*,
             ::Array<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompiledResourcesInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CompiledPassInfos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompiledPassInfos;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CompiledPassInfos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CompiledPassInfos;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CompiledPassInfos(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CompiledPassInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CullingStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<int32_t>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CullingStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingStack;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CullingStack(::System::Collections::Generic::Stack_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CullingStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_ExecutionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_ExecutionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionCount = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CurrentFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFrameIndex = value;
}
constexpr bool& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_HasRenderGraphBegun() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRenderGraphBegun;
}
constexpr bool const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_HasRenderGraphBegun() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_HasRenderGraphBegun;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_HasRenderGraphBegun(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_HasRenderGraphBegun = value;
}
constexpr ::StringW& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentExecutionName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentExecutionName;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_CurrentExecutionName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentExecutionName;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_CurrentExecutionName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentExecutionName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererListCulling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListCulling;
}
constexpr bool const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_RendererListCulling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListCulling;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_RendererListCulling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RendererListCulling = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get_m_DebugData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DebugData;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set_m_DebugData(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DebugData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get__name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_get__name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::__cordl_internal_set__name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::setStaticF_kMaxMRTCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kMaxMRTCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::getStaticF_kMaxMRTCount() {
  return ::cordl_internals::getStaticField<int32_t, "kMaxMRTCount",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::setStaticF_s_RegisteredGraphs(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>*, "s_RegisteredGraphs",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::getStaticF_s_RegisteredGraphs() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>*, "s_RegisteredGraphs",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::setStaticF__requireDebugData_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<requireDebugData>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::getStaticF__requireDebugData_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<requireDebugData>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::setStaticF_onGraphRegistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*, "onGraphRegistered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::getStaticF_onGraphRegistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*, "onGraphRegistered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::setStaticF_onGraphUnregistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*, "onGraphUnregistered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::getStaticF_onGraphUnregistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*, "onGraphUnregistered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::setStaticF_onExecutionRegistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*, "onExecutionRegistered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::getStaticF_onExecutionRegistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*, "onExecutionRegistered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>();
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::setStaticF_onExecutionUnregistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*, "onExecutionUnregistered",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::getStaticF_onExecutionUnregistered() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*, "onExecutionUnregistered",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get>();
}
inline ::StringW UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::get_name() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "get_name",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "set_name",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::get_requireDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "get_requireDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::set_requireDebugData(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "set_requireDebugData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::get_defaultResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "get_defaultResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDefaultResources*, false>(this, ___internal_method);
}
/// @param name: ::StringW (default: u"RenderGraph")
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>(name));
}
/// @param name: ::StringW (default: u"RenderGraph")
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "Cleanup",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param panel: ::UnityEngine::Rendering::__DebugUI__Panel* (default: nullptr)
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::RegisterDebug(::UnityEngine::Rendering::__DebugUI__Panel* panel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "RegisterDebug", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::__DebugUI__Panel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UnRegisterDebug() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "UnRegisterDebug", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetRegisteredRenderGraphs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "GetRegisteredRenderGraphs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetDebugData(::StringW executionName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetDebugData",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugData*, false>(this, ___internal_method, executionName);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::EndFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "EndFrame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ImportTexture(::UnityEngine::Rendering::RTHandle* rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ImportTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ImportBackbuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, desc);
}
/// @param explicitRelease: bool (default: false)
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateSharedTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc, bool explicitRelease) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateSharedTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, desc, explicitRelease);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ReleaseSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ReleaseSharedTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateTexture", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, texture);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateTextureIfInvalid(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                                         ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateTextureIfInvalid",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc, texture);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetTextureDesc(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetTextureDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, false>(this, ___internal_method, texture);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateRendererList(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ImportComputeBuffer(::UnityEngine::ComputeBuffer* computeBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ImportComputeBuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, computeBuffer);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> computeBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CreateComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, computeBuffer);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetComputeBufferDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> computeBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetComputeBufferDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, false>(this, ___internal_method, computeBuffer);
}
template <typename PassData>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::AddRenderPass(::StringW passName, ByRef<PassData> passData, ::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "AddRenderPass",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<PassData>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, false>(this, ___internal_method, passName, passData, sampler);
}
template <typename PassData>
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::AddRenderPass(::StringW passName,
                                                                                                                                                                         ByRef<PassData> passData) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "AddRenderPass",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<PassData>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PassData>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphBuilder, false>(this, ___internal_method, passName, passData);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::RecordAndExecute(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters> parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "RecordAndExecute",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphParameters>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphExecution, false>(this, ___internal_method, parameters);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::BeginProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "BeginProfilingSampler",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampler);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::EndProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* sampler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "EndProfilingSampler",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ProfilingSampler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sampler);
}
inline ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetCompiledPassInfos() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "GetCompiledPassInfos", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>*, false>(
      this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ClearCompiledGraph() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "ClearCompiledGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::InvalidateContext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "InvalidateContext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::OnPassAdded(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "OnPassAdded", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pass);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onGraphRegistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onGraphRegistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onGraphRegistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onGraphRegistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onGraphUnregistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onGraphUnregistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onGraphUnregistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onGraphUnregistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnGraphRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onExecutionRegistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onExecutionRegistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionRegistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onExecutionRegistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::add_onExecutionUnregistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "add_onExecutionUnregistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::remove_onExecutionUnregistered(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "remove_onExecutionUnregistered",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__OnExecutionRegisteredDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::InitResourceInfosData(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>* resourceInfos, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "InitResourceInfosData",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, resourceInfos, count);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::InitializeCompilationData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "InitializeCompilationData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CountReferences() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "CountReferences", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CullUnusedPasses() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "CullUnusedPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdatePassSynchronization(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> currentPassInfo,
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> producerPassInfo, int32_t currentPassIndex, int32_t lastProducer,
    ByRef<int32_t> intLastSyncIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "UpdatePassSynchronization",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPassInfo, producerPassInfo, currentPassIndex, lastProducer, intLastSyncIndex);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdateResourceSynchronization(
    ByRef<int32_t> lastGraphicsPipeSync, ByRef<int32_t> lastComputePipeSync, int32_t currentPassIndex,
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> resource) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "UpdateResourceSynchronization",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lastGraphicsPipeSync, lastComputePipeSync, currentPassIndex, resource);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetLatestProducerIndex(
    int32_t passIndex, ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetLatestProducerIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, passIndex, info);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetLatestValidReadIndex(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetLatestValidReadIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, info);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetFirstValidWriteIndex(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetFirstValidWriteIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, info);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetLatestValidWriteIndex(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo> info) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetLatestValidWriteIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledResourceInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, info);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CreateRendererLists() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "CreateRendererLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdateResourceAllocationAndSynchronization() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "UpdateResourceAllocationAndSynchronization", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::AreRendererListsEmpty(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* rendererLists) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "AreRendererListsEmpty",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rendererLists);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::TryCullPassAtIndex(int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "TryCullPassAtIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passIndex);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CullRendererLists() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "CullRendererLists", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CompileRenderGraph() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "CompileRenderGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CompilePassImmediatly(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "CompilePassImmediatly",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>, false>(this, ___internal_method, pass);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ExecutePassImmediatly(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass* pass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ExecutePassImmediatly",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphPass*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pass);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ExecuteCompiledPass(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo,
                                                                                          int32_t passIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "ExecuteCompiledPass",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passInfo, passIndex);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ExecuteRenderGraph() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "ExecuteRenderGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::PreRenderPassSetRenderTargets(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo,
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                  "PreRenderPassSetRenderTargets", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passInfo, rgContext);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::PreRenderPassExecute(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo,
                                                                                           ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "PreRenderPassExecute",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passInfo, rgContext);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::PostRenderPassExecute(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo,
                                                                                            ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "PostRenderPassExecute",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passInfo, rgContext);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ClearRenderPasses() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "ClearRenderPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::ReleaseImmediateModeResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "ReleaseImmediateModeResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogFrameInformation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "LogFrameInformation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogRendererListsCreation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "LogRendererListsCreation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogRenderPassBegin(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo> passInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "LogRenderPassBegin",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraph__CompiledPassInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, passInfo);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::LogCulledPasses() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "LogCulledPasses", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GetDefaultProfilingSampler(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "GetDefaultProfilingSampler",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*, false>(this, ___internal_method, name);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::UpdateImportedResourceLifeTime(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData> data, ::System::Collections::Generic::List_1<int32_t>* passList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(), "UpdateImportedResourceLifeTime",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphDebugData__ResourceDebugData>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, passList);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::GenerateDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "GenerateDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::CleanupDebugData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph*>::get(),
                                               "CleanupDebugData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraph::RenderGraph() {}
