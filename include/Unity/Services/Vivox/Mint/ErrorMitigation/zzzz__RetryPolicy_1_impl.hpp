#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__RetryPolicy_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__IRetryPolicy_1_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__RetryPolicyConfig_def.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/zzzz__RetryPolicy_1_def.hpp"
template <typename T>
constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*& Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>::__cordl_internal_get_createAsyncOp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createAsyncOp;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*> const&
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>::__cordl_internal_get_createAsyncOp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createAsyncOp;
}
template <typename T>
constexpr void
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>::__cordl_internal_set_createAsyncOp(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___createAsyncOp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>*>());
}
template <typename T> inline void Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>::__ctor_b__0(int32_t _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>*>::get(), "<.ctor>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, _);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1____c__DisplayClass10_0<T>::__RetryPolicy_1____c__DisplayClass10_0() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "retryPolicyConfig", ty:
// "::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__4__this", ty:
// "::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_opResult_5__2", ty: "T", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "_attempt_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<T>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>::__RetryPolicy_1___RunAsync_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* retryPolicyConfig,
    ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>* __4__this, T _opResult_5__2, int32_t _attempt_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<T> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->retryPolicyConfig = retryPolicyConfig;
  this->__4__this = __4__this;
  this->_opResult_5__2 = _opResult_5__2;
  this->_attempt_5__3 = _attempt_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::__RetryPolicy_1___RunAsync_d__23<T>::__RetryPolicy_1___RunAsync_d__23() {}
/// @brief Convert operator to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>"
template <typename T> constexpr Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::operator ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>"
template <typename T>
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::i___Unity__Services__Vivox__Mint__ErrorMitigation__IRetryPolicy_1_T_() noexcept {
  return static_cast<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*>(static_cast<void*>(this));
}
template <typename T>
constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_get__retryPolicyConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____retryPolicyConfig;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*> const&
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_get__retryPolicyConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____retryPolicyConfig;
}
template <typename T>
constexpr void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_set__retryPolicyConfig(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____retryPolicyConfig)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_get__CreateOperation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateOperation_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*> const&
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_get__CreateOperation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateOperation_k__BackingField;
}
template <typename T>
constexpr void
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_set__CreateOperation_k__BackingField(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CreateOperation_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
constexpr ::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>*& Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_get__RetryCondition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetryCondition_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>*> const&
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_get__RetryCondition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetryCondition_k__BackingField;
}
template <typename T>
constexpr void
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::__cordl_internal_set__RetryCondition_k__BackingField(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RetryCondition_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::get_CreateOperation() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "get_CreateOperation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::set_CreateOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "set_CreateOperation",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::get_RetryCondition() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "get_RetryCondition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::set_RetryCondition(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "set_RetryCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::New_ctor(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* createAsyncOp) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>(createAsyncOp));
}
template <typename T> inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::_ctor(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* createAsyncOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createAsyncOp);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::New_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* createAsyncOp) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>(createAsyncOp));
}
template <typename T> inline void Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* createAsyncOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createAsyncOp);
}
template <typename T> inline float_t Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::AddJitter(float_t number, float_t magnitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "AddJitter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, number, magnitude);
}
template <typename T> inline float_t Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::Pow2(float_t exponent, float_t scale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "Pow2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, exponent, scale);
}
template <typename T>
inline float_t Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::CalculateDelay(int32_t attemptNumber, float_t maxDelayTime, float_t delayScale, float_t jitterMagnitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "CalculateDelay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, attemptNumber, maxDelayTime, delayScale, jitterMagnitude);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::WithJitterMagnitude(float_t magnitude) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "WithJitterMagnitude",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, magnitude);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::WithDelayScale(float_t scale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "WithDelayScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, scale);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::WithMaxDelayTime(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "WithMaxDelayTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, time);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::ForOperation(::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>* operation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "ForOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, ::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*, false>(nullptr, ___internal_method, operation);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::ForOperation(::System::Func_1<::System::Threading::Tasks::Task_1<T>*>* operation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "ForOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task_1<T>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*, false>(nullptr, ___internal_method, operation);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::WithRetryCondition(::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>* shouldRetry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "WithRetryCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, ::System::Threading::Tasks::Task_1<bool>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, shouldRetry);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::UptoMaximumRetries(uint32_t amount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "UptoMaximumRetries",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, amount);
}
template <typename T>
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>* Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::HandleException() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "HandleException",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method);
}
template <typename T>
template <typename TException>
inline ::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::HandleException(::System::Func_2<TException, bool>* condition) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "HandleException",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TException, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TException>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::ErrorMitigation::IRetryPolicy_1<T>*, false>(this, ___internal_method, condition);
}
/// @param retryPolicyConfig: ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* (default: nullptr)
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>*
Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::RunAsync(::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig* retryPolicyConfig) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>*>::get(), "RunAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicyConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method, retryPolicyConfig);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::ErrorMitigation::RetryPolicy_1<T>::RetryPolicy_1() {}
