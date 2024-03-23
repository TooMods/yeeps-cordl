#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MotionVectorRendering)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::Rendering::Universal::Internal {
class PreviousFrameData;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class MotionVectorRendering;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering);
// Type: UnityEngine.Rendering.Universal.Internal::MotionVectorRendering
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: ::UnityEngine.Rendering.Universal.Internal::MotionVectorRendering*
class CORDL_TYPE MotionVectorRendering : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CameraFrameData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraFrameData,
                      put = __cordl_internal_set_m_CameraFrameData))::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>,
                                                                                                                 ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*>* m_CameraFrameData;

  /// @brief Field m_FrameCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameCount, put = __cordl_internal_set_m_FrameCount)) uint32_t m_FrameCount;

  /// @brief Field m_LastTime, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastTime, put = __cordl_internal_set_m_LastTime)) float_t m_LastTime;

  /// @brief Field m_Time, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Time, put = __cordl_internal_set_m_Time)) float_t m_Time;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering* s_Instance;

  /// @brief Method CalculateTime, addr 0x29b18c4, size 0x4c, virtual false, abstract: false, final false
  inline void CalculateTime();

  /// @brief Method Clear, addr 0x29b1770, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method GetMotionDataForCamera, addr 0x29b17c0, size 0x104, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* GetMotionDataForCamera(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::CameraData camData);

  static inline ::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering* New_ctor();

  /// @brief Method UpdateMotionData, addr 0x29b1910, size 0x568, virtual false, abstract: false, final false
  inline void UpdateMotionData(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::Universal::CameraData cameraData, ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData* motionData);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*>*& __cordl_internal_get_m_CameraFrameData();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*>*> const&
  __cordl_internal_get_m_CameraFrameData() const;

  constexpr uint32_t const& __cordl_internal_get_m_FrameCount() const;

  constexpr uint32_t& __cordl_internal_get_m_FrameCount();

  constexpr float_t const& __cordl_internal_get_m_LastTime() const;

  constexpr float_t& __cordl_internal_get_m_LastTime();

  constexpr float_t const& __cordl_internal_get_m_Time() const;

  constexpr float_t& __cordl_internal_get_m_Time();

  constexpr void
  __cordl_internal_set_m_CameraFrameData(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*>* value);

  constexpr void __cordl_internal_set_m_FrameCount(uint32_t value);

  constexpr void __cordl_internal_set_m_LastTime(float_t value);

  constexpr void __cordl_internal_set_m_Time(float_t value);

  /// @brief Method .ctor, addr 0x29b1674, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x29b16f4, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering* get_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MotionVectorRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MotionVectorRendering(MotionVectorRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MotionVectorRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MotionVectorRendering(MotionVectorRendering const&) = delete;

  /// @brief Field m_CameraFrameData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::Universal::Internal::PreviousFrameData*>* ___m_CameraFrameData;

  /// @brief Field m_FrameCount, offset: 0x18, size: 0x4, def value: None
  uint32_t ___m_FrameCount;

  /// @brief Field m_LastTime, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_LastTime;

  /// @brief Field m_Time, offset: 0x20, size: 0x4, def value: None
  float_t ___m_Time;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering, ___m_CameraFrameData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering, ___m_FrameCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering, ___m_LastTime) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering, ___m_Time) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::MotionVectorRendering*, "UnityEngine.Rendering.Universal.Internal", "MotionVectorRendering");
