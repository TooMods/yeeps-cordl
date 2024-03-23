#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRTargetEvaluator)
namespace System {
class IDisposable;
}
namespace System {
class Type;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetEvaluator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator);
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRTargetEvaluator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 43, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRTargetEvaluator*
class CORDL_TYPE XRTargetEvaluator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_disposed)) bool disposed;

  __declspec(property(get = get_enabled, put = set_enabled)) bool enabled;

  __declspec(property(get = get_filter))::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> filter;

  /// @brief Field m_Enabled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Enabled, put = __cordl_internal_set_m_Enabled)) bool m_Enabled;

  /// @brief Field m_Filter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Filter, put = __cordl_internal_set_m_Filter))::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> m_Filter;

  /// @brief Field m_IsAwake, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsAwake, put = __cordl_internal_set_m_IsAwake)) bool m_IsAwake;

  /// @brief Field m_IsEnabled, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsEnabled, put = __cordl_internal_set_m_IsEnabled)) bool m_IsEnabled;

  /// @brief Field m_IsRegistered, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsRegistered, put = __cordl_internal_set_m_IsRegistered)) bool m_IsRegistered;

  /// @brief Field m_Weight, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Weight, put = __cordl_internal_set_m_Weight))::UnityEngine::AnimationCurve* m_Weight;

  __declspec(property(get = get_weight, put = set_weight))::UnityEngine::AnimationCurve* weight;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Awake, addr 0x2ff2fd0, size 0x4, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method AwakeInternal, addr 0x2ff2f58, size 0x44, virtual false, abstract: false, final false
  inline void AwakeInternal();

  /// @brief Method CalculateNormalizedScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t CalculateNormalizedScore(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* target);

  /// @brief Method CreateInstance, addr 0x2ff2564, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* CreateInstance(::System::Type* evaluatorType,
                                                                                                      ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter* filter);

  /// @brief Method DisableInternal, addr 0x2ff291c, size 0x1c, virtual false, abstract: false, final false
  inline void DisableInternal();

  /// @brief Method Dispose, addr 0x2ff3004, size 0x84, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeInternal, addr 0x2ff2f9c, size 0x34, virtual false, abstract: false, final false
  inline void DisposeInternal();

  /// @brief Method EnableInternal, addr 0x2ff28e0, size 0x3c, virtual false, abstract: false, final false
  inline void EnableInternal();

  /// @brief Method GetWeightedScore, addr 0x2ff2fd8, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetWeightedScore(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* target);

  /// @brief Method IsInstanceType, addr 0x2ff2468, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsInstanceType(::System::Type* evaluatorType);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* New_ctor();

  /// @brief Method OnDisable, addr 0x2ff232c, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDispose, addr 0x2ff2fd4, size 0x4, virtual true, abstract: false, final false
  inline void OnDispose();

  /// @brief Method OnEnable, addr 0x2ff18f4, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method RegisterHandlers, addr 0x2ff2948, size 0x40, virtual false, abstract: false, final false
  inline void RegisterHandlers();

  /// @brief Method Reset, addr 0x2ff18fc, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method UnregisterHandlers, addr 0x2ff2c50, size 0x3c, virtual false, abstract: false, final false
  inline void UnregisterHandlers();

  constexpr bool const& __cordl_internal_get_m_Enabled() const;

  constexpr bool& __cordl_internal_get_m_Enabled();

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> const& __cordl_internal_get_m_Filter() const;

  constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter>& __cordl_internal_get_m_Filter();

  constexpr bool const& __cordl_internal_get_m_IsAwake() const;

  constexpr bool& __cordl_internal_get_m_IsAwake();

  constexpr bool const& __cordl_internal_get_m_IsEnabled() const;

  constexpr bool& __cordl_internal_get_m_IsEnabled();

  constexpr bool const& __cordl_internal_get_m_IsRegistered() const;

  constexpr bool& __cordl_internal_get_m_IsRegistered();

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_m_Weight();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_m_Weight() const;

  constexpr void __cordl_internal_set_m_Enabled(bool value);

  constexpr void __cordl_internal_set_m_Filter(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> value);

  constexpr void __cordl_internal_set_m_IsAwake(bool value);

  constexpr void __cordl_internal_set_m_IsEnabled(bool value);

  constexpr void __cordl_internal_set_m_IsRegistered(bool value);

  constexpr void __cordl_internal_set_m_Weight(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x2ff1c1c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_disposed, addr 0x2ff2880, size 0x60, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_enabled, addr 0x2ff2638, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_filter, addr 0x2ff2630, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> get_filter();

  /// @brief Method get_weight, addr 0x2ff2938, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::AnimationCurve* get_weight();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_enabled, addr 0x2ff2640, size 0x240, virtual false, abstract: false, final false
  inline void set_enabled(bool value);

  /// @brief Method set_weight, addr 0x2ff2940, size 0x8, virtual false, abstract: false, final false
  inline void set_weight(::UnityEngine::AnimationCurve* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRTargetEvaluator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRTargetEvaluator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRTargetEvaluator(XRTargetEvaluator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRTargetEvaluator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRTargetEvaluator(XRTargetEvaluator const&) = delete;

  /// @brief Field m_Filter, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter> ___m_Filter;

  /// @brief Field m_Enabled, offset: 0x18, size: 0x1, def value: None
  bool ___m_Enabled;

  /// @brief Field m_Weight, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___m_Weight;

  /// @brief Field m_IsAwake, offset: 0x28, size: 0x1, def value: None
  bool ___m_IsAwake;

  /// @brief Field m_IsEnabled, offset: 0x29, size: 0x1, def value: None
  bool ___m_IsEnabled;

  /// @brief Field m_IsRegistered, offset: 0x2a, size: 0x1, def value: None
  bool ___m_IsRegistered;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator, ___m_Filter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator, ___m_Enabled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator, ___m_Weight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator, ___m_IsAwake) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator, ___m_IsEnabled) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator, ___m_IsRegistered) == 0x2a, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetEvaluator");
