#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Core/Telemetry/Internal/CacheExtensions.hpp"
#include "Unity/Services/Core/Telemetry/Internal/CachedPayload_1.hpp"
#include "Unity/Services/Core/Telemetry/Internal/Diagnostic.hpp"
#include "Unity/Services/Core/Telemetry/Internal/Diagnostics.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DiagnosticsFactory.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DiagnosticsHandler.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DiagnosticsPayload.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DisabledCachePersister_1.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DisabledDiagnostics.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DisabledDiagnosticsFactory.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DisabledMetrics.hpp"
#include "Unity/Services/Core/Telemetry/Internal/DisabledMetricsFactory.hpp"
#include "Unity/Services/Core/Telemetry/Internal/ExponentialBackOffRetryPolicy.hpp"
#include "Unity/Services/Core/Telemetry/Internal/FactoryUtils.hpp"
#include "Unity/Services/Core/Telemetry/Internal/FileCachePersister.hpp"
#include "Unity/Services/Core/Telemetry/Internal/FileCachePersister_1.hpp"
#include "Unity/Services/Core/Telemetry/Internal/ICachePersister_1.hpp"
#include "Unity/Services/Core/Telemetry/Internal/IDiagnostics.hpp"
#include "Unity/Services/Core/Telemetry/Internal/IDiagnosticsComponentProvider.hpp"
#include "Unity/Services/Core/Telemetry/Internal/IDiagnosticsFactory.hpp"
#include "Unity/Services/Core/Telemetry/Internal/IMetrics.hpp"
#include "Unity/Services/Core/Telemetry/Internal/IMetricsFactory.hpp"
#include "Unity/Services/Core/Telemetry/Internal/ITelemetryEvent.hpp"
#include "Unity/Services/Core/Telemetry/Internal/ITelemetryPayload.hpp"
#include "Unity/Services/Core/Telemetry/Internal/IUnityWebRequestSender.hpp"
#include "Unity/Services/Core/Telemetry/Internal/Metric.hpp"
#include "Unity/Services/Core/Telemetry/Internal/MetricType.hpp"
#include "Unity/Services/Core/Telemetry/Internal/Metrics.hpp"
#include "Unity/Services/Core/Telemetry/Internal/MetricsFactory.hpp"
#include "Unity/Services/Core/Telemetry/Internal/MetricsHandler.hpp"
#include "Unity/Services/Core/Telemetry/Internal/MetricsPayload.hpp"
#include "Unity/Services/Core/Telemetry/Internal/TelemetryConfig.hpp"
#include "Unity/Services/Core/Telemetry/Internal/TelemetryHandler.hpp"
#include "Unity/Services/Core/Telemetry/Internal/TelemetryHandler_2.hpp"
#include "Unity/Services/Core/Telemetry/Internal/TelemetrySender.hpp"
#include "Unity/Services/Core/Telemetry/Internal/TelemetryUtils.hpp"
#include "Unity/Services/Core/Telemetry/Internal/UnityWebRequestSender.hpp"
#include "Unity/Services/Core/Telemetry/Internal/WebRequest.hpp"
#include "Unity/Services/Core/Telemetry/Internal/WebRequestResult.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
