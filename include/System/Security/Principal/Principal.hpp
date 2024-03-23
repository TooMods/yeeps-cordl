#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Security/Principal/IIdentity.hpp"
#include "System/Security/Principal/IPrincipal.hpp"
#include "System/Security/Principal/TokenImpersonationLevel.hpp"
#include "System/Security/Principal/WindowsAccountType.hpp"
#include "System/Security/Principal/WindowsIdentity.hpp"
#include "System/Security/Principal/WindowsImpersonationContext.hpp"
#ifdef __cpp_modules
export module Principal;
#endif
