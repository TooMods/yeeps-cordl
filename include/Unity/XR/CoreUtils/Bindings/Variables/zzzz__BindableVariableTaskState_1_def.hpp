#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(BindableVariableTaskState_1)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> struct BindableVariableTaskState_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1);
// Type: Unity.XR.CoreUtils.Bindings.Variables::BindableVariableTaskState`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Bindings::Variables {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::Unity.XR.CoreUtils.Bindings.Variables::BindableVariableTaskState`1<T>
struct CORDL_TYPE BindableVariableTaskState_1 {
public:
  // Declarations
  __declspec(property(get = get_task))::System::Threading::Tasks::Task_1<T>* task;

  /// @brief Method Await, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Await(T state);

  /// @brief Method Cancelled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Cancelled();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* bindableVariable, T awaitState, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* get_task();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableVariableTaskState_1();

  // Ctor Parameters [CppParam { name: "m_Tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: None }, CppParam { name: "m_AwaitState", ty: "T", modifiers: "",
  // def_value: None }, CppParam { name: "m_BindableVariable", ty: "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*", modifiers: "", def_value: None }]
  constexpr BindableVariableTaskState_1(::System::Threading::Tasks::TaskCompletionSource_1<T>* m_Tcs, T m_AwaitState,
                                        ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* m_BindableVariable) noexcept;

  /// @brief Field m_Tcs, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* m_Tcs;

  /// @brief Field m_AwaitState, offset: 0x8, size: 0x8, def value: None
  T m_AwaitState;

  /// @brief Field m_BindableVariable, offset: 0x10, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* m_BindableVariable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Bindings::Variables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskState_1, "Unity.XR.CoreUtils.Bindings.Variables", "BindableVariableTaskState`1");
