#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEnumerableEventStream_2_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStream_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
template <typename T, typename TE>
constexpr Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::operator ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T,TE>"
template <typename T, typename TE>
constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*
Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::i___Amazon__Runtime__EventStreams__Internal__IEventStream_2_T_TE_() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStream_2<T, TE>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T, typename TE> constexpr ::System::IDisposable* Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T, typename TE>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T, typename TE> constexpr Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T, typename TE>
constexpr ::System::Collections::IEnumerable* Amazon::Runtime::EventStreams::Internal::IEnumerableEventStream_2<T, TE>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
