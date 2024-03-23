#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Core/Scheduler/Internal/ActionScheduler.hpp"
#include "Unity/Services/Core/Scheduler/Internal/IActionScheduler.hpp"
#include "Unity/Services/Core/Scheduler/Internal/ITimeProvider.hpp"
#include "Unity/Services/Core/Scheduler/Internal/MinimumBinaryHeap.hpp"
#include "Unity/Services/Core/Scheduler/Internal/MinimumBinaryHeap_1.hpp"
#include "Unity/Services/Core/Scheduler/Internal/ScheduledInvocation.hpp"
#include "Unity/Services/Core/Scheduler/Internal/ScheduledInvocationComparer.hpp"
#include "Unity/Services/Core/Scheduler/Internal/UtcTimeProvider.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
