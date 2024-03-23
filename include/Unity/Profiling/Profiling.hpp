#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Profiling/ProfilerCategory.hpp"
#include "Unity/Profiling/ProfilerMarker.hpp"
#include "Unity/Profiling/ProfilerMarkerDataUnit.hpp"
#include "Unity/Profiling/ProfilerRecorder.hpp"
#include "Unity/Profiling/ProfilerRecorderDebugView.hpp"
#include "Unity/Profiling/ProfilerRecorderOptions.hpp"
#include "Unity/Profiling/ProfilerRecorderSample.hpp"
#ifdef __cpp_modules
export module Profiling;
#endif
