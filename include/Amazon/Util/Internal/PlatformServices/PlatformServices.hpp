#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Util/Internal/PlatformServices/ApplicationInfo.hpp"
#include "Amazon/Util/Internal/PlatformServices/ApplicationSettings.hpp"
#include "Amazon/Util/Internal/PlatformServices/ApplicationSettingsMode.hpp"
#include "Amazon/Util/Internal/PlatformServices/EnvironmentInfo.hpp"
#include "Amazon/Util/Internal/PlatformServices/IApplicationInfo.hpp"
#include "Amazon/Util/Internal/PlatformServices/IApplicationSettings.hpp"
#include "Amazon/Util/Internal/PlatformServices/IEnvironmentInfo.hpp"
#include "Amazon/Util/Internal/PlatformServices/INetworkReachability.hpp"
#include "Amazon/Util/Internal/PlatformServices/NetworkReachability.hpp"
#include "Amazon/Util/Internal/PlatformServices/NetworkStatus.hpp"
#include "Amazon/Util/Internal/PlatformServices/NetworkStatusEventArgs.hpp"
#include "Amazon/Util/Internal/PlatformServices/ServiceFactory.hpp"
#ifdef __cpp_modules
export module PlatformServices;
#endif
