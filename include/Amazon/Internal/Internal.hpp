#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Internal/IRegionEndpoint.hpp"
#include "Amazon/Internal/IRegionEndpointProvider.hpp"
#include "Amazon/Internal/RegionEndpointProviderV2.hpp"
#include "Amazon/Internal/RegionEndpointProviderV3.hpp"
#include "Amazon/Internal/RegionEndpointV3.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
