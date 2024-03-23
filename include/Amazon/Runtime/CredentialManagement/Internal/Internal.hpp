#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Runtime/CredentialManagement/Internal/CredentialProfilePropertyMapping.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/CredentialProfileType.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/CredentialProfileTypeDetector.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/CredentialProfileUtils.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/CredentialSourceType.hpp"
#include "Amazon/Runtime/CredentialManagement/Internal/SAMLRoleSessionManager.hpp"
#ifdef __cpp_modules
export module Internal;
#endif
