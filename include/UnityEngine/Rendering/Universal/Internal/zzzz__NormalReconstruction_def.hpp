#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NormalReconstruction)
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class NormalReconstruction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::NormalReconstruction);
// Type: UnityEngine.Rendering.Universal.Internal::NormalReconstruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::NormalReconstruction*
class CORDL_TYPE NormalReconstruction : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_NormalReconstructionMatrix, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_NormalReconstructionMatrix,
                             put = setStaticF_s_NormalReconstructionMatrix))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> s_NormalReconstructionMatrix;

  /// @brief Field s_NormalReconstructionMatrixID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_NormalReconstructionMatrixID, put = setStaticF_s_NormalReconstructionMatrixID)) int32_t s_NormalReconstructionMatrixID;

  /// @brief Method SetupProperties, addr 0x29b1e78, size 0x384, virtual false, abstract: false, final false
  static inline void SetupProperties(::UnityEngine::Rendering::CommandBuffer* cmd, ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  static inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> getStaticF_s_NormalReconstructionMatrix();

  static inline int32_t getStaticF_s_NormalReconstructionMatrixID();

  static inline void setStaticF_s_NormalReconstructionMatrix(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  static inline void setStaticF_s_NormalReconstructionMatrixID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NormalReconstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NormalReconstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NormalReconstruction(NormalReconstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NormalReconstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NormalReconstruction(NormalReconstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::NormalReconstruction, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::NormalReconstruction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::NormalReconstruction*, "UnityEngine.Rendering.Universal.Internal", "NormalReconstruction");
