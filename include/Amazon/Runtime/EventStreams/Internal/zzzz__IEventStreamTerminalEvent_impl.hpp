#pragma once
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStreamTerminalEvent_def.hpp"
#include "Amazon/Runtime/EventStreams/Internal/zzzz__IEventStreamEvent_def.hpp"
/// @brief Convert operator to "::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent"
constexpr Amazon::Runtime::EventStreams::Internal::IEventStreamTerminalEvent::operator ::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent*() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent"
constexpr ::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent*
Amazon::Runtime::EventStreams::Internal::IEventStreamTerminalEvent::i___Amazon__Runtime__EventStreams__Internal__IEventStreamEvent() noexcept {
  return static_cast<::Amazon::Runtime::EventStreams::Internal::IEventStreamEvent*>(static_cast<void*>(this));
}
