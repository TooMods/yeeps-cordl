#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRSimulatedHMDState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedHMDState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState);
// Type: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRSimulatedHMDState
// SizeInfo { instance_size: 120, native_size: 120, calculated_instance_size: 117, calculated_native_size: 133, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0)
// }
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation::XRSimulatedHMDState
#pragma pack(push, 0)
struct CORDL_TYPE XRSimulatedHMDState {
public:
  // Declarations
  /// @brief Field centerEyePosition, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get_centerEyePosition, put = __cordl_internal_set_centerEyePosition))::UnityEngine::Vector3 centerEyePosition;

  /// @brief Field centerEyeRotation, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_centerEyeRotation, put = __cordl_internal_set_centerEyeRotation))::UnityEngine::Quaternion centerEyeRotation;

  /// @brief Field devicePosition, offset 0x59, size 0xc
  __declspec(property(get = __cordl_internal_get_devicePosition, put = __cordl_internal_set_devicePosition))::UnityEngine::Vector3 devicePosition;

  /// @brief Field deviceRotation, offset 0x65, size 0x10
  __declspec(property(get = __cordl_internal_get_deviceRotation, put = __cordl_internal_set_deviceRotation))::UnityEngine::Quaternion deviceRotation;

  __declspec(property(get = get_format))::UnityEngine::InputSystem::Utilities::FourCC format;

  /// @brief Field isTracked, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_isTracked, put = __cordl_internal_set_isTracked)) bool isTracked;

  /// @brief Field leftEyePosition, offset 0x0, size 0xc
  __declspec(property(get = __cordl_internal_get_leftEyePosition, put = __cordl_internal_set_leftEyePosition))::UnityEngine::Vector3 leftEyePosition;

  /// @brief Field leftEyeRotation, offset 0xc, size 0x10
  __declspec(property(get = __cordl_internal_get_leftEyeRotation, put = __cordl_internal_set_leftEyeRotation))::UnityEngine::Quaternion leftEyeRotation;

  /// @brief Field rightEyePosition, offset 0x1c, size 0xc
  __declspec(property(get = __cordl_internal_get_rightEyePosition, put = __cordl_internal_set_rightEyePosition))::UnityEngine::Vector3 rightEyePosition;

  /// @brief Field rightEyeRotation, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_rightEyeRotation, put = __cordl_internal_set_rightEyeRotation))::UnityEngine::Quaternion rightEyeRotation;

  /// @brief Field trackingState, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_trackingState, put = __cordl_internal_set_trackingState)) int32_t trackingState;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*();

  /// @brief Method Reset, addr 0x2a29cbc, size 0x98, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centerEyePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_centerEyePosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_centerEyeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_centerEyeRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_devicePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_devicePosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_deviceRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_deviceRotation();

  constexpr bool const& __cordl_internal_get_isTracked() const;

  constexpr bool& __cordl_internal_get_isTracked();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftEyePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftEyePosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_leftEyeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_leftEyeRotation();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightEyePosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightEyePosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rightEyeRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rightEyeRotation();

  constexpr int32_t const& __cordl_internal_get_trackingState() const;

  constexpr int32_t& __cordl_internal_get_trackingState();

  constexpr void __cordl_internal_set_centerEyePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_centerEyeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_devicePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_deviceRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_isTracked(bool value);

  constexpr void __cordl_internal_set_leftEyePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_leftEyeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_rightEyePosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_rightEyeRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_trackingState(int32_t value);

  /// @brief Method get_format, addr 0x2a29c8c, size 0x30, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_format();

  /// @brief Method get_formatId, addr 0x2a29c5c, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_formatId();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo* i___UnityEngine__InputSystem__LowLevel__IInputStateTypeInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRSimulatedHMDState();

