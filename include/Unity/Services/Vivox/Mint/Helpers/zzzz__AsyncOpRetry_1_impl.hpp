#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/Mint/Helpers/zzzz__AsyncOpRetry_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Vivox/Mint/Helpers/zzzz__AsyncOpRetry_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template <typename T> constexpr Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr ::System::Object*& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*> const&
Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T>
constexpr void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_set___4__this(::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get__asyncOp_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOp_5__2;
}
template <typename T> constexpr T const& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get__asyncOp_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOp_5__2;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_set__asyncOp_5__2(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____asyncOp_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get__attempt_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attempt_5__3;
}
template <typename T> constexpr int32_t const& Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_get__attempt_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attempt_5__3;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__cordl_internal_set__attempt_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attempt_5__3 = value;
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>* Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>*>(__1__state));
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::Helpers::__AsyncOpRetry_1___Run_d__35<T>::__AsyncOpRetry_1___Run_d__35() {}
template <typename T> constexpr uint32_t& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__MaxRetries_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxRetries_k__BackingField;
}
template <typename T> constexpr uint32_t const& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__MaxRetries_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxRetries_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_set__MaxRetries_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxRetries_k__BackingField = value;
}
template <typename T> constexpr float_t& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__JitterMagnitude_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____JitterMagnitude_k__BackingField;
}
template <typename T> constexpr float_t const& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__JitterMagnitude_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____JitterMagnitude_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_set__JitterMagnitude_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____JitterMagnitude_k__BackingField = value;
}
template <typename T> constexpr float_t& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__DelayScale_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DelayScale_k__BackingField;
}
template <typename T> constexpr float_t const& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__DelayScale_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DelayScale_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_set__DelayScale_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DelayScale_k__BackingField = value;
}
template <typename T> constexpr float_t& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__MaxDelayTime_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxDelayTime_k__BackingField;
}
template <typename T> constexpr float_t const& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__MaxDelayTime_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxDelayTime_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_set__MaxDelayTime_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxDelayTime_k__BackingField = value;
}
template <typename T> constexpr ::System::Func_2<int32_t, T>*& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__CreateOperation_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateOperation_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, T>*> const&
Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__CreateOperation_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CreateOperation_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_set__CreateOperation_k__BackingField(::System::Func_2<int32_t, T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CreateOperation_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Func_2<T, bool>*& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__RetryCondition_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetryCondition_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, bool>*> const&
Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__RetryCondition_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____RetryCondition_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_set__RetryCondition_k__BackingField(::System::Func_2<T, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____RetryCondition_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Action_1<T>*& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__OnComplete_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OnComplete_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_get__OnComplete_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OnComplete_k__BackingField;
}
template <typename T> constexpr void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::__cordl_internal_set__OnComplete_k__BackingField(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____OnComplete_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline uint32_t Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::get_MaxRetries() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "get_MaxRetries", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::set_MaxRetries(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "set_MaxRetries",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::get_JitterMagnitude() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "get_JitterMagnitude", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::set_JitterMagnitude(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "set_JitterMagnitude",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::get_DelayScale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "get_DelayScale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::set_DelayScale(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "set_DelayScale",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline float_t Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::get_MaxDelayTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "get_MaxDelayTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::set_MaxDelayTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "set_MaxDelayTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_2<int32_t, T>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::get_CreateOperation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "get_CreateOperation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<int32_t, T>*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::set_CreateOperation(::System::Func_2<int32_t, T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "set_CreateOperation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Func_2<T, bool>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::get_RetryCondition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "get_RetryCondition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<T, bool>*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::set_RetryCondition(::System::Func_2<T, bool>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "set_RetryCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::System::Action_1<T>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::get_OnComplete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "get_OnComplete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::set_OnComplete(::System::Action_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "set_OnComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::New_ctor(::System::Func_2<int32_t, T>* createAsyncOp) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>(createAsyncOp));
}
template <typename T> inline void Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::_ctor(::System::Func_2<int32_t, T>* createAsyncOp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createAsyncOp);
}
template <typename T> inline float_t Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::AddJitter(float_t number, float_t magnitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "AddJitter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, number, magnitude);
}
template <typename T> inline float_t Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::Pow2(float_t exponent, float_t scale) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "Pow2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, exponent, scale);
}
template <typename T>
inline float_t Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::CalculateDelay(int32_t attemptNumber, float_t maxDelayTime, float_t delayScale, float_t jitterMagnitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "CalculateDelay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, attemptNumber, maxDelayTime, delayScale, jitterMagnitude);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::FromCreateAsync(::System::Func_2<int32_t, T>* op) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "FromCreateAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<int32_t, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*, false>(nullptr, ___internal_method, op);
}
template <typename T>
inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::WithRetryCondition(::System::Func_2<T, bool>* shouldRetry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "WithRetryCondition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<T, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*, false>(this, ___internal_method, shouldRetry);
}
template <typename T> inline ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::WhenComplete(::System::Action_1<T>* onComplete) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(), "WhenComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*, false>(this, ___internal_method, onComplete);
}
template <typename T> inline ::System::Collections::IEnumerator* Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::Run() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>*>::get(),
                                                                             "Run", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Vivox::Mint::Helpers::AsyncOpRetry_1<T>::AsyncOpRetry_1() {}
