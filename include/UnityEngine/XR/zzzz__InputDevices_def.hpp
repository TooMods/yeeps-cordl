#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevices)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::XR {
struct ConnectionChangeType;
}
namespace UnityEngine::XR {
struct HapticCapabilities;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR {
class InputDevices;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::InputDevices);
// Type: UnityEngine.XR::InputDevices
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: false
// CS Name: ::UnityEngine.XR::InputDevices*
class CORDL_TYPE InputDevices : public ::System::Object {
public:
  // Declarations
  /// @brief Field deviceConfigChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_deviceConfigChanged, put = setStaticF_deviceConfigChanged))::System::Action_1<::UnityEngine::XR::InputDevice>* deviceConfigChanged;

  /// @brief Field deviceConnected, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_deviceConnected, put = setStaticF_deviceConnected))::System::Action_1<::UnityEngine::XR::InputDevice>* deviceConnected;

  /// @brief Field deviceDisconnected, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_deviceDisconnected, put = setStaticF_deviceDisconnected))::System::Action_1<::UnityEngine::XR::InputDevice>* deviceDisconnected;

  /// @brief Method GetDeviceAtXRNode, addr 0x18f6b20, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::InputDevice GetDeviceAtXRNode(::UnityEngine::XR::XRNode node);

  /// @brief Method InvokeConnectionEvent, addr 0x18f6ba0, size 0xac, virtual false, abstract: false, final false
  static inline void InvokeConnectionEvent(uint64_t deviceId, ::UnityEngine::XR::ConnectionChangeType change);

  /// @brief Method IsDeviceValid, addr 0x18f5e6c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsDeviceValid(uint64_t deviceId);

  /// @brief Method SendHapticImpulse, addr 0x18f5fa8, size 0x5c, virtual false, abstract: false, final false
  static inline bool SendHapticImpulse(uint64_t deviceId, uint32_t channel, float_t amplitude, float_t duration);

  /// @brief Method TryGetFeatureValue_Quaternionf, addr 0x18f65bc, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetFeatureValue_Quaternionf(uint64_t deviceId, ::StringW usage, ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method TryGetFeatureValue_UInt32, addr 0x18f66c4, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetFeatureValue_UInt32(uint64_t deviceId, ::StringW usage, ByRef<uint32_t> value);

  /// @brief Method TryGetFeatureValue_Vector2f, addr 0x18f63ac, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetFeatureValue_Vector2f(uint64_t deviceId, ::StringW usage, ByRef<::UnityEngine::Vector2> value);

  /// @brief Method TryGetFeatureValue_Vector3f, addr 0x18f64b4, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetFeatureValue_Vector3f(uint64_t deviceId, ::StringW usage, ByRef<::UnityEngine::Vector3> value);

  /// @brief Method TryGetFeatureValue_bool, addr 0x18f619c, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetFeatureValue_bool(uint64_t deviceId, ::StringW usage, ByRef<bool> value);

  /// @brief Method TryGetFeatureValue_float, addr 0x18f62a4, size 0x54, virtual false, abstract: false, final false
  static inline bool TryGetFeatureValue_float(uint64_t deviceId, ::StringW usage, ByRef<float_t> value);

  /// @brief Method TryGetHapticCapabilities, addr 0x18f60a4, size 0x44, virtual false, abstract: false, final false
  static inline bool TryGetHapticCapabilities(uint64_t deviceId, ByRef<::UnityEngine::XR::HapticCapabilities> capabilities);

  static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConfigChanged();

  static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceConnected();

  static inline ::System::Action_1<::UnityEngine::XR::InputDevice>* getStaticF_deviceDisconnected();

  static inline void setStaticF_deviceConfigChanged(::System::Action_1<::UnityEngine::XR::InputDevice>* value);

  static inline void setStaticF_deviceConnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);

  static inline void setStaticF_deviceDisconnected(::System::Action_1<::UnityEngine::XR::InputDevice>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDevices();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputDevices(InputDevices&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputDevices", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputDevices(InputDevices const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputDevices, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
NEED_NO_BOX(::UnityEngine::XR::InputDevices);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
