#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Core/Telemetry/Internal/zzzz__CachedPayload_1_def.hpp"
template <typename TPayload> constexpr int64_t& Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::__cordl_internal_get_TimeOfOccurenceTicks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TimeOfOccurenceTicks;
}
template <typename TPayload> constexpr int64_t const& Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::__cordl_internal_get_TimeOfOccurenceTicks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TimeOfOccurenceTicks;
}
template <typename TPayload> constexpr void Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::__cordl_internal_set_TimeOfOccurenceTicks(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TimeOfOccurenceTicks = value;
}
template <typename TPayload> constexpr TPayload& Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::__cordl_internal_get_Payload() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
template <typename TPayload> constexpr TPayload const& Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::__cordl_internal_get_Payload() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Payload;
}
template <typename TPayload> constexpr void Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::__cordl_internal_set_Payload(TPayload value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Payload)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TPayload> inline ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>* Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>());
}
template <typename TPayload> inline void Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TPayload> constexpr ::Unity::Services::Core::Telemetry::Internal::CachedPayload_1<TPayload>::CachedPayload_1() {}
