#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__DisabledCachePersister_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ICachePersister_1_def.hpp"
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
template <typename TPayload>
constexpr Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::operator ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
template <typename TPayload>
constexpr ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*
Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::i___Unity__Services__Core__Telemetry__Internal__ICachePersister_1_TPayload_() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>(static_cast<void*>(this));
}
template <typename TPayload> inline bool Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::get_CanPersist() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>*>::get(),
                                               "get_CanPersist", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TPayload>
inline void Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::Persist(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>*>::get(), "Persist",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
template <typename TPayload>
inline bool Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::TryFetch(ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> persistedCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>*>::get(), "TryFetch",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, persistedCache);
}
template <typename TPayload> inline void Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::Delete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>*>::get(),
                                               "Delete", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TPayload>
inline ::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>* Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>*>());
}
template <typename TPayload> inline void Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TPayload> constexpr ::Unity::Services::Core::Telemetry::Internal::DisabledCachePersister_1<TPayload>::DisabledCachePersister_1() {}
