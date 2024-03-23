#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/DynamoDBv2/Internal/AmazonDynamoDBMetadata.hpp"
#include "Amazon/DynamoDBv2/Internal/AmazonDynamoDBStreamsMetadata.hpp"
#include "Amazon/DynamoDBv2/Internal/DynamoDBRetryPolicy.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
