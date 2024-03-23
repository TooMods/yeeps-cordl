#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputDevice)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct HapticCapabilities;
}
namespace UnityEngine::XR {
template <typename T> struct InputFeatureUsage_1;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
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
struct InputDevice;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::InputDevice);
// Type: UnityEngine.XR::InputDevice
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR {
// Is value type: true
// CS Name: ::UnityEngine.XR::InputDevice
struct CORDL_TYPE InputDevice {
public:
  // Declarations
  __declspec(property(get = get_deviceId)) uint64_t deviceId;

  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Field s_InputSubsystemCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InputSubsystemCache,
                             put = setStaticF_s_InputSubsystemCache))::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* s_InputSubsystemCache;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::InputDevice>*();

  /// @brief Method CheckValidAndSetDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool CheckValidAndSetDefault(ByRef<T> value);

  /// @brief Method Equals, addr 0x18f6718, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x18f67ac, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::InputDevice other);

  /// @brief Method GetHashCode, addr 0x18f67d4, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsValidId, addr 0x18f5e4c, size 0x20, virtual false, abstract: false, final false
  inline bool IsValidId();

  /// @brief Method SendHapticImpulse, addr 0x18f5ea8, size 0x100, virtual false, abstract: false, final false
  inline bool SendHapticImpulse(uint32_t channel, float_t amplitude, float_t duration);

  /// @brief Method TryGetFeatureValue, addr 0x18f6508, size 0xb4, virtual false, abstract: false, final false
  inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Quaternion> usage, ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method TryGetFeatureValue, addr 0x18f62f8, size 0xb4, virtual false, abstract: false, final false
  inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2> usage, ByRef<::UnityEngine::Vector2> value);

  /// @brief Method TryGetFeatureValue, addr 0x18f6400, size 0xb4, virtual false, abstract: false, final false
  inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector3> usage, ByRef<::UnityEngine::Vector3> value);

  /// @brief Method TryGetFeatureValue, addr 0x18f6610, size 0xb4, virtual false, abstract: false, final false
  inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::XR::InputTrackingState> usage, ByRef<::UnityEngine::XR::InputTrackingState> value);

  /// @brief Method TryGetFeatureValue, addr 0x18f60e8, size 0xb4, virtual false, abstract: false, final false
  inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<bool> usage, ByRef<bool> value);

  /// @brief Method TryGetFeatureValue, addr 0x18f61f0, size 0xb4, virtual false, abstract: false, final false
  inline bool TryGetFeatureValue(::UnityEngine::XR::InputFeatureUsage_1<float_t> usage, ByRef<float_t> value);

  /// @brief Method TryGetHapticCapabilities, addr 0x18f6004, size 0xa0, virtual false, abstract: false, final false
  inline bool TryGetHapticCapabilities(ByRef<::UnityEngine::XR::HapticCapabilities> capabilities);

  /// @brief Method .ctor, addr 0x18f5dc8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint64_t deviceId);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* getStaticF_s_InputSubsystemCache();

  /// @brief Method get_deviceId, addr 0x18f5dd8, size 0x18, virtual false, abstract: false, final false
  inline uint64_t get_deviceId();

  /// @brief Method get_isValid, addr 0x18f5df0, size 0x5c, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::InputDevice>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::InputDevice>* i___System__IEquatable_1___UnityEngine__XR__InputDevice_();

  static inline void setStaticF_s_InputSubsystemCache(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystem*>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputDevice();

  // Ctor Parameters [CppParam { name: "m_DeviceId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_Initialized", ty: "bool", modifiers: "", def_value: None }]
  constexpr InputDevice(uint64_t m_DeviceId, bool m_Initialized) noexcept;

  /// @brief Field m_DeviceId, offset: 0x0, size: 0x8, def value: None
  uint64_t m_DeviceId;

  /// @brief Field m_Initialized, offset: 0x8, size: 0x1, def value: None
  bool m_Initialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::InputDevice, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::InputDevice, m_DeviceId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::InputDevice, m_Initialized) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
