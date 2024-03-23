#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Core/CommonErrorCodes.hpp"
#include "Unity/Services/Core/ExternalUserIdProperty.hpp"
#include "Unity/Services/Core/IUnityServices.hpp"
#include "Unity/Services/Core/InitializationOptions.hpp"
#include "Unity/Services/Core/RequestFailedException.hpp"
#include "Unity/Services/Core/ServicesInitializationException.hpp"
#include "Unity/Services/Core/ServicesInitializationState.hpp"
#include "Unity/Services/Core/UnityProjectNotLinkedException.hpp"
#include "Unity/Services/Core/UnityServices.hpp"
#include "Unity/Services/Core/UnityThreadUtils.hpp"
#ifdef __cpp_modules
export module Core;
#endif
