#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDeviceState_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerDeviceState)
namespace UnityEngine::UIElements {
struct ContextType;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct __PointerDeviceState__LocationFlag;
}
namespace UnityEngine::UIElements {
struct __PointerDeviceState__PointerLocation;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __PointerDeviceState__LocationFlag;
}
namespace UnityEngine::UIElements {
class PointerDeviceState;
}
namespace UnityEngine::UIElements {
struct __PointerDeviceState__PointerLocation;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__PointerDeviceState__LocationFlag);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDeviceState);
MARK_VAL_T(::UnityEngine::UIElements::__PointerDeviceState__PointerLocation);
// Type: ::LocationFlag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::PointerDeviceState::LocationFlag
struct CORDL_TYPE __PointerDeviceState__LocationFlag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PointerDeviceState__LocationFlag_Unwrapped
  enum struct ____PointerDeviceState__LocationFlag_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OutsidePanel = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PointerDeviceState__LocationFlag_Unwrapped() const noexcept {
    return static_cast<____PointerDeviceState__LocationFlag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerDeviceState__LocationFlag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PointerDeviceState__LocationFlag(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag const None;

  /// @brief Field OutsidePanel value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag const OutsidePanel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerDeviceState__LocationFlag, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PointerDeviceState__LocationFlag, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::PointerLocation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::PointerDeviceState::PointerLocation
struct CORDL_TYPE __PointerDeviceState__PointerLocation {
public:
  // Declarations
  __declspec(property(get = get_Flags, put = set_Flags))::UnityEngine::UIElements::__PointerDeviceState__LocationFlag Flags;

  __declspec(property(get = get_Panel, put = set_Panel))::UnityEngine::UIElements::IPanel* Panel;

  __declspec(property(get = get_Position, put = set_Position))::UnityEngine::Vector2 Position;

  /// @brief Method SetLocation, addr 0x2cc9684, size 0x10c, virtual false, abstract: false, final false
  inline void SetLocation(::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method get_Flags, addr 0x2cc9eec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag get_Flags();

  /// @brief Method get_Panel, addr 0x2cc9edc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IPanel* get_Panel();

  /// @brief Method get_Position, addr 0x2cc9ecc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_Position();

  /// @brief Method set_Flags, addr 0x2cc9ef4, size 0x8, virtual false, abstract: false, final false
  inline void set_Flags(::UnityEngine::UIElements::__PointerDeviceState__LocationFlag value);

  /// @brief Method set_Panel, addr 0x2cc9ee4, size 0x8, virtual false, abstract: false, final false
  inline void set_Panel(::UnityEngine::UIElements::IPanel* value);

  /// @brief Method set_Position, addr 0x2cc9ed4, size 0x8, virtual false, abstract: false, final false
  inline void set_Position(::UnityEngine::Vector2 value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerDeviceState__PointerLocation();

  // Ctor Parameters [CppParam { name: "_Position_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "_Panel_k__BackingField", ty:
  // "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: None }, CppParam { name: "_Flags_k__BackingField", ty: "::UnityEngine::UIElements::__PointerDeviceState__LocationFlag", modifiers:
  // "", def_value: None }]
  constexpr __PointerDeviceState__PointerLocation(::UnityEngine::Vector2 _Position_k__BackingField, ::UnityEngine::UIElements::IPanel* _Panel_k__BackingField,
                                                  ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag _Flags_k__BackingField) noexcept;

  /// @brief Field <Position>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Vector2 _Position_k__BackingField;

  /// @brief Field <Panel>k__BackingField, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IPanel* _Panel_k__BackingField;

  /// @brief Field <Flags>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag _Flags_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PointerDeviceState__PointerLocation, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PointerDeviceState__PointerLocation, _Position_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PointerDeviceState__PointerLocation, _Panel_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PointerDeviceState__PointerLocation, _Flags_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PointerDeviceState
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PointerDeviceState*
class CORDL_TYPE PointerDeviceState : public ::System::Object {
public:
  // Declarations
  using LocationFlag = ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag;

  using PointerLocation = ::UnityEngine::UIElements::__PointerDeviceState__PointerLocation;

  /// @brief Field s_PlayerPanelWithSoftPointerCapture, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_s_PlayerPanelWithSoftPointerCapture,
               put = setStaticF_s_PlayerPanelWithSoftPointerCapture))::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*> s_PlayerPanelWithSoftPointerCapture;

  /// @brief Field s_PlayerPointerLocations, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PlayerPointerLocations,
                             put = setStaticF_s_PlayerPointerLocations))::ArrayW<::UnityEngine::UIElements::__PointerDeviceState__PointerLocation,
                                                                                 ::Array<::UnityEngine::UIElements::__PointerDeviceState__PointerLocation>*> s_PlayerPointerLocations;

  /// @brief Field s_PressedButtons, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PressedButtons, put = setStaticF_s_PressedButtons))::ArrayW<int32_t, ::Array<int32_t>*> s_PressedButtons;

  /// @brief Method GetPanel, addr 0x2cc9a6c, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IPanel* GetPanel(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType);

  /// @brief Method GetPlayerPanelWithSoftPointerCapture, addr 0x2cc9d4c, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IPanel* GetPlayerPanelWithSoftPointerCapture(int32_t pointerId);

  /// @brief Method GetPointerPosition, addr 0x2cc89c8, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetPointerPosition(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType);

  /// @brief Method GetPressedButtons, addr 0x2cc9b8c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetPressedButtons(int32_t pointerId);

  /// @brief Method HasAdditionalPressedButtons, addr 0x2cc9c08, size 0x98, virtual false, abstract: false, final false
  static inline bool HasAdditionalPressedButtons(int32_t pointerId, int32_t exceptButtonId);

  /// @brief Method HasFlagFast, addr 0x2cc9aec, size 0xc, virtual false, abstract: false, final false
  static inline bool HasFlagFast(::UnityEngine::UIElements::__PointerDeviceState__LocationFlag flagSet, ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag flag);

  /// @brief Method HasLocationFlag, addr 0x2cc9af8, size 0x94, virtual false, abstract: false, final false
  static inline bool HasLocationFlag(int32_t pointerId, ::UnityEngine::UIElements::ContextType contextType, ::UnityEngine::UIElements::__PointerDeviceState__LocationFlag flag);

  /// @brief Method PressButton, addr 0x2cc9838, size 0xdc, virtual false, abstract: false, final false
  static inline void PressButton(int32_t pointerId, int32_t buttonId);

  /// @brief Method ReleaseAllButtons, addr 0x2cc99f0, size 0x7c, virtual false, abstract: false, final false
  static inline void ReleaseAllButtons(int32_t pointerId);

  /// @brief Method ReleaseButton, addr 0x2cc9914, size 0xdc, virtual false, abstract: false, final false
  static inline void ReleaseButton(int32_t pointerId, int32_t buttonId);

  /// @brief Method RemovePanelData, addr 0x2cc94a8, size 0x1dc, virtual false, abstract: false, final false
  static inline void RemovePanelData(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method SavePointerPosition, addr 0x2cc9790, size 0xa8, virtual false, abstract: false, final false
  static inline void SavePointerPosition(int32_t pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel, ::UnityEngine::UIElements::ContextType contextType);

  /// @brief Method SetPlayerPanelWithSoftPointerCapture, addr 0x2cc9ca0, size 0xac, virtual false, abstract: false, final false
  static inline void SetPlayerPanelWithSoftPointerCapture(int32_t pointerId, ::UnityEngine::UIElements::IPanel* panel);

  static inline ::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*> getStaticF_s_PlayerPanelWithSoftPointerCapture();

  static inline ::ArrayW<::UnityEngine::UIElements::__PointerDeviceState__PointerLocation, ::Array<::UnityEngine::UIElements::__PointerDeviceState__PointerLocation>*>
  getStaticF_s_PlayerPointerLocations();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_PressedButtons();

  static inline void setStaticF_s_PlayerPanelWithSoftPointerCapture(::ArrayW<::UnityEngine::UIElements::IPanel*, ::Array<::UnityEngine::UIElements::IPanel*>*> value);

  static inline void
  setStaticF_s_PlayerPointerLocations(::ArrayW<::UnityEngine::UIElements::__PointerDeviceState__PointerLocation, ::Array<::UnityEngine::UIElements::__PointerDeviceState__PointerLocation>*> value);

  static inline void setStaticF_s_PressedButtons(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDeviceState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDeviceState(PointerDeviceState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDeviceState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDeviceState(PointerDeviceState const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDeviceState, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerDeviceState__LocationFlag, "UnityEngine.UIElements", "PointerDeviceState/LocationFlag");
NEED_NO_BOX(::UnityEngine::UIElements::PointerDeviceState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState*, "UnityEngine.UIElements", "PointerDeviceState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PointerDeviceState__PointerLocation, "UnityEngine.UIElements", "PointerDeviceState/PointerLocation");
