#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRBaseTargetFilter_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRTargetFilter)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class Type;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class __XRTargetFilter____c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class IXRInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class __XRTargetFilter____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter);
MARK_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::XRTargetFilter::<>c*
class CORDL_TYPE __XRTargetFilter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c* __9;

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c* New_ctor();

  /// @brief Method <.cctor>b__49_0, addr 0x2ff5594, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* __cctor_b__49_0();

  /// @brief Method <.cctor>b__49_1, addr 0x2ff5604, size 0x6c, virtual false, abstract: false, final false
  inline void __cctor_b__49_1(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* list);

  /// @brief Method .ctor, addr 0x2ff558c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRTargetFilter____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRTargetFilter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRTargetFilter____c(__XRTargetFilter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRTargetFilter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRTargetFilter____c(__XRTargetFilter____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
// Type: UnityEngine.XR.Interaction.Toolkit.Filtering::XRTargetFilter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Filtering::XRTargetFilter*
class CORDL_TYPE XRTargetFilter : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter {
public:
  // Declarations
  using __c = ::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c;

  /// @brief Field <isProcessing>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__isProcessing_k__BackingField, put = __cordl_internal_set__isProcessing_k__BackingField)) bool _isProcessing_k__BackingField;

  __declspec(property(get = get_canProcess)) bool canProcess;

  __declspec(property(get = get_evaluatorCount)) int32_t evaluatorCount;

  __declspec(property(get = get_evaluators))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* evaluators;

