#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__CapacityManager_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CapacityManager_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__RetryCapacity_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType::__CapacityManager__CapacityType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType::__CapacityManager__CapacityType() {}
constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType Amazon::Runtime::Internal::__CapacityManager__CapacityType::Increment{ static_cast<int32_t>(0x0) };
constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType Amazon::Runtime::Internal::__CapacityManager__CapacityType::Retry{ static_cast<int32_t>(0x1) };
constexpr ::Amazon::Runtime::Internal::__CapacityManager__CapacityType Amazon::Runtime::Internal::__CapacityManager__CapacityType::Timeout{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CapacityManager::*)()>(&::Amazon::Runtime::Internal::CapacityManager::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2033d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CapacityManager::*)(bool)>(
    &::Amazon::Runtime::Internal::CapacityManager::Dispose)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2033d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CapacityManager::*)(int32_t, int32_t, int32_t)>(
    &::Amazon::Runtime::Internal::CapacityManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2033da8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CapacityManager::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::Amazon::Runtime::Internal::CapacityManager::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2033db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.TryAcquireCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::CapacityManager::*)(::Amazon::Runtime::Internal::RetryCapacity*)>(
    &::Amazon::Runtime::Internal::CapacityManager::TryAcquireCapacity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2033e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryAcquireCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.TryAcquireCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::CapacityManager::*)(
    ::Amazon::Runtime::Internal::RetryCapacity*, ::Amazon::Runtime::Internal::__CapacityManager__CapacityType)>(&::Amazon::Runtime::Internal::CapacityManager::TryAcquireCapacity)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2033e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryAcquireCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::__CapacityManager__CapacityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.TryReleaseCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CapacityManager::*)(bool, ::Amazon::Runtime::Internal::RetryCapacity*)>(
    &::Amazon::Runtime::Internal::CapacityManager::TryReleaseCapacity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2033f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryReleaseCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.ReleaseCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::CapacityManager::*)(
    ::Amazon::Runtime::Internal::__CapacityManager__CapacityType, ::Amazon::Runtime::Internal::RetryCapacity*)>(&::Amazon::Runtime::Internal::CapacityManager::ReleaseCapacity)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2033f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "ReleaseCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::__CapacityManager__CapacityType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.GetRetryCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::RetryCapacity* (::Amazon::Runtime::Internal::CapacityManager::*)(::StringW)>(
    &::Amazon::Runtime::Internal::CapacityManager::GetRetryCapacity)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x20341a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "GetRetryCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.TryGetRetryCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::CapacityManager::*)(
    ::StringW, ByRef<::Amazon::Runtime::Internal::RetryCapacity*>)>(&::Amazon::Runtime::Internal::CapacityManager::TryGetRetryCapacity)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x20341e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryGetRetryCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::RetryCapacity*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.AddNewRetryCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::RetryCapacity* (::Amazon::Runtime::Internal::CapacityManager::*)(::StringW)>(
    &::Amazon::Runtime::Internal::CapacityManager::AddNewRetryCapacity)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x203431c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "AddNewRetryCapacity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::CapacityManager.ReleaseCapacity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::Amazon::Runtime::Internal::RetryCapacity*)>(
    &::Amazon::Runtime::Internal::CapacityManager::ReleaseCapacity)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2034074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "ReleaseCapacity", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Amazon::Runtime::Internal::CapacityManager::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Amazon::Runtime::Internal::CapacityManager::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr bool& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get__disposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr bool const& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get__disposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disposed;
}
constexpr void Amazon::Runtime::Internal::CapacityManager::__cordl_internal_set__disposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disposed = value;
}
constexpr ::System::Threading::ReaderWriterLockSlim*& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get__rwlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rwlock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ReaderWriterLockSlim*> const& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get__rwlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rwlock;
}
constexpr void Amazon::Runtime::Internal::CapacityManager::__cordl_internal_set__rwlock(::System::Threading::ReaderWriterLockSlim* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rwlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_retryCost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retryCost;
}
constexpr int32_t const& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_retryCost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___retryCost;
}
constexpr void Amazon::Runtime::Internal::CapacityManager::__cordl_internal_set_retryCost(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___retryCost = value;
}
constexpr int32_t& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_timeoutRetryCost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeoutRetryCost;
}
constexpr int32_t const& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_timeoutRetryCost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeoutRetryCost;
}
constexpr void Amazon::Runtime::Internal::CapacityManager::__cordl_internal_set_timeoutRetryCost(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeoutRetryCost = value;
}
constexpr int32_t& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_initialRetryTokens() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialRetryTokens;
}
constexpr int32_t const& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_initialRetryTokens() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___initialRetryTokens;
}
constexpr void Amazon::Runtime::Internal::CapacityManager::__cordl_internal_set_initialRetryTokens(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___initialRetryTokens = value;
}
constexpr int32_t& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_noRetryIncrement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noRetryIncrement;
}
constexpr int32_t const& Amazon::Runtime::Internal::CapacityManager::__cordl_internal_get_noRetryIncrement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___noRetryIncrement;
}
constexpr void Amazon::Runtime::Internal::CapacityManager::__cordl_internal_set_noRetryIncrement(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___noRetryIncrement = value;
}
inline void
Amazon::Runtime::Internal::CapacityManager::setStaticF__serviceUrlToCapacityMap(::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>*, "_serviceUrlToCapacityMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>* Amazon::Runtime::Internal::CapacityManager::getStaticF__serviceUrlToCapacityMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW, ::Amazon::Runtime::Internal::RetryCapacity*>*, "_serviceUrlToCapacityMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get>();
}
inline void Amazon::Runtime::Internal::CapacityManager::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::CapacityManager::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline ::Amazon::Runtime::Internal::CapacityManager* Amazon::Runtime::Internal::CapacityManager::New_ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::CapacityManager*>(throttleRetryCount, throttleRetryCost, throttleCost));
}
inline void Amazon::Runtime::Internal::CapacityManager::_ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, throttleRetryCount, throttleRetryCost, throttleCost);
}
inline ::Amazon::Runtime::Internal::CapacityManager* Amazon::Runtime::Internal::CapacityManager::New_ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost,
                                                                                                          int32_t timeoutRetryCost) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::CapacityManager*>(throttleRetryCount, throttleRetryCost, throttleCost, timeoutRetryCost));
}
inline void Amazon::Runtime::Internal::CapacityManager::_ctor(int32_t throttleRetryCount, int32_t throttleRetryCost, int32_t throttleCost, int32_t timeoutRetryCost) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, throttleRetryCount, throttleRetryCost, throttleCost, timeoutRetryCost);
}
inline bool Amazon::Runtime::Internal::CapacityManager::TryAcquireCapacity(::Amazon::Runtime::Internal::RetryCapacity* retryCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryAcquireCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, retryCapacity);
}
inline bool Amazon::Runtime::Internal::CapacityManager::TryAcquireCapacity(::Amazon::Runtime::Internal::RetryCapacity* retryCapacity,
                                                                           ::Amazon::Runtime::Internal::__CapacityManager__CapacityType capacityType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryAcquireCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::__CapacityManager__CapacityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, retryCapacity, capacityType);
}
inline void Amazon::Runtime::Internal::CapacityManager::TryReleaseCapacity(bool isRetryRequest, ::Amazon::Runtime::Internal::RetryCapacity* retryCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryReleaseCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, isRetryRequest, retryCapacity);
}
inline void Amazon::Runtime::Internal::CapacityManager::ReleaseCapacity(::Amazon::Runtime::Internal::__CapacityManager__CapacityType capacityType,
                                                                        ::Amazon::Runtime::Internal::RetryCapacity* retryCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "ReleaseCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::__CapacityManager__CapacityType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacityType, retryCapacity);
}
inline ::Amazon::Runtime::Internal::RetryCapacity* Amazon::Runtime::Internal::CapacityManager::GetRetryCapacity(::StringW serviceURL) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "GetRetryCapacity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::RetryCapacity*, false>(this, ___internal_method, serviceURL);
}
inline bool Amazon::Runtime::Internal::CapacityManager::TryGetRetryCapacity(::StringW key, ByRef<::Amazon::Runtime::Internal::RetryCapacity*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "TryGetRetryCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Amazon::Runtime::Internal::RetryCapacity*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
inline ::Amazon::Runtime::Internal::RetryCapacity* Amazon::Runtime::Internal::CapacityManager::AddNewRetryCapacity(::StringW serviceURL) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "AddNewRetryCapacity",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::RetryCapacity*, false>(this, ___internal_method, serviceURL);
}
inline void Amazon::Runtime::Internal::CapacityManager::ReleaseCapacity(int32_t capacity, ::Amazon::Runtime::Internal::RetryCapacity* retryCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::CapacityManager*>::get(), "ReleaseCapacity", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::RetryCapacity*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, capacity, retryCapacity);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::CapacityManager::CapacityManager() {}
