#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Util/Internal/EnvironmentVariableRetriever.hpp"
#include "Amazon/Util/Internal/EnvironmentVariableSource.hpp"
#include "Amazon/Util/Internal/IEnvironmentVariableRetriever.hpp"
#include "Amazon/Util/Internal/ITypeInfo.hpp"
#include "Amazon/Util/Internal/InternalSDKUtils.hpp"
#include "Amazon/Util/Internal/NamedSettingsManager.hpp"
#include "Amazon/Util/Internal/RegionFinder.hpp"
#include "Amazon/Util/Internal/RootConfig.hpp"
#include "Amazon/Util/Internal/SettingsManager.hpp"
#include "Amazon/Util/Internal/TypeFactory.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
