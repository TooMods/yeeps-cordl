#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationExtensions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationAwaiter_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationAwaiter_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationExtensions_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperation_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::*)()>(
    &::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266a2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0._AsTask_g__CompleteTask_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::*)(
    ::Unity::Services::Core::Internal::IAsyncOperation*)>(&::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::_AsTask_g__CompleteTask_0)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x266a2ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0*>::get(),
                                    "<AsTask>g__CompleteTask|0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*&
Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::__cordl_internal_get_taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*> const&
Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::__cordl_internal_get_taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr void Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::__cordl_internal_set_taskCompletionSource(
    ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0* Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0*>());
}
inline void Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::_AsTask_g__CompleteTask_0(::Unity::Services::Core::Internal::IAsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0*>::get(),
                                  "<AsTask>g__CompleteTask|0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass1_0::__AsyncOperationExtensions____c__DisplayClass1_0() {}
template <typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_get_taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<T>*> const&
Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_get_taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
template <typename T>
constexpr void
Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>::__cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___taskCompletionSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>* Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>*>());
}
template <typename T> inline void Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T>
inline void Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>::_AsTask_g__CompleteTask_0(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>*>::get(),
                                  "<AsTask>g__CompleteTask|0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
// Ctor Parameters []
template <typename T> constexpr ::Unity::Services::Core::Internal::__AsyncOperationExtensions____c__DisplayClass3_0_1<T>::__AsyncOperationExtensions____c__DisplayClass3_0_1() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationExtensions.GetAwaiter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Core::Internal::AsyncOperationAwaiter (*)(::Unity::Services::Core::Internal::IAsyncOperation*)>(
    &::Unity::Services::Core::Internal::AsyncOperationExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2669fec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationExtensions.AsTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (*)(::Unity::Services::Core::Internal::IAsyncOperation*)>(
    &::Unity::Services::Core::Internal::AsyncOperationExtensions::AsTask)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2669ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationExtensions*>::get(), "AsTask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::Services::Core::Internal::AsyncOperationAwaiter Unity::Services::Core::Internal::AsyncOperationExtensions::GetAwaiter(::Unity::Services::Core::Internal::IAsyncOperation* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationExtensions*>::get(), "GetAwaiter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationAwaiter, false>(nullptr, ___internal_method, self);
}
inline ::System::Threading::Tasks::Task* Unity::Services::Core::Internal::AsyncOperationExtensions::AsTask(::Unity::Services::Core::Internal::IAsyncOperation* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationExtensions*>::get(), "AsTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, self);
}
template <typename T>
inline ::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>
Unity::Services::Core::Internal::AsyncOperationExtensions::GetAwaiter(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* self) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationExtensions*>::get(), "GetAwaiter",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Core::Internal::AsyncOperationAwaiter_1<T>, false>(nullptr, ___internal_method, self);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Unity::Services::Core::Internal::AsyncOperationExtensions::AsTask(::Unity::Services::Core::Internal::IAsyncOperation_1<T>* self) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationExtensions*>::get(), "AsTask",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::AsyncOperationExtensions::AsyncOperationExtensions() {}
