#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__NormalReconstruction_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction.SetupProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ByRef<::UnityEngine::Rendering::Universal::CameraData>)>(
    &::UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x29b1e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>::get(), "SetupProperties",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::setStaticF_s_NormalReconstructionMatrixID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_NormalReconstructionMatrixID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>::get>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::Internal::NormalReconstruction::getStaticF_s_NormalReconstructionMatrixID() {
  return ::cordl_internals::getStaticField<int32_t, "s_NormalReconstructionMatrixID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::setStaticF_s_NormalReconstructionMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_NormalReconstructionMatrix",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>::get>(
      std::forward<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>(value));
}
inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> UnityEngine::Rendering::Universal::Internal::NormalReconstruction::getStaticF_s_NormalReconstructionMatrix() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>, "s_NormalReconstructionMatrix",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>::get>();
}
inline void UnityEngine::Rendering::Universal::Internal::NormalReconstruction::SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd,
                                                                                               ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*>::get(), "SetupProperties", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::CommandBuffer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Rendering::Universal::CameraData>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cmd, cameraData);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Internal::NormalReconstruction::NormalReconstruction() {}
