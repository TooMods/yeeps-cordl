#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/zzzz__TrackingOriginModeFlags_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XROrigin)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::XR::CoreUtils {
struct ARTrackablesParentTransformChangedEventArgs;
}
namespace Unity::XR::CoreUtils {
struct __XROrigin__TrackingOriginMode;
}
namespace Unity::XR::CoreUtils {
class __XROrigin___RepeatInitializeCamera_d__48;
}
namespace UnityEngine::XR {
struct TrackingOriginModeFlags;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::CoreUtils {
struct __XROrigin__TrackingOriginMode;
}
namespace Unity::XR::CoreUtils {
class XROrigin;
}
namespace Unity::XR::CoreUtils {
class __XROrigin___RepeatInitializeCamera_d__48;
}
// Write type traits
MARK_VAL_T(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode);
MARK_REF_PTR_T(::Unity::XR::CoreUtils::XROrigin);
MARK_REF_PTR_T(::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48);
// Type: ::TrackingOriginMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: true
// CS Name: ::XROrigin::TrackingOriginMode
struct CORDL_TYPE __XROrigin__TrackingOriginMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XROrigin__TrackingOriginMode_Unwrapped
  enum struct ____XROrigin__TrackingOriginMode_Unwrapped : int32_t {
    __E_NotSpecified = static_cast<int32_t>(0x0),
    __E_Device = static_cast<int32_t>(0x1),
    __E_Floor = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XROrigin__TrackingOriginMode_Unwrapped() const noexcept {
    return static_cast<____XROrigin__TrackingOriginMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XROrigin__TrackingOriginMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XROrigin__TrackingOriginMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Device value: static_cast<int32_t>(0x1)
  static ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode const Device;

  /// @brief Field Floor value: static_cast<int32_t>(0x2)
  static ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode const Floor;

  /// @brief Field NotSpecified value: static_cast<int32_t>(0x0)
  static ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode const NotSpecified;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
// Type: ::<RepeatInitializeCamera>d__48
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::XROrigin::<RepeatInitializeCamera>d__48*
class CORDL_TYPE __XROrigin___RepeatInitializeCamera_d__48 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current))::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::Unity::XR::CoreUtils::XROrigin> __4__this;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x2881ab8, size 0x94, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x2881b4c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2881b54, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2881b94, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x2881ab4, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& __cordl_internal_get___4__this();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::Unity::XR::CoreUtils::XROrigin> value);

  /// @brief Method .ctor, addr 0x28803dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XROrigin___RepeatInitializeCamera_d__48();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XROrigin___RepeatInitializeCamera_d__48", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XROrigin___RepeatInitializeCamera_d__48(__XROrigin___RepeatInitializeCamera_d__48&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XROrigin___RepeatInitializeCamera_d__48", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XROrigin___RepeatInitializeCamera_d__48(__XROrigin___RepeatInitializeCamera_d__48 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::Unity::XR::CoreUtils::XROrigin> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48, 0x28>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48, _____4__this) == 0x20, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
