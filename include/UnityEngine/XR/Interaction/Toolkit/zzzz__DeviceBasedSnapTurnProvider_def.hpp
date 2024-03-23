#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedSnapTurnProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SnapTurnProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceBasedSnapTurnProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __DeviceBasedSnapTurnProvider__InputAxes;
}
namespace UnityEngine::XR {
template <typename T> struct InputFeatureUsage_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __DeviceBasedSnapTurnProvider__InputAxes;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeviceBasedSnapTurnProvider;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider);
// Type: ::InputAxes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::DeviceBasedSnapTurnProvider::InputAxes
struct CORDL_TYPE __DeviceBasedSnapTurnProvider__InputAxes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DeviceBasedSnapTurnProvider__InputAxes_Unwrapped
  enum struct ____DeviceBasedSnapTurnProvider__InputAxes_Unwrapped : int32_t {
    __E_Primary2DAxis = static_cast<int32_t>(0x0),
    __E_Secondary2DAxis = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DeviceBasedSnapTurnProvider__InputAxes_Unwrapped() const noexcept {
    return static_cast<____DeviceBasedSnapTurnProvider__InputAxes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeviceBasedSnapTurnProvider__InputAxes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DeviceBasedSnapTurnProvider__InputAxes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Primary2DAxis value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes const Primary2DAxis;

  /// @brief Field Secondary2DAxis value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes const Secondary2DAxis;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::DeviceBasedSnapTurnProvider
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::DeviceBasedSnapTurnProvider*
class CORDL_TYPE DeviceBasedSnapTurnProvider : public ::UnityEngine::XR::Interaction::Toolkit::SnapTurnProviderBase {
public:
  // Declarations
  using InputAxes = ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes;

  __declspec(property(get = get_controllers, put = set_controllers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* controllers;

  __declspec(property(get = get_deadZone, put = set_deadZone)) float_t deadZone;

  /// @brief Field k_Vec2UsageList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Vec2UsageList, put = setStaticF_k_Vec2UsageList))::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>,
                                                                                                          ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> k_Vec2UsageList;

  /// @brief Field m_Controllers, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Controllers,
                      put = __cordl_internal_set_m_Controllers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* m_Controllers;

  /// @brief Field m_DeadZone, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeadZone, put = __cordl_internal_set_m_DeadZone)) float_t m_DeadZone;

  /// @brief Field m_TurnUsage, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TurnUsage, put = __cordl_internal_set_m_TurnUsage))::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes m_TurnUsage;

  __declspec(property(get = get_turnUsage, put = set_turnUsage))::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes turnUsage;

  static inline ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider* New_ctor();

  /// @brief Method ReadInput, addr 0x301839c, size 0x22c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadInput();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*& __cordl_internal_get_m_Controllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*> const&
  __cordl_internal_get_m_Controllers() const;

  constexpr float_t const& __cordl_internal_get_m_DeadZone() const;

  constexpr float_t& __cordl_internal_get_m_DeadZone();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes const& __cordl_internal_get_m_TurnUsage() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes& __cordl_internal_get_m_TurnUsage();

  constexpr void __cordl_internal_set_m_Controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value);

  constexpr void __cordl_internal_set_m_DeadZone(float_t value);

  constexpr void __cordl_internal_set_m_TurnUsage(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes value);

  /// @brief Method .ctor, addr 0x30185c8, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> getStaticF_k_Vec2UsageList();

  /// @brief Method get_controllers, addr 0x301837c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* get_controllers();

  /// @brief Method get_deadZone, addr 0x301838c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_deadZone();

  /// @brief Method get_turnUsage, addr 0x301836c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes get_turnUsage();

  static inline void
  setStaticF_k_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> value);

  /// @brief Method set_controllers, addr 0x3018384, size 0x8, virtual false, abstract: false, final false
  inline void set_controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value);

  /// @brief Method set_deadZone, addr 0x3018394, size 0x8, virtual false, abstract: false, final false
  inline void set_deadZone(float_t value);

  /// @brief Method set_turnUsage, addr 0x3018374, size 0x8, virtual false, abstract: false, final false
  inline void set_turnUsage(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeviceBasedSnapTurnProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeviceBasedSnapTurnProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeviceBasedSnapTurnProvider(DeviceBasedSnapTurnProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeviceBasedSnapTurnProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeviceBasedSnapTurnProvider(DeviceBasedSnapTurnProvider const&) = delete;

  /// @brief Field m_TurnUsage, offset: 0x5c, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes ___m_TurnUsage;

  /// @brief Field m_Controllers, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* ___m_Controllers;

  /// @brief Field m_DeadZone, offset: 0x68, size: 0x4, def value: None
  float_t ___m_DeadZone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider, 0x70>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider, ___m_TurnUsage) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider, ___m_Controllers) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider, ___m_DeadZone) == 0x68, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedSnapTurnProvider__InputAxes, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedSnapTurnProvider/InputAxes");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedSnapTurnProvider*, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedSnapTurnProvider");
