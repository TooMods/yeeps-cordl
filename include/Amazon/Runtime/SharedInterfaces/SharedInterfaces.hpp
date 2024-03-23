#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Runtime/SharedInterfaces/GenerateDataKeyResult.hpp"
#include "Amazon/Runtime/SharedInterfaces/GetSsoTokenRequest.hpp"
#include "Amazon/Runtime/SharedInterfaces/GetSsoTokenResponse.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonKMS.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonS3.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonSQS.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonSSO.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonSSOOIDC.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonSTS.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonSTS_SAML.hpp"
#include "Amazon/Runtime/SharedInterfaces/ICoreAmazonSTS_WebIdentity.hpp"
#ifdef __cpp_modules
export module SharedInterfaces;
#endif
