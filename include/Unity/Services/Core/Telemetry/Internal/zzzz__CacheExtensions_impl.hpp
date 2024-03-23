#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CacheExtensions_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DiagnosticsPayload_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ITelemetryEvent_def.hpp"
//  Writing Method size for method: ::Unity::Services::Core::Telemetry::Internal::CacheExtensions.AddRangeFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*,
                         ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*)>(
        &::Unity::Services::Core::Telemetry::Internal::CacheExtensions::AddRangeFrom)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x270bda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::CacheExtensions*>::get(), "AddRangeFrom", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get() })));
    return ___internal_method;
  }
};
template <typename TPayload> inline bool Unity::Services::Core::Telemetry::Internal::CacheExtensions::IsEmpty(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* self) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::CacheExtensions*>::get(), "IsEmpty",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() },
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, self);
}
inline void Unity::Services::Core::Telemetry::Internal::CacheExtensions::AddRangeFrom(
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* self,
    ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>* payload) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::CacheExtensions*>::get(), "AddRangeFrom", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                              ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<::Unity::Services::Core::Telemetry::Internal::DiagnosticsPayload>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, payload);
}
template <typename TPayload>
inline void Unity::Services::Core::Telemetry::Internal::CacheExtensions::Add(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* self,
                                                                             ::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent* telemetryEvent) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::CacheExtensions*>::get(), "Add",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::ITelemetryEvent*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TPayload>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self, telemetryEvent);
}
// Ctor Parameters []
constexpr ::Unity::Services::Core::Telemetry::Internal::CacheExtensions::CacheExtensions() {}
