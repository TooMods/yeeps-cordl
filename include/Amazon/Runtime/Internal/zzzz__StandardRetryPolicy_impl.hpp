#pragma once
#include "Amazon/Runtime/zzzz__RetryPolicy_impl.hpp"
#include "Amazon/Runtime/Internal/zzzz__StandardRetryPolicy_def.hpp"
#include "Amazon/Runtime/Internal/zzzz__CapacityManager_def.hpp"
#include "Amazon/Runtime/zzzz__IClientConfig_def.hpp"
#include "Amazon/Runtime/zzzz__IExecutionContext_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.get_CapacityManagerInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Amazon::Runtime::Internal::CapacityManager* (*)()>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::get_CapacityManagerInstance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23ef138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                                               "get_CapacityManagerInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.set_CapacityManagerInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Amazon::Runtime::Internal::CapacityManager*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::set_CapacityManagerInstance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x23ef190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "set_CapacityManagerInstance", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CapacityManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.get_MaxBackoffInMilliseconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Amazon::Runtime::Internal::StandardRetryPolicy::*)()>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::get_MaxBackoffInMilliseconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                                               "get_MaxBackoffInMilliseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.set_MaxBackoffInMilliseconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(int32_t)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::set_MaxBackoffInMilliseconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "set_MaxBackoffInMilliseconds",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(int32_t)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23ea474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IClientConfig*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::_ctor)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x23ea59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.CanRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::CanRetry)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x23ef1fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.RetryForException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(
    ::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::Internal::StandardRetryPolicy::RetryForException)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23ef38c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.OnRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::OnRetry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23ef39c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.OnRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, bool)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::OnRetry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x23ef3b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.OnRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, bool, bool)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::OnRetry)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x23eaa68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.NotifySuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::NotifySuccess)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x23eb234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.RetryForExceptionSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::System::Exception*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::RetryForExceptionSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23ef3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "RetryForExceptionSync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.RetryForExceptionSync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(
    ::System::Exception*, ::Amazon::Runtime::IExecutionContext*)>(&::Amazon::Runtime::Internal::StandardRetryPolicy::RetryForExceptionSync)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x23eb5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "RetryForExceptionSync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.RetryLimitReached
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::RetryLimitReached)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x23ef3d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.WaitBeforeRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(
    &::Amazon::Runtime::Internal::StandardRetryPolicy::WaitBeforeRetry)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x23ef500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.WaitBeforeRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, int32_t)>(&::Amazon::Runtime::Internal::StandardRetryPolicy::WaitBeforeRetry)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x23ef658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "WaitBeforeRetry", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.CalculateRetryDelay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t)>(&::Amazon::Runtime::Internal::StandardRetryPolicy::CalculateRetryDelay)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x23ebb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "CalculateRetryDelay", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.RetryForExceptionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*, ::System::Exception*)>(&::Amazon::Runtime::Internal::StandardRetryPolicy::RetryForExceptionAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x23ef6f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Amazon::Runtime::Internal::StandardRetryPolicy.WaitBeforeRetryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Amazon::Runtime::Internal::StandardRetryPolicy::*)(::Amazon::Runtime::IExecutionContext*)>(&::Amazon::Runtime::Internal::StandardRetryPolicy::WaitBeforeRetryAsync)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x23ef788;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 20));
    return ___internal_method;
  }
};
constexpr int32_t& Amazon::Runtime::Internal::StandardRetryPolicy::__cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxBackoffInMilliseconds_k__BackingField;
}
constexpr int32_t const& Amazon::Runtime::Internal::StandardRetryPolicy::__cordl_internal_get__MaxBackoffInMilliseconds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxBackoffInMilliseconds_k__BackingField;
}
constexpr void Amazon::Runtime::Internal::StandardRetryPolicy::__cordl_internal_set__MaxBackoffInMilliseconds_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxBackoffInMilliseconds_k__BackingField = value;
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::setStaticF__randomJitter(::System::Random* value) {
  ::cordl_internals::setStaticField<::System::Random*, "_randomJitter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get>(
      std::forward<::System::Random*>(value));
}
inline ::System::Random* Amazon::Runtime::Internal::StandardRetryPolicy::getStaticF__randomJitter() {
  return ::cordl_internals::getStaticField<::System::Random*, "_randomJitter", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get>();
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::setStaticF__CapacityManagerInstance_k__BackingField(::Amazon::Runtime::Internal::CapacityManager* value) {
  ::cordl_internals::setStaticField<::Amazon::Runtime::Internal::CapacityManager*, "<CapacityManagerInstance>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get>(
      std::forward<::Amazon::Runtime::Internal::CapacityManager*>(value));
}
inline ::Amazon::Runtime::Internal::CapacityManager* Amazon::Runtime::Internal::StandardRetryPolicy::getStaticF__CapacityManagerInstance_k__BackingField() {
  return ::cordl_internals::getStaticField<::Amazon::Runtime::Internal::CapacityManager*, "<CapacityManagerInstance>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get>();
}
inline ::Amazon::Runtime::Internal::CapacityManager* Amazon::Runtime::Internal::StandardRetryPolicy::get_CapacityManagerInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                                             "get_CapacityManagerInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Amazon::Runtime::Internal::CapacityManager*, false>(nullptr, ___internal_method);
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::set_CapacityManagerInstance(::Amazon::Runtime::Internal::CapacityManager* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "set_CapacityManagerInstance", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::Internal::CapacityManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline int32_t Amazon::Runtime::Internal::StandardRetryPolicy::get_MaxBackoffInMilliseconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(),
                                                                             "get_MaxBackoffInMilliseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::set_MaxBackoffInMilliseconds(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "set_MaxBackoffInMilliseconds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Amazon::Runtime::Internal::StandardRetryPolicy* Amazon::Runtime::Internal::StandardRetryPolicy::New_ctor(int32_t maxRetries) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::StandardRetryPolicy*>(maxRetries));
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::_ctor(int32_t maxRetries) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxRetries);
}
inline ::Amazon::Runtime::Internal::StandardRetryPolicy* Amazon::Runtime::Internal::StandardRetryPolicy::New_ctor(::Amazon::Runtime::IClientConfig* config) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Amazon::Runtime::Internal::StandardRetryPolicy*>(config));
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::_ctor(::Amazon::Runtime::IClientConfig* config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IClientConfig*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, config);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::CanRetry(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::RetryForException(::Amazon::Runtime::IExecutionContext* executionContext, ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, exception);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::OnRetry(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, bypassAcquireCapacity);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::OnRetry(::Amazon::Runtime::IExecutionContext* executionContext, bool bypassAcquireCapacity, bool isThrottlingError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext, bypassAcquireCapacity, isThrottlingError);
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::NotifySuccess(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::RetryForExceptionSync(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "RetryForExceptionSync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exception);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::RetryForExceptionSync(::System::Exception* exception, ::Amazon::Runtime::IExecutionContext* executionContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "RetryForExceptionSync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Amazon::Runtime::IExecutionContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exception, executionContext);
}
inline bool Amazon::Runtime::Internal::StandardRetryPolicy::RetryLimitReached(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::WaitBeforeRetry(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, executionContext);
}
inline void Amazon::Runtime::Internal::StandardRetryPolicy::WaitBeforeRetry(int32_t retries, int32_t maxBackoffInMilliseconds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "WaitBeforeRetry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, retries, maxBackoffInMilliseconds);
}
inline int32_t Amazon::Runtime::Internal::StandardRetryPolicy::CalculateRetryDelay(int32_t retries, int32_t maxBackoffInMilliseconds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), "CalculateRetryDelay", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, retries, maxBackoffInMilliseconds);
}
inline ::System::Threading::Tasks::Task_1<bool>* Amazon::Runtime::Internal::StandardRetryPolicy::RetryForExceptionAsync(::Amazon::Runtime::IExecutionContext* executionContext,
                                                                                                                        ::System::Exception* exception) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, executionContext, exception);
}
inline ::System::Threading::Tasks::Task* Amazon::Runtime::Internal::StandardRetryPolicy::WaitBeforeRetryAsync(::Amazon::Runtime::IExecutionContext* executionContext) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Amazon::Runtime::Internal::StandardRetryPolicy*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, executionContext);
}
// Ctor Parameters []
constexpr ::Amazon::Runtime::Internal::StandardRetryPolicy::StandardRetryPolicy() {}
