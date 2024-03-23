#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ICachePersister_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
template <typename TPayload> inline bool Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>::get_CanPersist() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TPayload>
inline void Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>::Persist(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
template <typename TPayload>
inline bool Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>::TryFetch(ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> persistedCache) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, persistedCache);
}
template <typename TPayload> inline void Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>::Delete() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
