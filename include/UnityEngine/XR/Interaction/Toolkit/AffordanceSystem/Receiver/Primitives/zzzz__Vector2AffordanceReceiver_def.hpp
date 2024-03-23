#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(Vector2AffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float2;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class Vector2UnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector2AffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class Vector2AffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::Vector2AffordanceReceiver
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::Vector2AffordanceReceiver*
class CORDL_TYPE Vector2AffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<::Unity::Mathematics::float2> {
public:
  // Declarations
  /// @brief Field <affordanceValue>k__BackingField, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get__affordanceValue_k__BackingField,
      put = __cordl_internal_set__affordanceValue_k__BackingField))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* _affordanceValue_k__BackingField;

  __declspec(property(get = get_affordanceThemeDatum,
                      put = set_affordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* affordanceThemeDatum;

  __declspec(property(get = get_affordanceValue))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* affordanceValue;

  __declspec(property(get = get_defaultAffordanceTheme))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* defaultAffordanceTheme;

  /// @brief Field m_AffordanceThemeDatum, offset 0x88, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AffordanceThemeDatum,
      put = __cordl_internal_set_m_AffordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueUpdated, put = __cordl_internal_set_m_ValueUpdated))::Unity::XR::CoreUtils::Vector2UnityEvent* m_ValueUpdated;

  __declspec(property(get = get_valueUpdated, put = set_valueUpdated))::Unity::XR::CoreUtils::Vector2UnityEvent* valueUpdated;

  /// @brief Method GenerateNewAffordanceThemeInstance, addr 0x2a31518, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* GenerateNewAffordanceThemeInstance();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a305f4, size 0x80, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::Unity::Mathematics::float2 newValue);

  /// @brief Method ScheduleTweenJob, addr 0x2a31468, size 0xb0, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float2>> jobData);

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*& __cordl_internal_get__affordanceValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>*> const&
  __cordl_internal_get__affordanceValue_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty*> const&
  __cordl_internal_get_m_AffordanceThemeDatum() const;

  constexpr ::Unity::XR::CoreUtils::Vector2UnityEvent*& __cordl_internal_get_m_ValueUpdated();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Vector2UnityEvent*> const& __cordl_internal_get_m_ValueUpdated() const;

  constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* value);

  constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* value);

  constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::Vector2UnityEvent* value);

  /// @brief Method .ctor, addr 0x2a306ac, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_affordanceThemeDatum, addr 0x2a313e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* get_affordanceThemeDatum();

  /// @brief Method get_affordanceValue, addr 0x2a31460, size 0x8, virtual true, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* get_affordanceValue();

  /// @brief Method get_defaultAffordanceTheme, addr 0x2a31408, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float2>* get_defaultAffordanceTheme();

  /// @brief Method get_valueUpdated, addr 0x2a313f8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Vector2UnityEvent* get_valueUpdated();

  /// @brief Method set_affordanceThemeDatum, addr 0x2a313f0, size 0x8, virtual false, abstract: false, final false
  inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* value);

  /// @brief Method set_valueUpdated, addr 0x2a31400, size 0x8, virtual false, abstract: false, final false
  inline void set_valueUpdated(::Unity::XR::CoreUtils::Vector2UnityEvent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2AffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2AffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2AffordanceReceiver(Vector2AffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2AffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2AffordanceReceiver(Vector2AffordanceReceiver const&) = delete;

  /// @brief Field m_AffordanceThemeDatum, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector2AffordanceThemeDatumProperty* ___m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset: 0x90, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Vector2UnityEvent* ___m_ValueUpdated;

  /// @brief Field <affordanceValue>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float2>* ____affordanceValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver, 0xa0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver, ___m_AffordanceThemeDatum) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver, ___m_ValueUpdated) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver, ____affordanceValue_k__BackingField) == 0x98, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector2AffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "Vector2AffordanceReceiver");
