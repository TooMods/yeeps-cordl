#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRControllerRecording)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerState;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRControllerRecording;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording);
// Type: UnityEngine.XR.Interaction.Toolkit::XRControllerRecording
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::XRControllerRecording*
class CORDL_TYPE XRControllerRecording : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_duration)) double_t duration;

  __declspec(property(get = get_frames))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* frames;

  /// @brief Field m_ActivateActivatedInFirstFrame, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ActivateActivatedInFirstFrame, put = __cordl_internal_set_m_ActivateActivatedInFirstFrame)) bool m_ActivateActivatedInFirstFrame;

  /// @brief Field m_FirstUIPressActivatedInFirstFrame, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_FirstUIPressActivatedInFirstFrame, put = __cordl_internal_set_m_FirstUIPressActivatedInFirstFrame)) bool m_FirstUIPressActivatedInFirstFrame;

  /// @brief Field m_Frames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Frames,
                      put = __cordl_internal_set_m_Frames))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* m_Frames;

  /// @brief Field m_SelectActivatedInFirstFrame, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelectActivatedInFirstFrame, put = __cordl_internal_set_m_SelectActivatedInFirstFrame)) bool m_SelectActivatedInFirstFrame;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Method AddRecordingFrame, addr 0x2599998, size 0xe4, virtual false, abstract: false, final false
  inline void AddRecordingFrame(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* state);

  /// @brief Method AddRecordingFrame, addr 0x259a148, size 0xec, virtual false, abstract: false, final false
  inline void AddRecordingFrame(double_t time, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, bool selectActive, bool activateActive, bool pressActive);

  /// @brief Method AddRecordingFrameNonAlloc, addr 0x259a0a0, size 0xa8, virtual false, abstract: false, final false
  inline void AddRecordingFrameNonAlloc(::UnityEngine::XR::Interaction::Toolkit::XRControllerState* state);

  /// @brief Method InitRecording, addr 0x2599610, size 0x78, virtual false, abstract: false, final false
  inline void InitRecording();

  static inline ::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording* New_ctor();

  /// @brief Method SaveRecording, addr 0x2599688, size 0x4, virtual false, abstract: false, final false
  inline void SaveRecording();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x2599e68, size 0x1ac, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x2599ddc, size 0x8c, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr bool const& __cordl_internal_get_m_ActivateActivatedInFirstFrame() const;

  constexpr bool& __cordl_internal_get_m_ActivateActivatedInFirstFrame();

  constexpr bool const& __cordl_internal_get_m_FirstUIPressActivatedInFirstFrame() const;

  constexpr bool& __cordl_internal_get_m_FirstUIPressActivatedInFirstFrame();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>*& __cordl_internal_get_m_Frames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>*> const& __cordl_internal_get_m_Frames() const;

  constexpr bool const& __cordl_internal_get_m_SelectActivatedInFirstFrame() const;

  constexpr bool& __cordl_internal_get_m_SelectActivatedInFirstFrame();

  constexpr void __cordl_internal_set_m_ActivateActivatedInFirstFrame(bool value);

  constexpr void __cordl_internal_set_m_FirstUIPressActivatedInFirstFrame(bool value);

  constexpr void __cordl_internal_set_m_Frames(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* value);

  constexpr void __cordl_internal_set_m_SelectActivatedInFirstFrame(bool value);

  /// @brief Method .ctor, addr 0x259a380, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_duration, addr 0x259972c, size 0x7c, virtual false, abstract: false, final false
  inline double_t get_duration();

  /// @brief Method get_frames, addr 0x2599dd4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* get_frames();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRControllerRecording();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRControllerRecording", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRControllerRecording(XRControllerRecording&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRControllerRecording", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRControllerRecording(XRControllerRecording const&) = delete;

  /// @brief Field m_SelectActivatedInFirstFrame, offset: 0x18, size: 0x1, def value: None
  bool ___m_SelectActivatedInFirstFrame;

  /// @brief Field m_ActivateActivatedInFirstFrame, offset: 0x19, size: 0x1, def value: None
  bool ___m_ActivateActivatedInFirstFrame;

  /// @brief Field m_FirstUIPressActivatedInFirstFrame, offset: 0x1a, size: 0x1, def value: None
  bool ___m_FirstUIPressActivatedInFirstFrame;

  /// @brief Field m_Frames, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::XRControllerState*>* ___m_Frames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording, ___m_SelectActivatedInFirstFrame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording, ___m_ActivateActivatedInFirstFrame) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording, ___m_FirstUIPressActivatedInFirstFrame) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording, ___m_Frames) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRControllerRecording*, "UnityEngine.XR.Interaction.Toolkit", "XRControllerRecording");
