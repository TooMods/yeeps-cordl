#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Runtime/Internal/Auth/AWS3HTTPSigner.hpp"
#include "Amazon/Runtime/Internal/Auth/AWS3Signer.hpp"
#include "Amazon/Runtime/Internal/Auth/AWS4PreSignedUrlSigner.hpp"
#include "Amazon/Runtime/Internal/Auth/AWS4Signer.hpp"
#include "Amazon/Runtime/Internal/Auth/AWS4SigningResult.hpp"
#include "Amazon/Runtime/Internal/Auth/AbstractAWSSigner.hpp"
#include "Amazon/Runtime/Internal/Auth/ClientProtocol.hpp"
#include "Amazon/Runtime/Internal/Auth/CloudFrontSigner.hpp"
#include "Amazon/Runtime/Internal/Auth/NullSigner.hpp"
#include "Amazon/Runtime/Internal/Auth/QueryStringSigner.hpp"
#include "Amazon/Runtime/Internal/Auth/S3Signer.hpp"
#include "Amazon/Runtime/Internal/Auth/SignatureException.hpp"
#ifdef __cpp_modules
export module Auth;
#endif
