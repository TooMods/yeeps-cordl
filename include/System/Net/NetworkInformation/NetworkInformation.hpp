#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Net/NetworkInformation/CommonUnixIPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/IPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/IPGlobalPropertiesFactoryPal.hpp"
#include "System/Net/NetworkInformation/MibIPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/NetworkInformationException.hpp"
#include "System/Net/NetworkInformation/NetworkInterfaceComponent.hpp"
#include "System/Net/NetworkInformation/UnixIPGlobalProperties.hpp"
#include "System/Net/NetworkInformation/UnixIPGlobalPropertiesFactoryPal.hpp"
#include "System/Net/NetworkInformation/UnixNoLibCIPGlobalProperties.hpp"
#ifdef __cpp_modules
export module NetworkInformation;
#endif
