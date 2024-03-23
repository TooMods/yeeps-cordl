#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFenceType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFence_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsFenceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__SynchronisationStageFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__SynchronisationStage_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.TranslateSynchronizationStageToFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::SynchronisationStageFlags (*)(::UnityEngine::Rendering::SynchronisationStage)>(
    &::UnityEngine::Rendering::GraphicsFence::TranslateSynchronizationStageToFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a8e168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "TranslateSynchronizationStageToFlags", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SynchronisationStage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.InitPostAllocation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GraphicsFence::*)()>(&::UnityEngine::Rendering::GraphicsFence::InitPostAllocation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a8dfe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(),
                                                                               "InitPostAllocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.IsFencePending
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::GraphicsFence::*)()>(&::UnityEngine::Rendering::GraphicsFence::IsFencePending)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a8e254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "IsFencePending",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.Validate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::GraphicsFence::*)()>(&::UnityEngine::Rendering::GraphicsFence::Validate)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a8e0d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "Validate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.GetPlatformNotSupportedVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::GraphicsFence::*)()>(
    &::UnityEngine::Rendering::GraphicsFence::GetPlatformNotSupportedVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a8f4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(),
                                                                               "GetPlatformNotSupportedVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GraphicsFence.GetVersionNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*)>(&::UnityEngine::Rendering::GraphicsFence::GetVersionNumber)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2a8f4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "GetVersionNumber",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Rendering::SynchronisationStageFlags UnityEngine::Rendering::GraphicsFence::TranslateSynchronizationStageToFlags(::UnityEngine::Rendering::SynchronisationStage s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "TranslateSynchronizationStageToFlags", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::SynchronisationStage>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::SynchronisationStageFlags, false>(nullptr, ___internal_method, s);
}
inline void UnityEngine::Rendering::GraphicsFence::InitPostAllocation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(),
                                                                             "InitPostAllocation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::GraphicsFence::IsFencePending() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "IsFencePending",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Rendering::GraphicsFence::Validate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "Validate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GraphicsFence::GetPlatformNotSupportedVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(),
                                                                             "GetPlatformNotSupportedVersion", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::GraphicsFence::GetVersionNumber(void* fencePtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GraphicsFence>::get(), "GetVersionNumber",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, fencePtr);
}
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m_FenceType", ty: "::UnityEngine::Rendering::GraphicsFenceType", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GraphicsFence::GraphicsFence(void* m_Ptr, int32_t m_Version, ::UnityEngine::Rendering::GraphicsFenceType m_FenceType) noexcept {
  this->m_Ptr = m_Ptr;
  this->m_Version = m_Version;
  this->m_FenceType = m_FenceType;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GraphicsFence::GraphicsFence() {}
