#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Amazon/Util/AWSCredentialsProfile.hpp"
#include "Amazon/Util/AWSHttpClient.hpp"
#include "Amazon/Util/AWSPublicIpAddressRange.hpp"
#include "Amazon/Util/AWSPublicIpAddressRanges.hpp"
#include "Amazon/Util/AWSSDKUtils.hpp"
#include "Amazon/Util/AWSStreamContent.hpp"
#include "Amazon/Util/CSMConfig.hpp"
#include "Amazon/Util/CircularReferenceTracking.hpp"
#include "Amazon/Util/CryptoUtilFactory.hpp"
#include "Amazon/Util/DynamoDBContextConfig.hpp"
#include "Amazon/Util/EC2InstanceMetadata.hpp"
#include "Amazon/Util/Extensions.hpp"
#include "Amazon/Util/HeaderKeys.hpp"
#include "Amazon/Util/IAMInstanceProfileMetadata.hpp"
#include "Amazon/Util/IAMSecurityCredentialMetadata.hpp"
#include "Amazon/Util/ICryptoUtil.hpp"
#include "Amazon/Util/JitteredDelay.hpp"
#include "Amazon/Util/LoggingConfig.hpp"
#include "Amazon/Util/Marker_1.hpp"
#include "Amazon/Util/NetworkInterfaceMetadata.hpp"
#include "Amazon/Util/PaginatedResourceFactory.hpp"
#include "Amazon/Util/PaginatedResourceInfo.hpp"
#include "Amazon/Util/PaginatedResource_1.hpp"
#include "Amazon/Util/PaginationEnumerator_1.hpp"
#include "Amazon/Util/ProcessExecutionResult.hpp"
#include "Amazon/Util/ProfileManager.hpp"
#include "Amazon/Util/ProfileSettingsBase.hpp"
#include "Amazon/Util/PropertyConfig.hpp"
#include "Amazon/Util/ProxyConfig.hpp"
#include "Amazon/Util/SAMLEndpointSettings.hpp"
#include "Amazon/Util/SAMLRoleProfile.hpp"
#include "Amazon/Util/TableAlias.hpp"
#include "Amazon/Util/TypeMapping.hpp"
#ifdef __cpp_modules
export module Util;
#endif
