#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MotionVectorsPersistentData)
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class MotionVectorsPersistentData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData);
// Type: UnityEngine.Rendering.Universal::MotionVectorsPersistentData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal::MotionVectorsPersistentData*
class CORDL_TYPE MotionVectorsPersistentData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_lastFrameIndex)) int32_t lastFrameIndex;

  /// @brief Field m_LastFrameIndex, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastFrameIndex, put = __cordl_internal_set_m_LastFrameIndex))::ArrayW<int32_t, ::Array<int32_t>*> m_LastFrameIndex;

  /// @brief Field m_PrevAspectRatio, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrevAspectRatio, put = __cordl_internal_set_m_PrevAspectRatio))::ArrayW<float_t, ::Array<float_t>*> m_PrevAspectRatio;

  /// @brief Field m_PreviousViewProjection, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreviousViewProjection,
                      put = __cordl_internal_set_m_PreviousViewProjection))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_PreviousViewProjection;

  /// @brief Field m_ViewProjection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewProjection, put = __cordl_internal_set_m_ViewProjection))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> m_ViewProjection;

  __declspec(property(get = get_previousViewProjection))::UnityEngine::Matrix4x4 previousViewProjection;

  __declspec(property(get = get_previousViewProjectionStereo))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> previousViewProjectionStereo;

  __declspec(property(get = get_viewProjection))::UnityEngine::Matrix4x4 viewProjection;

  __declspec(property(get = get_viewProjectionStereo))::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> viewProjectionStereo;

  /// @brief Method GetXRMultiPassId, addr 0x2724dd8, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetXRMultiPassId(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  static inline ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* New_ctor();

  /// @brief Method Update, addr 0x2724e14, size 0x6fc, virtual false, abstract: false, final false
  inline void Update(ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_LastFrameIndex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_LastFrameIndex();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_PrevAspectRatio() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_PrevAspectRatio();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_PreviousViewProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_PreviousViewProjection();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> const& __cordl_internal_get_m_ViewProjection() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>& __cordl_internal_get_m_ViewProjection();

  constexpr void __cordl_internal_set_m_LastFrameIndex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_PrevAspectRatio(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_PreviousViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  constexpr void __cordl_internal_set_m_ViewProjection(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> value);

  /// @brief Method .ctor, addr 0x2724b38, size 0x200, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_lastFrameIndex, addr 0x2724d38, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_lastFrameIndex();

  /// @brief Method get_previousViewProjection, addr 0x2724d94, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_previousViewProjection();

  /// @brief Method get_previousViewProjectionStereo, addr 0x2724dd0, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_previousViewProjectionStereo();

  /// @brief Method get_viewProjection, addr 0x2724d60, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_viewProjection();

  /// @brief Method get_viewProjectionStereo, addr 0x2724dc8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> get_viewProjectionStereo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorsPersistentData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorsPersistentData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorsPersistentData(MotionVectorsPersistentData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorsPersistentData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorsPersistentData(MotionVectorsPersistentData const&) = delete;

  /// @brief Field m_ViewProjection, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_ViewProjection;

  /// @brief Field m_PreviousViewProjection, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> ___m_PreviousViewProjection;

  /// @brief Field m_LastFrameIndex, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_LastFrameIndex;

  /// @brief Field m_PrevAspectRatio, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_PrevAspectRatio;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_ViewProjection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PreviousViewProjection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_LastFrameIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData, ___m_PrevAspectRatio) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*, "UnityEngine.Rendering.Universal", "MotionVectorsPersistentData");
