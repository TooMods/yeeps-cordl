#pragma once
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_impl.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__GBufferPass_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(
    ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask, ::UnityEngine::Rendering::StencilState, int32_t,
    ::UnityEngine::Rendering::Universal::Internal::DeferredLights*)>(&::UnityEngine::Rendering::Universal::Internal::GBufferPass::_ctor)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x29b7fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor)>(&::UnityEngine::Rendering::Universal::Internal::GBufferPass::Configure)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x29b8470;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(
    ::UnityEngine::Rendering::ScriptableRenderContext, ByRef<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::Internal::GBufferPass::Execute)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x29b86b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::GBufferPass.OnCameraCleanup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::GBufferPass::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::Universal::Internal::GBufferPass::OnCameraCleanup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29b8a4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_ProfilingSampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::ProfilingSampler*> const&
UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_ProfilingSampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProfilingSampler;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ProfilingSampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_DeferredLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::Universal::Internal::DeferredLights*> const&
UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_DeferredLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DeferredLights;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DeferredLights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*>&
UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_ShaderTagValues() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagValues;
}
constexpr ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> const&
UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_ShaderTagValues() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ShaderTagValues;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_ShaderTagValues(
    ::ArrayW<::UnityEngine::Rendering::ShaderTagId, ::Array<::UnityEngine::Rendering::ShaderTagId>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ShaderTagValues)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*>&
UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_RenderStateBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlocks;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> const&
UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_RenderStateBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlocks;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_RenderStateBlocks(
    ::ArrayW<::UnityEngine::Rendering::RenderStateBlock, ::Array<::UnityEngine::Rendering::RenderStateBlock>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_RenderStateBlocks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Rendering::FilteringSettings& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_FilteringSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr ::UnityEngine::Rendering::FilteringSettings const& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_FilteringSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilteringSettings;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilteringSettings = value;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_RenderStateBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr ::UnityEngine::Rendering::RenderStateBlock const& UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_get_m_RenderStateBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RenderStateBlock;
}
constexpr void UnityEngine::Rendering::Universal::Internal::GBufferPass::__cordl_internal_set_m_RenderStateBlock(::UnityEngine::Rendering::RenderStateBlock value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RenderStateBlock = value;
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_CameraNormalsTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CameraNormalsTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_CameraNormalsTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "s_CameraNormalsTextureID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagLit(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagLit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagLit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagLit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagSimpleLit(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagSimpleLit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagSimpleLit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagSimpleLit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagUnlit(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUnlit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagUnlit() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUnlit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagUniversalGBuffer(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalGBuffer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagUniversalGBuffer() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalGBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::setStaticF_s_ShaderTagUniversalMaterialType(::UnityEngine::Rendering::ShaderTagId value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalMaterialType",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>(
      std::forward<::UnityEngine::Rendering::ShaderTagId>(value));
}
inline ::UnityEngine::Rendering::ShaderTagId UnityEngine::Rendering::Universal::Internal::GBufferPass::getStaticF_s_ShaderTagUniversalMaterialType() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderTagId, "s_ShaderTagUniversalMaterialType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get>();
}
inline ::UnityEngine::Rendering::Universal::Internal::GBufferPass*
UnityEngine::Rendering::Universal::Internal::GBufferPass::New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                   ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                                                                   ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>(evt, renderQueueRange, layerMask, stencilState, stencilReference, deferredLights));
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::RenderQueueRange renderQueueRange,
                                                                            ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference,
                                                                            ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::RenderPassEvent>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RenderQueueRange>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::StencilState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::Universal::Internal::DeferredLights*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, renderQueueRange, layerMask, stencilState, stencilReference, deferredLights);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, cameraTextureDescriptor);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::Execute(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                              ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::Internal::GBufferPass::OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::GBufferPass*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass::GBufferPass() {}
