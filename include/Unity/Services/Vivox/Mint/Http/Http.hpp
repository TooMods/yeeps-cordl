#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Unity/Services/Vivox/Mint/Http/BaseApiClient.hpp"
#include "Unity/Services/Vivox/Mint/Http/DeserializationException.hpp"
#include "Unity/Services/Vivox/Mint/Http/DeserializationSettings.hpp"
#include "Unity/Services/Vivox/Mint/Http/HttpClient.hpp"
#include "Unity/Services/Vivox/Mint/Http/HttpClientResponse.hpp"
#include "Unity/Services/Vivox/Mint/Http/HttpException.hpp"
#include "Unity/Services/Vivox/Mint/Http/HttpException_1.hpp"
#include "Unity/Services/Vivox/Mint/Http/IDeserializable.hpp"
#include "Unity/Services/Vivox/Mint/Http/IHttpClient.hpp"
#include "Unity/Services/Vivox/Mint/Http/IsolatedJsonConvert.hpp"
#include "Unity/Services/Vivox/Mint/Http/JsonHelpers.hpp"
#include "Unity/Services/Vivox/Mint/Http/JsonObject.hpp"
#include "Unity/Services/Vivox/Mint/Http/JsonObjectCollectionConverter.hpp"
#include "Unity/Services/Vivox/Mint/Http/JsonObjectConverter.hpp"
#include "Unity/Services/Vivox/Mint/Http/MissingMemberHandling.hpp"
#include "Unity/Services/Vivox/Mint/Http/ResponseDeserializationException.hpp"
#include "Unity/Services/Vivox/Mint/Http/ResponseHandler.hpp"
#include "Unity/Services/Vivox/Mint/Http/UnityWebRequestHelpers.hpp"
#ifdef __cpp_modules
export module Http;
#endif
