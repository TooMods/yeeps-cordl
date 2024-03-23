#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BindableVariableBase_1)
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
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class IReadOnlyBindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class __BindableVariableBase_1____c__DisplayClass14_0;
}
namespace Unity::XR::CoreUtils::Bindings {
class IEventBinding;
}
// Forward declare root types
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class BindableVariableBase_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template <typename T> class __BindableVariableBase_1____c__DisplayClass14_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1);
MARK_GEN_REF_PTR_T(::Unity::XR::CoreUtils::Bindings::Variables::__BindableVariableBase_1____c__DisplayClass14_0);
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Bindings::Variables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::BindableVariableBase`1::<>c__DisplayClass14_0<T>*
class CORDL_TYPE __BindableVariableBase_1____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>* __4__this;

  /// @brief Field callbackReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_callbackReference, put = __cordl_internal_set_callbackReference))::System::Action_1<T>* callbackReference;

  static inline ::Unity::XR::CoreUtils::Bindings::Variables::__BindableVariableBase_1____c__DisplayClass14_0<T>* New_ctor();

  /// @brief Method <Subscribe>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Subscribe_b__0();

  /// @brief Method <Subscribe>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _Subscribe_b__1();

  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>*> const& __cordl_internal_get___4__this() const;

  constexpr ::System::Action_1<T>*& __cordl_internal_get_callbackReference();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_callbackReference() const;

  constexpr void __cordl_internal_set___4__this(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>* value);

  constexpr void __cordl_internal_set_callbackReference(::System::Action_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BindableVariableBase_1____c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BindableVariableBase_1____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BindableVariableBase_1____c__DisplayClass14_0(__BindableVariableBase_1____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BindableVariableBase_1____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BindableVariableBase_1____c__DisplayClass14_0(__BindableVariableBase_1____c__DisplayClass14_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>* _____4__this;

  /// @brief Field callbackReference, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<T>* ___callbackReference;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Bindings::Variables
// Type: Unity.XR.CoreUtils.Bindings.Variables::BindableVariableBase`1
// SizeInfo { instance_size: 56, native_size: 52, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::CoreUtils::Bindings::Variables {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Unity.XR.CoreUtils.Bindings.Variables::BindableVariableBase`1<T>*
class CORDL_TYPE BindableVariableBase_1 : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass14_0 = ::Unity::XR::CoreUtils::Bindings::Variables::__BindableVariableBase_1____c__DisplayClass14_0<T>;

  __declspec(property(get = get_BindingCount)) int32_t BindingCount;

  __declspec(property(get = get_Value, put = set_Value)) T Value;

  /// @brief Field m_BindingCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BindingCount, put = __cordl_internal_set_m_BindingCount)) int32_t m_BindingCount;

  /// @brief Field m_CheckEquality, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CheckEquality, put = __cordl_internal_set_m_CheckEquality)) bool m_CheckEquality;

  /// @brief Field m_EqualityMethod, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EqualityMethod, put = __cordl_internal_set_m_EqualityMethod))::System::Func_3<T, T, bool>* m_EqualityMethod;

  /// @brief Field m_InternalValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalValue, put = __cordl_internal_set_m_InternalValue)) T m_InternalValue;

  /// @brief Field m_IsInitialized, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsInitialized, put = __cordl_internal_set_m_IsInitialized)) bool m_IsInitialized;

  /// @brief Field valueUpdated, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_valueUpdated, put = __cordl_internal_set_valueUpdated))::System::Action_1<T>* valueUpdated;

  /// @brief Convert operator to "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>"
  constexpr operator ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>*() noexcept;

  /// @brief Method BroadcastValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void BroadcastValue();

  /// @brief Method DecrementReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DecrementReferenceCount();

  /// @brief Method IncrementReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void IncrementReferenceCount();

  static inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1<T>* New_ctor(T initialValue, bool checkEquality, ::System::Func_3<T, T, bool>* equalityMethod,
                                                                                                 bool startInitialized);

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool SetValueWithoutNotify(T value);

  /// @brief Method Subscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* Subscribe(::System::Action_1<T>* callback);

  /// @brief Method SubscribeAndUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::Unity::XR::CoreUtils::Bindings::IEventBinding* SubscribeAndUpdate(::System::Action_1<T>* callback);

  /// @brief Method Task, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<T>* Task(::System::Func_2<T, bool>* awaitPredicate, ::System::Threading::CancellationToken token);

  /// @brief Method Task, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<T>* Task(T awaitState, ::System::Threading::CancellationToken token);

  /// @brief Method Unsubscribe, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unsubscribe(::System::Action_1<T>* callback);

  /// @brief Method ValueEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool ValueEquals(T other);

  constexpr int32_t const& __cordl_internal_get_m_BindingCount() const;

  constexpr int32_t& __cordl_internal_get_m_BindingCount();

  constexpr bool const& __cordl_internal_get_m_CheckEquality() const;

  constexpr bool& __cordl_internal_get_m_CheckEquality();

  constexpr ::System::Func_3<T, T, bool>*& __cordl_internal_get_m_EqualityMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_3<T, T, bool>*> const& __cordl_internal_get_m_EqualityMethod() const;

  constexpr T const& __cordl_internal_get_m_InternalValue() const;

  constexpr T& __cordl_internal_get_m_InternalValue();

  constexpr bool const& __cordl_internal_get_m_IsInitialized() const;

  constexpr bool& __cordl_internal_get_m_IsInitialized();

  constexpr ::System::Action_1<T>*& __cordl_internal_get_valueUpdated();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& __cordl_internal_get_valueUpdated() const;

  constexpr void __cordl_internal_set_m_BindingCount(int32_t value);

  constexpr void __cordl_internal_set_m_CheckEquality(bool value);

  constexpr void __cordl_internal_set_m_EqualityMethod(::System::Func_3<T, T, bool>* value);

  constexpr void __cordl_internal_set_m_InternalValue(T value);

  constexpr void __cordl_internal_set_m_IsInitialized(bool value);

  constexpr void __cordl_internal_set_valueUpdated(::System::Action_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T initialValue, bool checkEquality, ::System::Func_3<T, T, bool>* equalityMethod, bool startInitialized);

  /// @brief Method add_valueUpdated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_valueUpdated(::System::Action_1<T>* value);

  /// @brief Method get_BindingCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_BindingCount();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Value();

  /// @brief Convert to "::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>"
  constexpr ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<T>* i___Unity__XR__CoreUtils__Bindings__Variables__IReadOnlyBindableVariable_1_T_() noexcept;

  /// @brief Method remove_valueUpdated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_valueUpdated(::System::Action_1<T>* value);

  /// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Value(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindableVariableBase_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindableVariableBase_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindableVariableBase_1(BindableVariableBase_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindableVariableBase_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindableVariableBase_1(BindableVariableBase_1 const&) = delete;

  /// @brief Field valueUpdated, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<T>* ___valueUpdated;

  /// @brief Field m_InternalValue, offset: 0x18, size: 0x8, def value: None
  T ___m_InternalValue;

  /// @brief Field m_CheckEquality, offset: 0x20, size: 0x1, def value: None
  bool ___m_CheckEquality;

  /// @brief Field m_IsInitialized, offset: 0x21, size: 0x1, def value: None
  bool ___m_IsInitialized;

  /// @brief Field m_EqualityMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Func_3<T, T, bool>* ___m_EqualityMethod;

  /// @brief Field m_BindingCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_BindingCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::XR::CoreUtils::Bindings::Variables
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariableBase_1, "Unity.XR.CoreUtils.Bindings.Variables", "BindableVariableBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::XR::CoreUtils::Bindings::Variables::__BindableVariableBase_1____c__DisplayClass14_0, "Unity.XR.CoreUtils.Bindings.Variables",
                                     "BindableVariableBase`1/<>c__DisplayClass14_0");
