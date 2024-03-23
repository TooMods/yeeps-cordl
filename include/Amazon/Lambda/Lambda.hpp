#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Lambda/AmazonLambdaClient.hpp"
#include "Amazon/Lambda/AmazonLambdaConfig.hpp"
#include "Amazon/Lambda/AmazonLambdaException.hpp"
#include "Amazon/Lambda/AmazonLambdaRequest.hpp"
#include "Amazon/Lambda/CodeSigningPolicy.hpp"
#include "Amazon/Lambda/EndPointType.hpp"
#include "Amazon/Lambda/EventSourcePosition.hpp"
#include "Amazon/Lambda/FunctionResponseType.hpp"
#include "Amazon/Lambda/FunctionVersion.hpp"
#include "Amazon/Lambda/IAmazonLambda.hpp"
#include "Amazon/Lambda/InvocationType.hpp"
#include "Amazon/Lambda/LastUpdateStatus.hpp"
#include "Amazon/Lambda/LastUpdateStatusReasonCode.hpp"
#include "Amazon/Lambda/LogType.hpp"
#include "Amazon/Lambda/PackageType.hpp"
#include "Amazon/Lambda/ProvisionedConcurrencyStatusEnum.hpp"
#include "Amazon/Lambda/Runtime.hpp"
#include "Amazon/Lambda/SourceAccessType.hpp"
#include "Amazon/Lambda/State.hpp"
#include "Amazon/Lambda/StateReasonCode.hpp"
#include "Amazon/Lambda/ThrottleReason.hpp"
#include "Amazon/Lambda/TracingMode.hpp"
#ifdef __cpp_modules
export module Lambda;
#endif
