#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Runtime/EventStreams/EventStreamChecksumFailureException.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamErrorCodeException.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamEventReceivedArgs_1.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamExceptionReceivedArgs_1.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamHeader.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamHeaderType.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamMessage.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamParseException.hpp"
#include "Amazon/Runtime/EventStreams/EventStreamValidationException.hpp"
#include "Amazon/Runtime/EventStreams/IEventStreamHeader.hpp"
#include "Amazon/Runtime/EventStreams/IEventStreamMessage.hpp"
#include "Amazon/Runtime/EventStreams/UnknownEventStreamException.hpp"
#include "Amazon/Runtime/EventStreams/UnknownEventStreamMessageTypeException.hpp"
#ifdef __cpp_modules
export module EventStreams;
#endif
