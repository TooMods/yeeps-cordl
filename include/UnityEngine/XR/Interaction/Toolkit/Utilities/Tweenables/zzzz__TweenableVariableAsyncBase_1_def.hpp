#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/zzzz__NativeCurve_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/zzzz__TweenableVariableBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TweenableVariableAsyncBase_1)
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs {
template <typename T> struct TweenJobData_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections {
struct NativeCurve;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
template <typename T> class TweenableVariableAsyncBase_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1);
// Type: UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables::TweenableVariableAsyncBase`1
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables::TweenableVariableAsyncBase`1<T>*
class CORDL_TYPE TweenableVariableAsyncBase_1 : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableBase_1<T> {
public:
  // Declarations
  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Field m_CurveDirty, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CurveDirty, put = __cordl_internal_set_m_CurveDirty)) bool m_CurveDirty;

  /// @brief Field m_HasJobPending, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasJobPending, put = __cordl_internal_set_m_HasJobPending)) bool m_HasJobPending;

  /// @brief Field m_JobOutputStore, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_m_JobOutputStore, put = __cordl_internal_set_m_JobOutputStore))::Unity::Collections::NativeArray_1<T> m_JobOutputStore;

  /// @brief Field m_LastJobHandle, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_m_LastJobHandle, put = __cordl_internal_set_m_LastJobHandle))::Unity::Jobs::JobHandle m_LastJobHandle;

  /// @brief Field m_NativeCurve, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get_m_NativeCurve, put = __cordl_internal_set_m_NativeCurve))::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve m_NativeCurve;

  /// @brief Field m_OutputInitialized, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OutputInitialized, put = __cordl_internal_set_m_OutputInitialized)) bool m_OutputInitialized;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CompleteJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool CompleteJob();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method ExecuteTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteTween(T startValue, T targetValue, float_t tweenAmount, bool useCurve);

  /// @brief Method GetJobOutputStore, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<T> GetJobOutputStore();

  /// @brief Method GetNativeCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve GetNativeCurve();

  static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1<T>* New_ctor();

  /// @brief Method OnAnimationCurveChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnAnimationCurveChanged(::UnityEngine::AnimationCurve* value);

  /// @brief Method PreprocessTween, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PreprocessTween();

  /// @brief Method RefreshCurve, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RefreshCurve();

  /// @brief Method ScheduleTweenJob, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::Jobs::JobHandle ScheduleTweenJob(ByRef<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Jobs::TweenJobData_1<T>> jobData);

  /// @brief Method UpdateStateFromCompletedJob, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateStateFromCompletedJob();

  constexpr bool const& __cordl_internal_get_m_CurveDirty() const;

  constexpr bool& __cordl_internal_get_m_CurveDirty();

  constexpr bool const& __cordl_internal_get_m_HasJobPending() const;

  constexpr bool& __cordl_internal_get_m_HasJobPending();

  constexpr ::Unity::Collections::NativeArray_1<T> const& __cordl_internal_get_m_JobOutputStore() const;

  constexpr ::Unity::Collections::NativeArray_1<T>& __cordl_internal_get_m_JobOutputStore();

  constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_m_LastJobHandle() const;

  constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_m_LastJobHandle();

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve const& __cordl_internal_get_m_NativeCurve() const;

  constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve& __cordl_internal_get_m_NativeCurve();

  constexpr bool const& __cordl_internal_get_m_OutputInitialized() const;

  constexpr bool& __cordl_internal_get_m_OutputInitialized();

  constexpr void __cordl_internal_set_m_CurveDirty(bool value);

  constexpr void __cordl_internal_set_m_HasJobPending(bool value);

  constexpr void __cordl_internal_set_m_JobOutputStore(::Unity::Collections::NativeArray_1<T> value);

  constexpr void __cordl_internal_set_m_LastJobHandle(::Unity::Jobs::JobHandle value);

  constexpr void __cordl_internal_set_m_NativeCurve(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve value);

  constexpr void __cordl_internal_set_m_OutputInitialized(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweenableVariableAsyncBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweenableVariableAsyncBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweenableVariableAsyncBase_1(TweenableVariableAsyncBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweenableVariableAsyncBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweenableVariableAsyncBase_1(TweenableVariableAsyncBase_1 const&) = delete;

  /// @brief Field m_OutputInitialized, offset: 0x50, size: 0x1, def value: None
  bool ___m_OutputInitialized;

  /// @brief Field m_JobOutputStore, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<T> ___m_JobOutputStore;

  /// @brief Field m_CurveDirty, offset: 0x68, size: 0x1, def value: None
  bool ___m_CurveDirty;

  /// @brief Field m_NativeCurve, offset: 0x70, size: 0x18, def value: None
  ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::NativeCurve ___m_NativeCurve;

  /// @brief Field m_HasJobPending, offset: 0x88, size: 0x1, def value: None
  bool ___m_HasJobPending;

  /// @brief Field m_LastJobHandle, offset: 0x90, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle ___m_LastJobHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::TweenableVariableAsyncBase_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Tweenables",
                                     "TweenableVariableAsyncBase`1");