  // Ctor Parameters [CppParam { name: "leftEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "leftEyeRotation", ty: "::UnityEngine::Quaternion",
  // modifiers: "", def_value: None }, CppParam { name: "rightEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rightEyeRotation", ty:
  // "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "centerEyePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "centerEyeRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "trackingState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "isTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "devicePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "deviceRotation",
  // ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
  constexpr XRSimulatedHMDState(::UnityEngine::Vector3 leftEyePosition, ::UnityEngine::Quaternion leftEyeRotation, ::UnityEngine::Vector3 rightEyePosition, ::UnityEngine::Quaternion rightEyeRotation,
                                ::UnityEngine::Vector3 centerEyePosition, ::UnityEngine::Quaternion centerEyeRotation, int32_t trackingState, bool isTracked, ::UnityEngine::Vector3 devicePosition,
                                ::UnityEngine::Quaternion deviceRotation) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___leftEyePosition_padding[0x0];
      /// @brief Field leftEyePosition, offset: 0x0, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___leftEyePosition;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___leftEyePosition_padding_forAlignment[0x0];
      /// @brief Field leftEyePosition, offset: 0x0, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___leftEyePosition_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0xc
      uint8_t ___leftEyeRotation_padding[0xc];
      /// @brief Field leftEyeRotation, offset: 0xc, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___leftEyeRotation;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0xc for alignment
      uint8_t ___leftEyeRotation_padding_forAlignment[0xc];
      /// @brief Field leftEyeRotation, offset: 0xc, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___leftEyeRotation_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x1c
      uint8_t ___rightEyePosition_padding[0x1c];
      /// @brief Field rightEyePosition, offset: 0x1c, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___rightEyePosition;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x1c for alignment
      uint8_t ___rightEyePosition_padding_forAlignment[0x1c];
      /// @brief Field rightEyePosition, offset: 0x1c, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___rightEyePosition_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x28
      uint8_t ___rightEyeRotation_padding[0x28];
      /// @brief Field rightEyeRotation, offset: 0x28, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___rightEyeRotation;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x28 for alignment
      uint8_t ___rightEyeRotation_padding_forAlignment[0x28];
      /// @brief Field rightEyeRotation, offset: 0x28, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___rightEyeRotation_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x38
      uint8_t ___centerEyePosition_padding[0x38];
      /// @brief Field centerEyePosition, offset: 0x38, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___centerEyePosition;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x38 for alignment
      uint8_t ___centerEyePosition_padding_forAlignment[0x38];
      /// @brief Field centerEyePosition, offset: 0x38, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___centerEyePosition_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x44
      uint8_t ___centerEyeRotation_padding[0x44];
      /// @brief Field centerEyeRotation, offset: 0x44, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___centerEyeRotation;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x44 for alignment
      uint8_t ___centerEyeRotation_padding_forAlignment[0x44];
      /// @brief Field centerEyeRotation, offset: 0x44, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___centerEyeRotation_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x54
      uint8_t ___trackingState_padding[0x54];
      /// @brief Field trackingState, offset: 0x54, size: 0x4, def value: None
      int32_t ___trackingState;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x54 for alignment
      uint8_t ___trackingState_padding_forAlignment[0x54];
      /// @brief Field trackingState, offset: 0x54, size: 0x4, def value: None
      int32_t ___trackingState_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x58
      uint8_t ___isTracked_padding[0x58];
      /// @brief Field isTracked, offset: 0x58, size: 0x1, def value: None
      bool ___isTracked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x58 for alignment
      uint8_t ___isTracked_padding_forAlignment[0x58];
      /// @brief Field isTracked, offset: 0x58, size: 0x1, def value: None
      bool ___isTracked_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x59
      uint8_t ___devicePosition_padding[0x59];
      /// @brief Field devicePosition, offset: 0x59, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___devicePosition;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x59 for alignment
      uint8_t ___devicePosition_padding_forAlignment[0x59];
      /// @brief Field devicePosition, offset: 0x59, size: 0xc, def value: None
      ::UnityEngine::Vector3 ___devicePosition_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x65
      uint8_t ___deviceRotation_padding[0x65];
      /// @brief Field deviceRotation, offset: 0x65, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___deviceRotation;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x65 for alignment
      uint8_t ___deviceRotation_padding_forAlignment[0x65];
      /// @brief Field deviceRotation, offset: 0x65, size: 0x10, def value: None
      ::UnityEngine::Quaternion ___deviceRotation_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState, 0x78>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatedHMDState");
