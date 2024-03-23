#pragma once
#include "Amazon/Runtime/zzzz__IPaginatedEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IAsyncEnumerable_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IAsyncEnumerable_1<TResult>"
template <typename TResult> constexpr Amazon::Runtime::IPaginatedEnumerable_1<TResult>::operator ::System::Collections::Generic::IAsyncEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IAsyncEnumerable_1<TResult>"
template <typename TResult>
constexpr ::System::Collections::Generic::IAsyncEnumerable_1<TResult>* Amazon::Runtime::IPaginatedEnumerable_1<TResult>::i___System__Collections__Generic__IAsyncEnumerable_1_TResult_() noexcept {
  return static_cast<::System::Collections::Generic::IAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
