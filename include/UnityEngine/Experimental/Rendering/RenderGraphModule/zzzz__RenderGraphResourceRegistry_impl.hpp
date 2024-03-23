#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ComputeBufferResource_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__IRenderGraphResourcePool_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__IRenderGraphResource_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphContext_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphDebugParams_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourceRegistry_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RenderGraphResourceType_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__RendererListResource_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Experimental/Rendering/RenderGraphModule/zzzz__TextureResource_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererListDesc_def.hpp"
#include "UnityEngine/Rendering/RendererUtils/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::*)(
    ::System::Object*, void*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x1bca78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1bcc800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*,
                                                                                                                   ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*,
                                                                                                                   ::System::AsyncCallback*, ::System::Object*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1bcc814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::*)(
    ::System::IAsyncResult*)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1bcc83c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), 15));
    return ___internal_method;
  }
};
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>(object, method));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::Invoke(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, res);
}
inline ::System::IAsyncResult* UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::BeginInvoke(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res,
    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, rgContext, res, callback, object);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback::__RenderGraphResourceRegistry__ResourceCallback() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::*)(bool, int32_t)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::Clear)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1bcc550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(), "Clear",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::*)()>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1bcc6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(), "Cleanup",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData.PurgeUnusedGraphicsResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::*)(int32_t)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::PurgeUnusedGraphicsResources)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1bcc63c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(),
        "PurgeUnusedGraphicsResources", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::*)()>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1bca710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_resourceArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceArray;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_resourceArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___resourceArray;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_set_resourceArray(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resourceArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_sharedResourcesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedResourcesCount;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_sharedResourcesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sharedResourcesCount;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_set_sharedResourcesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sharedResourcesCount = value;
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pool;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_set_pool(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResourcePool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_createResourceCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createResourceCallback;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_createResourceCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createResourceCallback;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_set_createResourceCallback(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___createResourceCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_releaseResourceCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseResourceCallback;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_get_releaseResourceCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___releaseResourceCallback;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__cordl_internal_set_releaseResourceCallback(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__ResourceCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___releaseResourceCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::Clear(bool onException, int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(), "Clear",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onException, frameIndex);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::Cleanup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(), "Cleanup",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::PurgeUnusedGraphicsResources(int32_t frameIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(),
      "PurgeUnusedGraphicsResources", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameIndex);
}
/// @param pooledResource: bool (default: true)
template <typename ResType>
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::AddNewRenderGraphResource(ByRef<ResType> outRes, bool pooledResource) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(),
      "AddNewRenderGraphResource", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ResType>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<ResType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ResType>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outRes, pooledResource);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*
UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData::__RenderGraphResourceRegistry__RenderGraphResourcesData() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.get_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* (*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::get_current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1bc9de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "get_current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.set_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::set_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x1bc9e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "set_current",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandle* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1bc9e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.TextureNeedsFallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::TextureNeedsFallback)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1bc676c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "TextureNeedsFallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RendererUtils::RendererList (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRendererList)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x1bca138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ComputeBuffer* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBuffer)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1bc8eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1bca2fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x1bca418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.BeginRenderGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginRenderGraph)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1bca904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginRenderGraph",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.BeginExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginExecute)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1bcaa70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginExecute",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.EndExecute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::EndExecute)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1bcac20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "EndExecute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckHandleValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1bcac60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CheckHandleValidity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x1bcac78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IncrementWriteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementWriteCount)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1bc64cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IncrementWriteCount",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1bcad94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1bcae40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceImported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1bc66c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceImported",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceShared
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1bcaeec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceShared",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsGraphicsResourceCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsGraphicsResourceCreated)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1bcaf44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsGraphicsResourceCreated",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRendererListCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRendererListCreated)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1bcaff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRendererListCreated",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.IsRenderGraphResourceImported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1bcb054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceImported",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetRenderGraphResourceTransientIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceTransientIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1bcb0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceTransientIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::Rendering::RTHandle*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x1bcb1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportTexture",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateSharedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>, bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSharedTexture)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x1bcb2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateSharedTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleaseSharedTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseSharedTexture)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x1bcb4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseSharedTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportBackbuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBackbuffer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x1bcb5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                    "ImportBackbuffer", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTexture)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x1bc6d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTexture",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResourceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceCount)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1bcb73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "GetTextureResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x1bca03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetTextureResourceDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceDesc)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x1bc69b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResourceDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ForceTextureClear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>, ::UnityEngine::Color)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ForceTextureClear)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1bc6ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ForceTextureClear",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1bcb7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererList",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ImportComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(::UnityEngine::ComputeBuffer*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportComputeBuffer)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x1bcb870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportComputeBuffer",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateComputeBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateComputeBuffer)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1bc712c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateComputeBuffer",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetComputeBufferResourceDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBufferResourceDesc)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1bc7274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetComputeBufferResourceDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetComputeBufferResourceCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBufferResourceCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1bcb928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "GetComputeBufferResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.GetComputeBufferResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource* (
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBufferResource)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x1bca204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetComputeBufferResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.UpdateSharedResourceLastFrameIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(int32_t, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x1bcb990;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "UpdateSharedResourceLastFrameIndex",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ManageSharedRenderGraphResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ManageSharedRenderGraphResources)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1bcaac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "ManageSharedRenderGraphResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreatePooledResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, int32_t, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x1bcba2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreatePooledResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateTextureCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTextureCallback)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x1bcbb54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTextureCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleasePooledResource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, int32_t, int32_t)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x1bcbd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleasePooledResource",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ReleaseTextureCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*, ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseTextureCallback)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x1bcbec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseTextureCallback",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateTextureDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateTextureDesc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1bcb738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateTextureDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateRendererListDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>)>(&::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRendererListDesc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1bcb840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateRendererListDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.ValidateComputeBufferDesc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>)>(
        &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateComputeBufferDesc)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1bcb924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateComputeBufferDesc",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.CreateRendererLists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*, ::UnityEngine::Rendering::ScriptableRenderContext, bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererLists)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x1bcc088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererLists",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)(bool)>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Clear)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x1bcc304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "Clear",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.PurgeUnusedGraphicsResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::PurgeUnusedGraphicsResources)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1bcc5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "PurgeUnusedGraphicsResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.Cleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Cleanup)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1bcc65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.FlushLogs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::FlushLogs)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1bcc790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "FlushLogs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry.LogResources
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::*)()>(
    &::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::LogResources)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1bcc3d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                                 "LogResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
                   ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*>&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphResources;
}
constexpr ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
                   ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphResources;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RenderGraphResources(
    ::ArrayW<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*,
             ::Array<::UnityEngine::Experimental::Rendering::RenderGraphModule::__RenderGraphResourceRegistry__RenderGraphResourcesData*>*>
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderGraphResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RendererListResources() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListResources;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RendererListResources() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RendererListResources;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RendererListResources(
    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListResource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RendererListResources)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphDebug() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphDebug;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_RenderGraphDebug() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderGraphDebug;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_RenderGraphDebug(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderGraphDebug)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ResourceLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceLogger;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ResourceLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ResourceLogger;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_ResourceLogger(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ResourceLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_FrameInformationLogger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_FrameInformationLogger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameInformationLogger;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_FrameInformationLogger(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FrameInformationLogger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentFrameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentFrameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentFrameIndex;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_CurrentFrameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentFrameIndex = value;
}
constexpr int32_t& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ExecutionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ExecutionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ExecutionCount;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_ExecutionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ExecutionCount = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentBackbuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBackbuffer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::RTHandle*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_CurrentBackbuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBackbuffer;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_CurrentBackbuffer(::UnityEngine::Rendering::RTHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentBackbuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>*&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ActiveRendererLists() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRendererLists;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>*> const&
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_get_m_ActiveRendererLists() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ActiveRendererLists;
}
constexpr void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::__cordl_internal_set_m_ActiveRendererLists(
    ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererUtils::RendererList>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActiveRendererLists)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::setStaticF_m_CurrentRegistry(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, "m_CurrentRegistry",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(value));
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::getStaticF_m_CurrentRegistry() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, "m_CurrentRegistry",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get>();
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::get_current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "get_current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*, false>(nullptr, ___internal_method);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::set_current(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "set_current",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Rendering::RTHandle*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*, false>(this, ___internal_method, handle);
}
inline bool
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::TextureNeedsFallback(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "TextureNeedsFallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Rendering::RendererUtils::RendererList
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRendererList(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RendererUtils::RendererList, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::ComputeBuffer*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ComputeBuffer*, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>());
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::New_ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                               ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>(renderGraphDebug, frameInformationLogger));
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::_ctor(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams* renderGraphDebug,
                                                                                            ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger* frameInformationLogger) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphDebugParams*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphLogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderGraphDebug, frameInformationLogger);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginRenderGraph(int32_t executionCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginRenderGraph",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionCount);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::BeginExecute(int32_t currentFrameIndex) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "BeginExecute",
                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentFrameIndex);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::EndExecute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "EndExecute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CheckHandleValidity(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type,
                                                                                                          int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CheckHandleValidity",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, index);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IncrementWriteCount(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IncrementWriteCount",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, res);
}
inline ::StringW
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, res);
}
inline ::StringW UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceName(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceName",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, type, index);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceImported",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceShared(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceShared",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, index);
}
inline bool
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsGraphicsResourceCreated(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsGraphicsResourceCreated",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRendererListCreated(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRendererListCreated",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, res);
}
inline bool UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::IsRenderGraphResourceImported(
    ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "IsRenderGraphResourceImported",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type, index);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetRenderGraphResourceTransientIndex(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetRenderGraphResourceTransientIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, res);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportTexture(::UnityEngine::Rendering::RTHandle* rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportTexture",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RTHandle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateSharedTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                                          bool explicitRelease) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateSharedTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, desc, explicitRelease);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseSharedTexture(::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle texture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseSharedTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, texture);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportBackbuffer(::UnityEngine::Rendering::RenderTargetIdentifier rt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportBackbuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderTargetIdentifier>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, rt);
}
/// @param transientPassIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTexture(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                                    int32_t transientPassIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTexture",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureHandle, false>(this, ___internal_method, desc, transientPassIndex);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "GetTextureResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResource(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureResource*, false>(this, ___internal_method, handle);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetTextureResourceDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetTextureResourceDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc, false>(this, ___internal_method, handle);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ForceTextureClear(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle,
                                                                                                        ::UnityEngine::Color clearColor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ForceTextureClear",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle, clearColor);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererList(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererList",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle, false>(this, ___internal_method, desc);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ImportComputeBuffer(::UnityEngine::ComputeBuffer* computeBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ImportComputeBuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ComputeBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, computeBuffer);
}
/// @param transientPassIndex: int32_t (default: static_cast<int32_t>(0xffffffff))
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateComputeBuffer(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc,
                                                                                                          int32_t transientPassIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateComputeBuffer",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferHandle, false>(this, ___internal_method, desc, transientPassIndex);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBufferResourceDesc(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetComputeBufferResourceDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc, false>(this, ___internal_method, handle);
}
inline int32_t UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBufferResourceCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "GetComputeBufferResourceCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource* UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::GetComputeBufferResource(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "GetComputeBufferResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ResourceHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferResource*, false>(this, ___internal_method, handle);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::UpdateSharedResourceLastFrameIndex(int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "UpdateSharedResourceLastFrameIndex",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, index);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ManageSharedRenderGraphResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "ManageSharedRenderGraphResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreatePooledResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext,
                                                                                                           int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreatePooledResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, type, index);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateTextureCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext,
                                                                                                            ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateTextureCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, res);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleasePooledResource(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext,
                                                                                                            int32_t type, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleasePooledResource",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, type, index);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ReleaseTextureCallback(::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext* rgContext,
                                                                                                             ::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource* res) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ReleaseTextureCallback",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphContext*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::RenderGraphModule::IRenderGraphResource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rgContext, res);
}
inline void
UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateTextureDesc(ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateTextureDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::TextureDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateRendererListDesc(ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateRendererListDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RendererUtils::RendererListDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::ValidateComputeBufferDesc(
    ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc> desc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "ValidateComputeBufferDesc",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Experimental::Rendering::RenderGraphModule::ComputeBufferDesc>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc);
}
/// @param manualDispatch: bool (default: false)
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::CreateRendererLists(
    ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>* rendererLists, ::UnityEngine::Rendering::ScriptableRenderContext context,
    bool manualDispatch) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "CreateRendererLists",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::RenderGraphModule::RendererListHandle>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rendererLists, context, manualDispatch);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Clear(bool onException) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(), "Clear",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onException);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::PurgeUnusedGraphicsResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "PurgeUnusedGraphicsResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::Cleanup() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "Cleanup", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::FlushLogs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "FlushLogs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::LogResources() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry*>::get(),
                                               "LogResources", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::RenderGraphModule::RenderGraphResourceRegistry::RenderGraphResourceRegistry() {}
