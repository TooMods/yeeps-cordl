#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IReadOnlyBindableVariable_1)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Unity::XR::CoreUtils::Bindings {
class IEventBinding;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1);
// Type: Unity.XR.CoreUtils.Bindings.Variables::IReadOnlyBindableVariable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Bindings::Variables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Bindings.Variables::IReadOnlyBindableVariable`1<T>*
class CORDL_TYPE IReadOnlyBindableVariable_1 {
public:
  // Declarations
  __declspec(property(get = get_BindingCount)) int32_t BindingCount;

  __declspec(property(get = get_Value)) T Value;

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* Subscribe(::System::Action_1<T>* callback);

  /// @brief Method SubscribeAndUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* SubscribeAndUpdate(::System::Action_1<T>* callback);

  /// @brief Method Task, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<T>* Task(::System::Func_2<T, bool>* awaitPredicate, ::System::Threading::CancellationToken token);

  /// @brief Method Task, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<T>* Task(T awaitState, ::System::Threading::CancellationToken token);

  /// @brief Method Unsubscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Unsubscribe(::System::Action_1<T>* callback);

  /// @brief Method ValueEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ValueEquals(T other);

  /// @brief Method get_BindingCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_BindingCount();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyBindableVariable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadOnlyBindableVariable_1(IReadOnlyBindableVariable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadOnlyBindableVariable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadOnlyBindableVariable_1(IReadOnlyBindableVariable_1 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Bindings::Variables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1, "Unity.XR.CoreUtils.Bindings.Variables", "IReadOnlyBindableVariable`1");
