#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BaseAffordanceStateReceiver_1)
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
template <typename T> class IAffordanceStateReceiver_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
class IAffordanceStateReceiver;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
struct AffordanceStateData;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State {
class BaseAffordanceStateProvider;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
template <typename T> class BaseAffordanceTheme_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
template <typename T> class BaseAffordanceStateReceiver_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1);
// Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver::BaseAffordanceStateReceiver`1
// SizeInfo { instance_size: 80, native_size: 73, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver::BaseAffordanceStateReceiver`1<T>*
class CORDL_TYPE BaseAffordanceStateReceiver_1 : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <initialValueCaptured>k__BackingField, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__initialValueCaptured_k__BackingField, put = __cordl_internal_set__initialValueCaptured_k__BackingField)) bool _initialValueCaptured_k__BackingField;

  /// @brief Field <initialValue>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__initialValue_k__BackingField, put = __cordl_internal_set__initialValue_k__BackingField)) T _initialValue_k__BackingField;

  __declspec(property(get = get_affordanceStateProvider,
                      put = set_affordanceStateProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> affordanceStateProvider;

  __declspec(property(get = get_affordanceTheme, put = set_affordanceTheme))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* affordanceTheme;

  __declspec(property(get = get_affordanceValue))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>* affordanceValue;

  __declspec(property(get = get_currentAffordanceStateData))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<
      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* currentAffordanceStateData;

  __declspec(property(get = get_currentAffordanceValue))::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* currentAffordanceValue;

  __declspec(property(get = get_defaultAffordanceTheme))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* defaultAffordanceTheme;

  __declspec(property(get = get_initialValue, put = set_initialValue)) T initialValue;

  __declspec(property(get = get_initialValueCaptured, put = set_initialValueCaptured)) bool initialValueCaptured;

  /// @brief Field m_AffordanceStateData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AffordanceStateData, put = __cordl_internal_set_m_AffordanceStateData))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<
      ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* m_AffordanceStateData;

  /// @brief Field m_AffordanceStateProvider, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_m_AffordanceStateProvider,
               put = __cordl_internal_set_m_AffordanceStateProvider))::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> m_AffordanceStateProvider;

  /// @brief Field m_AffordanceTheme, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AffordanceTheme,
                      put = __cordl_internal_set_m_AffordanceTheme))::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* m_AffordanceTheme;

  /// @brief Field m_Initialized, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Initialized, put = __cordl_internal_set_m_Initialized)) bool m_Initialized;

  /// @brief Field m_ReplaceIdleStateValueWithInitialValue, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ReplaceIdleStateValueWithInitialValue,
                      put = __cordl_internal_set_m_ReplaceIdleStateValueWithInitialValue)) bool m_ReplaceIdleStateValueWithInitialValue;

  __declspec(property(get = get_replaceIdleStateValueWithInitialValue, put = set_replaceIdleStateValueWithInitialValue)) bool replaceIdleStateValueWithInitialValue;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver_1<T>"
  constexpr operator ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver_1<T>*() noexcept;

  /// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CaptureInitialValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CaptureInitialValue();

  /// @brief Method ConsumeAffordance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ConsumeAffordance(T newValue);

  /// @brief Method GenerateNewAffordanceThemeInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* GenerateNewAffordanceThemeInstance();

  /// @brief Method GetCurrentValueForCapture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetCurrentValueForCapture();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1<T>* New_ctor();

  /// @brief Method OnAffordanceStateUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData previousState,
                                       ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData newState);

  /// @brief Method OnAffordanceThemeChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAffordanceThemeChanged(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* newValue);

  /// @brief Method OnAffordanceValueUpdated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnAffordanceValueUpdated(T newValue);

  /// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method ProcessTargetAffordanceValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T ProcessTargetAffordanceValue(T newValue);

  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__initialValueCaptured_k__BackingField() const;

  constexpr bool& __cordl_internal_get__initialValueCaptured_k__BackingField();

  constexpr T const& __cordl_internal_get__initialValue_k__BackingField() const;

  constexpr T& __cordl_internal_get__initialValue_k__BackingField();

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*&
  __cordl_internal_get_m_AffordanceStateData();

  constexpr ::cordl_internals::to_const_pointer<
      ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*> const&
  __cordl_internal_get_m_AffordanceStateData() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> const& __cordl_internal_get_m_AffordanceStateProvider() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider>& __cordl_internal_get_m_AffordanceStateProvider();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*& __cordl_internal_get_m_AffordanceTheme();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*> const& __cordl_internal_get_m_AffordanceTheme() const;

  constexpr bool const& __cordl_internal_get_m_Initialized() const;

  constexpr bool& __cordl_internal_get_m_Initialized();

  constexpr bool const& __cordl_internal_get_m_ReplaceIdleStateValueWithInitialValue() const;

  constexpr bool& __cordl_internal_get_m_ReplaceIdleStateValueWithInitialValue();

  constexpr void __cordl_internal_set__initialValueCaptured_k__BackingField(bool value);

  constexpr void __cordl_internal_set__initialValue_k__BackingField(T value);

  constexpr void __cordl_internal_set_m_AffordanceStateData(
      ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* value);

  constexpr void __cordl_internal_set_m_AffordanceStateProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> value);

  constexpr void __cordl_internal_set_m_AffordanceTheme(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* value);

  constexpr void __cordl_internal_set_m_Initialized(bool value);

  constexpr void __cordl_internal_set_m_ReplaceIdleStateValueWithInitialValue(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_affordanceStateProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> get_affordanceStateProvider();

  /// @brief Method get_affordanceTheme, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* get_affordanceTheme();

  /// @brief Method get_affordanceValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<T>* get_affordanceValue();

  /// @brief Method get_currentAffordanceStateData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*
  get_currentAffordanceStateData();

  /// @brief Method get_currentAffordanceValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* get_currentAffordanceValue();

  /// @brief Method get_defaultAffordanceTheme, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* get_defaultAffordanceTheme();

  /// @brief Method get_initialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_initialValue();

  /// @brief Method get_initialValueCaptured, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_initialValueCaptured();

  /// @brief Method get_replaceIdleStateValueWithInitialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_replaceIdleStateValueWithInitialValue();

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver_1<T>"
  constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver_1<T>*
  i___UnityEngine__XR__Interaction__Toolkit__AffordanceSystem__Receiver__IAffordanceStateReceiver_1_T_() noexcept;

  /// @brief Method set_affordanceStateProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_affordanceStateProvider(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider* value);

  /// @brief Method set_affordanceTheme, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_affordanceTheme(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* value);

  /// @brief Method set_initialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_initialValue(T value);

  /// @brief Method set_initialValueCaptured, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_initialValueCaptured(bool value);

  /// @brief Method set_replaceIdleStateValueWithInitialValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_replaceIdleStateValueWithInitialValue(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseAffordanceStateReceiver_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceStateReceiver_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseAffordanceStateReceiver_1(BaseAffordanceStateReceiver_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseAffordanceStateReceiver_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseAffordanceStateReceiver_1(BaseAffordanceStateReceiver_1 const&) = delete;

  /// @brief Field m_AffordanceStateProvider, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider> ___m_AffordanceStateProvider;

  /// @brief Field m_ReplaceIdleStateValueWithInitialValue, offset: 0x20, size: 0x1, def value: None
  bool ___m_ReplaceIdleStateValueWithInitialValue;

  /// @brief Field m_AffordanceTheme, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* ___m_AffordanceTheme;

  /// @brief Field m_AffordanceStateData, offset: 0x30, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* ___m_AffordanceStateData;

  /// @brief Field m_Initialized, offset: 0x38, size: 0x1, def value: None
  bool ___m_Initialized;

  /// @brief Field <initialValue>k__BackingField, offset: 0x40, size: 0x8, def value: None
  T ____initialValue_k__BackingField;

  /// @brief Field <initialValueCaptured>k__BackingField, offset: 0x48, size: 0x1, def value: None
  bool ____initialValueCaptured_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::BaseAffordanceStateReceiver_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver",
                                     "BaseAffordanceStateReceiver`1");
