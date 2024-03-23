#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(ColorAffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class ColorUnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class ColorAffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class BaseAffordanceTheme_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class ColorAffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::ColorAffordanceReceiver
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::ColorAffordanceReceiver*
class CORDL_TYPE ColorAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<::UnityEngine::Color> {
public:
  // Declarations
  /// @brief Field <affordanceValue>k__BackingField, offset 0xa0, size 0x8
  __declspec(
      property(get = __cordl_internal_get__affordanceValue_k__BackingField,
               put = __cordl_internal_set__affordanceValue_k__BackingField))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* _affordanceValue_k__BackingField;

  __declspec(property(get = get_affordanceThemeDatum,
                      put = set_affordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* affordanceThemeDatum;

  __declspec(property(get = get_affordanceValue))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* affordanceValue;

  __declspec(property(get = get_defaultAffordanceTheme))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* defaultAffordanceTheme;

  /// @brief Field m_AffordanceThemeDatum, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AffordanceThemeDatum,
      put = __cordl_internal_set_m_AffordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueUpdated, put = __cordl_internal_set_m_ValueUpdated))::Unity::XR::CoreUtils::ColorUnityEvent* m_ValueUpdated;

  __declspec(property(get = get_valueUpdated, put = set_valueUpdated))::Unity::XR::CoreUtils::ColorUnityEvent* valueUpdated;

  /// @brief Method GenerateNewAffordanceThemeInstance, addr 0x2a31084, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* GenerateNewAffordanceThemeInstance();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a2f794, size 0x90, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::UnityEngine::Color newValue);

  /// @brief Method ScheduleTweenJob, addr 0x2a30efc, size 0x188, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::UnityEngine::Color>> jobData);

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*& __cordl_internal_get__affordanceValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>*> const&
  __cordl_internal_get__affordanceValue_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty*> const&
  __cordl_internal_get_m_AffordanceThemeDatum() const;

  constexpr ::Unity::XR::CoreUtils::ColorUnityEvent*& __cordl_internal_get_m_ValueUpdated();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::ColorUnityEvent*> const& __cordl_internal_get_m_ValueUpdated() const;

  constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* value);

  constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* value);

  constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::ColorUnityEvent* value);

  /// @brief Method .ctor, addr 0x2a2f89c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_affordanceThemeDatum, addr 0x2a30e7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* get_affordanceThemeDatum();

  /// @brief Method get_affordanceValue, addr 0x2a30ef4, size 0x8, virtual true, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* get_affordanceValue();

  /// @brief Method get_defaultAffordanceTheme, addr 0x2a30e9c, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::UnityEngine::Color>* get_defaultAffordanceTheme();

  /// @brief Method get_valueUpdated, addr 0x2a30e8c, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::ColorUnityEvent* get_valueUpdated();

  /// @brief Method set_affordanceThemeDatum, addr 0x2a30e84, size 0x8, virtual false, abstract: false, final false
  inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* value);

  /// @brief Method set_valueUpdated, addr 0x2a30e94, size 0x8, virtual false, abstract: false, final false
  inline void set_valueUpdated(::Unity::XR::CoreUtils::ColorUnityEvent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorAffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorAffordanceReceiver(ColorAffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorAffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorAffordanceReceiver(ColorAffordanceReceiver const&) = delete;

  /// @brief Field m_AffordanceThemeDatum, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::ColorAffordanceThemeDatumProperty* ___m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset: 0x98, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::ColorUnityEvent* ___m_ValueUpdated;

  /// @brief Field <affordanceValue>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::Color>* ____affordanceValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver, ___m_AffordanceThemeDatum) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver, ___m_ValueUpdated) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver, ____affordanceValue_k__BackingField) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::ColorAffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "ColorAffordanceReceiver");