  /// @brief Field interactorLinked, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_interactorLinked,
                      put = __cordl_internal_set_interactorLinked))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* interactorLinked;

  /// @brief Field interactorUnlinked, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_interactorUnlinked,
                      put = __cordl_internal_set_interactorUnlinked))::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* interactorUnlinked;

  __declspec(property(get = get_isProcessing, put = set_isProcessing)) bool isProcessing;

  __declspec(property(get = get_linkedInteractors))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* linkedInteractors;

  /// @brief Field m_Evaluators, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Evaluators,
                      put = __cordl_internal_set_m_Evaluators))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* m_Evaluators;

  /// @brief Field m_IsAwake, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsAwake, put = __cordl_internal_set_m_IsAwake)) bool m_IsAwake;

  /// @brief Field m_LinkedInteractors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LinkedInteractors,
                      put = __cordl_internal_set_m_LinkedInteractors))::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* m_LinkedInteractors;

  /// @brief Field s_EvaluatorListPool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EvaluatorListPool, put = setStaticF_s_EvaluatorListPool))::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>* s_EvaluatorListPool;

  /// @brief Field s_InteractableFinalScoreMap, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_s_InteractableFinalScoreMap,
      put = setStaticF_s_InteractableFinalScoreMap))::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* s_InteractableFinalScoreMap;

  /// @brief Field s_InteractableScoreComparison, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InteractableScoreComparison,
                             put = setStaticF_s_InteractableScoreComparison))::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* s_InteractableScoreComparison;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method AddEvaluator, addr 0x2ff4534, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* AddEvaluator(::System::Type* evaluatorType);

  /// @brief Method AddEvaluator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T AddEvaluator();

  /// @brief Method Awake, addr 0x2ff35b0, size 0x1b4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetEnabledEvaluators, addr 0x2ff3be4, size 0x24c, virtual false, abstract: false, final false
  inline void GetEnabledEvaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* results);

  /// @brief Method GetEnumerator, addr 0x2ff4250, size 0x90, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* GetEnumerator();

  /// @brief Method GetEvaluator, addr 0x2ff4338, size 0x1fc, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* GetEvaluator(::System::Type* type);

  /// @brief Method GetEvaluator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetEvaluator();

  /// @brief Method GetEvaluatorAt, addr 0x2ff42e0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* GetEvaluatorAt(int32_t index);

  /// @brief Method GetEvaluators, addr 0x2ff3764, size 0xd0, virtual false, abstract: false, final false
  inline void GetEvaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* results);

  /// @brief Method GetLinkedInteractors, addr 0x2ff40e0, size 0xd0, virtual false, abstract: false, final false
  inline void GetLinkedInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* results);

  /// @brief Method InteractableScoreDescendingComparison, addr 0x2ff31a0, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t InteractableScoreDescendingComparison(::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* x, ::UnityEngine::XR::Interaction::Toolkit::IXRInteractable* y);

  /// @brief Method Link, addr 0x2ff48d8, size 0x144, virtual true, abstract: false, final false
  inline void Link(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method MoveEvaluatorTo, addr 0x2ff4804, size 0xd4, virtual false, abstract: false, final false
  inline void MoveEvaluatorTo(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* evaluator, int32_t newIndex);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter* New_ctor();

  /// @brief Method OnDestroy, addr 0x2ff3e30, size 0x254, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDisable, addr 0x2ff3a0c, size 0x1d8, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2ff3834, size 0x1d8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Process, addr 0x2ff4b68, size 0x6e8, virtual true, abstract: false, final false
  inline void Process(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* targets,
                      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* results);

  /// @brief Method RegisterEvaluatorHandlers, addr 0x2ff2988, size 0x2c8, virtual false, abstract: false, final false
  inline void RegisterEvaluatorHandlers(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* evaluator);

  /// @brief Method RemoveEvaluator, addr 0x2ff3088, size 0x100, virtual false, abstract: false, final false
  inline void RemoveEvaluator(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* evaluator);

  /// @brief Method RemoveEvaluatorAt, addr 0x2ff46ac, size 0x158, virtual false, abstract: false, final false
  inline void RemoveEvaluatorAt(int32_t index);

  /// @brief Method Reset, addr 0x2ff4084, size 0x5c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2ff41b0, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Unlink, addr 0x2ff4a1c, size 0x14c, virtual true, abstract: false, final false
  inline void Unlink(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor);

  /// @brief Method UnregisterEvaluatorHandlers, addr 0x2ff2c8c, size 0x2cc, virtual false, abstract: false, final false
  inline void UnregisterEvaluatorHandlers(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* evaluator);

  constexpr bool const& __cordl_internal_get__isProcessing_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isProcessing_k__BackingField();

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*& __cordl_internal_get_interactorLinked();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*> const& __cordl_internal_get_interactorLinked() const;

  constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*& __cordl_internal_get_interactorUnlinked();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*> const& __cordl_internal_get_interactorUnlinked() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*& __cordl_internal_get_m_Evaluators();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*> const&
  __cordl_internal_get_m_Evaluators() const;

  constexpr bool const& __cordl_internal_get_m_IsAwake() const;

  constexpr bool& __cordl_internal_get_m_IsAwake();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*& __cordl_internal_get_m_LinkedInteractors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>*> const&
  __cordl_internal_get_m_LinkedInteractors() const;

  constexpr void __cordl_internal_set__isProcessing_k__BackingField(bool value);

  constexpr void __cordl_internal_set_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  constexpr void __cordl_internal_set_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  constexpr void __cordl_internal_set_m_Evaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* value);

  constexpr void __cordl_internal_set_m_IsAwake(bool value);

  constexpr void __cordl_internal_set_m_LinkedInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  /// @brief Method .ctor, addr 0x2ff5250, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_interactorLinked, addr 0x2ff32d8, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  /// @brief Method add_interactorUnlinked, addr 0x2ff3438, size 0xb0, virtual false, abstract: false, final false
  inline void add_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<
      ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*
  getStaticF_s_EvaluatorListPool();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* getStaticF_s_InteractableFinalScoreMap();

  static inline ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* getStaticF_s_InteractableScoreComparison();

  /// @brief Method get_canProcess, addr 0x2ff3598, size 0x18, virtual true, abstract: false, final false
  inline bool get_canProcess();

  /// @brief Method get_evaluatorCount, addr 0x2ff327c, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_evaluatorCount();

  /// @brief Method get_evaluators, addr 0x2ff3274, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* get_evaluators();

  /// @brief Method get_isProcessing, addr 0x2ff32c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isProcessing();

  /// @brief Method get_linkedInteractors, addr 0x2ff326c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* get_linkedInteractors();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*
  i___System__Collections__Generic__IEnumerable_1___UnityEngine__XR__Interaction__Toolkit__Filtering__XRTargetEvaluator__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Method remove_interactorLinked, addr 0x2ff3388, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  /// @brief Method remove_interactorUnlinked, addr 0x2ff34e8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* value);

  static inline void setStaticF_s_EvaluatorListPool(
      ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*
          value);

  static inline void setStaticF_s_InteractableFinalScoreMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*, float_t>* value);

  static inline void setStaticF_s_InteractableScoreComparison(::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractable*>* value);

  /// @brief Method set_isProcessing, addr 0x2ff32cc, size 0xc, virtual false, abstract: false, final false
  inline void set_isProcessing(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRTargetFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRTargetFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRTargetFilter(XRTargetFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRTargetFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRTargetFilter(XRTargetFilter const&) = delete;

  /// @brief Field m_LinkedInteractors, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* ___m_LinkedInteractors;

  /// @brief Field m_Evaluators, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* ___m_Evaluators;

  /// @brief Field m_IsAwake, offset: 0x28, size: 0x1, def value: None
  bool ___m_IsAwake;

  /// @brief Field <isProcessing>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____isProcessing_k__BackingField;

  /// @brief Field interactorLinked, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* ___interactorLinked;

  /// @brief Field interactorUnlinked, offset: 0x38, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*>* ___interactorUnlinked;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___m_LinkedInteractors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___m_Evaluators) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___m_IsAwake) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ____isProcessing_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___interactorLinked) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___interactorUnlinked) == 0x38, "Offset mismatch!");

} // namespace UnityEngine::XR::Interaction::Toolkit::Filtering
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetFilter");
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::__XRTargetFilter____c*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetFilter/<>c");
