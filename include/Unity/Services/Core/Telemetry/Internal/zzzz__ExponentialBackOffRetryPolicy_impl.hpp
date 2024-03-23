#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ExponentialBackOffRetryPolicy_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__WebRequest_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy.get_MaxTryCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::get_MaxTryCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270d44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(),
                                                 "get_MaxTryCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy.get_BaseDelaySeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::get_BaseDelaySeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x270d454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(),
                                                 "get_BaseDelaySeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy.CanRetry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::*)(
    ::Unity::Services::Core::Telemetry::Internal::WebRequest, int32_t)>(&::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::CanRetry)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x270d45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "CanRetry",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::WebRequest>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy.IsTransientError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::Services::Core::Telemetry::Internal::WebRequest)>(
    &::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::IsTransientError)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x270d4a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "IsTransientError",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::WebRequest>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy.GetDelayBeforeSendingSeconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::*)(int32_t)>(
    &::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::GetDelayBeforeSendingSeconds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x270d4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "GetDelayBeforeSendingSeconds",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::*)()>(
    &::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x270d518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy._IsTransientError_g__IsServerErrorCode_9_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int64_t)>(
    &::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::_IsTransientError_g__IsServerErrorCode_9_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x270d4d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "<IsTransientError>g__IsServerErrorCode|9_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::__cordl_internal_get_m_MaxTryCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxTryCount;
}
constexpr int32_t const& Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::__cordl_internal_get_m_MaxTryCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxTryCount;
}
constexpr void Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::__cordl_internal_set_m_MaxTryCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxTryCount = value;
}
constexpr float_t& Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::__cordl_internal_get_m_BaseDelaySeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseDelaySeconds;
}
constexpr float_t const& Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::__cordl_internal_get_m_BaseDelaySeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BaseDelaySeconds;
}
constexpr void Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::__cordl_internal_set_m_BaseDelaySeconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BaseDelaySeconds = value;
}
inline int32_t Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::get_MaxTryCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(),
                                               "get_MaxTryCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::get_BaseDelaySeconds() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(),
                                               "get_BaseDelaySeconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::CanRetry(::Unity::Services::Core::Telemetry::Internal::WebRequest webRequest, int32_t sendCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "CanRetry", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::WebRequest>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, webRequest, sendCount);
}
inline bool Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::IsTransientError(::Unity::Services::Core::Telemetry::Internal::WebRequest webRequest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "IsTransientError",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::WebRequest>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, webRequest);
}
inline float_t Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::GetDelayBeforeSendingSeconds(int32_t sendCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "GetDelayBeforeSendingSeconds",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, sendCount);
}
inline ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy* Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>());
}
inline void Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::_IsTransientError_g__IsServerErrorCode_9_0(int64_t responseCode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy*>::get(), "<IsTransientError>g__IsServerErrorCode|9_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, responseCode);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::ExponentialBackOffRetryPolicy::ExponentialBackOffRetryPolicy() {}
