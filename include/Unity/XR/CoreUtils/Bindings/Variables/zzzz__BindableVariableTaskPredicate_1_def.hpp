#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(BindableVariableTaskPredicate_1)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> struct BindableVariableTaskPredicate_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1);
// Type: Unity.XR.CoreUtils.Bindings.Variables::BindableVariableTaskPredicate`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Bindings::Variables {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::Unity.XR.CoreUtils.Bindings.Variables::BindableVariableTaskPredicate`1<T>
struct CORDL_TYPE BindableVariableTaskPredicate_1 {
public:
  // Declarations
  __declspec(property(get = get_Task))::System::Threading::Tasks::Task_1<T>* Task;

  /// @brief Method Await, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Await(T state);

  /// @brief Method Cancelled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Cancelled();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* bindableVariable, ::System::Func_2<T, bool>* awaitPredicate,
                    ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* get_Task();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableVariableTaskPredicate_1();

  // Ctor Parameters [CppParam { name: "m_Tcs", ty: "::System::Threading::Tasks::TaskCompletionSource_1<T>*", modifiers: "", def_value: None }, CppParam { name: "m_AwaitPredicate", ty:
  // "::System::Func_2<T,bool>*", modifiers: "", def_value: None }, CppParam { name: "m_BindableVariable", ty: "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*",
  // modifiers: "", def_value: None }]
  constexpr BindableVariableTaskPredicate_1(::System::Threading::Tasks::TaskCompletionSource_1<T>* m_Tcs, ::System::Func_2<T, bool>* m_AwaitPredicate,
                                            ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* m_BindableVariable) noexcept;

  /// @brief Field m_Tcs, offset: 0x0, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* m_Tcs;

  /// @brief Field m_AwaitPredicate, offset: 0x8, size: 0x8, def value: None
  ::System::Func_2<T, bool>* m_AwaitPredicate;

  /// @brief Field m_BindableVariable, offset: 0x10, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* m_BindableVariable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Bindings::Variables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableTaskPredicate_1, "Unity.XR.CoreUtils.Bindings.Variables", "BindableVariableTaskPredicate`1");
