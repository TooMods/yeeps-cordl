#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Runtime/EventStreams/Internal/EnumerableEventStream_2.hpp"
#include "Amazon/Runtime/EventStreams/Internal/EventStreamDecoder.hpp"
#include "Amazon/Runtime/EventStreams/Internal/EventStreamDecoderIllegalStateException.hpp"
#include "Amazon/Runtime/EventStreams/Internal/EventStreamException.hpp"
#include "Amazon/Runtime/EventStreams/Internal/EventStreamMessageReceivedEventArgs.hpp"
#include "Amazon/Runtime/EventStreams/Internal/EventStream_2.hpp"
#include "Amazon/Runtime/EventStreams/Internal/IEnumerableEventStream_2.hpp"
#include "Amazon/Runtime/EventStreams/Internal/IEventStreamDecoder.hpp"
#include "Amazon/Runtime/EventStreams/Internal/IEventStreamEvent.hpp"
#include "Amazon/Runtime/EventStreams/Internal/IEventStreamTerminalEvent.hpp"
#include "Amazon/Runtime/EventStreams/Internal/IEventStream_2.hpp"
#include "Amazon/Runtime/EventStreams/Internal/UnknownEventStreamEvent.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
