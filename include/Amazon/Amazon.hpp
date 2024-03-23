#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/AWSConfigs.hpp"
#include "Amazon/AWSConfigsDynamoDB.hpp"
#include "Amazon/Arn.hpp"
#include "Amazon/LogMetricsFormatOption.hpp"
#include "Amazon/LoggingOptions.hpp"
#include "Amazon/RegionEndpoint.hpp"
#include "Amazon/ResponseLoggingOption.hpp"
#ifdef __cpp_modules
export module Amazon;
#endif
