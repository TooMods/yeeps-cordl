#pragma once
#include "Unity/Services/Core/Telemetry/Internal/zzzz__FileCachePersister_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__FileCachePersister_1_def.hpp"
#include "Unity/Services/Core/Internal/zzzz__CoreDiagnostics_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__ICachePersister_1_def.hpp"
/// @brief Convert operator to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
template <typename TPayload>
constexpr Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::operator ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>"
template <typename TPayload>
constexpr ::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*
Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::i___Unity__Services__Core__Telemetry__Internal__ICachePersister_1_TPayload_() noexcept {
  return static_cast<::Unity::Services::Core::Telemetry::Internal::ICachePersister_1<TPayload>*>(static_cast<void*>(this));
}
template <typename TPayload>
constexpr ::Unity::Services::Core::Internal::CoreDiagnostics*& Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_get_m_Diagnostics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Diagnostics;
}
template <typename TPayload>
constexpr ::cordl_internals::to_const_pointer<::Unity::Services::Core::Internal::CoreDiagnostics*> const&
Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_get_m_Diagnostics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Diagnostics;
}
template <typename TPayload>
constexpr void Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_set_m_Diagnostics(::Unity::Services::Core::Internal::CoreDiagnostics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Diagnostics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload> constexpr ::StringW& Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_get__FilePath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FilePath_k__BackingField;
}
template <typename TPayload> constexpr ::StringW const& Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_get__FilePath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____FilePath_k__BackingField;
}
template <typename TPayload> constexpr void Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_set__FilePath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____FilePath_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload> constexpr bool& Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_get__CanPersist_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CanPersist_k__BackingField;
}
template <typename TPayload> constexpr bool const& Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_get__CanPersist_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CanPersist_k__BackingField;
}
template <typename TPayload> constexpr void Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::__cordl_internal_set__CanPersist_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CanPersist_k__BackingField = value;
}
template <typename TPayload>
inline ::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*
Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::New_ctor(::StringW fileName, ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*>(fileName, diagnostics));
}
template <typename TPayload>
inline void Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::_ctor(::StringW fileName, ::Unity::Services::Core::Internal::CoreDiagnostics* diagnostics) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Internal::CoreDiagnostics*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fileName, diagnostics);
}
template <typename TPayload> inline ::StringW Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::get_FilePath() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*>::get(),
                                               "get_FilePath", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
template <typename TPayload> inline bool Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::get_CanPersist() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*>::get(),
                                               "get_CanPersist", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TPayload>
inline void Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::Persist(::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* cache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*>::get(), "Persist", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cache);
}
template <typename TPayload>
inline bool Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::TryFetch(ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*> persistedCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*>::get(), "TryFetch",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, persistedCache);
}
template <typename TPayload> inline void Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::Delete() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>*>::get(), "Delete",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TPayload> constexpr ::Unity::Services::Core::Telemetry::Internal::FileCachePersister_1<TPayload>::FileCachePersister_1() {}
