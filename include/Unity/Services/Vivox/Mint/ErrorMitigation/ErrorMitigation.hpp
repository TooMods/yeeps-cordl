#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Vivox/Mint/ErrorMitigation/ExceptionPredicate.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/IRetryPolicyProvider.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/IRetryPolicy_1.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/RetryPolicyConfig.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/RetryPolicyProvider.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/RetryPolicy_1.hpp"
#include "Unity/Services/Vivox/Mint/ErrorMitigation/StatusCodePolicyConfig.hpp"
#ifdef __cpp_modules
export module ErrorMitigation;
#endif
