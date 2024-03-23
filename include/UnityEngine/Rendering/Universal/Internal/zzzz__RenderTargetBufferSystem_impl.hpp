#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_impl.hpp"
#include "UnityEngine/zzzz__FilterMode_impl.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__RenderTargetBufferSystem_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderTargetHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
// Ctor Parameters [CppParam { name: "rt", ty: "::UnityEngine::Rendering::Universal::RenderTargetHandle", modifiers: "", def_value: Some("{}") }, CppParam { name: "name", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "msaa", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer::__RenderTargetBufferSystem__SwapBuffer(::UnityEngine::Rendering::Universal::RenderTargetHandle rt,
                                                                                                                                        int32_t name, int32_t msaa) noexcept {
  this->rt = rt;
  this->name = name;
  this->msaa = msaa;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer::__RenderTargetBufferSystem__SwapBuffer() {}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.get_backBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer (
    ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_backBuffer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1614dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "get_backBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.get_frontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer (
    ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_frontBuffer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1614e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "get_frontBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(::StringW)>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1614ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.GetBackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBackBuffer)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x1614fe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "GetBackBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.GetBackBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(::UnityEngine::Rendering::CommandBuffer*)>(
        &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBackBuffer)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x1615018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBackBuffer",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.GetFrontBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(::UnityEngine::Rendering::CommandBuffer*)>(
        &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetFrontBuffer)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x16151a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetFrontBuffer",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.Swap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Swap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x161544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Swap",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Initialize)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x161506c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(
    ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Clear)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x16154ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.SetCameraSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode)>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::SetCameraSettings)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x161553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "SetCameraSettings", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.SetCameraSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(
    ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode)>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::SetCameraSettings)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x1615604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                                 "SetCameraSettings", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.GetBufferA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::RenderTargetHandle (
    ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)()>(&::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBufferA)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x16156ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBufferA",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem.EnableMSAA
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::*)(bool)>(
    &::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::EnableMSAA)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x16156c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "EnableMSAA",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_A() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_A;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer const&
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_A() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_A;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_A(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_A = value;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_B() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_B;
}
constexpr ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer const&
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_B() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_B;
}
constexpr void
UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_B(::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_B = value;
}
constexpr ::UnityEngine::FilterMode& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_FilterMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterMode;
}
constexpr ::UnityEngine::FilterMode const& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_FilterMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FilterMode;
}
constexpr void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_FilterMode(::UnityEngine::FilterMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FilterMode = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_AllowMSAA() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowMSAA;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_AllowMSAA() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowMSAA;
}
constexpr void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_AllowMSAA(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowMSAA = value;
}
constexpr bool& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_RTisAllocated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTisAllocated;
}
constexpr bool const& UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_get_m_RTisAllocated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RTisAllocated;
}
constexpr void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::__cordl_internal_set_m_RTisAllocated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RTisAllocated = value;
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::setStaticF_m_AisBackBuffer(bool value) {
  ::cordl_internals::setStaticField<bool, "m_AisBackBuffer", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::getStaticF_m_AisBackBuffer() {
  return ::cordl_internals::getStaticField<bool, "m_AisBackBuffer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::setStaticF_m_Desc(::UnityEngine::RenderTextureDescriptor value) {
  ::cordl_internals::setStaticField<::UnityEngine::RenderTextureDescriptor, "m_Desc",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>(
      std::forward<::UnityEngine::RenderTextureDescriptor>(value));
}
inline ::UnityEngine::RenderTextureDescriptor UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::getStaticF_m_Desc() {
  return ::cordl_internals::getStaticField<::UnityEngine::RenderTextureDescriptor, "m_Desc",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get>();
}
inline ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_backBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "get_backBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::get_frontBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "get_frontBuffer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::Internal::__RenderTargetBufferSystem__SwapBuffer, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::New_ctor(::StringW name) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>(name));
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::_ctor(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBackBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBackBuffer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBackBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBackBuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetFrontBuffer",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Swap() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Swap",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Initialize(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Initialize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::Clear(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "Clear", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::SetCameraSettings(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor desc,
                                                                                                     ::UnityEngine::FilterMode filterMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "SetCameraSettings", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cmd, desc, filterMode);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::SetCameraSettings(::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filterMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(),
                                               "SetCameraSettings", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTextureDescriptor>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::FilterMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, desc, filterMode);
}
inline ::UnityEngine::Rendering::Universal::RenderTargetHandle UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::GetBufferA() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "GetBufferA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::RenderTargetHandle, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::EnableMSAA(bool enable) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*>::get(), "EnableMSAA",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enable);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem::RenderTargetBufferSystem() {}
