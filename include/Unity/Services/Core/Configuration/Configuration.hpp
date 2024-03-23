#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Core/Configuration/CloudProjectId.hpp"
#include "Unity/Services/Core/Configuration/ConfigurationCollectionHelper.hpp"
#include "Unity/Services/Core/Configuration/ConfigurationEntry.hpp"
#include "Unity/Services/Core/Configuration/ConfigurationUtils.hpp"
#include "Unity/Services/Core/Configuration/ExternalUserId.hpp"
#include "Unity/Services/Core/Configuration/IConfigurationLoader.hpp"
#include "Unity/Services/Core/Configuration/ProjectConfiguration.hpp"
#include "Unity/Services/Core/Configuration/SerializableProjectConfiguration.hpp"
#include "Unity/Services/Core/Configuration/StreamingAssetsConfigurationLoader.hpp"
#include "Unity/Services/Core/Configuration/StreamingAssetsUtils.hpp"
#ifdef __cpp_modules
export module Configuration;
#endif
