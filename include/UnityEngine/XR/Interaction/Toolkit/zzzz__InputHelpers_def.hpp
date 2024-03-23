#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputHelpers)
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__Axis2D;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__ButtonInfo;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__ButtonReadType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__Button;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__Axis2D;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__Button;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__ButtonReadType;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InputHelpers;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __InputHelpers__ButtonInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::InputHelpers);
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo);
// Type: ::Button
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::InputHelpers::Button
struct CORDL_TYPE __InputHelpers__Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputHelpers__Button_Unwrapped
  enum struct ____InputHelpers__Button_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_MenuButton = static_cast<int32_t>(0x1),
    __E_Trigger = static_cast<int32_t>(0x2),
    __E_Grip = static_cast<int32_t>(0x3),
    __E_TriggerButton = static_cast<int32_t>(0x4),
    __E_GripButton = static_cast<int32_t>(0x5),
    __E_PrimaryButton = static_cast<int32_t>(0x6),
    __E_PrimaryTouch = static_cast<int32_t>(0x7),
    __E_SecondaryButton = static_cast<int32_t>(0x8),
    __E_SecondaryTouch = static_cast<int32_t>(0x9),
    __E_Primary2DAxisTouch = static_cast<int32_t>(0xa),
    __E_Primary2DAxisClick = static_cast<int32_t>(0xb),
    __E_Secondary2DAxisTouch = static_cast<int32_t>(0xc),
    __E_Secondary2DAxisClick = static_cast<int32_t>(0xd),
    __E_PrimaryAxis2DUp = static_cast<int32_t>(0xe),
    __E_PrimaryAxis2DDown = static_cast<int32_t>(0xf),
    __E_PrimaryAxis2DLeft = static_cast<int32_t>(0x10),
    __E_PrimaryAxis2DRight = static_cast<int32_t>(0x11),
    __E_SecondaryAxis2DUp = static_cast<int32_t>(0x12),
    __E_SecondaryAxis2DDown = static_cast<int32_t>(0x13),
    __E_SecondaryAxis2DLeft = static_cast<int32_t>(0x14),
    __E_SecondaryAxis2DRight = static_cast<int32_t>(0x15),
    __E_TriggerPressed = static_cast<int32_t>(0x4),
    __E_GripPressed = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputHelpers__Button_Unwrapped() const noexcept {
    return static_cast<____InputHelpers__Button_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputHelpers__Button();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputHelpers__Button(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Grip value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const Grip;

  /// @brief Field GripButton value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const GripButton;

  /// @brief Field GripPressed value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const GripPressed;

  /// @brief Field MenuButton value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const MenuButton;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const None;

  /// @brief Field Primary2DAxisClick value: static_cast<int32_t>(0xb)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const Primary2DAxisClick;

  /// @brief Field Primary2DAxisTouch value: static_cast<int32_t>(0xa)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const Primary2DAxisTouch;

  /// @brief Field PrimaryAxis2DDown value: static_cast<int32_t>(0xf)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const PrimaryAxis2DDown;

  /// @brief Field PrimaryAxis2DLeft value: static_cast<int32_t>(0x10)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const PrimaryAxis2DLeft;

  /// @brief Field PrimaryAxis2DRight value: static_cast<int32_t>(0x11)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const PrimaryAxis2DRight;

  /// @brief Field PrimaryAxis2DUp value: static_cast<int32_t>(0xe)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const PrimaryAxis2DUp;

  /// @brief Field PrimaryButton value: static_cast<int32_t>(0x6)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const PrimaryButton;

  /// @brief Field PrimaryTouch value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const PrimaryTouch;

  /// @brief Field Secondary2DAxisClick value: static_cast<int32_t>(0xd)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const Secondary2DAxisClick;

  /// @brief Field Secondary2DAxisTouch value: static_cast<int32_t>(0xc)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const Secondary2DAxisTouch;

  /// @brief Field SecondaryAxis2DDown value: static_cast<int32_t>(0x13)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const SecondaryAxis2DDown;

  /// @brief Field SecondaryAxis2DLeft value: static_cast<int32_t>(0x14)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const SecondaryAxis2DLeft;

  /// @brief Field SecondaryAxis2DRight value: static_cast<int32_t>(0x15)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const SecondaryAxis2DRight;

  /// @brief Field SecondaryAxis2DUp value: static_cast<int32_t>(0x12)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const SecondaryAxis2DUp;

  /// @brief Field SecondaryButton value: static_cast<int32_t>(0x8)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const SecondaryButton;

  /// @brief Field SecondaryTouch value: static_cast<int32_t>(0x9)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const SecondaryTouch;

  /// @brief Field Trigger value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const Trigger;

  /// @brief Field TriggerButton value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const TriggerButton;

  /// @brief Field TriggerPressed value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button const TriggerPressed;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::Axis2D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::InputHelpers::Axis2D
struct CORDL_TYPE __InputHelpers__Axis2D {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputHelpers__Axis2D_Unwrapped
  enum struct ____InputHelpers__Axis2D_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_PrimaryAxis2D = static_cast<int32_t>(0x1),
    __E_SecondaryAxis2D = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputHelpers__Axis2D_Unwrapped() const noexcept {
    return static_cast<____InputHelpers__Axis2D_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputHelpers__Axis2D();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputHelpers__Axis2D(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D const None;

  /// @brief Field PrimaryAxis2D value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D const PrimaryAxis2D;

  /// @brief Field SecondaryAxis2D value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D const SecondaryAxis2D;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::ButtonReadType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::InputHelpers::ButtonReadType
struct CORDL_TYPE __InputHelpers__ButtonReadType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____InputHelpers__ButtonReadType_Unwrapped
  enum struct ____InputHelpers__ButtonReadType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Binary = static_cast<int32_t>(0x1),
    __E_Axis1D = static_cast<int32_t>(0x2),
    __E_Axis2DUp = static_cast<int32_t>(0x3),
    __E_Axis2DDown = static_cast<int32_t>(0x4),
    __E_Axis2DLeft = static_cast<int32_t>(0x5),
    __E_Axis2DRight = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____InputHelpers__ButtonReadType_Unwrapped() const noexcept {
    return static_cast<____InputHelpers__ButtonReadType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputHelpers__ButtonReadType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __InputHelpers__ButtonReadType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Axis1D value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType const Axis1D;

  /// @brief Field Axis2DDown value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType const Axis2DDown;

  /// @brief Field Axis2DLeft value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType const Axis2DLeft;

  /// @brief Field Axis2DRight value: static_cast<int32_t>(0x6)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType const Axis2DRight;

  /// @brief Field Axis2DUp value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType const Axis2DUp;

  /// @brief Field Binary value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType const Binary;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: ::ButtonInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::InputHelpers::ButtonInfo
struct CORDL_TYPE __InputHelpers__ButtonInfo {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x301dc34, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType type);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __InputHelpers__ButtonInfo();

  // Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty:
  // "::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType", modifiers: "", def_value: None }]
  constexpr __InputHelpers__ButtonInfo(::StringW name, ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType type) noexcept;

  /// @brief Field name, offset: 0x0, size: 0x8, def value: None
  ::StringW name;

  /// @brief Field type, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType type;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo, type) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::InputHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::InputHelpers*
class CORDL_TYPE InputHelpers : public ::System::Object {
public:
  // Declarations
  using Axis2D = ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D;

  using Button = ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button;

  using ButtonInfo = ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo;

  using ButtonReadType = ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType;

  /// @brief Field s_Axis2DNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Axis2DNames, put = setStaticF_s_Axis2DNames))::ArrayW<::StringW, ::Array<::StringW>*> s_Axis2DNames;

  /// @brief Field s_ButtonData, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_ButtonData, put = setStaticF_s_ButtonData))::ArrayW<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo,
                                                                                                    ::Array<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo>*> s_ButtonData;

  /// @brief Method IsPressed, addr 0x301d09c, size 0x324, virtual false, abstract: false, final false
  static inline bool IsPressed(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button button, ByRef<bool> isPressed, float_t pressThreshold);

  /// @brief Method TryReadAxis2DValue, addr 0x301d69c, size 0x168, virtual false, abstract: false, final false
  static inline bool TryReadAxis2DValue(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D axis2D, ByRef<::UnityEngine::Vector2> value);

  /// @brief Method TryReadSingleValue, addr 0x301d3c0, size 0x2dc, virtual false, abstract: false, final false
  static inline bool TryReadSingleValue(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button button, ByRef<float_t> singleValue);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_s_Axis2DNames();

  static inline ::ArrayW<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo, ::Array<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo>*> getStaticF_s_ButtonData();

  static inline void setStaticF_s_Axis2DNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void
  setStaticF_s_ButtonData(::ArrayW<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo, ::Array<::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputHelpers(InputHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputHelpers(InputHelpers const&) = delete;

  /// @brief Field k_DefaultPressThreshold offset 0xffffffff size 0x4
  static constexpr float_t k_DefaultPressThreshold{ 0.1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::InputHelpers, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Axis2D, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Axis2D");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__Button, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers/Button");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonReadType, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers/ButtonReadType");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InputHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InputHelpers*, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__InputHelpers__ButtonInfo, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers/ButtonInfo");
