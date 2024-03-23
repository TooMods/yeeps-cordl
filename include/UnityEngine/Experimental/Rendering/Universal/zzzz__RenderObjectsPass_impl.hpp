#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderQueueType_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderObjectsPass_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderObjectsPass_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderObjects_def.hpp"
#include "UnityEngine/Experimental/Rendering/Universal/zzzz__RenderQueueType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPProfileId_def.hpp"
#include "UnityEngine/Rendering/zzzz__CompareFunction_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilOp_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e21230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c._Execute_b__19_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>, ByRef<::UnityEngine::Rendering::DrawingSettings>,
    ByRef<::UnityEngine::Rendering::FilteringSettings>, ByRef<::UnityEngine::Rendering::RenderStateBlock>)>(
    &::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::_Execute_b__19_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1e21238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get(), "<Execute>b__19_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::setStaticF___9(::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get>(
      std::forward<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>(value));
}
inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c* UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get>();
}
inline void UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::setStaticF___9__19_0(::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction*, "<>9__19_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get>(
      std::forward<::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction*>(value));
}
inline ::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction* UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::getStaticF___9__19_0() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::__DebugHandler__DrawFunction*, "<>9__19_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get>();
}
inline ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c* UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>());
}
inline void UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::_Execute_b__19_0(::UnityEngine::Rendering::ScriptableRenderContext ctx,
                                                                                                        ByRef<::UnityEngine::Rendering::Universal::RenderingData> data,
                                                                                                        ByRef<::UnityEngine::Rendering::DrawingSettings> ds,
                                                                                                        ByRef<::UnityEngine::Rendering::FilteringSettings> fs,
                                                                                                        ByRef<::UnityEngine::Rendering::RenderStateBlock> rsb) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c*>::get(), "<Execute>b__19_0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ScriptableRenderContext>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::RenderingData>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::DrawingSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::FilteringSettings>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::RenderStateBlock>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, data, ds, fs, rsb);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjectsPass____c::__RenderObjectsPass____c() {}
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass.get_overrideMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::get_overrideMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e203d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(),
                                                 "get_overrideMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass.set_overrideMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)(::UnityEngine::Material*)>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::set_overrideMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e203dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), "set_overrideMaterial",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass.get_overrideMaterialPassIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)()>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::get_overrideMaterialPassIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e203e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(),
                                                 "get_overrideMaterialPassIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass.set_overrideMaterialPassIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)(int32_t)>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::set_overrideMaterialPassIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1e203ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), "set_overrideMaterialPassIndex",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass.SetDetphState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)(
    bool, ::UnityEngine::Rendering::CompareFunction)>(&::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::SetDetphState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1e203f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), "SetDetphState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass.SetStencilState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)(
    int32_t, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp)>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::SetStencilState)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1e20460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(),
                                                 "SetStencilState", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)(
    ::StringW, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*>, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType, int32_t,
    ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*)>(&::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::_ctor)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x1e20548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::RenderQueueType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)(
    ::UnityEngine::Rendering::Universal::URPProfileId, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*>,
    ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType, int32_t, ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*)>(
    &::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x1e209ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::URPProfileId>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::RenderQueueType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::Execute)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0x1e20a94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), 9));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_renderQueueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderQueueType;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType const& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_renderQueueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderQueueType;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_renderQueueType(::UnityEngine::Experimental::Rendering::Universal::RenderQueueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderQueueType = value;
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*&
UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_CameraSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSettings;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*> const&
UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_CameraSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CameraSettings;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_CameraSettings(
    ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CameraSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ProfilerTag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilerTag;
}
constexpr ::StringW const& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ProfilerTag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilerTag;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_ProfilerTag(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilerTag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ProfilingSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ProfilingSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterial_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterial_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterial_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterial_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set__overrideMaterial_k__BackingField(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideMaterial_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterialPassIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterialPassIndex_k__BackingField;
}
constexpr int32_t const& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get__overrideMaterialPassIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideMaterialPassIndex_k__BackingField;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set__overrideMaterialPassIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideMaterialPassIndex_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ShaderTagIdList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*> const&
UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_ShaderTagIdList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagIdList;
}
constexpr void
UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShaderTagIdList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::RenderStateBlock& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_RenderStateBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock const& UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_get_m_RenderStateBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::__cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderStateBlock = value;
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::get_overrideMaterial() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(),
                                               "get_overrideMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::set_overrideMaterial(::UnityEngine::Material* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), "set_overrideMaterial",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::get_overrideMaterialPassIndex() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(),
                                               "get_overrideMaterialPassIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::set_overrideMaterialPassIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), "set_overrideMaterialPassIndex",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param function: ::UnityEngine::Rendering::CompareFunction (default: static_cast<int32_t>(0x2))
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::SetDetphState(bool writeEnabled, ::UnityEngine::Rendering::CompareFunction function) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), "SetDetphState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writeEnabled, function);
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::SetStencilState(int32_t reference, ::UnityEngine::Rendering::CompareFunction compareFunction,
                                                                                                ::UnityEngine::Rendering::StencilOp passOp, ::UnityEngine::Rendering::StencilOp failOp,
                                                                                                ::UnityEngine::Rendering::StencilOp zFailOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), "SetStencilState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CompareFunction>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilOp>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reference, compareFunction, passOp, failOp, zFailOp);
}
inline ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*
UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::New_ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                                             ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                                                                             ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                             ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>(profilerTag, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings));
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::_ctor(::StringW profilerTag, ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                                                      ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                                                                                      ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                                      ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::RenderQueueType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profilerTag, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings);
}
inline ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*
UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId,
                                                                             ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent, ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                                                                             ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                             ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings) {
  return THROW_UNLESS(
      ::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>(profileId, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings));
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::_ctor(::UnityEngine::Rendering::Universal::URPProfileId profileId,
                                                                                      ::UnityEngine::Rendering::Universal::RenderPassEvent renderPassEvent,
                                                                                      ::ArrayW<::StringW, ::Array<::StringW>*> shaderTags,
                                                                                      ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, int32_t layerMask,
                                                                                      ::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings* cameraSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::URPProfileId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::RenderQueueType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::Universal::__RenderObjects__CustomCameraSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, profileId, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings);
}
inline void UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                        ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass::RenderObjectsPass() {}
