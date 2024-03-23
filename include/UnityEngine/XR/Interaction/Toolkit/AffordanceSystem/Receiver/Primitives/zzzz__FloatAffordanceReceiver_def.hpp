#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloatAffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class FloatUnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class FloatAffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class FloatAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::FloatAffordanceReceiver
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::FloatAffordanceReceiver*
class CORDL_TYPE FloatAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<float_t> {
public:
  // Declarations
  /// @brief Field <affordanceValue>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__affordanceValue_k__BackingField,
                      put = __cordl_internal_set__affordanceValue_k__BackingField))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* _affordanceValue_k__BackingField;

  __declspec(property(get = get_affordanceThemeDatum,
                      put = set_affordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* affordanceThemeDatum;

  __declspec(property(get = get_affordanceValue))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* affordanceValue;

  __declspec(property(get = get_defaultAffordanceTheme))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t>* defaultAffordanceTheme;

  /// @brief Field m_AffordanceThemeDatum, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AffordanceThemeDatum,
      put = __cordl_internal_set_m_AffordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueUpdated, put = __cordl_internal_set_m_ValueUpdated))::Unity::XR::CoreUtils::FloatUnityEvent* m_ValueUpdated;

  __declspec(property(get = get_valueUpdated, put = set_valueUpdated))::Unity::XR::CoreUtils::FloatUnityEvent* valueUpdated;

  /// @brief Method GenerateNewAffordanceThemeInstance, addr 0x2a311fc, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t>* GenerateNewAffordanceThemeInstance();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a2fae8, size 0x6c, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(float_t newValue);

  /// @brief Method ScheduleTweenJob, addr 0x2a3115c, size 0xa0, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<float_t>> jobData);

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& __cordl_internal_get__affordanceValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*> const& __cordl_internal_get__affordanceValue_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty*> const&
  __cordl_internal_get_m_AffordanceThemeDatum() const;

  constexpr ::Unity::XR::CoreUtils::FloatUnityEvent*& __cordl_internal_get_m_ValueUpdated();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::FloatUnityEvent*> const& __cordl_internal_get_m_ValueUpdated() const;

  constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* value);

  constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* value);

  constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::FloatUnityEvent* value);

  /// @brief Method .ctor, addr 0x2a2fc28, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_affordanceThemeDatum, addr 0x2a310dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* get_affordanceThemeDatum();

  /// @brief Method get_affordanceValue, addr 0x2a31154, size 0x8, virtual true, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* get_affordanceValue();

  /// @brief Method get_defaultAffordanceTheme, addr 0x2a310fc, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<float_t>* get_defaultAffordanceTheme();

  /// @brief Method get_valueUpdated, addr 0x2a310ec, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::FloatUnityEvent* get_valueUpdated();

  /// @brief Method set_affordanceThemeDatum, addr 0x2a310e4, size 0x8, virtual false, abstract: false, final false
  inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* value);

  /// @brief Method set_valueUpdated, addr 0x2a310f4, size 0x8, virtual false, abstract: false, final false
  inline void set_valueUpdated(::Unity::XR::CoreUtils::FloatUnityEvent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FloatAffordanceReceiver(FloatAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FloatAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FloatAffordanceReceiver(FloatAffordanceReceiver const&) = delete;

  /// @brief Field m_AffordanceThemeDatum, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::FloatAffordanceThemeDatumProperty* ___m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset: 0x90, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::FloatUnityEvent* ___m_ValueUpdated;

  /// @brief Field <affordanceValue>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* ____affordanceValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver, ___m_AffordanceThemeDatum) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver, ___m_ValueUpdated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver, ____affordanceValue_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::FloatAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "FloatAffordanceReceiver");
