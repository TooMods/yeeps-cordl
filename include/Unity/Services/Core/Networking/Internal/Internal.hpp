#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Core/Networking/Internal/HttpOptions.hpp"
#include "Unity/Services/Core/Networking/Internal/HttpRequest.hpp"
#include "Unity/Services/Core/Networking/Internal/HttpRequestExtensions.hpp"
#include "Unity/Services/Core/Networking/Internal/HttpResponse.hpp"
#include "Unity/Services/Core/Networking/Internal/IHttpClient.hpp"
#include "Unity/Services/Core/Networking/Internal/ReadOnlyHttpRequest.hpp"
#include "Unity/Services/Core/Networking/Internal/ReadOnlyHttpResponse.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
