#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__BaseAsyncAffordanceStateReceiver_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(Vector3AffordanceReceiver)
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Mathematics {
struct float3;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariable_1;
}
namespace Unity::XR::CoreUtils {
class Vector3UnityEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives {
class Vector3AffordanceThemeDatumProperty;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
class Vector3AffordanceReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::Vector3AffordanceReceiver
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives::Vector3AffordanceReceiver*
class CORDL_TYPE Vector3AffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAsyncAffordanceStateReceiver_1<::Unity::Mathematics::float3> {
public:
  // Declarations
  /// @brief Field <affordanceValue>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__affordanceValue_k__BackingField,
      put = __cordl_internal_set__affordanceValue_k__BackingField))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float3>* _affordanceValue_k__BackingField;

  __declspec(property(get = get_affordanceThemeDatum,
                      put = set_affordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* affordanceThemeDatum;

  __declspec(property(get = get_affordanceValue))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float3>* affordanceValue;

  __declspec(property(get = get_defaultAffordanceTheme))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float3>* defaultAffordanceTheme;

  /// @brief Field m_AffordanceThemeDatum, offset 0x90, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_AffordanceThemeDatum,
      put = __cordl_internal_set_m_AffordanceThemeDatum))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueUpdated, put = __cordl_internal_set_m_ValueUpdated))::Unity::XR::CoreUtils::Vector3UnityEvent* m_ValueUpdated;

  __declspec(property(get = get_valueUpdated, put = set_valueUpdated))::Unity::XR::CoreUtils::Vector3UnityEvent* valueUpdated;

  /// @brief Method GenerateNewAffordanceThemeInstance, addr 0x2a31698, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float3>* GenerateNewAffordanceThemeInstance();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver* New_ctor();

  /// @brief Method OnAffordanceValueUpdated, addr 0x2a30968, size 0x94, virtual true, abstract: false, final false
  inline void OnAffordanceValueUpdated(::Unity::Mathematics::float3 newValue);

  /// @brief Method ScheduleTweenJob, addr 0x2a315f0, size 0xa8, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<::Unity::Mathematics::float3>> jobData);

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float3>*& __cordl_internal_get__affordanceValue_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float3>*> const&
  __cordl_internal_get__affordanceValue_k__BackingField() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty*& __cordl_internal_get_m_AffordanceThemeDatum();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty*> const&
  __cordl_internal_get_m_AffordanceThemeDatum() const;

  constexpr ::Unity::XR::CoreUtils::Vector3UnityEvent*& __cordl_internal_get_m_ValueUpdated();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Vector3UnityEvent*> const& __cordl_internal_get_m_ValueUpdated() const;

  constexpr void __cordl_internal_set__affordanceValue_k__BackingField(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float3>* value);

  constexpr void __cordl_internal_set_m_AffordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* value);

  constexpr void __cordl_internal_set_m_ValueUpdated(::Unity::XR::CoreUtils::Vector3UnityEvent* value);

  /// @brief Method .ctor, addr 0x2a30a34, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_affordanceThemeDatum, addr 0x2a31570, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* get_affordanceThemeDatum();

  /// @brief Method get_affordanceValue, addr 0x2a315e8, size 0x8, virtual true, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float3>* get_affordanceValue();

  /// @brief Method get_defaultAffordanceTheme, addr 0x2a31590, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<::Unity::Mathematics::float3>* get_defaultAffordanceTheme();

  /// @brief Method get_valueUpdated, addr 0x2a31580, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::XR::CoreUtils::Vector3UnityEvent* get_valueUpdated();

  /// @brief Method set_affordanceThemeDatum, addr 0x2a31578, size 0x8, virtual false, abstract: false, final false
  inline void set_affordanceThemeDatum(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* value);

  /// @brief Method set_valueUpdated, addr 0x2a31588, size 0x8, virtual false, abstract: false, final false
  inline void set_valueUpdated(::Unity::XR::CoreUtils::Vector3UnityEvent* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3AffordanceReceiver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3AffordanceReceiver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3AffordanceReceiver(Vector3AffordanceReceiver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3AffordanceReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3AffordanceReceiver(Vector3AffordanceReceiver const&) = delete;

  /// @brief Field m_AffordanceThemeDatum, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::Primitives::Vector3AffordanceThemeDatumProperty* ___m_AffordanceThemeDatum;

  /// @brief Field m_ValueUpdated, offset: 0x98, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Vector3UnityEvent* ___m_ValueUpdated;

  /// @brief Field <affordanceValue>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::Unity::Mathematics::float3>* ____affordanceValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver, 0xa8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver, ___m_AffordanceThemeDatum) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver, ___m_ValueUpdated) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver, ____affordanceValue_k__BackingField) == 0xa0, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver*,
                       "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives", "Vector3AffordanceReceiver");
