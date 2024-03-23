#pragma once
#include "Amazon/Runtime/zzzz__AWSCredentials_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "Amazon/Runtime/zzzz__DefaultInstanceProfileAWSCredentials_def.hpp"
#include "Amazon/Runtime/Internal/Util/zzzz__Logger_def.hpp"
#include "Amazon/Runtime/zzzz__ImmutableCredentials_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.get_Instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* (*)()>(
    &::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::get_Instance)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x1fe7cd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                               "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::*)()>(
    &::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x1fe7f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.GetCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::*)()>(
    &::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::GetCredentials)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x1fe8114;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.GetCredentialsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* (
    ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::*)()>(&::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::GetCredentialsAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1fe88f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.RenewCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::*)(::System::Object*)>(
    &::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::RenewCredentials)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x1fe897c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), "RenewCredentials",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.FetchCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::ImmutableCredentials* (*)()>(
    &::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::FetchCredentials)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x1fe83d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                               "FetchCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.CheckIsIMDSEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::CheckIsIMDSEnabled)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1fe7e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                               "CheckIsIMDSEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::*)(bool)>(
    &::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x1fe8c68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::*)()>(
    &::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1fe8dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::DefaultInstanceProfileAWSCredentials::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::Threading::ReaderWriterLockSlim*& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_credentialsLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentialsLock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_credentialsLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentialsLock;
}
constexpr void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_set_credentialsLock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___credentialsLock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Timer*& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_credentialsRetrieverTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentialsRetrieverTimer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_credentialsRetrieverTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___credentialsRetrieverTimer;
}
constexpr void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_set_credentialsRetrieverTimer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___credentialsRetrieverTimer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::ImmutableCredentials*& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_lastRetrievedCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRetrievedCredentials;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::ImmutableCredentials*> const&
Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_lastRetrievedCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastRetrievedCredentials;
}
constexpr void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_set_lastRetrievedCredentials(::Amazon::Runtime::ImmutableCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastRetrievedCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Amazon::Runtime::Internal::Util::Logger*& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::cordl_internals::to_const_pointer<::Amazon::Runtime::Internal::Util::Logger*> const& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_set_logger(::Amazon::Runtime::Internal::Util::Logger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_isDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDisposed;
}
constexpr bool const& Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_get_isDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isDisposed;
}
constexpr void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::__cordl_internal_set_isDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isDisposed = value;
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::setStaticF_instanceLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "instanceLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>(
      std::forward<::System::Object*>(value));
}
inline ::System::Object* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::getStaticF_instanceLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "instanceLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>();
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::setStaticF_neverTimespan(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "neverTimespan", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::DefaultInstanceProfileAWSCredentials::getStaticF_neverTimespan() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "neverTimespan",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>();
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::setStaticF_refreshRate(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "refreshRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>(
      std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::DefaultInstanceProfileAWSCredentials::getStaticF_refreshRate() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "refreshRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>();
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::setStaticF_credentialsLockTimeout(::System::TimeSpan value) {
  ::cordl_internals::setStaticField<::System::TimeSpan, "credentialsLockTimeout",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>(std::forward<::System::TimeSpan>(value));
}
inline ::System::TimeSpan Amazon::Runtime::DefaultInstanceProfileAWSCredentials::getStaticF_credentialsLockTimeout() {
  return ::cordl_internals::getStaticField<::System::TimeSpan, "credentialsLockTimeout",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>();
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::setStaticF__instance(::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*, "_instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>(
      std::forward<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>(value));
}
inline ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::getStaticF__instance() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*, "_instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get>();
}
inline ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                             "get_Instance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*, false>(nullptr, ___internal_method);
}
inline ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>());
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::GetCredentials() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::GetCredentialsAsync() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Amazon::Runtime::ImmutableCredentials*>*, false>(this, ___internal_method);
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::RenewCredentials(::System::Object* unused) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), "RenewCredentials",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unused);
}
inline ::Amazon::Runtime::ImmutableCredentials* Amazon::Runtime::DefaultInstanceProfileAWSCredentials::FetchCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                             "FetchCredentials", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::ImmutableCredentials*, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::CheckIsIMDSEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                             "CheckIsIMDSEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::Dispose(bool disposing) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Amazon::Runtime::DefaultInstanceProfileAWSCredentials::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::DefaultInstanceProfileAWSCredentials*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::DefaultInstanceProfileAWSCredentials::DefaultInstanceProfileAWSCredentials() {}