// Type: Unity.XR.CoreUtils::XROrigin
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils {
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils::XROrigin*
class CORDL_TYPE XROrigin : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TrackingOriginMode = ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode;

  using _RepeatInitializeCamera_d__48 = ::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48;

  __declspec(property(get = get_Camera, put = set_Camera))::UnityW<::UnityEngine::Camera> Camera;

  __declspec(property(get = get_CameraFloorOffsetObject, put = set_CameraFloorOffsetObject))::UnityW<::UnityEngine::GameObject> CameraFloorOffsetObject;

  __declspec(property(get = get_CameraInOriginSpaceHeight)) float_t CameraInOriginSpaceHeight;

  __declspec(property(get = get_CameraInOriginSpacePos))::UnityEngine::Vector3 CameraInOriginSpacePos;

  __declspec(property(get = get_CameraYOffset, put = set_CameraYOffset)) float_t CameraYOffset;

  __declspec(property(get = get_CurrentTrackingOriginMode, put = set_CurrentTrackingOriginMode))::UnityEngine::XR::TrackingOriginModeFlags CurrentTrackingOriginMode;

  __declspec(property(get = get_Origin, put = set_Origin))::UnityW<::UnityEngine::GameObject> Origin;

  __declspec(property(get = get_OriginInCameraSpacePos))::UnityEngine::Vector3 OriginInCameraSpacePos;

  __declspec(property(get = get_RequestedTrackingOriginMode, put = set_RequestedTrackingOriginMode))::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode RequestedTrackingOriginMode;

  __declspec(property(get = get_TrackablesParent, put = set_TrackablesParent))::UnityW<::UnityEngine::Transform> TrackablesParent;

  /// @brief Field TrackablesParentTransformChanged, offset 0x28, size 0x8
  __declspec(
      property(get = __cordl_internal_get_TrackablesParentTransformChanged,
               put = __cordl_internal_set_TrackablesParentTransformChanged))::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* TrackablesParentTransformChanged;

  /// @brief Field <CurrentTrackingOriginMode>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__CurrentTrackingOriginMode_k__BackingField,
                      put = __cordl_internal_set__CurrentTrackingOriginMode_k__BackingField))::UnityEngine::XR::TrackingOriginModeFlags _CurrentTrackingOriginMode_k__BackingField;

  /// @brief Field <TrackablesParent>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__TrackablesParent_k__BackingField,
                      put = __cordl_internal_set__TrackablesParent_k__BackingField))::UnityW<::UnityEngine::Transform> _TrackablesParent_k__BackingField;

  /// @brief Field m_Camera, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Camera, put = __cordl_internal_set_m_Camera))::UnityW<::UnityEngine::Camera> m_Camera;

  /// @brief Field m_CameraFloorOffsetObject, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraFloorOffsetObject, put = __cordl_internal_set_m_CameraFloorOffsetObject))::UnityW<::UnityEngine::GameObject> m_CameraFloorOffsetObject;

  /// @brief Field m_CameraInitialized, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CameraInitialized, put = __cordl_internal_set_m_CameraInitialized)) bool m_CameraInitialized;

  /// @brief Field m_CameraInitializing, offset 0x4d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CameraInitializing, put = __cordl_internal_set_m_CameraInitializing)) bool m_CameraInitializing;

  /// @brief Field m_CameraYOffset, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraYOffset, put = __cordl_internal_set_m_CameraYOffset)) float_t m_CameraYOffset;

  /// @brief Field m_OriginBaseGameObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginBaseGameObject, put = __cordl_internal_set_m_OriginBaseGameObject))::UnityW<::UnityEngine::GameObject> m_OriginBaseGameObject;

  /// @brief Field m_RequestedTrackingOriginMode, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RequestedTrackingOriginMode,
                      put = __cordl_internal_set_m_RequestedTrackingOriginMode))::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode m_RequestedTrackingOriginMode;

  /// @brief Field s_InputSubsystems, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InputSubsystems, put = setStaticF_s_InputSubsystems))::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* s_InputSubsystems;

  /// @brief Method Awake, addr 0x2880e24, size 0x410, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetCameraOriginPose, addr 0x2881234, size 0x128, virtual false, abstract: false, final false
  inline ::UnityEngine::Pose GetCameraOriginPose();

  /// @brief Method MatchOriginUp, addr 0x288055c, size 0x1cc, virtual false, abstract: false, final false
  inline bool MatchOriginUp(::UnityEngine::Vector3 destinationUp);

  /// @brief Method MatchOriginUpCameraForward, addr 0x2880728, size 0x378, virtual false, abstract: false, final false
  inline bool MatchOriginUpCameraForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward);

  /// @brief Method MatchOriginUpOriginForward, addr 0x2880aa0, size 0x24c, virtual false, abstract: false, final false
  inline bool MatchOriginUpOriginForward(::UnityEngine::Vector3 destinationUp, ::UnityEngine::Vector3 destinationForward);

  /// @brief Method MoveCameraToWorldLocation, addr 0x2880cec, size 0x138, virtual false, abstract: false, final false
  inline bool MoveCameraToWorldLocation(::UnityEngine::Vector3 desiredWorldLocation);

  /// @brief Method MoveOffsetHeight, addr 0x287fc20, size 0x48, virtual false, abstract: false, final false
  inline void MoveOffsetHeight();

  /// @brief Method MoveOffsetHeight, addr 0x287fdac, size 0xb4, virtual false, abstract: false, final false
  inline void MoveOffsetHeight(float_t y);

  static inline ::Unity::XR::CoreUtils::XROrigin* New_ctor();

  /// @brief Method OnBeforeRender, addr 0x288145c, size 0x138, virtual false, abstract: false, final false
  inline void OnBeforeRender();

  /// @brief Method OnDestroy, addr 0x2881848, size 0x1cc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x28813dc, size 0x80, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x288135c, size 0x80, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnInputSubsystemTrackingOriginUpdated, addr 0x28803b0, size 0x2c, virtual false, abstract: false, final false
  inline void OnInputSubsystemTrackingOriginUpdated(::UnityEngine::XR::XRInputSubsystem* inputSubsystem);

  /// @brief Method OnValidate, addr 0x2881594, size 0xc0, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RepeatInitializeCamera, addr 0x2880144, size 0x68, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* RepeatInitializeCamera();

  /// @brief Method RotateAroundCameraPosition, addr 0x2880448, size 0x114, virtual false, abstract: false, final false
  inline bool RotateAroundCameraPosition(::UnityEngine::Vector3 vector, float_t angleDegrees);

  /// @brief Method RotateAroundCameraUsingOriginUp, addr 0x2880404, size 0x44, virtual false, abstract: false, final false
  inline bool RotateAroundCameraUsingOriginUp(float_t angleDegrees);

  /// @brief Method SetupCamera, addr 0x287fe60, size 0x2e4, virtual false, abstract: false, final false
  inline bool SetupCamera();

  /// @brief Method SetupCamera, addr 0x28801ac, size 0x204, virtual false, abstract: false, final false
  inline bool SetupCamera(::UnityEngine::XR::XRInputSubsystem* inputSubsystem);

  /// @brief Method Start, addr 0x2881844, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method TryInitializeCamera, addr 0x287fc78, size 0x58, virtual false, abstract: false, final false
  inline void TryInitializeCamera();

  /// @brief Method <OnValidate>g__IsModeStale|60_0, addr 0x2881654, size 0x1f0, virtual false, abstract: false, final false
  inline bool _OnValidate_g__IsModeStale_60_0();

  constexpr ::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*& __cordl_internal_get_TrackablesParentTransformChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>*> const&
  __cordl_internal_get_TrackablesParentTransformChanged() const;

  constexpr ::UnityEngine::XR::TrackingOriginModeFlags const& __cordl_internal_get__CurrentTrackingOriginMode_k__BackingField() const;

  constexpr ::UnityEngine::XR::TrackingOriginModeFlags& __cordl_internal_get__CurrentTrackingOriginMode_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__TrackablesParent_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__TrackablesParent_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CameraFloorOffsetObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CameraFloorOffsetObject();

  constexpr bool const& __cordl_internal_get_m_CameraInitialized() const;

  constexpr bool& __cordl_internal_get_m_CameraInitialized();

  constexpr bool const& __cordl_internal_get_m_CameraInitializing() const;

  constexpr bool& __cordl_internal_get_m_CameraInitializing();

  constexpr float_t const& __cordl_internal_get_m_CameraYOffset() const;

  constexpr float_t& __cordl_internal_get_m_CameraYOffset();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_OriginBaseGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_OriginBaseGameObject();

  constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode const& __cordl_internal_get_m_RequestedTrackingOriginMode() const;

  constexpr ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode& __cordl_internal_get_m_RequestedTrackingOriginMode();

  constexpr void __cordl_internal_set_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* value);

  constexpr void __cordl_internal_set__CurrentTrackingOriginMode_k__BackingField(::UnityEngine::XR::TrackingOriginModeFlags value);

  constexpr void __cordl_internal_set__TrackablesParent_k__BackingField(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_CameraFloorOffsetObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_CameraInitialized(bool value);

  constexpr void __cordl_internal_set_m_CameraInitializing(bool value);

  constexpr void __cordl_internal_set_m_CameraYOffset(float_t value);

  constexpr void __cordl_internal_set_m_OriginBaseGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_RequestedTrackingOriginMode(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode value);

  /// @brief Method .ctor, addr 0x2881a14, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_TrackablesParentTransformChanged, addr 0x287faa0, size 0xb0, virtual false, abstract: false, final false
  inline void add_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* getStaticF_s_InputSubsystems();

  /// @brief Method get_Camera, addr 0x287fa80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_Camera();

  /// @brief Method get_CameraFloorOffsetObject, addr 0x287fc10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_CameraFloorOffsetObject();

  /// @brief Method get_CameraInOriginSpaceHeight, addr 0x287fd98, size 0x14, virtual false, abstract: false, final false
  inline float_t get_CameraInOriginSpaceHeight();

  /// @brief Method get_CameraInOriginSpacePos, addr 0x287fd44, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_CameraInOriginSpacePos();

  /// @brief Method get_CameraYOffset, addr 0x287fcd0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_CameraYOffset();

  /// @brief Method get_CurrentTrackingOriginMode, addr 0x287fce0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::TrackingOriginModeFlags get_CurrentTrackingOriginMode();

  /// @brief Method get_Origin, addr 0x287fc00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_Origin();

  /// @brief Method get_OriginInCameraSpacePos, addr 0x287fcf0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_OriginInCameraSpacePos();

  /// @brief Method get_RequestedTrackingOriginMode, addr 0x287fc68, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode get_RequestedTrackingOriginMode();

  /// @brief Method get_TrackablesParent, addr 0x287fa90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_TrackablesParent();

  /// @brief Method remove_TrackablesParentTransformChanged, addr 0x287fb50, size 0xb0, virtual false, abstract: false, final false
  inline void remove_TrackablesParentTransformChanged(::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* value);

  static inline void setStaticF_s_InputSubsystems(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  /// @brief Method set_Camera, addr 0x287fa88, size 0x8, virtual false, abstract: false, final false
  inline void set_Camera(::UnityEngine::Camera* value);

  /// @brief Method set_CameraFloorOffsetObject, addr 0x287fc18, size 0x8, virtual false, abstract: false, final false
  inline void set_CameraFloorOffsetObject(::UnityEngine::GameObject* value);

  /// @brief Method set_CameraYOffset, addr 0x287fcd8, size 0x8, virtual false, abstract: false, final false
  inline void set_CameraYOffset(float_t value);

  /// @brief Method set_CurrentTrackingOriginMode, addr 0x287fce8, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentTrackingOriginMode(::UnityEngine::XR::TrackingOriginModeFlags value);

  /// @brief Method set_Origin, addr 0x287fc08, size 0x8, virtual false, abstract: false, final false
  inline void set_Origin(::UnityEngine::GameObject* value);

  /// @brief Method set_RequestedTrackingOriginMode, addr 0x287fc70, size 0x8, virtual false, abstract: false, final false
  inline void set_RequestedTrackingOriginMode(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode value);

  /// @brief Method set_TrackablesParent, addr 0x287fa98, size 0x8, virtual false, abstract: false, final false
  inline void set_TrackablesParent(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROrigin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROrigin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROrigin(XROrigin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROrigin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROrigin(XROrigin const&) = delete;

  /// @brief Field m_Camera, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_Camera;

  /// @brief Field <TrackablesParent>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____TrackablesParent_k__BackingField;

  /// @brief Field TrackablesParentTransformChanged, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::Unity::XR::CoreUtils::ARTrackablesParentTransformChangedEventArgs>* ___TrackablesParentTransformChanged;

  /// @brief Field m_OriginBaseGameObject, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_OriginBaseGameObject;

  /// @brief Field m_CameraFloorOffsetObject, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_CameraFloorOffsetObject;

  /// @brief Field m_RequestedTrackingOriginMode, offset: 0x40, size: 0x4, def value: None
  ::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode ___m_RequestedTrackingOriginMode;

  /// @brief Field m_CameraYOffset, offset: 0x44, size: 0x4, def value: None
  float_t ___m_CameraYOffset;

  /// @brief Field <CurrentTrackingOriginMode>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::XR::TrackingOriginModeFlags ____CurrentTrackingOriginMode_k__BackingField;

  /// @brief Field m_CameraInitialized, offset: 0x4c, size: 0x1, def value: None
  bool ___m_CameraInitialized;

  /// @brief Field m_CameraInitializing, offset: 0x4d, size: 0x1, def value: None
  bool ___m_CameraInitializing;

  /// @brief Field k_DefaultCameraYOffset offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultCameraYOffset{ 1.1176 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::CoreUtils::XROrigin, 0x50>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___m_Camera) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ____TrackablesParent_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___TrackablesParentTransformChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___m_OriginBaseGameObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___m_CameraFloorOffsetObject) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___m_RequestedTrackingOriginMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___m_CameraYOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ____CurrentTrackingOriginMode_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___m_CameraInitialized) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::CoreUtils::XROrigin, ___m_CameraInitializing) == 0x4d, "Offset mismatch!");

} // namespace Unity::XR::CoreUtils
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::__XROrigin__TrackingOriginMode, "Unity.XR.CoreUtils", "XROrigin/TrackingOriginMode");
NEED_NO_BOX(::Unity::XR::CoreUtils::XROrigin);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::XROrigin*, "Unity.XR.CoreUtils", "XROrigin");
NEED_NO_BOX(::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::CoreUtils::__XROrigin___RepeatInitializeCamera_d__48*, "Unity.XR.CoreUtils", "XROrigin/<RepeatInitializeCamera>d__48");
