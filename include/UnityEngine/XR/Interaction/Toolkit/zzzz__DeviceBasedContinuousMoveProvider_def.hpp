#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ContinuousMoveProviderBase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeviceBasedContinuousMoveProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DeviceBasedContinuousMoveProvider)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct __DeviceBasedContinuousMoveProvider__InputAxes;
}
namespace UnityEngine::XR {
template <typename T> struct InputFeatureUsage_1;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
struct __DeviceBasedContinuousMoveProvider__InputAxes;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeviceBasedContinuousMoveProvider;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider);
// Type: ::InputAxes
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: true
// CS Name: ::DeviceBasedContinuousMoveProvider::InputAxes
struct CORDL_TYPE __DeviceBasedContinuousMoveProvider__InputAxes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DeviceBasedContinuousMoveProvider__InputAxes_Unwrapped
  enum struct ____DeviceBasedContinuousMoveProvider__InputAxes_Unwrapped : int32_t {
    __E_Primary2DAxis = static_cast<int32_t>(0x0),
    __E_Secondary2DAxis = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DeviceBasedContinuousMoveProvider__InputAxes_Unwrapped() const noexcept {
    return static_cast<____DeviceBasedContinuousMoveProvider__InputAxes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeviceBasedContinuousMoveProvider__InputAxes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DeviceBasedContinuousMoveProvider__InputAxes(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Primary2DAxis value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes const Primary2DAxis;

  /// @brief Field Secondary2DAxis value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes const Secondary2DAxis;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
// Type: UnityEngine.XR.Interaction.Toolkit::DeviceBasedContinuousMoveProvider
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit::DeviceBasedContinuousMoveProvider*
class CORDL_TYPE DeviceBasedContinuousMoveProvider : public ::UnityEngine::XR::Interaction::Toolkit::ContinuousMoveProviderBase {
public:
  // Declarations
  using InputAxes = ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes;

  __declspec(property(get = get_controllers, put = set_controllers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* controllers;

  __declspec(property(get = get_deadzoneMax, put = set_deadzoneMax)) float_t deadzoneMax;

  __declspec(property(get = get_deadzoneMin, put = set_deadzoneMin)) float_t deadzoneMin;

  __declspec(property(get = get_inputBinding, put = set_inputBinding))::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes inputBinding;

  /// @brief Field k_Vec2UsageList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_Vec2UsageList, put = setStaticF_k_Vec2UsageList))::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>,
                                                                                                          ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> k_Vec2UsageList;

  /// @brief Field m_Controllers, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Controllers,
                      put = __cordl_internal_set_m_Controllers))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* m_Controllers;

  /// @brief Field m_DeadzoneMax, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeadzoneMax, put = __cordl_internal_set_m_DeadzoneMax)) float_t m_DeadzoneMax;

  /// @brief Field m_DeadzoneMin, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DeadzoneMin, put = __cordl_internal_set_m_DeadzoneMin)) float_t m_DeadzoneMin;

  /// @brief Field m_InputBinding, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InputBinding,
                      put = __cordl_internal_set_m_InputBinding))::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes m_InputBinding;

  /// @brief Method GetDeadzoneAdjustedValue, addr 0x3016078, size 0x164, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetDeadzoneAdjustedValue(::UnityEngine::Vector2 value);

  /// @brief Method GetDeadzoneAdjustedValue, addr 0x30161dc, size 0x48, virtual false, abstract: false, final false
  inline float_t GetDeadzoneAdjustedValue(float_t value);

  static inline ::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider* New_ctor();

  /// @brief Method ReadInput, addr 0x3015e68, size 0x210, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 ReadInput();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*& __cordl_internal_get_m_Controllers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>*> const&
  __cordl_internal_get_m_Controllers() const;

  constexpr float_t const& __cordl_internal_get_m_DeadzoneMax() const;

  constexpr float_t& __cordl_internal_get_m_DeadzoneMax();

  constexpr float_t const& __cordl_internal_get_m_DeadzoneMin() const;

  constexpr float_t& __cordl_internal_get_m_DeadzoneMin();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes const& __cordl_internal_get_m_InputBinding() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes& __cordl_internal_get_m_InputBinding();

  constexpr void __cordl_internal_set_m_Controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value);

  constexpr void __cordl_internal_set_m_DeadzoneMax(float_t value);

  constexpr void __cordl_internal_set_m_DeadzoneMin(float_t value);

  constexpr void __cordl_internal_set_m_InputBinding(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes value);

  /// @brief Method .ctor, addr 0x3016224, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> getStaticF_k_Vec2UsageList();

  /// @brief Method get_controllers, addr 0x3015e38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* get_controllers();

  /// @brief Method get_deadzoneMax, addr 0x3015e58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_deadzoneMax();

  /// @brief Method get_deadzoneMin, addr 0x3015e48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_deadzoneMin();

  /// @brief Method get_inputBinding, addr 0x3015e28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes get_inputBinding();

  static inline void
  setStaticF_k_Vec2UsageList(::ArrayW<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>, ::Array<::UnityEngine::XR::InputFeatureUsage_1<::UnityEngine::Vector2>>*> value);

  /// @brief Method set_controllers, addr 0x3015e40, size 0x8, virtual false, abstract: false, final false
  inline void set_controllers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* value);

  /// @brief Method set_deadzoneMax, addr 0x3015e60, size 0x8, virtual false, abstract: false, final false
  inline void set_deadzoneMax(float_t value);

  /// @brief Method set_deadzoneMin, addr 0x3015e50, size 0x8, virtual false, abstract: false, final false
  inline void set_deadzoneMin(float_t value);

  /// @brief Method set_inputBinding, addr 0x3015e30, size 0x8, virtual false, abstract: false, final false
  inline void set_inputBinding(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeviceBasedContinuousMoveProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeviceBasedContinuousMoveProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeviceBasedContinuousMoveProvider(DeviceBasedContinuousMoveProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeviceBasedContinuousMoveProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeviceBasedContinuousMoveProvider(DeviceBasedContinuousMoveProvider const&) = delete;

  /// @brief Field m_InputBinding, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes ___m_InputBinding;

  /// @brief Field m_Controllers, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>* ___m_Controllers;

  /// @brief Field m_DeadzoneMin, offset: 0x80, size: 0x4, def value: None
  float_t ___m_DeadzoneMin;

  /// @brief Field m_DeadzoneMax, offset: 0x84, size: 0x4, def value: None
  float_t ___m_DeadzoneMax;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, 0x88>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_InputBinding) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_Controllers) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_DeadzoneMin) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider, ___m_DeadzoneMax) == 0x84, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::__DeviceBasedContinuousMoveProvider__InputAxes, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousMoveProvider/InputAxes");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::DeviceBasedContinuousMoveProvider*, "UnityEngine.XR.Interaction.Toolkit", "DeviceBasedContinuousMoveProvider");
