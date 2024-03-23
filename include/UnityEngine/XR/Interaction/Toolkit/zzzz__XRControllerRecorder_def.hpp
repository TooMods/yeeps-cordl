#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRControllerRecorder)
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerRecording;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerRecorder;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder);
// Type: UnityEngine.XR.Interaction.Toolkit::XRControllerRecorder
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRControllerRecorder*
class CORDL_TYPE XRControllerRecorder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <recordingStartTime>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__recordingStartTime_k__BackingField, put = __cordl_internal_set__recordingStartTime_k__BackingField)) float_t _recordingStartTime_k__BackingField;

  __declspec(property(get = get_currentTime)) double_t currentTime;

  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_isPlaying, put = set_isPlaying)) bool isPlaying;

  __declspec(property(get = get_isRecording, put = set_isRecording)) bool isRecording;

  /// @brief Field m_CurrentTime, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentTime, put = __cordl_internal_set_m_CurrentTime)) double_t m_CurrentTime;

  /// @brief Field m_IsPlaying, offset 0x3d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPlaying, put = __cordl_internal_set_m_IsPlaying)) bool m_IsPlaying;

  /// @brief Field m_IsRecording, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsRecording, put = __cordl_internal_set_m_IsRecording)) bool m_IsRecording;

  /// @brief Field m_LastFrameIdx, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastFrameIdx, put = __cordl_internal_set_m_LastFrameIdx)) int32_t m_LastFrameIdx;

  /// @brief Field m_LastPlaybackTime, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastPlaybackTime, put = __cordl_internal_set_m_LastPlaybackTime)) double_t m_LastPlaybackTime;

  /// @brief Field m_PlayOnStart, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PlayOnStart, put = __cordl_internal_set_m_PlayOnStart)) bool m_PlayOnStart;

  /// @brief Field m_PrevEnableInputActions, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PrevEnableInputActions, put = __cordl_internal_set_m_PrevEnableInputActions)) bool m_PrevEnableInputActions;

  /// @brief Field m_PrevEnableInputTracking, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_PrevEnableInputTracking, put = __cordl_internal_set_m_PrevEnableInputTracking)) bool m_PrevEnableInputTracking;

  /// @brief Field m_Recording, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Recording, put = __cordl_internal_set_m_Recording))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> m_Recording;

  /// @brief Field m_XRController, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRController, put = __cordl_internal_set_m_XRController))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> m_XRController;

  __declspec(property(get = get_playOnStart, put = set_playOnStart)) bool playOnStart;

  __declspec(property(get = get_recording, put = set_recording))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> recording;

  __declspec(property(get = get_recordingStartTime, put = set_recordingStartTime)) float_t recordingStartTime;

  __declspec(property(get = get_xrController, put = set_xrController))::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> xrController;

  /// @brief Method Awake, addr 0x25997b8, size 0xac, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetControllerState, addr 0x2599c90, size 0x13c, virtual true, abstract: false, final false
  inline bool GetControllerState(ByRef<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*> controllerState);

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder* New_ctor();

  /// @brief Method OnDestroy, addr 0x2599c70, size 0x20, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method ResetPlayback, addr 0x2599694, size 0xc, virtual false, abstract: false, final false
  inline void ResetPlayback();

  /// @brief Method Update, addr 0x2599864, size 0x134, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePlaybackTime, addr 0x2599a7c, size 0x1f4, virtual false, abstract: false, final false
  inline void UpdatePlaybackTime(double_t playbackTime);

  constexpr float_t const& __cordl_internal_get__recordingStartTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__recordingStartTime_k__BackingField();

  constexpr double_t const& __cordl_internal_get_m_CurrentTime() const;

  constexpr double_t& __cordl_internal_get_m_CurrentTime();

  constexpr bool const& __cordl_internal_get_m_IsPlaying() const;

  constexpr bool& __cordl_internal_get_m_IsPlaying();

  constexpr bool const& __cordl_internal_get_m_IsRecording() const;

  constexpr bool& __cordl_internal_get_m_IsRecording();

  constexpr int32_t const& __cordl_internal_get_m_LastFrameIdx() const;

  constexpr int32_t& __cordl_internal_get_m_LastFrameIdx();

  constexpr double_t const& __cordl_internal_get_m_LastPlaybackTime() const;

  constexpr double_t& __cordl_internal_get_m_LastPlaybackTime();

  constexpr bool const& __cordl_internal_get_m_PlayOnStart() const;

  constexpr bool& __cordl_internal_get_m_PlayOnStart();

  constexpr bool const& __cordl_internal_get_m_PrevEnableInputActions() const;

  constexpr bool& __cordl_internal_get_m_PrevEnableInputActions();

  constexpr bool const& __cordl_internal_get_m_PrevEnableInputTracking() const;

  constexpr bool& __cordl_internal_get_m_PrevEnableInputTracking();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> const& __cordl_internal_get_m_Recording() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording>& __cordl_internal_get_m_Recording();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& __cordl_internal_get_m_XRController() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& __cordl_internal_get_m_XRController();

  constexpr void __cordl_internal_set__recordingStartTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_m_CurrentTime(double_t value);

  constexpr void __cordl_internal_set_m_IsPlaying(bool value);

  constexpr void __cordl_internal_set_m_IsRecording(bool value);

  constexpr void __cordl_internal_set_m_LastFrameIdx(int32_t value);

  constexpr void __cordl_internal_set_m_LastPlaybackTime(double_t value);

  constexpr void __cordl_internal_set_m_PlayOnStart(bool value);

  constexpr void __cordl_internal_set_m_PrevEnableInputActions(bool value);

  constexpr void __cordl_internal_set_m_PrevEnableInputTracking(bool value);

  constexpr void __cordl_internal_set_m_Recording(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> value);

  constexpr void __cordl_internal_set_m_XRController(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> value);

  /// @brief Method .ctor, addr 0x2599dcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_currentTime, addr 0x25996a0, size 0x8, virtual false, abstract: false, final false
  inline double_t get_currentTime();

  /// @brief Method get_duration, addr 0x25996a8, size 0x84, virtual false, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_isPlaying, addr 0x259968c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPlaying();

  /// @brief Method get_isRecording, addr 0x259941c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRecording();

  /// @brief Method get_playOnStart, addr 0x25993e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_playOnStart();

  /// @brief Method get_recording, addr 0x25993fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> get_recording();

  /// @brief Method get_recordingStartTime, addr 0x25997a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_recordingStartTime();

  /// @brief Method get_xrController, addr 0x259940c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> get_xrController();

  /// @brief Method set_isPlaying, addr 0x25994e4, size 0x12c, virtual false, abstract: false, final false
  inline void set_isPlaying(bool value);

  /// @brief Method set_isRecording, addr 0x2599424, size 0xc0, virtual false, abstract: false, final false
  inline void set_isRecording(bool value);

  /// @brief Method set_playOnStart, addr 0x25993f0, size 0xc, virtual false, abstract: false, final false
  inline void set_playOnStart(bool value);

  /// @brief Method set_recording, addr 0x2599404, size 0x8, virtual false, abstract: false, final false
  inline void set_recording(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording* value);

  /// @brief Method set_recordingStartTime, addr 0x25997b0, size 0x8, virtual false, abstract: false, final false
  inline void set_recordingStartTime(float_t value);

  /// @brief Method set_xrController, addr 0x2599414, size 0x8, virtual false, abstract: false, final false
  inline void set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRControllerRecorder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRControllerRecorder(XRControllerRecorder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRControllerRecorder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRControllerRecorder(XRControllerRecorder const&) = delete;

  /// @brief Field m_PlayOnStart, offset: 0x18, size: 0x1, def value: None
  bool ___m_PlayOnStart;

  /// @brief Field m_Recording, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording> ___m_Recording;

  /// @brief Field m_XRController, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> ___m_XRController;

  /// @brief Field m_CurrentTime, offset: 0x30, size: 0x8, def value: None
  double_t ___m_CurrentTime;

  /// @brief Field <recordingStartTime>k__BackingField, offset: 0x38, size: 0x4, def value: None
  float_t ____recordingStartTime_k__BackingField;

  /// @brief Field m_IsRecording, offset: 0x3c, size: 0x1, def value: None
  bool ___m_IsRecording;

  /// @brief Field m_IsPlaying, offset: 0x3d, size: 0x1, def value: None
  bool ___m_IsPlaying;

  /// @brief Field m_LastPlaybackTime, offset: 0x40, size: 0x8, def value: None
  double_t ___m_LastPlaybackTime;

  /// @brief Field m_LastFrameIdx, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_LastFrameIdx;

  /// @brief Field m_PrevEnableInputActions, offset: 0x4c, size: 0x1, def value: None
  bool ___m_PrevEnableInputActions;

  /// @brief Field m_PrevEnableInputTracking, offset: 0x4d, size: 0x1, def value: None
  bool ___m_PrevEnableInputTracking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PlayOnStart) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_Recording) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_XRController) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_CurrentTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ____recordingStartTime_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_IsRecording) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_IsPlaying) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_LastPlaybackTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_LastFrameIdx) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevEnableInputActions) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder, ___m_PrevEnableInputTracking) == 0x4d, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecorder*, "UnityEngine.XR.Interaction.Toolkit", "XRControllerRecorder");
