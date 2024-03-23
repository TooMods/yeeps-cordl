#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__AsyncOperationAwaiter_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperationAwaiter_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__IAsyncOperation_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::*)()>(
    &::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266999c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0._OnCompleted_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::*)(
    ::Unity::Services::Core::Internal::IAsyncOperation*)>(&::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::_OnCompleted_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2669cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0*>::get(),
                                    "<OnCompleted>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::__cordl_internal_get_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::__cordl_internal_get_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr void Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::__cordl_internal_set_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0* Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0*>());
}
inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::_OnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0*>::get(), "<OnCompleted>b__0",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass2_0::__AsyncOperationAwaiter____c__DisplayClass2_0() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::*)()>(
    &::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0._UnsafeOnCompleted_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::*)(
    ::Unity::Services::Core::Internal::IAsyncOperation*)>(&::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::_UnsafeOnCompleted_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2669cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0*>::get(),
                                    "<UnsafeOnCompleted>b__0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::__cordl_internal_get_continuation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::__cordl_internal_get_continuation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___continuation;
}
constexpr void Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::__cordl_internal_set_continuation(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___continuation)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0* Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0*>());
}
inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::_UnsafeOnCompleted_b__0(::Unity::Services::Core::Internal::IAsyncOperation* operation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0*>::get(),
                                  "<UnsafeOnCompleted>b__0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, operation);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::__AsyncOperationAwaiter____c__DisplayClass3_0::__AsyncOperationAwaiter____c__DisplayClass3_0() {}
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationAwaiter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::AsyncOperationAwaiter::*)(
    ::Unity::Services::Core::Internal::IAsyncOperation*)>(&::Unity::Services::Core::Internal::AsyncOperationAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2669868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationAwaiter.OnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::AsyncOperationAwaiter::*)(::System::Action*)>(
    &::Unity::Services::Core::Internal::AsyncOperationAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2669870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(), "OnCompleted",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationAwaiter.UnsafeOnCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::AsyncOperationAwaiter::*)(::System::Action*)>(
    &::Unity::Services::Core::Internal::AsyncOperationAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x26699a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(), "UnsafeOnCompleted",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationAwaiter.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Internal::AsyncOperationAwaiter::*)()>(
    &::Unity::Services::Core::Internal::AsyncOperationAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2669ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(),
                                                                               "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Internal::AsyncOperationAwaiter.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Internal::AsyncOperationAwaiter::*)()>(
    &::Unity::Services::Core::Internal::AsyncOperationAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2669b78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(),
                                                                               "GetResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Unity::Services::Core::Internal::IAsyncOperationAwaiter"
constexpr Unity::Services::Core::Internal::AsyncOperationAwaiter::operator ::Unity::Services::Core::Internal::IAsyncOperationAwaiter*() {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperationAwaiter*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Services::Core::Internal::IAsyncOperationAwaiter"
constexpr ::Unity::Services::Core::Internal::IAsyncOperationAwaiter* Unity::Services::Core::Internal::AsyncOperationAwaiter::i___Unity__Services__Core__Internal__IAsyncOperationAwaiter() {
  return static_cast<::Unity::Services::Core::Internal::IAsyncOperationAwaiter*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr Unity::Services::Core::Internal::AsyncOperationAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* Unity::Services::Core::Internal::AsyncOperationAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr Unity::Services::Core::Internal::AsyncOperationAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* Unity::Services::Core::Internal::AsyncOperationAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion() {
  return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void Unity::Services::Core::Internal::AsyncOperationAwaiter::_ctor(::Unity::Services::Core::Internal::IAsyncOperation* asyncOperation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::IAsyncOperation*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asyncOperation);
}
inline void Unity::Services::Core::Internal::AsyncOperationAwaiter::OnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(), "OnCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
inline void Unity::Services::Core::Internal::AsyncOperationAwaiter::UnsafeOnCompleted(::System::Action* continuation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(), "UnsafeOnCompleted",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continuation);
}
inline bool Unity::Services::Core::Internal::AsyncOperationAwaiter::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(),
                                                                             "get_IsCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Core::Internal::AsyncOperationAwaiter::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::AsyncOperationAwaiter>::get(),
                                                                             "GetResult", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Operation", ty: "::Unity::Services::Core::Internal::IAsyncOperation*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Unity::Services::Core::Internal::AsyncOperationAwaiter::AsyncOperationAwaiter(::Unity::Services::Core::Internal::IAsyncOperation* m_Operation) noexcept {
  this->m_Operation = m_Operation;
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Internal::AsyncOperationAwaiter::AsyncOperationAwaiter() {}
