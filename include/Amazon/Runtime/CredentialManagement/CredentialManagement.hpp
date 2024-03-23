#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Runtime/CredentialManagement/AWSCredentialsFactory.hpp"
#include "Amazon/Runtime/CredentialManagement/CredentialProfile.hpp"
#include "Amazon/Runtime/CredentialManagement/CredentialProfileOptions.hpp"
#include "Amazon/Runtime/CredentialManagement/CredentialProfileStoreChain.hpp"
#include "Amazon/Runtime/CredentialManagement/ICredentialProfileSource.hpp"
#include "Amazon/Runtime/CredentialManagement/ICredentialProfileStore.hpp"
#include "Amazon/Runtime/CredentialManagement/NetSDKCredentialsFile.hpp"
#include "Amazon/Runtime/CredentialManagement/SAMLAuthenticationType.hpp"
#include "Amazon/Runtime/CredentialManagement/SAMLEndpoint.hpp"
#include "Amazon/Runtime/CredentialManagement/SAMLEndpointManager.hpp"
#include "Amazon/Runtime/CredentialManagement/SharedCredentialsFile.hpp"
#ifdef __cpp_modules
export module CredentialManagement;
#endif
