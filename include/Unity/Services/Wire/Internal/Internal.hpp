#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Wire/Internal/ChannelToken.hpp"
#include "Unity/Services/Wire/Internal/IChannel.hpp"
#include "Unity/Services/Wire/Internal/IChannelTokenProvider.hpp"
#include "Unity/Services/Wire/Internal/IWire.hpp"
#include "Unity/Services/Wire/Internal/SubscriptionState.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
